/////////   MP Ammo Box script
/////////   By: Riouken
/////////   For Arma 3

if (! isServer) exitWith {};
_crate = _this select 0;

clearMagazineCargo _crate;
clearWeaponCargo _crate;
clearItemCargoGlobal _crate;



///Rus  ammo////
_crate addMagazineCargoGlobal ["rhs_30Rnd_762x39mm", 20];
_crate addMagazineCargoGlobal ["rhs_30Rnd_545x39_AK",10];
_crate addMagazineCargoGlobal ["rhs_10Rnd_762x54mmR_7N1", 10];
_crate addMagazineCargoGlobal ["rhs_100Rnd_762x54mmR", 5];

_crate addMagazineCargoGlobal ["rhs_rpg7_PG7VL_mag",5];
_crate addMagazineCargoGlobal ["CUP_RPG18_M",3];
_crate addMagazineCargoGlobal ["rhs_VOG25", 10];

_crate addMagazineCargoGlobal ["rhs_20rnd_9x39mm_SP5", 10];
