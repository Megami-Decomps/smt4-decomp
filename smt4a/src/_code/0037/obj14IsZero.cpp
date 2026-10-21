#include "shard/Shard0037.h"

extern "C" {

typedef struct Obj14 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 unk14;
} Obj14;

typedef struct Obj14Ref {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Obj14 *instance;
} Obj14Ref;

extern Obj14Ref g_engineResourceHandles;

u8 obj14IsZero(void)
{
    return g_engineResourceHandles.instance->unk14 == 0;
}

} /* extern "C" */
