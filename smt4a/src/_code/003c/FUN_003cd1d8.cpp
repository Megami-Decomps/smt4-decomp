/* NON_MATCHING: instruction-identical; retail's literal pool holds two extra unreferenced words (0x634bc0) before the DAT_00634bc0 word that all three uses load. */
#include "common.h"

extern "C" {

typedef struct Owner {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 offset;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u32 table;
} Owner;

typedef struct Child {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 offset;
} Child;

extern u8 DAT_00634bc0[0x90];

void *FUN_00300778(u32 table, s32 index);
void rt_memcpy_w(void *dest, const void *src, u32 size);
u32 FUN_003c0780(u8 *record, s32 arg);

/* Runs FUN_003c0780 on a scratch copy of the table record for (owner, child) and writes the record back;
 * returns its result with bit 23 set when bit 0 is. */
u32 FUN_003cd1d8(Owner *owner, Child *child)
{
    s32 base = owner->offset;
    void *record = FUN_00300778(owner->table, child->offset + base);
    u32 result;

    rt_memcpy_w(DAT_00634bc0, record, 0x90);
    result = FUN_003c0780(DAT_00634bc0, 1);
    rt_memcpy_w(record, DAT_00634bc0, 0x90);
    if (result & 1) {
        result |= 0x800000;
    }
    return result;
}

} /* extern "C" */
