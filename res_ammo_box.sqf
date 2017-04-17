/////////   MP Ammo Box script
/////////   By: Riouken
/////////   For Arma 3

if (! isServer) exitWith {};
_crate = _this select 0;

clearMagazineCargo _crate;
clearWeaponCargo _crate;
clearItemCargoGlobal _crate;


///OPFOR  ammo////
_crate addMagazineCargoGlobal ["rhs_mag_30Rnd_556x45_M855A1_Stanag", 10];
_crate addMagazineCargoGlobal ["rhs_30Rnd_545x39_AK",10];
_crate addMagazineCargoGlobal ["rhs_10Rnd_762x54mmR_7N1", 10];
_crate addMagazineCargoGlobal ["rhs_100Rnd_762x54mmR", 10];
_crate addMagazineCargoGlobal ["rhs_mag_rgd5",10];
_crate addMagazineCargoGlobal ["rhs_mag_M441_HE", 10];


_crate addMagazineCargoGlobal ["rhs_rpg7_PG7VL_mag",5];
_crate addMagazineCargoGlobal ["CUP_RPG18_M",3];
_crate addMagazineCargoGlobal ["rhs_VOG25", 10];
