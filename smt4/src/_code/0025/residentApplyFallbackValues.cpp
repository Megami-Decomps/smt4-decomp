/* NON_MATCHING: the fourth component is preserved in s16 across the table query as retail, but the build reloads it from the spilled argument (vldr) where retail copies s3 (vmov). */
#include "shard/W5_W5Match2_FourFloats.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"
extern "C" {
void FUN_00119c28(const FourFloats *values,f32 scale);
/* Apply the supplied values only while resident table entry one is absent. */
void residentApplyFallbackValues(FourFloats values)
{
    f32 scale = values.w;
    if (jyoucyuGetTableEntry(1) == NULL) {
        FUN_00119c28(&values, scale);
    }
}
}
