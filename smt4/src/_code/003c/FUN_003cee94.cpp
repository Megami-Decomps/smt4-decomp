/* NON_MATCHING: availability constant lifetime, saved registers and resource-dispatch block placement differ. */
#include "battle/ActionKindSelection.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "gamedata/DataTable40.h"

struct BtlMainState;
struct BattleResourceOwner;
struct BattleActionDescription {
    u32 id;
    u8 unk04[0x10];
    u32 category;
    u8 unk18[0xA];
};
struct BattleResourceLookupView { u8 unk00[0x28]; u32 attributes; };
struct BattleItemResourceView { u8 unk00[0x62]; u16 resourceId; };
extern "C" {
extern BattleResourceOwner *DAT_00435d18;
BattleActionDescription FUN_00247478(BtlMainState *, BtlEntry *);
BattleItemResourceView *dataTable08Sub1GetRecord(u32);
void aocEntryBlockStore(BattleResourceOwner *, u32, u32, s32, u32);
void objectSetResultFromLookup(BattleResourceOwner *, u32, u32, u32);
void FUN_003daf3c(BattleResourceOwner *, s32, u32, s32);

void FUN_003cee94(BtlMainState **battle, ActionKindSelection *selection)
{
    s16 kind = selection->command->kind;
    s32 resourceId = selection->command->skill;
    if (kind == 1) {
        u32 enabled = 1;
        if (reinterpret_cast<BtlEntry *>(selection->entry)->flags & 0x2A)
            enabled = 0;
        u16 id = FUN_00247478(*battle, reinterpret_cast<BtlEntry *>(selection->entry)).id;
        u8 category = FUN_00247478(*battle, reinterpret_cast<BtlEntry *>(selection->entry)).category;
        aocEntryBlockStore(DAT_00435d18, category, enabled, 0, id);
        return;
    }
    if (kind != 2 && kind != 3) {
        if (kind != 8)
            return;
        u16 itemResource = dataTable08Sub1GetRecord(resourceId)->resourceId;
        if (!itemResource) {
            u32 enabled = 1;
            if (reinterpret_cast<BtlEntry *>(selection->entry)->flags & 0x10)
                enabled = 0;
            FUN_003daf3c(DAT_00435d18, resourceId, enabled, 0);
            return;
        }
        resourceId = itemResource;
    }
    u32 category = (reinterpret_cast<BattleResourceLookupView *>(dataTable40FindById(resourceId))->attributes >> 5) & 0xF;
    bool normal = true;
    if (category == 2 || category == 3 || category == 4)
        normal = false;
    u32 enabled = 1;
    if (reinterpret_cast<BtlEntry *>(selection->entry)->flags & 0x2A)
        enabled = !normal;
    else if (reinterpret_cast<BtlEntry *>(selection->entry)->flags & 0x10)
        enabled = normal;
    objectSetResultFromLookup(DAT_00435d18, resourceId, enabled, 0);
}
}
