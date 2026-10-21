/* NON_MATCHING: compiler reloads the map ID for the second store and changes the optional mode-copy schedule. */
#include "common.h"
extern "C" {
struct MapModeData { u8 unk00[0x20]; u8 mode; };
struct MapStateSource { u8 unk00[0x3C]; s16 id; u8 unk3E[0xD22]; MapModeData *data; };
struct GameMapState { u8 unk00[0x2F8]; u8 requested; u8 unk2F9[3]; s32 firstId; u32 firstMode; u8 unk304[0x18]; s32 secondId; u32 secondMode; };
extern GameMapState g_gameState;
/* Synchronize both stored map IDs and the optional map-mode values. */
void gameSynchronizeMapState(const MapStateSource *source) { g_gameState.requested=1; g_gameState.firstId=source->id+200; g_gameState.secondId=source->id+200; if (source->data!=NULL) { g_gameState.firstMode=source->data->mode; g_gameState.secondMode=source->data->mode; } }
}
