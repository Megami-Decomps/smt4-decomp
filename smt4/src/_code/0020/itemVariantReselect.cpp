#include "common.h"

extern "C" {

typedef struct Variant {
    /* 0x00 */ s32 id;
} Variant;

typedef struct Item {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 id;
    /* 0x22 */ u8 unk22[8];
    /* 0x2A */ u8 variant;       /* selected variant index, 0 = unset */
    /* 0x2B */ u8 unk2B;
} Item;                          /* 0x2C bytes */

typedef struct Owner Owner;

u32 FUN_00254484(void);
u32 FUN_002ac068(Owner *owner, u32 index);
Item *dataTableGetEntries(void);
u32 dataTableGetCount(u32 arg);

/* For each item of the owner's list that already has a variant set, re-selects the variant (1..count-1) whose id matches the item's id. */
void itemVariantReselect(Owner *owner)
{
    u32 variantCount = FUN_00254484();
    u32 base = FUN_002ac068(owner, 0);
    Item *item = dataTableGetEntries();
    u32 itemCount = dataTableGetCount(base);
    u32 i;

    for (i = 0; i < itemCount; i++) {
        if (item->variant != 0) {
            u32 v;

            for (v = 1; v < variantCount; v++) {
                Variant *variant;

                FUN_002ac068(owner, v);
                variant = (Variant *)dataTableGetEntries();
                if (variant->id == item->id) {
                    item->variant = v;
                    break;
                }
            }
        }
        item++;
    }
}

} /* extern "C" */
