#include "common.h"
#include "code/Code003d_Smt4.h"

struct NameSlot {
    u8 code;            // 0x00
    u8 unk01[3];
    const char *name;   // 0x04
    u8 record[0x84];    // 0x08
};

struct NameOwner {
    u8 unk0000[0x2cdc];
    NameSlot slots[5];  // 0x2cdc
};

extern "C" {

u8 keyedRecordRegisterName(void *record);
u8 FUN_00249e54(u32 code, const char *name);
void FUN_0024679c(void);

// Register every slot whose name starts with "VER" and refresh its code.
u32 FUN_003dbe68(NameOwner *owner)
{
    for (s32 i = 0; i < 5; i++) {
        NameSlot *slot = &owner->slots[i];
        const char *name = slot->name;
        if (name[0] == 'V' && name[1] == 'E' && name[2] == 'R') {
            slot->code = keyedRecordRegisterName(slot->record);
            slot->code = FUN_00249e54(slot->code, name);
        }
    }
    FUN_0024679c();
    return 1;
}

} /* extern "C" */
