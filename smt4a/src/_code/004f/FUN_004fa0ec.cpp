#include "common.h"
#include "shard/W6_W6Match7_KeyedRecordStorage.h"

struct NameSlot {
    u8 code;            // 0x00
    u8 unk01[3];
    const char *name;   // 0x04
    u8 record[0x84];    // 0x08
};

struct NameOwner {
    u8 unk0000[0x3284];
    NameSlot slots[2];  // 0x3284
};

extern "C" {

u8 FUN_003478dc(u32 code, const char *name);
void textureCachePollReady(void);

// Register every slot whose name starts with "VER" and refresh its code.
u32 FUN_004fa0ec(NameOwner *owner)
{
    for (s32 i = 0; i < 2; i++) {
        NameSlot *slot = &owner->slots[i];
        const char *name = slot->name;
        if (name[0] == 'V' && name[1] == 'E' && name[2] == 'R') {
            slot->code = keyedRecordRegisterName((const char *)slot->record);
            slot->code = FUN_003478dc(slot->code, name);
        }
    }
    textureCachePollReady();
    return 1;
}

} /* extern "C" */
