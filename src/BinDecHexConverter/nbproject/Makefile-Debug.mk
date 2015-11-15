#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/2115372132/DecimalConverter.o \
	${OBJECTDIR}/_ext/2115372132/HexadecimalConverter.o \
	${OBJECTDIR}/Converter/BinaryConverter.o \
	${OBJECTDIR}/Converter/ConverterBase.o \
	${OBJECTDIR}/main.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/BinDecHexConverter

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/BinDecHexConverter: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/BinDecHexConverter ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/2115372132/DecimalConverter.o: /home/nikeah/Git/BinDecHexConverter/src/BinDecHexConverter/Converter/DecimalConverter.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2115372132
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2115372132/DecimalConverter.o /home/nikeah/Git/BinDecHexConverter/src/BinDecHexConverter/Converter/DecimalConverter.cpp

${OBJECTDIR}/_ext/2115372132/HexadecimalConverter.o: /home/nikeah/Git/BinDecHexConverter/src/BinDecHexConverter/Converter/HexadecimalConverter.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2115372132
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2115372132/HexadecimalConverter.o /home/nikeah/Git/BinDecHexConverter/src/BinDecHexConverter/Converter/HexadecimalConverter.cpp

${OBJECTDIR}/Converter/BinaryConverter.o: Converter/BinaryConverter.cpp 
	${MKDIR} -p ${OBJECTDIR}/Converter
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Converter/BinaryConverter.o Converter/BinaryConverter.cpp

${OBJECTDIR}/Converter/ConverterBase.o: Converter/ConverterBase.cpp 
	${MKDIR} -p ${OBJECTDIR}/Converter
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Converter/ConverterBase.o Converter/ConverterBase.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-conf ${TESTFILES}
${TESTDIR}/TestFiles/f1: ${TESTDIR}/_ext/1832390205/NumberBaseConverterTest.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} 


${TESTDIR}/_ext/1832390205/NumberBaseConverterTest.o: /home/nikeah/Git/BinDecHexConverter/src/BinDecHexConverter/tests/NumberBaseConverterTest.cpp 
	${MKDIR} -p ${TESTDIR}/_ext/1832390205
	${RM} "$@.d"
	$(COMPILE.cc) -g -I. -MMD -MP -MF "$@.d" -o ${TESTDIR}/_ext/1832390205/NumberBaseConverterTest.o /home/nikeah/Git/BinDecHexConverter/src/BinDecHexConverter/tests/NumberBaseConverterTest.cpp


${OBJECTDIR}/_ext/2115372132/DecimalConverter_nomain.o: ${OBJECTDIR}/_ext/2115372132/DecimalConverter.o /home/nikeah/Git/BinDecHexConverter/src/BinDecHexConverter/Converter/DecimalConverter.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2115372132
	@NMOUTPUT=`${NM} ${OBJECTDIR}/_ext/2115372132/DecimalConverter.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2115372132/DecimalConverter_nomain.o /home/nikeah/Git/BinDecHexConverter/src/BinDecHexConverter/Converter/DecimalConverter.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/_ext/2115372132/DecimalConverter.o ${OBJECTDIR}/_ext/2115372132/DecimalConverter_nomain.o;\
	fi

${OBJECTDIR}/_ext/2115372132/HexadecimalConverter_nomain.o: ${OBJECTDIR}/_ext/2115372132/HexadecimalConverter.o /home/nikeah/Git/BinDecHexConverter/src/BinDecHexConverter/Converter/HexadecimalConverter.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2115372132
	@NMOUTPUT=`${NM} ${OBJECTDIR}/_ext/2115372132/HexadecimalConverter.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/2115372132/HexadecimalConverter_nomain.o /home/nikeah/Git/BinDecHexConverter/src/BinDecHexConverter/Converter/HexadecimalConverter.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/_ext/2115372132/HexadecimalConverter.o ${OBJECTDIR}/_ext/2115372132/HexadecimalConverter_nomain.o;\
	fi

${OBJECTDIR}/Converter/BinaryConverter_nomain.o: ${OBJECTDIR}/Converter/BinaryConverter.o Converter/BinaryConverter.cpp 
	${MKDIR} -p ${OBJECTDIR}/Converter
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Converter/BinaryConverter.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Converter/BinaryConverter_nomain.o Converter/BinaryConverter.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Converter/BinaryConverter.o ${OBJECTDIR}/Converter/BinaryConverter_nomain.o;\
	fi

${OBJECTDIR}/Converter/ConverterBase_nomain.o: ${OBJECTDIR}/Converter/ConverterBase.o Converter/ConverterBase.cpp 
	${MKDIR} -p ${OBJECTDIR}/Converter
	@NMOUTPUT=`${NM} ${OBJECTDIR}/Converter/ConverterBase.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Converter/ConverterBase_nomain.o Converter/ConverterBase.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/Converter/ConverterBase.o ${OBJECTDIR}/Converter/ConverterBase_nomain.o;\
	fi

${OBJECTDIR}/main_nomain.o: ${OBJECTDIR}/main.o main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/main.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main_nomain.o main.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/main.o ${OBJECTDIR}/main_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/BinDecHexConverter

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
