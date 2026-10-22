#include "common.h"

extern "C" {

void asdLoadFileSync(s32 a, s32 b, u32 c, s32 d, s32 e, s32 mode);

/* Calls asdLoadFileSync with mode 4 and the single argument `c`. */
void asdLoadFileSyncDefault(u32 c)
{
    asdLoadFileSync(0, 0, c, 0, 0, 4);
}

} /* extern "C" */
