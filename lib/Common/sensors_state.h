#ifndef SENSORS_STATE_H
#define SENSORS_STATE_H

struct SensorState {
  bool brewSwitchState;
  bool steamSwitchState;
  bool hotWaterSwitchState;
  float temperature;
  float pressure;
  bool isPressureFalling;
  bool isPressureFallingFast;
  bool isPressureRising;
  bool isPressureRisingFast;
  bool isPumpFlowRisingFast;
  bool isPumpFlowFallingFast;
  bool isSteamForgottenON;
  float pumpFlow;
  float waterPumped;
  float weightFlow;
  float weight;
  float shotWeight;
  float smoothedPressure;
  float smoothedPumpFlow;
  float smoothedWeightFlow;
};

struct SensorStateSnapshot {
  bool brewActive;
  bool steamActive;
  float temperature;
  float pressure;
  float pumpFlow;
  float weightFlow;
  float weight;
};

#endif
