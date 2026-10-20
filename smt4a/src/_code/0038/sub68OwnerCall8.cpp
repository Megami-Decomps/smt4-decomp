#include "shard/Shard0038.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;
extern s32 stateSetterSetState16(u8 *sub);

void sub68OwnerCall8(void)
{
    if (DAT_00587f28 != NULL) {
        stateSetterSetState16(DAT_00587f28->sub);
    }
}

} /* extern "C" */
