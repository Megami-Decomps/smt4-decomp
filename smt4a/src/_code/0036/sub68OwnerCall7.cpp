#include "shard/Shard0036.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;
extern s32 block12DCOwnerStart6(u8 *sub);

void sub68OwnerCall7(void)
{
    if (DAT_00587f28 != NULL) {
        block12DCOwnerStart6(DAT_00587f28->sub);
    }
}

} /* extern "C" */
