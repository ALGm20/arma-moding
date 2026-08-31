
class DragonWarrior_RscText	{type = 0;idc = -1;style = 0;h = .04; colorBackground[] = {0, 0, 0, 0};colorText[] = {1, 0, 0, 1};font = "tahomaB24";size = .02;};
class DragonWarrior_RscTextSmall	{type = 0;idc = -1;style = 0;h = 0.04;colorBackground[] = {0, 0, 0, 0};colorText[] = {1, 0, 0, 1};font = "tahomaB24";size = 0.9;};
class DragonWarrior_RscBackground	{type = 0;idc = -1;style = 80;x=.15;y=.15;w=.7;h = 0.7; text = "";colorBackground[] = {1, 1, 1, 1};colorText[] = {0, 0, 0, 0};font = "tahomaB24";sizeEx = 0;};
class DragonWarrior_Rsc3DBackground	{type = 20;idc = -1;style = 80;angle = 0;selection = "display";x=.15;y=.15;w=.7;h = 0.7; text = "";colorBackground[] = {.5, .5, 1, 0.7};colorText[] = {1, 0, 0, 1};font = "tahomaB24";sizeEx = 0;};
class DragonWarrior_Rsc3DTextSmall	{type = 20;idc = -1;style =0;angle = 0;selection = "display";color[] = {0, 0, 0, 1};colorBackground[] = {0, 0, 0, 0};colorText[] = {1, 0, 0, 1};font = "tahomaB24";size = 0.9;};
class DragonWarrior_RscTitle	{type = 0;idc = -1;style = 32+2;x=.15;y=.164;w=.7;h = 0.06; text = "";color[] = {0, 0, 0, 1};colorBackground[] = {0.5, 0.5, 1, 1};colorText[] = {1, 0, 0, 1};font = "tahomaB36";sizeEx = 1.0714 * 0.03;};
class DragonWarrior_RscActiveText {  type = 11;  idc = -1; style = 0; color[] = {1, 1, 1, 1};colorActive[] = {1, 0, 0, 1}; font = "tahomaB36"; sizeEx = 0.04; soundEnter[] = {"ui\ui_over", 0.2, 1};soundPush[] = {, 0.2, 1};soundClick[] = {"ui\ui_ok", 0.2, 1}; soundEscape[] = {"ui\ui_cc", 0.2, 1}; default = false;    };
class DragonWarrior_RscSlider { type = 3;idc = -1; style = 0x0F ; selection ="display"; Zoom =0.1;color[] = {1, 0, 0, 1};colorBackground[] = {1, 1, 1, 0.75};colorText[] = {1, 0, 0, 1};size = 0.8;angle = 0;font = "tahomaB24";};
class DragonWarrior_RscButton  { type = 1;idc = -1;style = 2;colorText[] = {1, 0, 0, 1};font = "courierNewB64"; sizeEx = 0.015; soundPush[] = {, 0.2, 1}; soundClick[] = {"ui\ui_ok", 0.2, 1}; soundEscape[] = {"ui\ui_cc", 0.2, 1};default = false;   };	
class DragonWarrior_RscTextBackground	{type = 0;idc = -1;style = 112 ;h = 0.04; colorBackground[] = {0.5, 0.5, 0.5, 0.75};colorText[] = {0, 0, 0, 1};font = "tahomaB24";size = 0.2;};
class DragonWarrior_RscGroupbox2	{type = 0;idc = -1;style = 112;x=.15;y=.15;w=.7;h = 0.7; text = "";colorBackground[] = {1, 1, 1, 0.5};colorText[] = {0, 0, 0, 0};font = "tahomaB24";sizeEx = 0.04;};

class DragonWarrior_RscObject
{
	type = 80;
	scale = 1.0;
	direction[] = {0, 0, 1};
	up[] = {0, 1, 0};
};

class DragonWarrior_RscObjNotebookSlider
{
	type = 24;
	style = 1
	x =1;y=1;w=1;h=1;
	selection = "display";
	angle = 0;
	size = 0.8;	// 3D size
	color[] = {0, 0, 0, 1};
};

class DragonWarrior_Rsc3DActiveText {  
	type = 21; 
	 idc = -1;
	 style = 0; 
	angle = 0;
	selection = "display";
	color[] = {0, 0,0, 0.5};
	colorActive[] = {0, 0, 0, 1};
 	font = "tahomaB36";
	h = 0.05;
	 sizeEx = 0.08; 
soundEnter[] = {"ui\ui_over", 0.2, 1};soundPush[] = {, 0.2, 1};soundClick[] = {"ui\ui_ok", 0.2, 1}; soundEscape[] = {"ui\ui_cc", 0.2, 1}; default = false;    };


class DragonWarrior_RscPicture	{
			type = 0;
			idc = -1;
			style = 48;
			colorBackground[] = {0, 0, 0, 1};
			colorText[] = {1, 1, 1, 1};
			font = FontS;size = 0;
			};


class Dragon_Warrior_Drone

{
	idd = -1;
	movingEnable = true;
	controlsBackground[]={};
	

	objects[]= {Notebook};
	class Notebook : DragonWarrior_RscObject
	{
		model = "notebook.p3d";
		idc = -1;
		type = 83;
		autoOpen = 1;
		autoZoom = 1;
		animSpeed = 1;
		animation = "notebook.rtm"
		position[] = {0, -0.08, 0.6};
		direction[] = {sin 10, sin 20 * cos 10, cos 20 * cos 10};
		up[] = {0, cos 20, -sin 20};
		positionBack[] = {0, .04, 0.7};
		inBack = 1;
		enableZoom = 0;
		zoomDuration = 1;
		scale=1.2;
		controls[]={ BackGroundD , SpeedDrone , DirectionDrone , HeightDrone  ,SpeedText ,DirectionText ,AltText , OkButton };
		
		class BackGroundD : DragonWarrior_Rsc3DBackground	{
   	
		x = 0 ; y = 0; w =1; h = 1; color[] = {0, 0, 0, 1};sizeEx = 0.02;text = ""; action = "";
  	
						};
	 	class SpeedText : DragonWarrior_Rsc3DTextSmall	{
   	
		x = 0.18 ; y = 0.12; w = 0.4; h = 0.07; sizeEx = 0.02;text = "Speed"; action = "";
  	
						};
		 class SpeedDrone : DragonWarrior_RscObjNotebookSlider 	{
   		 idc = 150;
		x = 0.1 ; y = 0.20; w = 0.8; h = 0.1; sizeEx = 0.02; action = "";
  	
						}; 
		 class DirectionText : DragonWarrior_Rsc3DTextSmall	{
   	
		x = 0.18 ; y = 0.37; w = 0.4; h = 0.07; sizeEx = 0.02;text = "Direction"; action = "";
  	
						};
		class Directiondrone : DragonWarrior_RscObjNotebookSlider	{
   		 idc = 151;
		x = 0.1 ; y = 0.45; w = 0.8; h = 0.1; sizeEx = 0.02; action = "";
  	
						};	
	  	class AltText : DragonWarrior_Rsc3DTextSmall	{
   	
		x = 0.18 ; y = 0.62; w = 0.4; h = 0.07; sizeEx = 0.02;text = "Height"; action = "";
  	
						};

		class HeightDrone : DragonWarrior_RscObjNotebookSlider	{
   		 idc = 152;
		x = 0.1 ; y = 0.70; w = 0.8; h = 0.1; sizeEx = 0.02; action = "";
  	
						};
		class OkButton : DragonWarrior_Rsc3DActiveText 	{
			idc = 5000;
			x = 0.5;y = 0.85;w = 0.4;h = 0.08;
			sizeEx = 0.020;text = "Start Dragon Warrior";default = 1;soundClick[] = {"ui\ui_ok", 0.2, 1};action = "";
			
						};
	};

 	 controls[]={ }; 

		 
};

class Dragon_Warrior_DroneCrontrol
{
	  idd = -1;
 	 movingEnable = 1;
	controlsBackground[] = {};
  	 objects[] = {};

 	 controls[]={BackMain   ,RotationText ,xpos ,UpDownText ,ypos ,ZoomText ,zoom  ,SpeedText  , Speed  , DirectionText   ,AltText ,Altitude ,DirectionControl  ,zoomvalue,DirectionPosNumText ,DirectionNumText ,SpeedNumText ,AltNumText ,LineHMainL ,LineHMainR ,LineVMainH  ,LineVMainB ,CurrentTime ,CurrentPosX, CurrentPosY ,DirectionTozero 
		}; 

	class BackMain  : DragonWarrior_RscPicture	{
	 idc = 300 ;
	x = 0 ; y = 0; w = 1; h =1;  text = "\Dragonwarrior\BackGround.paa";
        	action = "";};

	 // class BackGroundD : DragonWarrior_RscGroupbox2	{//
   	
	//x = 0.65 ; y = 0.35; w = 0.24; h = 0.45; sizeEx = 0.02;text = ""; action = "";//
  	
		//};//


	class RotationText : DragonWarrior_RscTextSmall	{
   	
	x = 0.7 ; y = 0.56; w = 0.22; h = 0.03; sizeEx = 0.02;text = "Up Down caméra"; action = "";
  	
		};
	  class xpos : DragonWarrior_RscSlider {
   	 idc = 97;
	x = 0.7 ; y = 0.59; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
  	
		}; 
	class UpDownText : DragonWarrior_RscTextSmall	{
   	
	x = 0.7 ; y = 0.63; w = 0.22; h = 0.03; sizeEx = 0.02;text = "Rotation caméra"; action = "";
  	
		};
	 class ypos : DragonWarrior_RscSlider {
   	 idc = 98;
	x = 0.7 ; y = 0.66; w = 0.22; h = 0.035; sizeEx = 0.02; 
  	
		};	
	 class ZoomText : DragonWarrior_RscTextSmall	{
   	
	x = 0.7 ; y = 0.70; w = 0.1; h = 0.03; sizeEx = 0.02;text = "Zoom"; 
  	
		};
 	class ZoomValue : DragonWarrior_RscTextSmall	{
   	idc = 990;
	x = 0.78 ; y = 0.70; w = 0.1; h = 0.03; sizeEx = 0.02;text = ""; 
  	
		};
	class zoom : DragonWarrior_RscSlider {
   	 idc = 99;
	x = 0.7 ; y = 0.73; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
  	
		};
	 class SpeedText : DragonWarrior_RscTextSmall	{
   	
	x = 0.7 ; y = 0.77; w = 0.1; h = 0.03; sizeEx = 0.02;text = "Speed"; action = "";
  	
		};
	 class SpeedNumText : DragonWarrior_RscTextSmall	{
   	 idc = 200;
	x = 0.78 ; y = 0.77; w = 0.1; h = 0.03; sizeEx = 0.02;text = "0"; action = "";
  	
		};
	 class Speed : DragonWarrior_RscSlider {
   	 idc = 1000;
	x = 0.7 ; y = 0.8; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
  	
		}; 
	 class DirectionText : DragonWarrior_RscTextSmall	{
   	
	x = 0.7 ; y = 0.84; w = 0.06; h = 0.03; sizeEx = 0.02;text = "Drift "; action = "";
  	
		};
	 class DirectionNumText : DragonWarrior_RscTextSmall	{				
   	 idc = 201;
	x = 0.74 ; y = 0.84; w = 0.06; h = 0.03; sizeEx = 0.02;text = "360 "; action = "";
  	
		};
	class DirectionPosNumText : DragonWarrior_RscTextSmall	{
   	 idc = 202;
	x = 0.8 ; y = 0.84; w = 0.06; h = 0.03; sizeEx = 0.02;text = "Ha29 "; action = "";
  	
		};
	class DirectionTozero : DragonWarrior_RscActiveText {				
   	 idc = 207;
	x = 0.86 ; y = 0.84; w = 0.06; h = 0.03; sizeEx = 0.02;text = "Reset "; action = "sliderSetPosition [1001, 0]";
  	
		}; 
	class DirectionControl : DragonWarrior_RscSlider {
   	 idc = 1001;
	x = 0.7 ; y = 0.87; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
  	
		};	
	  class AltText : DragonWarrior_RscTextSmall	{
   	
	x = 0.7 ; y = 0.91; w = 0.22; h = 0.03; sizeEx = 0.02;text = "Height"; action = "";
  	
		};

	class AltNumText : DragonWarrior_RscTextSmall	{
   	 idc = 203;
	x = 0.78 ; y = 0.91; w = 0.06; h = 0.03; sizeEx = 0.02;text = "56"; action = "";
  	
		};
	class Altitude : DragonWarrior_RscSlider {
   	 idc = 1002;
	x = 0.70 ; y = 0.94; w = 0.22; h = 0.035; sizeEx = 0.02; action = "";
  	
		};
	class LineHMainL : DragonWarrior_RscText	{
   	
	style = 178; x = 0.45 ; y = 0.5; w = 0.048; h = 0; size = 0.01 ; sizeEx = 0.01; text = "";color[] = {0, 0, 0, 1};colorBackground[] = {0, 0, 0, 1};colorText[] = {0, 0, 0, 1};
  	
		};
	class LineHMainR : DragonWarrior_RscText	{
   	
	style = 178; x = 0.502 ; y = 0.5; w = 0.048; h = 0; size = 0.01 ; sizeEx = 0.01; text = "";color[] = {0, 0, 0, 1};colorBackground[] = {0, 0, 0, 1};colorText[] = {0, 0, 0, 1};
  	
		};
	class LineVMainH : DragonWarrior_RscText	{
   	
	style = 181; x = 0.5 ; y = 0.448; w = 0; h = 0.048 ; size = 0.01 ; sizeEx = 0.01; text = "";color[] = {0, 0, 0, 1};colorBackground[] = {0, 0, 0, 1};colorText[] = {0, 0, 0, 1};
  	
		};
	class LineVMainB : DragonWarrior_RscText	{
   	
	style = 181; x = 0.5 ; y = 0.502; w = 0; h = 0.048 ; size = 0.01 ; sizeEx = 0.01; text = "";color[] = {0, 0, 0, 1};colorBackground[] = {0, 0, 0, 1};colorText[] = {0, 0, 0, 1};
  	
		};
	
	class CurrentTime : DragonWarrior_RscTextSmall	{
   	 idc = 204;
	x = 0.1 ; y = 0.95; w = 0.16; h = 0.04; sizeEx = 0.09;text = "56"; action = "";
  	
		}; 
	class CurrentPosX : DragonWarrior_RscTextSmall	{
   	 idc = 205;
	x = 0.4 ; y = 0.95; w = 0.10; h = 0.04; sizeEx = 0.09;text = "56500  X  12580  Y"; action = "";
  	
		}; 
	class CurrentPosY : DragonWarrior_RscTextSmall	{
   	 idc = 206;
	x = 0.5 ; y = 0.95; w = 0.10; h = 0.04; sizeEx = 0.09;text = "56500  X  12580  Y"; action = "";
  	
		}; 
};
