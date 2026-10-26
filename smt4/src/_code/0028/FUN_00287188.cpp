#include "common.h"
#include "code/Code0028_Smt4.h"

extern "C" {

typedef struct SupportUnitData {
    /* 0x000 */ u8 unk000[0x604];
    /* 0x604 */ s16 unit;
    /* 0x606 */ u16 slot;
} SupportUnitData;

typedef struct SupportUnitEntry {
    /* 0x00 */ u8 unk00[0x5a];
    /* 0x5A */ s16 portrait;
} SupportUnitEntry;

typedef struct CampScreen {
    /* 0x0000 */ u8 unk0000[0x3410];
    /* 0x3410 */ s32 portraits[3];
    /* 0x341C */ u8 unk341c[0x5714 - 0x341c];
    /* 0x5714 */ s16 touchRegionCount;
    /* 0x5716 */ u8 unk5716[0x59bc - 0x5716];
    /* 0x59BC */ void *buffer;
} CampScreen;

void asdMemFree(void *block);
void FUN_00205bf4(void);
void FUN_002958f8(s16 portrait, s32 a);
s32 FUN_002b6ad0(void);
SupportUnitData *gameGetSupportUnitData(void);
SupportUnitEntry *supportUnitGetEntry(s16 unit, u16 slot);
void ifTouchRegionRemove(void);
void buttonHelpRelease(void);
void buttonHelpTexturesUnref(void);

/* Tears the screen down: frees its buffer, releases its portraits (and the support unit's), touch regions and button help. */
void FUN_00287188(CampScreen *screen)
{
    s32 i;

    if (screen->buffer != NULL) {
        asdMemFree(screen->buffer);
        screen->buffer = NULL;
    }
    FUN_00205bf4();
    FUN_002958f8(-1, 1);
    for (i = 0; i < 3; i++) {
        if (screen->portraits[i] > 0) {
            FUN_002958f8((s16)screen->portraits[i], 1);
        }
    }
    if (FUN_002b6ad0() != 0) {
        u16 slot = gameGetSupportUnitData()->slot;
        FUN_002958f8((s16)(supportUnitGetEntry(gameGetSupportUnitData()->unit, slot)->portrait + 1), 0);
    }
    for (i = 0; i < screen->touchRegionCount; i++) {
        ifTouchRegionRemove();
    }
    screen->touchRegionCount = 0;
    buttonHelpRelease();
    buttonHelpTexturesUnref();
}

} /* extern "C" */
