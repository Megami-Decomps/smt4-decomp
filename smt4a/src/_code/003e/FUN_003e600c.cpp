/* NON_MATCHING: The offer pair loads as LDM; offer-copy and item-count/final-state registers differ. */
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
    ScriptRunState *script;
    u32 unk1C;
    u32 key;
    ItemExchangeOffer offers[3];
};
extern "C" {
s32 loadSlotIsLoaded(u32 slot);
ScriptRunState *FUN_00275bc8(void *resource, void *screen);
u32 FUN_001ba3d4(u32 item);

/* Starts the loaded exchange script, collects up to three offers and publishes the three held-item counts. */
void FUN_003e600c(ItemExchangeWork *work)
{
    if (work->screen != NULL && work->scriptResource != NULL && loadSlotIsLoaded(0x4F) != 0) {
        work->script = FUN_00275bc8(work->scriptResource, work->screen);
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
        u32 first = FUN_001ba3d4(0x7C4);
        u32 second = FUN_001ba3d4(0x7C5);
        u32 third = FUN_001ba3d4(0x7C6);
        FUN_00359974(0x18, first, 0xFFFFFFFF, 0);
        FUN_00359974(0x19, second, 0xFFFFFFFF, 0);
        FUN_00359974(0x1A, third, 0xFFFFFFFF, 0);
        screenStartOrClear(reinterpret_cast<s32>(work->screen), 0x15);
        work->previousState = work->state;
        work->state = 3;
        work->timer = 0;
    }
}
}
