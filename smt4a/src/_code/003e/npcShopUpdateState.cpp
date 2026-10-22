#include "common.h"

struct NpcShopUpdateState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 state;
    /* 0x08 */ s32 step;
    /* 0x0C */ s32 previousState;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ void *scriptTable;
    /* 0x18 */ void *scriptProcess;

    void changeState(s32 next)
    {
        previousState = state;
        state = next;
        step = 0;
    }
};
extern "C" {
void FUN_003e600c(NpcShopUpdateState *shop);
void npcShopUpdateSelectionScript(NpcShopUpdateState *shop);
void FUN_003e618c(NpcShopUpdateState *shop);
void FUN_003e647c(NpcShopUpdateState *shop);
void FUN_003e65a4(NpcShopUpdateState *shop);
s32 tableGroupFindEntryIndex(void *table, const char *name);
void scrScriptProcessStartEntry(void *process, s32 index);
s32 scrRunOpcodesStub(void *process);
extern const char DAT_00533344[];
extern const char DAT_005332b4[];
}

static inline void startShopEntry(NpcShopUpdateState *shop, const char *name)
{
    s32 entry = tableGroupFindEntryIndex(shop->scriptTable, name);
    if (entry >= 0) {
        scrScriptProcessStartEntry(shop->scriptProcess, entry);
    }
    ++shop->step;
}

/* Advance the NPC shop's opening, selection, transaction, and closing states. */
extern "C" s32 npcShopUpdateState(NpcShopUpdateState *shop)
{
    switch (shop->state) {
    case 1:
        FUN_003e600c(shop);
        break;
    case 2:
        switch (shop->step) {
        case 0:
            startShopEntry(shop, DAT_00533344);
            /* The opening script may run on its first update. */
        case 1:
            if (scrRunOpcodesStub(shop->scriptProcess) == 2) {
                shop->changeState(3);
            }
            break;
        }
        break;
    case 3:
        npcShopUpdateSelectionScript(shop);
        break;
    case 4:
        FUN_003e618c(shop);
        break;
    case 5:
        FUN_003e647c(shop);
        break;
    case 6:
        FUN_003e65a4(shop);
        break;
    case 7:
        switch (shop->step) {
        case 0:
            startShopEntry(shop, DAT_005332b4);
            break;
        case 1:
            if (scrRunOpcodesStub(shop->scriptProcess) == 2) {
                shop->changeState(8);
            }
            break;
        }
        break;
    }
    return 0;
}
