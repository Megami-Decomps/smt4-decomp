#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

void asdLoadFileSync(s32 a, s32 b, u32 c, u32 d, u32 e, u32 f);

/* Forwards its four arguments to asdLoadFileSync after two zeros. */
void FUN_001642e4(u32 c, u32 d, u32 e, u32 f)
{
    asdLoadFileSync(0, 0, c, d, e, f);
}

} /* extern "C" */
