#include "shard/Shard0038.h"

extern "C" {

typedef struct Obj14 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
} Obj14;

extern u32 FUN_0020214c(u32 arg);
extern Obj14 *FUN_003a4448(void);

void FUN_00387350(u32 arg)
{
    u32 value = FUN_0020214c(arg);
    Obj14 *obj = FUN_003a4448();

    obj->unk14 = value;
}

} /* extern "C" */
