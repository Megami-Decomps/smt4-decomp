/* NON_MATCHING: bank/category register lifetimes and changed-bit address computation differ from retail. */
#include "common.h"

struct FlagValueDescription {
    /* 0x00 */ s32 firstId;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 category;
    /* 0x09 */ u8 storageType;
};
struct FlagValueStorage {
    /* 0x0000 */ u8 bank0[0xf0];
    /* 0x00F0 */ u8 bank1[0x78];
    /* 0x0168 */ u8 bank2[0xf0];
    /* 0x0258 */ u8 bank3[0xf0];
    /* 0x0348 */ u8 bank4[0xf0];
    /* 0x0438 */ u8 bank5[0xf0];
    /* 0x0528 */ u8 bank6[0xf0];
    /* 0x0618 */ u8 bank7[0xf0];
    /* 0x0708 */ u8 bank8[0x64];
    /* 0x076C */ u8 bank9[0x190];
    /* 0x08FC */ u8 bank10[0x640];
    /* 0x0F3C */ u8 bank12[0x80];
    /* 0x0FBC */ u8 changed[252];
};

extern "C" void FUN_0041849c(u16 id);
extern "C" FlagValueDescription *FUN_0019c06c(s32 id);
extern "C" FlagValueStorage *flagValueGetStorage(void);
extern "C" u32 FUN_001774d8(s32 id);

/* Add to a capped numeric flag, or set a boolean flag, and record the changed id. */
extern "C" void flagValueAdd(s32 id, u32 amount)
{
    if (amount == 0)
        return;
    FUN_0041849c((u16)id);
    FlagValueDescription *description = FUN_0019c06c(id);
    if (description == NULL)
        return;
    u8 category = description->category;
    FlagValueStorage *storage = flagValueGetStorage();
    u8 *bank;
    switch (category) {
    case 1: bank = storage->bank1; break;
    case 2: bank = storage->bank2; break;
    case 3: bank = storage->bank3; break;
    case 4: bank = storage->bank4; break;
    case 5: bank = storage->bank5; break;
    case 6: bank = storage->bank6; break;
    case 7: bank = storage->bank7; break;
    case 8: bank = storage->bank8; break;
    case 9: bank = storage->bank9; break;
    case 10: bank = storage->bank10; break;
    case 12: bank = storage->bank12; break;
    case 0: bank = storage->bank0; break;
    default: bank = NULL; break;
    }
    s32 index = id - description->firstId;
    switch (description->storageType) {
    case 0:
        bank[index / 8] |= 1u << (index % 8);
        break;
    case 1: {
        u32 maximum = FUN_001774d8(id);
        u16 *value = &((u16 *)bank)[index];
        u32 sum = *value + amount;
        if (sum >= maximum)
            *value = maximum;
        else
            *value = sum;
        break;
    }
    }
    storage = flagValueGetStorage();
    s32 changedByte = (id - 1) >> 3;
    if ((u32)changedByte < 252)
        storage->changed[changedByte] |= 1u << ((id - 1) & 7);
}
