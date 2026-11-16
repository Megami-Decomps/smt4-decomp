#include "common.h"

extern "C" {

typedef struct MapBlock {
    /* 0x000 */ u8 unk000[0xCF0];
    /* 0xCF0 */ u8 bits[1]; /* bit tables, 8 bytes per group */
} MapBlock;

extern MapBlock *saveGetFlagRowTable(void);

/* Sets or clears bit `bit` of a bit table. */
static __inline void bitTableSet(u8 *table, u32 bit, s32 set)
{
    u8 *byte = table + (bit >> 3);
    u8 mask = 1 << (bit & 7);

    if (set != 0) {
        *byte = mask | *byte;
    } else {
        *byte = *byte & ~mask;
    }
}

/* Sets or clears bit `bit` of group `group`'s bit table. */
void FUN_0024c2a8(s32 group, u32 bit, s32 set)
{
    bitTableSet(saveGetFlagRowTable()->bits + group * 8, bit, set);
}

}
