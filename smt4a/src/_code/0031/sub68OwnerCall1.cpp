#include "shard/Shard0031.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;
extern s32 stateSetterFlagsClear(u8 *sub);

void sub68OwnerCall1(void)
{
    if (DAT_00587f28 != NULL) {
        stateSetterFlagsClear(DAT_00587f28->sub);
    }
}

} /* extern "C" */
