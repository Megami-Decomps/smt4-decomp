/* NON_MATCHING: VFP multiply operands are reversed. */
#include "common.h"
/* Applies the category scale for the enabled or disabled variant. */
extern "C" f32 FUN_004c3d78(s32 category,s32 enabled,f32 value) {
    f32 factor;
    if(enabled!=0) factor=category<4 ? 1.2999999523162842f : 1.100000023841858f;
    else factor=category<4 ? 0.7692307829856873f : 0.9090908765792847f;
    return factor*value;
}
