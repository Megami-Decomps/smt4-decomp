/* NON_MATCHING: retail reads the offer's reward/payment/cost as packed word pairs (ldm + shifts) and reloads the row for the exchange, keeps the step constants in r5/r6/r9 and merges the step-99 tail with the entry-start inline; this build reads halfwords and allocates registers differently. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "code/Code0035.h"

struct ScriptProcess;

namespace {
/* One exchange offer: the item received, the item paid and how many of it. */
struct NpcShopExchangeRow {
    u8 unk00[6];
    u16 reward;     /* 0x06 */
    u16 payment;    /* 0x08 */
    u16 cost;       /* 0x0a */
};

struct NpcShopExchangeWork {
    u32 unk00;
    s32 state;
    s32 step;
    s32 previousState;
    u32 screen;
    void *bytecode;
    ScriptProcess *script;
    u32 unk1c;
    NpcShopExchangeRow offers[3];
    u8 unk44[8];
    s32 selected;
};
}

extern "C" {
const char *FUN_0015f858(u32 id, s32 mode);
void FUN_003c1060();
void FUN_003c3e14();
s32 FUN_001ba3d4(u32 id);
s32 itemGetStackLimit(u32 id);
void flagValueSub(u32 id, u32 count);
void flagValueAdd(u32 id, s32 count);
void screenStartOrClear(u32 screen, s32 kind);
s32 tableGroupFindEntryIndex(void *table, const char *name);
void scrScriptProcessStartEntry(ScriptProcess *script, s32 entry);
s32 scrRunOpcodesStub(ScriptProcess *script);
bool panelIsMissingOrFlagClear();
s32 messageGetChoiceResult();
}

static __inline void npcShopStartEntry(NpcShopExchangeWork *work, const char *name)
{
    s32 entry = tableGroupFindEntryIndex(work->bytecode, name);
    if (entry >= 0) {
        scrScriptProcessStartEntry(work->script, entry);
    }
}

static __inline void npcShopChangeState(NpcShopExchangeWork *work, s32 state)
{
    work->previousState = work->state;
    work->state = state;
    work->step = 0;
}

/* Exchange screen of an NPC shop: shows the selected offer, checks the stack limit and the payment,
   hands the exchange over and returns to the selection. */
extern "C" void FUN_003e618c(NpcShopExchangeWork *work)
{
    switch (work->step) {
    case 0: {
        NpcShopExchangeRow *offer = &work->offers[work->selected];
        if (offer->reward != 0) {
            FUN_003180c4(0, FUN_0015f858(offer->reward, 0));
        }
        if (offer->payment != 0) {
            FUN_003180c4(1, FUN_0015f858(offer->payment, 0));
        }
        FUN_00359974(24, offer->cost, -1, 0);
        FUN_003c1060();
        npcShopStartEntry(work, "npcShop_ExChange");
        work->step++;
        break;
    }
    case 1:
        if (scrRunOpcodesStub(work->script) == 2 && panelIsMissingOrFlagClear()) {
            if (messageGetChoiceResult() == 0) {
                work->step = 2;
            } else {
                work->step = 99;
            }
            FUN_003c3e14();
        }
        break;
    case 2: {
        NpcShopExchangeRow *offer = &work->offers[work->selected];
        if (FUN_001ba3d4(offer->reward) >= itemGetStackLimit(offer->reward)) {
            npcShopStartEntry(work, "npcShop_HaveMax");
            work->step = 3;
        } else if (FUN_001ba3d4(offer->payment) < offer->cost) {
            npcShopStartEntry(work, "npcShop_Notenough");
            work->step = 3;
        } else {
            flagValueSub(offer->payment, offer->cost);
            FUN_00359974(24, FUN_001ba3d4(0x7c4), -1, 0);
            FUN_00359974(25, FUN_001ba3d4(0x7c5), -1, 0);
            FUN_00359974(26, FUN_001ba3d4(0x7c6), -1, 0);
            screenStartOrClear(work->screen, 21);
            flagValueAdd(offer->reward, 1);
            work->step = 99;
        }
        break;
    }
    case 3:
        if (scrRunOpcodesStub(work->script) == 2) {
            work->step = 99;
        }
        break;
    case 99:
        npcShopStartEntry(work, "npcShop_Other01");
        npcShopChangeState(work, 3);
        break;
    }
}
