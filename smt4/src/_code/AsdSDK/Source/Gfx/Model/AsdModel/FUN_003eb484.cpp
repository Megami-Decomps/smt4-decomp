/* NON_MATCHING: both 64-bit stores match retail's forms (strd of -1, stm of the zero pair) but the build allocates the pairs and pool bases differently (r0/r3 and ip instead of r0/r1 and r2). */
#include "common.h"

struct ModelElementStorage {
    u8 unk00[0x40]; // 0x40 bytes per element
};

struct ModelInvalidId {
    u8 unk00[0x20]; // 0x00
    u64 value;      // 0x20
};

extern "C" {
extern ModelInvalidId DAT_00464a98;
extern u64 DAT_00464ac0;
extern ModelElementStorage DAT_004dace0[2];
extern u8 entry;

void* FUN_003f7308(void* element);
void FUN_0017f6cc(void* object);
void* __aeabi_vec_ctor_nocookie_nodtor(
    void* array, void* (*constructor)(void*), u32 elementSize, u32 elementCount);
s32 __aeabi_atexit(void* object, void (*destructor)(void*), void* module);

/* Initializes the model module's statics: the invalid id, a cleared 64-bit word and the element storage. */
s32 FUN_003eb484(void)
{
    DAT_00464a98.value = ~0ULL;
    DAT_00464ac0 = 0;
    __aeabi_vec_ctor_nocookie_nodtor(DAT_004dace0, FUN_003f7308, sizeof(ModelElementStorage), 2);
    return __aeabi_atexit(NULL, FUN_0017f6cc, &entry);
}
}
