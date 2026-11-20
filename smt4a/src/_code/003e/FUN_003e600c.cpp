/* NON_MATCHING: the state-entry helper gives retail's final state stores; remaining: the offer pair loads as LDM (retail two ldr), and the offer-copy and item-count registers differ. */
#include "gamedata/DataTable.h"
#include "script/scrScriptProcess.h"
#include "code/Code0035.h"
#include "ui/UiControl.h"

struct ItemExchangeOffer {
    u32 key;
    u32 first;
    u32 second;
};
struct ItemExchangeWork {
    u32 unk00;
    s32 state;
    s32 timer;
    s32 previousState;
    void *screen;
    void *scriptResource;
    ScriptProcess *script;
    u32 unk1C;
    u32 key;
    ItemExchangeOffer offers[3];
};
extern "C" {
s32 loadSlotIsLoaded(u32 slot);
u32 flagValueRead(u32 item);

/* Moves the exchange work to `state`, remembering the state it left and restarting its timer. */
static inline void itemExchangeEnterState(ItemExchangeWork *work, u32 state)
{
    work->previousState = work->state;
    work->state = state;
    work->timer = 0;
}

/* Starts the loaded exchange script, collects up to three offers and publishes the three held-item counts. */
void FUN_003e600c(ItemExchangeWork *work)
{
    if (work->screen != NULL && work->scriptResource != NULL && loadSlotIsLoaded(0x4F) != 0) {
        work->script = scrScriptProcessCreate(work->scriptResource, work->screen);
        work->script->mode = 2;
        u32 key = work->key;
        void *table = dataTableGet(0x4F, 0);
        ItemExchangeOffer *records = (ItemExchangeOffer *)dataTableGetEntries(table);
        if (records != NULL) {
            s32 count = dataTableGetCount(table);
            for (s32 index = 0; index < 3; ++index) {
                work->offers[index].key = 0;
                work->offers[index].first = 0;
                work->offers[index].second = 0;
            }
            s32 matches = 0;
            for (s32 index = 0; index < count; ++index) {
                ItemExchangeOffer offer = records[index];
                if ((offer.key & 0xFFFF) == key) {
                    work->offers[matches] = offer;
                    ++matches;
                    if (matches >= 3) {
                        break;
                    }
                }
            }
        }
        u32 first = flagValueRead(0x7C4);
        u32 second = flagValueRead(0x7C5);
        u32 third = flagValueRead(0x7C6);
        entryTableResetAndInit(0x18, first, 0xFFFFFFFF, 0);
        entryTableResetAndInit(0x19, second, 0xFFFFFFFF, 0);
        entryTableResetAndInit(0x1A, third, 0xFFFFFFFF, 0);
        screenStartOrClear(reinterpret_cast<s32>(work->screen), 0x15);
        itemExchangeEnterState(work, 3);
    }
}
}
