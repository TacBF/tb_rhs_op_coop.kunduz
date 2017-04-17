#include "tb_defines.hpp"

zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY,     {3}      	, {}    , 1      , {}        , 0    , "%3 Polite People " },
{ 2, TEAM_RED, 		SPAWN_XRAY,     {9}			, {}    , 1      , {}        , 0    , "%3 Nasty Cutthroats" },

{ 3, TEAM_BLUE, 	SPAWN_NEVER,    {1,4}      	, {}   	, 1      , {}        , 0    , " %1 Tal Kar Slums" },
{ 4, TEAM_BLUE, 	SPAWN_NEVER,    {3,5}  		, {}    , 1      , {}        , 0    , "%1 Saint-Tropez" },
{ 5, TEAM_NEUTRAL, 	SPAWN_NEVER,    {4,6}      	, {}  	, 1      , {}        , 0    , "%1 Kebab" },
{ 6, TEAM_NEUTRAL, 	SPAWN_NEVER,    {5,7}      	, {}   	, 1      , {}        , 0    , "%1 Iram Radique's lair" },
{ 7, TEAM_NEUTRAL, 	SPAWN_NEVER,    {6,8}		, {}    , 1      , {}        , 0    , "%1 Bazzar" },
{ 8, TEAM_RED, 		SPAWN_NEVER,    {7,9}      	, {}    , 1      , {}		 , 0    , "%1 Mosque" },
{ 9, TEAM_RED, 		SPAWN_NEVER,  	{8,2}		, {}    , 1      , {}    	 , 0    , "%1 White  Tower" },

{ 10,TEAM_BLUE, 	SPAWN_INSTANT,  {}			, {}    , 1	     , {1,5}     , 2    , "%4 Surprise" },
{ 11,TEAM_RED, 		SPAWN_INSTANT,  {}			, {}    , 1      , {2,7}   	 , 2    , "%4 Hobo's  fair" }
};