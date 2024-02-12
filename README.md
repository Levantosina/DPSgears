# Particular vehicle’s three step DPS gearbox

## A particular vehicle’s three step DPS gearbox is driven by two hydraulic valves which are controlled by two solenoids. The gear is selected using two push buttons: one for gear up (DPS+), one for gear down (DPS-). Pushing the button one time steps gear one step up or down.
## https://github.com/Levantosina/Images/blob/main/DPS.png

## Task is to implement an embedded system prototype to drive the solenoids and indicator lights according.

## https://github.com/Levantosina/Images/blob/main/implementation.png

## Sequential logic shall fulfill the following requirements:
### 1. After the solenoid(s) state(s) has changed there shall be 100 ms (±5 ms) delay. 100 ms is typical action delay of the magnetic valve that controls the hydraulics.
### 2. Only one solenoid may be driven at time and every time the state of the solenoid changes, there must be a 100 ms delay before any further action.
### 3. After POR (power on reset) there shall be a 500 ms delay before solenoids and indicator lamps are driven. As presented in state diagram gear I is selected after power is switched on.
