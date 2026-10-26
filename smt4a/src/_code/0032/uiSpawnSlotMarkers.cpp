#include "common.h"

extern "C" {

typedef struct UiPos {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
} UiPos;

typedef struct UiOrigin {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 x;
    /* 0x08 */ s32 y;
} UiOrigin;

extern UiPos *asdTMTexTableEntryAt(int table, int index);
extern int FUN_00344bc8(int slot);
extern int gameDataToggleFlagIsSet(void);
extern int FUN_00164b5c(int a, int b, int c, int x, int y, int d);

/* Spawns the marker for each of the eleven slots below `count` (except `skip`) when `enabled` is 1 and the slot check passes. */
void uiSpawnSlotMarkers(UiOrigin *origin, int count, int firstSlot, int slotBase, int skip, int enabled)
{
    int i;
    int originX = origin->x;
    int originY = origin->y;

    for (i = 0; i < 11; i++) {
        UiPos *slotPos = asdTMTexTableEntryAt(0x2E, i + 0xD1);

        if (count > i && i != skip && enabled == 1) {
            FUN_00344bc8(slotBase + (i + firstSlot));
            if (gameDataToggleFlagIsSet() != 0) {
                UiPos *marker = asdTMTexTableEntryAt(0x14, 0x58E);

                FUN_00164b5c(2, 0x14, 7, slotPos->x + marker->x + originX, slotPos->y + marker->y + originY, 0xC);
            }
        }
    }
}

} /* extern "C" */
