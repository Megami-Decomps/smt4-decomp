#include "shard/Shard004F.h"

extern "C" {

extern u32 FUN_004f716c(u32 obj);
extern u32 FUN_004f6ad4(u32 obj);
extern u32 FUN_004f828c(u32 obj);
extern u32 FUN_004f9764(u32 obj);

u32 runFourUpdates(u32 obj)
{
    FUN_004f716c(obj);
    FUN_004f6ad4(obj);
    FUN_004f828c(obj);
    FUN_004f9764(obj);
    return 1;
}

} /* extern "C" */
