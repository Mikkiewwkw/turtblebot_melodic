
"use strict";

let PowerSystemEvent = require('./PowerSystemEvent.js');
let MotorPower = require('./MotorPower.js');
let ControllerInfo = require('./ControllerInfo.js');
let ButtonEvent = require('./ButtonEvent.js');
let ExternalPower = require('./ExternalPower.js');
let SensorState = require('./SensorState.js');
let ScanAngle = require('./ScanAngle.js');
let KeyboardInput = require('./KeyboardInput.js');
let DigitalInputEvent = require('./DigitalInputEvent.js');
let Sound = require('./Sound.js');
let BumperEvent = require('./BumperEvent.js');
let CliffEvent = require('./CliffEvent.js');
let Led = require('./Led.js');
let DockInfraRed = require('./DockInfraRed.js');
let RobotStateEvent = require('./RobotStateEvent.js');
let VersionInfo = require('./VersionInfo.js');
let DigitalOutput = require('./DigitalOutput.js');
let WheelDropEvent = require('./WheelDropEvent.js');
let AutoDockingResult = require('./AutoDockingResult.js');
let AutoDockingAction = require('./AutoDockingAction.js');
let AutoDockingActionGoal = require('./AutoDockingActionGoal.js');
let AutoDockingGoal = require('./AutoDockingGoal.js');
let AutoDockingActionResult = require('./AutoDockingActionResult.js');
let AutoDockingActionFeedback = require('./AutoDockingActionFeedback.js');
let AutoDockingFeedback = require('./AutoDockingFeedback.js');

module.exports = {
  PowerSystemEvent: PowerSystemEvent,
  MotorPower: MotorPower,
  ControllerInfo: ControllerInfo,
  ButtonEvent: ButtonEvent,
  ExternalPower: ExternalPower,
  SensorState: SensorState,
  ScanAngle: ScanAngle,
  KeyboardInput: KeyboardInput,
  DigitalInputEvent: DigitalInputEvent,
  Sound: Sound,
  BumperEvent: BumperEvent,
  CliffEvent: CliffEvent,
  Led: Led,
  DockInfraRed: DockInfraRed,
  RobotStateEvent: RobotStateEvent,
  VersionInfo: VersionInfo,
  DigitalOutput: DigitalOutput,
  WheelDropEvent: WheelDropEvent,
  AutoDockingResult: AutoDockingResult,
  AutoDockingAction: AutoDockingAction,
  AutoDockingActionGoal: AutoDockingActionGoal,
  AutoDockingGoal: AutoDockingGoal,
  AutoDockingActionResult: AutoDockingActionResult,
  AutoDockingActionFeedback: AutoDockingActionFeedback,
  AutoDockingFeedback: AutoDockingFeedback,
};
