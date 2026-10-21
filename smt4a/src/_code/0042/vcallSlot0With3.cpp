#include "shard/Shard0042.h"

extern "C" {

typedef struct VObj2 VObj2;

typedef struct VVtbl2 {
    /* 0x00 */ u32 (*slot0)(VObj2 *self, u32 a, u32 c, u32 d);
} VVtbl2;

struct VObj2 {
    /* 0x00 */ const VVtbl2 *vtbl;
};

extern void FUN_001884c8(s32 value);

u32 vcallSlot0With3(u32 a, VObj2 *obj, u32 c, u32 d)
{
    if (a == 0 || obj == NULL) {
        return 0xE0E046BC;
    }
    FUN_001884c8(1);
    return obj->vtbl->slot0(obj, a, c, d);
}

} /* extern "C" */
