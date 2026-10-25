#include "shard/Shard0038.h"
#include "shard/FUN_00387350.h"

extern "C" {

typedef struct Obj14 {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 unk14;
} Obj14;

extern u32 asdLoadFileSyncDefault(u32 arg);
extern Obj14 *FUN_003a4448(void);

void FUN_00387350(u32 arg)
{
    u32 value = asdLoadFileSyncDefault(arg);
    Obj14 *obj = FUN_003a4448();

    obj->unk14 = value;
}

} /* extern "C" */
