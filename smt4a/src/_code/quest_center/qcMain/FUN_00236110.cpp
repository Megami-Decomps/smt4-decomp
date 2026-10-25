/* NON_MATCHING: retail reaches the quest-center globals (DAT_00588c30 block, +4/+8/+0x10 fields) through one base register and orders the flag-chain tests with shared branch targets; this version loads each global separately. The state machine, calls and stored values are the same. */
#include "common.h"
#include "shard/FUN_0021c118.h"

namespace {
/* The quest center's main block: its state, the active flag and the screen object. */
struct QuestCenterMain {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 finished;
    /* 0x19 */ u8 state;
    /* 0x1a */ u8 unk1a[2];
    /* 0x1c */ u32 *screen;              /* the screen object; its first word's bit 0 is "done" */
};
}

extern "C" {
extern QuestCenterMain *DAT_00588c30;
extern s32 DAT_00588c34;                 /* which quest center was opened */
extern s32 DAT_00588c38;
extern s32 DAT_00588c3c;                 /* non-zero: opened from inside another menu */
extern u8 DAT_00588c2d;
extern u8 DAT_005f19f1;                  /* a deferred place change is pending */
extern u8 DAT_005f1a00;
extern u32 DAT_005f19f4;
extern u32 DAT_005f19f8;
extern u32 DAT_005f19fc;
extern s32 DAT_005f1a50;
extern u8 DAT_005f1b70;
extern s32 DAT_005f1b74;
void *asdOperatorNew(u32 size);
void asdOperatorDelete(void *block);
s32 bgmGetStateById(u32 id);
void FUN_003d4c68(u32 id);
void FUN_003d54f8(s32 a, s32 b);
void bgmStopWithoutEntry(void);
s32 gameFlagIsSet(u32 flag);
void campCommonBgAcquire(void);
void campCommonBgRelease(void);
void campButtonHelpLoad(void);
void campButtonHelpAcquire(void);
void campButtonHelpRelease(void);
void helpTexturesRelease(void);
void FUN_003b61ec(void);
u32 *_ZN14SelectionFlagsC1Ev(u32 *flags);
void questCenterInitEntry(void *entry);
void FUN_0046a34c(u32 *screen, s32 which, s32 argB, s32 nested);
void _ZN9Obj5333c06updateEv(u32 *screen);
s32 entryRequestSequence(void);
s32 lmapMainGetUnk74(void);
s32 gameStateIsFlagSetAndLarge(void);
void asdSequenceRequest(u32 id, const void *data, u32 size);
void mapPlaceSet(u32 a, u32 b, u32 c);
void scriptPanelRelease(void);

/* Applies the pending place change, if any. */
static void applyPendingPlace(void)
{
    if (DAT_005f19f1 != 0) {
        DAT_005f19f1 = 0;
        DAT_005f1b70 = 0;
        DAT_005f1a00 = 1;
        mapPlaceSet(DAT_005f19f4, DAT_005f19f8, DAT_005f19fc);
        DAT_005f1a50 = 2;
    }
}

/* Frees the screen object and flags the quest center finished. */
static void finishScreen(QuestCenterMain *main)
{
    main->state = 4;
    main->finished = 1;
    if (main->screen != NULL) {
        scriptPanelRelease();
        asdOperatorDelete(main->screen);
        main->screen = NULL;
    }
}

/* Runs the quest center: starts its music and shared UI and builds the screen, updates it until it reports done,
   then restores the map place (and sequence) and releases the shared UI. Returns 0 while running, -1 when
   finished. */
u32 FUN_00236110(void)
{
    QuestCenterMain *main = DAT_00588c30;
    switch (main->state) {
    case 0: {
        if (DAT_00588c3c == 0) {
            if (DAT_00588c34 != 1) {
                if (bgmGetStateById(0x10000a3) == 1) {
                    FUN_0021c118(0x10000a3, 0xf);
                }
                s32 playing = bgmGetStateById(0x1000079);
                if ((DAT_00588c34 != 2 || gameFlagIsSet(0x71) == 0 || gameFlagIsSet(0x74) != 0) &&
                    (DAT_00588c34 != 3 || gameFlagIsSet(0x8f) == 0 || gameFlagIsSet(0x92) != 0) &&
                    (DAT_00588c34 != 4 || gameFlagIsSet(0xf4) == 0 || gameFlagIsSet(0xf6) != 0) &&
                    (DAT_00588c34 != 2 || gameFlagIsSet(0xd1) == 0 || gameFlagIsSet(0xd4) != 0)) {
                    if (playing != 1) {
                        FUN_003d4c68(0x1000079);
                    }
                }
            } else {
                if (bgmGetStateById(0x1000044) != 1) {
                    FUN_003d4c68(0x1000044);
                }
            }
            campCommonBgAcquire();
            campButtonHelpLoad();
            campButtonHelpAcquire();
            FUN_003b61ec();
        }
        u32 *screen = static_cast<u32 *>(asdOperatorNew(0xe70));
        u32 *created = NULL;
        if (screen != NULL) {
            screen[0] = 0;
            created = _ZN14SelectionFlagsC1Ev(screen + 0xd6) - 0xd6;
        }
        main->screen = created;
        questCenterInitEntry(created);
        FUN_0046a34c(main->screen, DAT_00588c34, DAT_00588c38, DAT_00588c3c);
        main->state = 1;
        break;
    }
    case 1:
        _ZN9Obj5333c06updateEv(DAT_00588c30->screen);
        if ((*main->screen & 1) != 0) {
            main->state = 3;
        }
        break;
    case 2:
        finishScreen(main);
        break;
    case 3:
        if ((main->screen == NULL || entryRequestSequence() == 0) && lmapMainGetUnk74() != 0 && DAT_00588c3c == 0) {
            if (gameStateIsFlagSetAndLarge() != 0) {
                s32 position = DAT_005f1b74 - 200;
                asdSequenceRequest(0xe, &position, 4);
            } else {
                applyPendingPlace();
                asdSequenceRequest(6, NULL, 0);
            }
        }
        if (DAT_005f19f1 != 0) {
            applyPendingPlace();
            asdSequenceRequest(6, NULL, 0);
        }
        finishScreen(main);
        if (DAT_00588c3c == 0) {
            campCommonBgRelease();
            campButtonHelpRelease();
            helpTexturesRelease();
        }
        break;
    case 4:
        if (DAT_00588c2d != 0) {
            FUN_003d54f8(0, 1);
            FUN_003d54f8(1, 0);
            bgmStopWithoutEntry();
        }
        return 0xffffffff;
    }
    return 0;
}

} /* extern "C" */
