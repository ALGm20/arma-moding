private ["_result","_GrandeLettre","_PetiteLettre","_Chiffre", "_Chiffrestring","_Pos","_ArrayMajuscForGrid","_ArrayMinusForGrid " ];

_ArrayMajuscForGrid = ["A","B","C","D","E","F","G","H","I","J"];
_ArrayMinusForGrid = ["a","b","c","d","e","f","g","h","i","j"];

_Pos = _This select 0;
_Chiffrestring ="";
_result = "";
_GrandeLettre = (((_Pos select 0) - ((_Pos select 0) Mod 1280))/1280);                             
_PetiteLettre =((((_Pos select 0) Mod 1280)- (((_Pos select 0) Mod 1280)Mod 128))/128);   
_Chiffre = (99 - ((_Pos select 1) - ((_Pos select 1) Mod 128))/128);         
_Chiffrestring = Format["%1",_Chiffre];
If (_Chiffre < 10) then  {_Chiffrestring = "0" + _Chiffrestring };
_result = ((_ArrayMajuscForGrid select _GrandeLettre) + ( _ArrayMinusForGrid select _PetiteLettre) +_Chiffrestring);

_result



