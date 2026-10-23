/* NON_MATCHING: table-row copy, selection reset and mode-transition register scheduling differ. */
#include "gamedata/DataTable.h"
#include "script/scrScriptProcess.h"

struct NpcShopSelectionRecord {
    u32 key;
    f32 values[8];
};
struct NpcShopSelectionState {
    u32 unk00;
    u32 mode;
    u32 state;
    u32 previousMode;
    void *scriptData;
    void *tableGroup;
    ScriptRunState *script;
    u32 unk1c;
    NpcShopSelectionRecord selections[3]; /* 0x20 */
    u8 unk8c[0xc];
    u8 selection;                        /* 0x98 */
    u8 unk99[3];
    u32 shop;                            /* 0x9c */
};

extern "C" {
ScriptRunState *FUN_00275bc8(void *tableGroup, void *scriptData);
void scrScriptProcessStartEntry(ScriptRunState *script, s32 entry);
s32 tableGroupFindEntryIndex(void *group, const char *name);
s32 loadSlotIsLoaded(u32 slot);
extern const char DAT_0053322c[]; /* npcShop_Select_00 */

/* Start the shop's selection script and retain up to three matching table rows. */
void FUN_003e36e4(NpcShopSelectionState *shop)
{
    if (shop->scriptData && shop->tableGroup && loadSlotIsLoaded(0x4f)) {
        shop->script = FUN_00275bc8(shop->tableGroup, shop->scriptData);
        shop->script->mode = 2;
        s32 entry = tableGroupFindEntryIndex(shop->tableGroup, DAT_0053322c);
        if (entry >= 0)
            scrScriptProcessStartEntry(shop->script, entry);
        shop->selection = 0;
        u32 shopId = shop->shop;
        void *section = dataTableGet(0x4f, 1);
        NpcShopSelectionRecord *records = (NpcShopSelectionRecord *)dataTableGetEntries(section);
        if (records) {
            s32 count = (s32)dataTableGetCount(section);
            s32 selected = 0;
            for (s32 i = 0; i < count; ++i) {
                NpcShopSelectionRecord record = records[i];
                if ((u16)record.key == shopId) {
                    shop->selections[selected++] = record;
                    if (selected >= 3)
                        break;
                }
            }
        }
        shop->previousMode = shop->mode;
        shop->mode = 3;
        shop->state = 0;
    }
}
}
