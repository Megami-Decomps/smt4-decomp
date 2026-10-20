#include "shard/Shard0035.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;
extern s32 stateSetterSetState5(u8 *sub);

void sub68OwnerCall3(void)
{
    if (DAT_00587f28 != NULL) {
        stateSetterSetState5(DAT_00587f28->sub);
    }
}

} /* extern "C" */
