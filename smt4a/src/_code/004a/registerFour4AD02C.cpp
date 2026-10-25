#include "shard/Shard004A.h"
#include "shard/registerFour4AD02C.h"

extern "C" {

typedef void (*Callback2)(u32 *obj, u32 arg);

extern u8 FUN_004ad02c(u32 owner, u32 mode, u32 flag, Callback2 callback);
extern void FUN_004acdb4(u32 *obj, u32 arg);
extern void FUN_004acea0(u32 *obj, u32 arg);
extern void FUN_004ad184(u32 *obj, u32 arg);
extern void FUN_004ad310(u32 *obj, u32 arg);

void registerFour4AD02C(u32 owner)
{
    FUN_004ad02c(owner, 1, 1, FUN_004acea0);
    FUN_004ad02c(owner, 3, 1, FUN_004ad310);
    FUN_004ad02c(owner, 2, 1, FUN_004acdb4);
    FUN_004ad02c(owner, 4, 1, FUN_004ad184);
}

} /* extern "C" */
