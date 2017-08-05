################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ducks/duckBase.cpp \
../ducks/normalDuck.cpp 

OBJS += \
./ducks/duckBase.o \
./ducks/normalDuck.o 

CPP_DEPS += \
./ducks/duckBase.d \
./ducks/normalDuck.d 


# Each subdirectory must supply rules for building sources it contributes
ducks/%.o: ../ducks/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


