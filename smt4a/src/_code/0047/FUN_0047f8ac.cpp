#include "gamedata/DataTable.h"
#include "shard/W6_W6Match5_UnitCategory.h"

extern "C" {

struct Slot;

typedef struct LinkEntry {
    u16 type;      /* 0x00: 11 links to a target */
    u8 unk02[2];
    void *target;  /* 0x04 */
    u8 unk08[8];
} LinkEntry;       /* 0x10 */

extern u32 DAT_00573cd8[];

struct Slot *saveSlotFindById(u32 id);
u32 FUN_00187168(const struct Slot *slot);
void FUN_0047f7c0(s32 index);

/* Triggers the two hooks for the slot with this id: hook 0 when its table 10 links point at target. */
void FUN_0047f8ac(u32 id, void *target)
{
    if (FUN_00187168(saveSlotFindById((u16)id))) {
        s32 section = FUN_0019acdc(id, 1);

        if (section == 4 && DAT_00573cd8[0] != 0) {
            void *resource = dataTableGet(10, section);
            LinkEntry *entries = (LinkEntry *)dataTableGetEntries(resource);
            u32 count = dataTableGetCount(resource);
            u32 i;

            for (i = 0; i < count; i++) {
                if (entries[i].type == 11 && entries[i].target == target) {
                    FUN_0047f7c0(0);
                    break;
                }
            }
        }
    }
    if (FUN_00187168(saveSlotFindById((u16)id)) && DAT_00573cd8[1] != 0) {
        FUN_0047f7c0(1);
    }
}

} /* extern "C" */
