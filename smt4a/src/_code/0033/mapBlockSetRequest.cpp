#include "common.h"

extern "C" {

typedef struct MapState {
    /* 0x00 */ u8 unk00[0x17];
    /* 0x17 */ u8 mode;
} MapState;

typedef struct MapBlock {
    /* 0x0000 */ u8 unk0000[0x1390];
    /* 0x1390 */ u16 eventId;
    /* 0x1392 */ u8 unk1392[0x59E];
    /* 0x1930 */ u32 request;
    /* 0x1934 */ u8 unk1934[0x6CC];
    /* 0x2000 */ MapState state;
} MapBlock;

typedef struct GameGlobals {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MapBlock *block;
} GameGlobals;

extern GameGlobals g_gameGlobals; /* 0x588fd0 */

extern int FUN_0026264c(u16 eventId);

/* Stores `request` in the map block unless it is missing, in mode 0xE or 0x10, or in mode 7 with a failing event check. */
void mapBlockSetRequest(u32 request)
{
    MapBlock *block = g_gameGlobals.block;

    if (block != NULL && block->state.mode != 0xE
        && (block->state.mode != 7 || FUN_0026264c(block->eventId) != 0)
        && block->state.mode != 0x10) {
        block->request = request;
    }
}

} /* extern "C" */
