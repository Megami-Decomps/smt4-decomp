#include "shard/Shard0035.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;
extern s32 block66OwnerClear(u8 *sub);

void sub68OwnerCall4(void)
{
    if (DAT_00587f28 != NULL) {
        block66OwnerClear(DAT_00587f28->sub);
    }
}

} /* extern "C" */
