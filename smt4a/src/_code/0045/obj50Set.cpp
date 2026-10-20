#include "shard/Shard0045.h"

extern "C" {

typedef struct Obj50 {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 unk50;
    /* 0x54 */ u8 unk54[0x49];
    /* 0x9D */ u8 unk9D;
} Obj50;

void obj50Set(Obj50 *obj, u8 flag, u32 value)
{
    obj->unk50 = value;
    obj->unk9D = flag;
}

} /* extern "C" */
