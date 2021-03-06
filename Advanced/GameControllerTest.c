#pragma config(ProgramType, NonCompetition)
#pragma config(Sensor, dgtl8,  touch,               sensorTouch)
#pragma config(Motor,  port8,           yyy,           tmotorNormal, openLoop)
#pragma config(Motor,  port9,           xxx,           tmotorNormal, openLoop)
#pragma config(Motor,  port10,          zzz,           tmotorNormal, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  TVexJoysticks i;

  int gameController[(TVexJoysticks) kNumbOfVexRFIndices];

  motor[port8] = 0;
  motor[port9] = 0;
  motor[port10] = 0;
  while (true)
  {
    for (i = (TVexJoysticks) 0; i < kNumbOfVexRFIndices; ++i)
      gameController[i] = vexRT[i];
  }
}
