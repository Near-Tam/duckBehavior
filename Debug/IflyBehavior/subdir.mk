################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../IflyBehavior/IflyBehavior.cpp \
../IflyBehavior/flyWithWings.cpp 

OBJS += \
./IflyBehavior/IflyBehavior.o \
./IflyBehavior/flyWithWings.o 

CPP_DEPS += \
./IflyBehavior/IflyBehavior.d \
./IflyBehavior/flyWithWings.d 


# Each subdirectory must supply rules for building sources it contributes
IflyBehavior/%.o: ../IflyBehavior/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


