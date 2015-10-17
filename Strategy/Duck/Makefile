PROGRAM		= DUCK

#################################################
# Default Include Directory
#################################################
INCLUDE		= \
			-I/usr/local/include	\
			-I./ 

#################################################
# Compile Option Define
#################################################
COMPILER	= g++
CFLAGS		= -c 
IFLAGS		= $(INCLUDE) -DDEBUG_MODE -Wno-deprecated

#################################################
# Linking Option Define
#################################################
LFLAGS      = -pthread

#################################################
# ORACLE 
#################################################
#OCIFLAGS        =       -L$(ORACLE_HOME)/lib/           \
#                        -L$(ORACLE_HOME)/rdbms/lib/     \
#                        -lclntsh 

#################################################
# Source Define
#################################################
SOURCE		= 	app.cpp

#################################################
# Object Define
#################################################
OBJS		= 	app.o

#################################################
# Install Start
#################################################
$(PROGRAM)	: $(OBJS)
			$(COMPILER) -o $(PROGRAM) $(OBJS) $(LFLAGS) $(IFLAGS)
			rm -f *.o core

app.o : app.cpp Duck.hpp 
			$(COMPILER) $(CFLAGS)  app.cpp $(IFLAGS)

clean		:
			rm -f *.o $(PROGRAM) core
