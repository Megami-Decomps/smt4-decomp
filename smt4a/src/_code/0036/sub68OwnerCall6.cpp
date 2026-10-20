#include "shard/Shard0036.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;
extern s32 stateSetterSetState15(u8 *sub);

void sub68OwnerCall6(void)
{
    if (DAT_00587f28 != NULL) {
        stateSetterSetState15(DAT_00587f28->sub);
    }
}

} /* extern "C" */
