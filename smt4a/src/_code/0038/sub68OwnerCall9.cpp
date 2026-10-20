#include "shard/Shard0038.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;
extern s32 FUN_0048ba5c(u8 *sub);

void sub68OwnerCall9(void)
{
    if (DAT_00587f28 != NULL) {
        FUN_0048ba5c(DAT_00587f28->sub);
    }
}

} /* extern "C" */
