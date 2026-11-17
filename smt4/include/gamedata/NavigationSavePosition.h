#ifndef GAMEDATA_NAVIGATION_SAVE_POSITION_H
#define GAMEDATA_NAVIGATION_SAVE_POSITION_H
#include "map/MapJumpTransition.h"

/* The saved 24-byte navigation snapshot is the pending MapJumpRequest returned
 * by gameJumpRequestGet (save data +0x24B84). Its transform contains XYZ,
 * scene heading, and camera heading; kind3 leaves the last two unspecified. */
extern "C" void saveSetNavigationPosition(const MapJumpRequest *position);
#endif
