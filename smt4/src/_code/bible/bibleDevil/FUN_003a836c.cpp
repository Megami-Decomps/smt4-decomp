/* NON_MATCHING: the 0x5A8 icon offset literal is loaded before the selection store instead of after it (pool order swaps). */
#include "common.h"
#include "status/StatusCamera.h"
#include "bible/bibleDevil.h"

extern "C" {

typedef struct BibleDevilIcon {
    /* 0x00 */ u16 devilId;
} BibleDevilIcon;

typedef struct BibleDevilScreen {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 state;
    /* 0x018 */ s32 step;
    /* 0x01C */ u8 unk01C[0x58C];
    /* 0x5A8 */ BibleDevilIcon icon;
} BibleDevilScreen;

typedef struct BibleDevilType {
    u8 kind : 7;
    u8 variant : 1;
} BibleDevilType;

typedef struct BibleDevilRecord {
    /* 0x00 */ u8 unk00[0xF];
    /* 0x0F */ BibleDevilType type;
} BibleDevilRecord;

typedef struct BibleCursor {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 selection;
} BibleCursor;

extern BibleCursor DAT_0043d9c8;

s32 useCounterIsFinished(void);
void useCounterRelease(void);
void buttonHelpSetPreset(s32 preset);
void FUN_0022e0fc(BibleDevilIcon *icon, s8 animation);
void FUN_0022d1a8(BibleDevilScreen *screen);

/* Waits for the use counter; when it finishes, returns to state 2, otherwise refreshes the devil icon. */
void FUN_003a836c(BibleDevilScreen *screen)
{
    if (useCounterIsFinished()) {
        useCounterRelease();
        buttonHelpSetPreset(45);
        FUN_002a0cc8(0);
        screen->state = 2;
        screen->step = 0;
        return;
    }
    if (useCounterGetCurrentValue() == 75) {
        return;
    }
    DAT_0043d9c8.selection = -1;
    if (screen->icon.devilId != 0) {
        BibleDevilType *type = &reinterpret_cast<BibleDevilRecord *>(FUN_002a0d0c())->type;
        s8 animation;

        switch (type->kind) {
        case 1:
            animation = 6;
            break;
        case 2:
            animation = 4;
            break;
        case 3:
            animation = 22;
            break;
        case 7:
            animation = 24;
            break;
        default:
            type->kind = 1;
            animation = 6;
            break;
        }
        if (type->variant) {
            animation++;
        }
        FUN_0022e0fc(&screen->icon, animation);
    }
    FUN_0022d1a8(screen);
}

} /* extern "C" */
