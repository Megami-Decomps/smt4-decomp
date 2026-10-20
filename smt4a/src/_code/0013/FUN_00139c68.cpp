#include "common.h"

extern "C" {

typedef struct Global5b3bf4 {
    /* 0x00 */ u8 unk00[0x7C];
    /* 0x7C */ u32 value;
} Global5b3bf4;
extern Global5b3bf4 DAT_005b3bf4;

void FUN_0018d9f0(u32 *slot, u32 allocator, u32 value);
u32 asdMemoryGetDefaultAllocator(void);

/* Stores `value` at 0x7C of the global and registers it with the default allocator. */
void FUN_00139c68(u32 value)
{
    u32 allocator;

    DAT_005b3bf4.value = value;
    allocator = asdMemoryGetDefaultAllocator();
    FUN_0018d9f0(&DAT_005b3bf4.value, allocator, DAT_005b3bf4.value);
}

} /* extern "C" */
