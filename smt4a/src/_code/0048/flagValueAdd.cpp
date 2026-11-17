/* NON_MATCHING: only the final changed-bit update's registers differ (retail loads the byte into r3 and the 1 into r2); same remaining difference as smt4 FUN_00295a18. */
#include "common.h"
#include "shard/ItemStackLimit.h"

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
extern "C" FlagValueStorage *flagValueGetStorage(void);
extern "C" u32 itemGetStackLimit(s32 id);

/* The storage bank of a flag category. */
static __inline u8 *flagValueBank(FlagValueStorage *storage, u8 category)
{
    switch (category) {
    case 0: return storage->bank0;
    case 1: return storage->bank1;
    case 2: return storage->bank2;
    case 3: return storage->bank3;
    case 4: return storage->bank4;
    case 5: return storage->bank5;
    case 6: return storage->bank6;
    case 7: return storage->bank7;
    case 8: return storage->bank8;
    case 9: return storage->bank9;
    case 10: return storage->bank10;
    case 12: return storage->bank12;
    default: return NULL;
    }
}

/* Add to a capped numeric flag, or set a boolean flag, and record the changed id. */
extern "C" void flagValueAdd(s32 id, u32 amount)
{
    if (amount == 0)
        return;
    FUN_0041849c((u16)id);
    FlagValueDescription *description = reinterpret_cast<FlagValueDescription *>(itemCategoryFindByItemId(id));
    u8 category = description ? description->category : 0;
    if (description != NULL) {
        FlagValueStorage *storage = flagValueGetStorage();
        u8 *bank = flagValueBank(storage, category);
        s32 index = id - description->firstId;
        switch (description->storageType) {
        case 0: {
            u8 *byte = &bank[index / 8];
            *byte |= 1u << (index % 8);
            break;
        }
        case 1: {
            u32 maximum = itemGetStackLimit(id);
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
        s32 changed = id - 1;
        if ((u32)(changed >> 3) < 252)
            storage->changed[changed >> 3] |= (u8)(1u << (changed & 7));
    }
}
