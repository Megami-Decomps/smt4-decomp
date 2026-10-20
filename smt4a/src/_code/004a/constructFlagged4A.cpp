#include "shard/Shard004A.h"

extern "C" {

typedef struct VtblWords {
    /* 0x000 */ const void *vtbl;
    /* 0x004 */ u8 unk004[0x85C];
    /* 0x860 */ u8 unk860;
} VtblWords;

extern u8 DAT_0055c8d8;
extern u32 *FUN_004a82cc(u32 *memory);
extern void FUN_004a4bc8(VtblWords *obj);

u32 *constructFlagged4A(u32 *memory)
{
    VtblWords *obj = (VtblWords *)FUN_004a82cc(memory);

    obj->vtbl = &DAT_0055c8d8;
    FUN_004a4bc8(obj);
    obj->unk860 = 0;
    return (u32 *)obj;
}

} /* extern "C" */
