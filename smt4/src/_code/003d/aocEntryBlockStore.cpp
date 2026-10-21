#include "common.h"

extern "C" {

extern u32 dataTableGetAocEntryBlock(u32 a, u32 b, u8 flag, u32 c);

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ u32 result;
} Obj;

void aocEntryBlockStore(Obj *obj, u32 b, u32 a, int flag, u32 c)
{
    obj->result = dataTableGetAocEntryBlock(a, b, flag != 0, c);
}

} /* extern "C" */
