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
	class MQ1
	{
	units[] = {"MQ1"};
	weapons[] = {};
	requiredVersion = 1.91;
	};
};

class CfgModels
{
	class Default {};
	class Weapon: Default{};
	class optika_MQ1: Weapon {};
	class vehicle: Default {};
	class MQ1: Vehicle 
	{
	sectionsInherit="Vehicle";
	sections[]={"vrtule staticka","vrtule blur"};
	};
};

class CfgAmmo
{
	class Default {};
       	class AT3: Default {};
	class Hellfire: AT3{};
	class MQ1_AGM114: Hellfire
	{
		hit=1000;
		indirectHit=100;
		indirectHitRange=10;
		initTime=0.25;
		thrustTime=8;
		thrust=1200;
		model="\MQ1\AGM114.p3d";
		proxyShape="\MQ1\AGM114";
		airLock=true;
		laserLock=true;
		irLock=true;
		minRange=200;
		minRangeProbab=0.200000;
	midRange=4000;
    	midRangeProbab=0.200000;
    	maxRange=8000;
    	maxRangeProbab=0.50000;
	};
};

class CfgWeapons
{
	class Default {};
      	class LAWLauncher: Default {};
	class CarlGustavLauncher: LAWLauncher {};
	class AT3Launcher: CarlGustavLauncher {};
	class HellfireLauncher: AT3Launcher {};
	class HellfireLauncherCobra: HellfireLauncher {};
	class AGM114Launcher: HellfireLauncherCobra
	{
	ammo="MQ1_AGM114";
	displayName="AGM-114 Hellfire";
	displayNameMagazine="AGM114";
	shortNameMagazine="AGM114";
	cursor="\MQ1\curs_hlf.paa";
	sound[]={"\MQ1\hellfire.wav",32.162278,1};
	count=2;
	};
};

class CfgTextureToMaterial
{
	class MQ1blesk
	{
	textures[]=
	{
	"MQ1\1.paa";
	"MQ1\black.paa";
	"MQ1\box.paa";
	"MQ1\box2.paa";
	"MQ1\hellfire.paa";
	"MQ1\joystick.paa";
	"MQ1\klava.paa";
	"MQ1\leather.paa";
	"MQ1\monitor.paa";
	"MQ1\mount.paa";
	"MQ1\panel.paa";
	"MQ1\panel2.paa";
	"MQ1\phone.paa";
	"MQ1\plastic.paa";
	"MQ1\plastic2.paa";
	"MQ1\pol.paa";
	"MQ1\potolok.paa";
	"MQ1\server2.paa";
	"MQ1\stick.paa";
	"MQ1\top.paa";
	"MQ1\wood.paa";
	"MQ1\wall.paa"
	};
	material="#BleskMQ1";
	};
};
class CfgMaterials
{
	class BleskMQ1
	{
	ambient[]={0.6,0.6,0.6,0.6};
	diffuse[]={0.5,0.5,0.5,0.5};
	forcedDiffuse[]={0,0,0,0};
	specular[]={0.2,0.2,0.2,0.2};
	specularPower=10;
	emmisive[]={0,0,0,0};
	};
};

class CfgVehicleActions
	{UAVpilot="UAVpilot";};

class CfgMovesMC
{
	class Default{};
	class StandBase: Default {};
	class DefaultDie:Default{};
	class States
	{
	class Driver:Default{};
	class UAVpilot:Driver
		{
		file="\MQ1\UAVpilot.rtm";
		speed=1;
		looped=1;
		};
	};
};

class CfgVehicles
{
	class All {};
	class AllVehicles: All {};
	class Air: AllVehicles {};
	class Plane: Air {};
	class A10: Plane {};
	class Cessna: A10 {};
	class MQ1: Cessna
	{
		scope=public;
		crew ="UAVpilot";
		picture="\MQ1\pic.paa";
		icon="\MQ1\ico.paa";
		side = 1;
		displayName="MQ-1 Predator";
		accuracy=5000;
		nightVision=10;
		vehicleClass = "Air";
		irTarget=1;
		irScanRange=300000;
		irScanGround=1;
		laserScanner = 1;
		extCameraPosition[]={0,3,-15};
		aileronSensitivity = 0.3;
		elevatorSensitivity = 0.25;
		noseDownCoef = 0; 
		flapsFrictionCoef=2;
		landingAoa="3.5*3.1415/180";
		driverAction="ManActUAVpilot";
		gunnerAction="ManActUAVpilot";
		hasgunner=1;
		driveriscommander=1;
		gunnerOpticsModel="\MQ1\optika";
		driverOpticsModel = "\MQ1\optika";
		SoundEngine[]={"\MQ1\motor.wav",1.200000,1.000000};
		soundEnviron[]={Objects\noise,db-10,1.0};
		soundServo[]={Vehicles\gun_elevate,db-20,0.4};
		insideSoundCoef = 0.00001;
		FuelCapacity=400;
		maxSpeed = 400;
		landingSpeed=180;
		weapons[]={AGM114Launcher};
		magazines[]={AGM114Launcher};
		armor=100;
		cost=20000;
		transportSoldier=0;
		model="\MQ1\mq1";
		fov=0.5;
		type=VAir;
		steerAheadSimul=10.0;
		steerAheadPlan=20.0;
		predictTurnSimul=5;
		predictTurnPlan=10;
		gearRetracting = true;
		threat[]={1.,1.,1.}; 
		class ViewPilot{initFov=0.7;minFov=0.4;maxFov=0.85;initAngleX=8;minAngleX=-35;maxAngleX=25;initAngleY=0;minAngleY=-150;maxAngleY=150;};
		class ViewOptics{initAngleX=0;minAngleX=0;maxAngleX=0;initAngleY=0;minAngleY=0;maxAngleY=0;initFov=0.5;minFov=0.5;maxFov=0.5;};
		class ViewCargo{initAngleX=5;minAngleX=-30;maxAngleX=30;initAngleY=0;minAngleY=-60;maxAngleY=60;initFov=0.7;minFov=0.42;maxFov=0.85;};
		animated =1;

class Animations
{
	class LeftGear
	{
	type="rotation";
	animPeriod=4;
	selection="left gear";
	axis="left gear axis";
	angle0=0
	angle1=2.1;
	};

	class RightGear
	{
	type="rotation";
	animPeriod=4;
	selection="right gear";
	axis="right gear axis";
	angle0=0
	angle1=-2.1;
	};

	class NoseGear
	{
	type="rotation";
	animPeriod=4;
	selection="nose gear";
	axis="nose gear axis";
	angle0=0
	angle1=-2.45;
	};
};

class EventHandlers
	{
	init = "[_this select 0] exec{\mq1\scr\common_init.sqs}; (_this select 0) setobjecttexture [0, ""\mq1\1""]";
	gear="if (_this Select 1) then {[_this select 0] exec{\mq1\scr\geardown.sqs}} else {[_this select 0] exec{\mq1\scr\gearup.sqs}}";
	};

class UserActions
{
	class Wep
	{
	displayName="100% Motor Potency";
	position="zamerny";
	radius=5;
	condition="isengineon this and driver this == player and speed this > 30 and speed this < 300"; 
	statement="[this] exec ""\mq1\scr\WepT29.sqs""";
	};
};
};
};

class CfgNonAIVehicles
{
	class ProxyWeapon {};
	class ProxySecWeapon {};
	class ProxyMQ1_AGM114: ProxyWeapon
	{
	model = "\MQ1\AGM114.p3d";
	simulation = "maverickweapon";
	};
};