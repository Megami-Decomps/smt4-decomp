#include "shard/Shard003C.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;
extern s32 FUN_002bf18c(u8 *sub, u32 value);

void sub68OwnerCall11(u32 value)
{
    if (DAT_00587f28 != NULL) {
        FUN_002bf18c(DAT_00587f28->sub, value);
    }
}

} /* extern "C" */
