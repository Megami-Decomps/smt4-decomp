#include "shard/Shard003C.h"

extern "C" {

extern Sub68Owner *DAT_00587f28;
extern s32 sub20634Reset(u8 *sub);

void sub68OwnerCall10(void)
{
    if (DAT_00587f28 != NULL) {
        sub20634Reset(DAT_00587f28->sub);
    }
}

} /* extern "C" */
