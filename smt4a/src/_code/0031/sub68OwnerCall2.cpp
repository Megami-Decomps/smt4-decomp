#include "shard/Shard0031.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;
extern s32 stateSetterIsState4Or6Or16(u8 *sub);

void sub68OwnerCall2(void)
{
    if (DAT_00587f28 != NULL) {
        stateSetterIsState4Or6Or16(DAT_00587f28->sub);
    }
}

} /* extern "C" */
