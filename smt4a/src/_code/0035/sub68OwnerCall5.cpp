#include "shard/Shard0035.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;
extern s32 block3E6OwnerClear(u8 *sub);

void sub68OwnerCall5(void)
{
    if (DAT_00587f28 != NULL) {
        block3E6OwnerClear(DAT_00587f28->sub);
    }
}

} /* extern "C" */
