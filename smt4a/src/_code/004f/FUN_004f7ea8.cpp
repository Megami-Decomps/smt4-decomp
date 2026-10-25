#include "common.h"
#include "gamedata/Table04Record.h"

extern "C" {

typedef struct Owner {
    /* 0x0000 */ u8 unk0000[0x1F54];
    /* 0x1F54 */ u32 first;
    /* 0x1F58 */ u32 second;
} Owner;

extern u32 FUN_00335660(u32 a, void *record, s32 flag);

/* Stores the results of FUN_00335660 for the id's record with and without the flag at 0x1f54 and 0x1f58. */
void FUN_004f7ea8(Owner *owner, u32 id, u32 a, s32 flag)
{
    void *record = dataTable04FindById(id);

    owner->first = FUN_00335660(a, record, flag != 0);
    owner->second = FUN_00335660(a, record, 0);
}

} /* extern "C" */
