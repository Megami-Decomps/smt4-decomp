/* NON_MATCHING: 52 lines (188 vs 188 rows): by-value offer copies, currency flag reads, and string literals match; retail hoists constants 0/2 into r5/r6 ahead of the switch and shares the second script start tail in case 2 instead of the first. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "code/Code0035.h"
#include "code/Code003c_Smt4a.h"
#include "script/ScriptEntry.h"

struct ScriptProcess;

namespace {
/* One exchange offer: the item received, the item paid and how many of it. */
struct NpcShopExchangeRow {
    u8 unk00[4];
    u16 unk04;
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
const char *dataFindKindRecordWithAocOverrides(u32 id, s32 mode);
s32 flagValueRead(u32 id);
s32 itemGetStackLimit(u32 id);
void flagValueSub(u32 id, u32 count);
void flagValueAdd(u32 id, u32 count);
void screenStartOrClear(u32 screen, s32 kind);
s32 tableGroupFindEntryIndex(void *table, const char *name);
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
 * hands the exchange over and returns to the selection. */
extern "C" void npcShopExchangeStep(NpcShopExchangeWork *work)
{
    switch (work->step) {
    case 0:
        if (work->offers[work->selected].reward != 0) {
            scrSetStringSlot(0, dataFindKindRecordWithAocOverrides(work->offers[work->selected].reward, 0));
        }
        if (work->offers[work->selected].payment != 0) {
            scrSetStringSlot(1, dataFindKindRecordWithAocOverrides(work->offers[work->selected].payment, 0));
        }
        entryTableResetAndInit(24, work->offers[work->selected].cost, -1, 0);
        messageMainRequestBanner();
        npcShopStartEntry(work, "npcShop_ExChange");
        work->step++;
        break;
    case 1:
        if (scrRunOpcodesStub(work->script) == 2 && panelIsMissingOrFlagClear()) {
            if (messageGetChoiceResult() == 0) {
                work->step = 2;
            } else {
                work->step = 99;
            }
            messageMainClearBannerRequest();
        }
        break;
    case 2: {
        NpcShopExchangeRow offer = work->offers[work->selected];
        if (flagValueRead(offer.reward) >= itemGetStackLimit(offer.reward)) {
            npcShopStartEntry(work, "npcShop_HaveMax");
            work->step = 3;
        } else if (flagValueRead(offer.payment) < offer.cost) {
            npcShopStartEntry(work, "npcShop_NotEnough");
            work->step = 3;
        } else {
            NpcShopExchangeRow chosen = work->offers[work->selected];
            flagValueSub(chosen.payment, chosen.cost);
            s32 counts[3];
            counts[0] = flagValueRead(0x7c4);
            counts[1] = flagValueRead(0x7c5);
            counts[2] = flagValueRead(0x7c6);
            entryTableResetAndInit(24, counts[0], -1, 0);
            entryTableResetAndInit(25, counts[1], -1, 0);
            entryTableResetAndInit(26, counts[2], -1, 0);
            screenStartOrClear(work->screen, 21);
            flagValueAdd(chosen.reward, 1);
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
