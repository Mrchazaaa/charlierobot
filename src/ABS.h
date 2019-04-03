 #ifndef ABS_H_
 #define ABS_H_

int getPhaseStates(int index) ;
float getWheelSpinVelocity(int index) ;
float getWheelSpinAcceleration(int index) ;
float getWheelSlipAcceleration(int index) ;
float getWheelSlip(int index) ;

 void phase(int wheel);

 void cycleABS( float newInputPressure, float *brakeCMD[4], float *newWheelSpinVelocity[4], float *newWheelSlipAcceleration[4], float newTimeStamp );

 #endif