#include "common.h"
#include "result/WhisperEffect.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "classes/SelectionState.h"
#include "quest_center/qcMain.h"

/* The quest center's screen object (0xE70 bytes): the done word, then a selection member at 0x358. */
struct QuestEntry {
    QuestEntry() : done(0) {}
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    /* 0x000 */ u32 done;
    /* 0x004 */ u8 unk004[0x354];
    /* 0x358 */ SelectionFlags flags;
    /* 0x367 */ u8 unk367[0xE70 - 0x367];
};

extern "C" {
// The fields of g_gameState this function uses.
struct GameStateView {
    u8 pad000[0x3f5];
    s8 f005f19f1; /* 0x3f5 */
    u8 pad3f6[0x2];
    u32 f005f19f4; /* 0x3f8 */
    u32 f005f19f8; /* 0x3fc */
    u32 f005f19fc; /* 0x400 */
    u8 f005f1a00; /* 0x404 */
    u8 pad405[0x4f];
    s32 f005f1a50; /* 0x454 */
    u8 pad458[0x11c];
    u8 f005f1b70; /* 0x574 */
    u8 pad575[3];
    s32 f005f1b74; /* 0x578 */
};
extern GameStateView g_gameState;

extern QcGlobalsA g_qcMain;

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
void questCenterInitEntry(void *entry);
void FUN_0046a34c(QuestEntry *screen, s32 which, s32 argB, s32 nested);
void _ZN9Obj5333c06updateEv(QuestEntry *screen);
s32 entryRequestSequence(void);
s32 lmapMainGetUnk74(void);
s32 gameStateIsFlagSetAndLarge(void);
void asdSequenceRequest(u32 id, const void *data, u32 size);
void mapPlaceSet(u32 a, u32 b, u32 c);
void scriptPanelRelease(QuestEntry *entry);

/* Applies the pending place change, if any. */
static void applyPendingPlace(void)
{
    if (g_gameState.f005f19f1 != 0) {
        g_gameState.f005f19f1 = 0;
        g_gameState.f005f1b70 = 0;
        g_gameState.f005f1a00 = 1;
        mapPlaceSet(g_gameState.f005f19f4, g_gameState.f005f19f8, g_gameState.f005f19fc);
        g_gameState.f005f1a50 = 2;
    }
}

/* Frees the screen object and flags the quest center finished. */
static void finishScreen(QcWork *work)
{
    work->mode = 4;
    QuestEntry *entry = work->entry;
    work->done = 1;
    if (entry != NULL) {
        scriptPanelRelease(entry);
        asdOperatorDelete(work->entry);
        work->entry = NULL;
    }
}

/* Runs the quest center: starts its music and shared UI and builds the screen, updates it until it reports done,
   then restores the map place (and sequence) and releases the shared UI. Returns 0 while running, -1 when
   finished. */
u32 FUN_00236110(void)
{
    QcWork *work = g_qcMain.work;
    switch (work->mode) {
    case 0: {
        if (g_qcMain.option1 == 0) {
            if (g_qcMain.entryId == 1) {
                if (bgmGetStateById(0x1000044) != 1) {
                    FUN_003d4c68(0x1000044);
                }
            } else {
                if (bgmGetStateById(0x10000a3) == 1) {
                    FUN_0021c118(0x10000a3, 0xf);
                }
                s32 playing = bgmGetStateById(0x1000079);
                if ((g_qcMain.entryId != 2 || gameFlagIsSet(0x71) == 0 || gameFlagIsSet(0x74) != 0) &&
                    (g_qcMain.entryId != 3 || gameFlagIsSet(0x8f) == 0 || gameFlagIsSet(0x92) != 0) &&
                    (g_qcMain.entryId != 4 || gameFlagIsSet(0xf4) == 0 || gameFlagIsSet(0xf6) != 0) &&
                    (g_qcMain.entryId != 2 || gameFlagIsSet(0xd1) == 0 || gameFlagIsSet(0xd4) != 0)) {
                    if (playing != 1) {
                        FUN_003d4c68(0x1000079);
                    }
                }
            }
            campCommonBgAcquire();
            campButtonHelpLoad();
            campButtonHelpAcquire();
            FUN_003b61ec();
        }
        QuestEntry *created = new QuestEntry;
        work->entry = created;
        questCenterInitEntry(created);
        FUN_0046a34c(work->entry, g_qcMain.entryId, g_qcMain.option0, g_qcMain.option1);
        work->mode = 1;
        break;
    }
    case 1:
        _ZN9Obj5333c06updateEv(g_qcMain.work->entry);
        if ((work->entry->done & 1) != 0) {
            work->mode = 3;
        }
        break;
    case 2:
        finishScreen(work);
        break;
    case 3:
        if ((work->entry == NULL || entryRequestSequence() == 0) && lmapMainGetUnk74() != 0 && g_qcMain.option1 == 0) {
            if (gameStateIsFlagSetAndLarge() != 0) {
                s32 position = g_gameState.f005f1b74 - 200;
                asdSequenceRequest(0xe, &position, 4);
            } else {
                applyPendingPlace();
                asdSequenceRequest(6, NULL, 0);
            }
        }
        if (g_gameState.f005f19f1 != 0) {
            applyPendingPlace();
            asdSequenceRequest(6, NULL, 0);
        }
        finishScreen(work);
        if (g_qcMain.option1 == 0) {
            campCommonBgRelease();
            campButtonHelpRelease();
            helpTexturesRelease();
        }
        break;
    case 4:
        if (g_qcMain.active != 0) {
            FUN_003d54f8(0, 1);
            FUN_003d54f8(1, 1);
            bgmStopWithoutEntry();
        }
        return 0xffffffff;
    }
    return 0;
}

} /* extern "C" */
