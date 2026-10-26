/* NON_MATCHING: only the fourth component's preservation differs: retail copies it from s3 into s16 (vmov), the build loads it back from the spilled argument home (vldr). */
#include "shard/W5_W5Match2_FourFloats.h"
#include "kernel/jyoucyuGetTableEntry.h"
extern "C" {
void FUN_00154710(const FourFloats *values,f32 scale);
/* Apply the supplied values only while resident table entry one is absent. */
void residentApplyFallbackValues(FourFloats values)
{
    f32 scale = values.w;
    if (jyoucyuGetTableEntry(1)==NULL) FUN_00154710(&values, scale);
}
}
