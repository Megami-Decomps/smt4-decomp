#include "shard/Shard0031.h"

extern "C" {

extern Player1C *FUN_001801a4(void);
extern SlotTable *FUN_001ab888(void);
extern Lookup62 *FUN_001ab854(s8 slot);
extern s32 FUN_0017760c(Lookup62 *entry);
extern Lookup62 *FUN_003e4d68(u32 index);
extern u32 FUN_00187168(Lookup62 *entry);

/* True when the amount asked for is more than what is held (id < 0: the player value). */
u32 heldAmountLessThan(s32 amount, u32 id)
{
    Lookup62 *entry;
    SlotTable *table;
    s32 i;
    u32 j;

    if ((s32)id < 0) {
        if (FUN_001801a4()->value < amount) {
            return 1;
        }
    } else {
        table = FUN_001ab888();
        for (i = 0; i < 0x18; i++) {
            if (table->slots[i] >= 0 && (entry = FUN_001ab854(table->slots[i])) != NULL && entry->id == id) {
                if (FUN_0017760c(entry) < amount) {
                    return 1;
                }
                return 0;
            }
        }
        for (j = 0; (s32)j < 0xC; j++) {
            entry = FUN_003e4d68(j & 0xFFFF);
            if (entry != NULL && FUN_00187168(entry) == 0 && entry->id == id) {
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
