ifeq ($(shell uname) , Linux)
	MD = mkdir -p
	INCLUDESCXXTEST = -I "/opt/cxxtest-4.4"
	PATHCXXTESTGEN= /opt/cxxtest-4.4/bin/cxxtestgen
else
	MD = mkdir
	INCLUDESCXXTEST = -I "C:/DATOS/D/cxxtest-4.4"
	PATHCXXTESTGEN= C:/DATOS/D/cxxtest-4.4/bin/cxxtestgen
endif
#ver http://www.gnu.org/software/make/manual/make.html#Automatic-Variables
CC=g++
#CFLAGS=-Wall -g -std=c++11
CFLAGS=-Wall -g
#
# define any directories containing header files other than /usr/include
#
INCLUDE = -I "./include"
#DIR1=../include
#DIR2=D:/cxxtest-4.4
#INC=$(DIR1) $(DIR2) ...
#INC_PARAMS=$(foreach d, $(INC), -I$d)
DIRSRC = src
DIROBJ = Debug/src

DIRTEST = test
OBJECTS  = $(DIROBJ)/main.o $(DIROBJ)/BankAccount.o
DEPS  = $(DIROBJ)/BankAccount.o
PROGRAMS = main.exe runnerTest.exe


main.exe: $(OBJECTS)
	$(CC) -o $@ $^

$(DIROBJ)/%.o: $(DIRSRC)/%.cpp	
	$(MD) "$(DIROBJ)"
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

runnerTest.exe: $(DIRTEST)/BankAccountTestSuite.cpp $(DEPS)
	$(CC) -o $@ $(INCLUDE) $(INCLUDESCXXTEST) $^

$(DIRTEST)/%.cpp: $(DIRTEST)/%.h
	$(PATHCXXTESTGEN) --error-printer -o  $@ $<

clean:
	$(RM) $(DIROBJ)/*.o $(PROGRAMS)
                           
all: $(PROGRAMS)
