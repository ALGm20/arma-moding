

// some basic defines
#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

// type scope
#define private 0
#define protected 1
#define public 2


class CfgPatches
{
	class DragonWar
	{
		units[] = {DragonWar};
		weapons[] = {};
		requiredVersion = 1.90;
	};
};

/*
class CfgModels
{
	class Default
	{
		sections[] = {};
		sectionsInherit="";
	};
	class Air: Default {};
	class Plane: Air {};
	class A10 : Plane {};
	class DragonWar: A10
	{
		sectionsInherit="Vehicle";
		sections[]=
		{
			"velka vrtule staticka",
			"velka vrtule blur",
			"mala vrtule staticka",
			"mala vrtule blur"
		};
	};

	class ka29: Helicopter {};

};
*/

class CfgVehicles
{
	class All {};
	class AllVehicles: All {};
	class Air: AllVehicles {};
	class Plane: Air {};
	class A10: Plane {};
	class Cessna: A10 {};
	class DragonWar: Cessna
	{
		model="\DragonWarrior\drone.p3d";
		displayName="Dragon Warrior";
		transportSoldier = 0;
		Side = 3;
		vehicleClass="Air";
                maxSpeed=50;
                audible=2;
                  scope=public;
                cost=10; 
              typicalCargo[]={Man};
                extCameraPosition[]={0,0,-10};
             nightVision=1;
      commanderCanSee=31;
                armor=10;
                 fuelCapacity=300;
		formationTime=10;
		hasGunner=0;
		hasDriver=0;
camouflage=1;
                 unitInfoType="UnitInfoHelicopter";
                 irTarget=true;
		irScanRangeMin=300;
      irScanRangeMax=3000;
      irScanToEyeFactor=2;
		irScanGround = 1;
		hasCommander=1;
commanderOpticsModel="optika_tank_gunner";
getInRadius=4.500000;
soundEngine[]={"Vehicles\plane",0.000528,1};
      soundEnviron[]={"Objects\noise",0.000000,0.000000};
      soundServo[]={"Vehicles\gun_elevate",0.000000,0.000000};
class ViewCommanderBase
      {
         initAngleX=5;
         minAngleX=-30;
         maxAngleX=30;
         initAngleY=0;
         minAngleY=-100;
         maxAngleY=100;
         initFov=0.700000;
         minFov=0.420000;
         maxFov=0.850000;
      };
      class ViewCommander : ViewCommanderBase
      {
         initAngleX=5;
         minAngleX=-30;
         maxAngleX=30;
         initAngleY=0;
         minAngleY=-360;
         maxAngleY=360;
         initFov=0.700000;
         minFov=0.420000;
         maxFov=0.850000;
      };
      class ViewOpticsBase
      {
         initAngleX=0;
         minAngleX=-30;
         maxAngleX=30;
         initAngleY=0;
         minAngleY=-100;
         maxAngleY=100;
         initFov=0.700000;
         minFov=0.420000;
         maxFov=0.850000;
      };
class ViewOptics : ViewOpticsBase
      {
         initAngleX=0;
         minAngleX=-100;
         maxAngleX=100;
         initAngleY=0;
         minAngleY=-100;
         maxAngleY=100;
         initFov=0.500000;
         minFov=0.300000;
         maxFov=1.200000;
      };
class TurretBase
      {
         gunAxis="OsaHlavne";
         turretAxis="OsaVeze";
         gunBeg="usti hlavne";
         gunEnd="konec hlavne";
         soundServo[]={};
         minElev=-20;
         maxElev=20;
         minTurn=-45;
         maxTurn=45;
         body="OtocVez";
         gun="OtocHlaven";
      };
      class Turret : TurretBase
      {
      };
      class ComTurret
      {
         gunAxis="OsaHlavne";
         turretAxis="OsaVeze";
         gunBeg="usti hlavne";
         gunEnd="konec hlavne";
         soundServo[]={};
         minElev=-4;
         maxElev=20;
         minTurn=-360;
         maxTurn=360;
         body="OtocVez";
         gun="OtocHlaven";
      };class Animations
		{
			class rotor
			{
				type="rotation";
				animPeriod=1;
				selection="rotor_princ";
				axis ="axe_princ";
				angle0=0;
				angle1=300000;
			};
			class rotorSecl
			{
				type="rotation";
				animPeriod=1;
				selection="rotor_secl";
				axis ="axe_secl";
				angle0=0;
				angle1=300000;
			};class rotorr
			{
				type="rotation";
				animPeriod=1;
				selection="rotor_princr";
				axis ="axe_princr";
				angle0=0;
				angle1=300000;
			};
			class rotorSec
			{
				type="rotation";
				animPeriod=1;
				selection="rotor_sec";
				axis ="axe_sec";
				angle0=0;
				angle1=300000;
			};
		};
		class eventhandlers

		{
		init = "[_this select 0] exec ""\DragonWarrior\Scripts\Initserver.sqs"";"
		engine = " [_this select 0] exec ""\DragonWarrior\Scripts\DroneAnim.sqs"";"
		};
		class UserActions
		{
			class StartDrone
			{
				displayName="Start uav";
				position="startuav";
				radius=5;
                                			condition="!(isengineOn this)";
				statement=" [this] exec ""\DragonWarrior\Scripts\startdrone.sqs""";				
			};

		};
		


/*
		//rotor
		rotorBig = \ka29\ka29_rotor;
		rotorBigBlend = \ka29\ka29_blurblade;
		rotorSmall = \ka29\ka29_rotor;
		rotorSmallBlend = \ka29\ka29_blurblade;

		class TurretBase {};
*/
	};
};

