#include "common.h"
#include "status/StatusCamera.h"
#include "bible/bibleDevil.h"
#include "code/Code0029_Smt4.h"
#include "classes/Obj4223c4.h"

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

extern BibleCursor g_bibleDevilCallbackContext;

void useCounterRelease(void);
void buttonHelpSetPreset(s32 preset);
void entryCollectionSortByMode(BibleDevilIcon *icon, s8 animation);
void FUN_0022d1a8(BibleDevilScreen *screen);

}

/* Redraws the screen's devil icon with the animation of the saved sort kind (reset to kind 1 when unknown). */
static __inline void iconRefresh(BibleDevilScreen *screen)
{
    if (screen->icon.devilId != 0) {
        BibleDevilType *type = &reinterpret_cast<BibleDevilRecord *>(gameDataGetSortPreferences())->type;
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
        entryCollectionSortByMode(&screen->icon, animation);
    }
}

/* Waits for the use counter; when it finishes, returns to state 2, otherwise refreshes the devil icon. */
void Obj4223c4::FUN_003a836c()
{
    BibleDevilScreen * screen = reinterpret_cast<BibleDevilScreen *>(this);
    if (useCounterIsFinished()) {
        useCounterRelease();
        buttonHelpSetPreset(45);
        gameGlobalsSetSubScreenActive(0);
        screen->state = 2;
        screen->step = 0;
        return;
    }
    if (useCounterGetCurrentValue() == 75) {
        return;
    }
    g_bibleDevilCallbackContext.selection = -1;
    iconRefresh(screen);
    FUN_0022d1a8(screen);
}
