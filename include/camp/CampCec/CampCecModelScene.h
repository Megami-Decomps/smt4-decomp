/* camp/CampCec: the 3D player-model backdrop the camp's StreetPass screens set up (the object at
 * g_campCec + 0x28). */
#ifndef CAMP_CAMPCEC_CAMPCECMODELSCENE_H
#define CAMP_CAMPCEC_CAMPCECMODELSCENE_H

#include "common.h"
#include "classes/Obj4207d0.h"

/* Shin Megami Tensei IV layout; only the fields the readable code touches are named. */
typedef struct CampCecModelScene {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1C */ Obj4207d0 *playerModel;     /* the player's model holder */
    /* 0x20 */ u8 unk20[0xc];
    /* 0x2C */ u8 lightingSet;             /* the status backdrop environment was loaded */
} CampCecModelScene;

#endif
