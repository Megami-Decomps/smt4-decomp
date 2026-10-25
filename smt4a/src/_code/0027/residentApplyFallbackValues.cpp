/* NON_MATCHING: compiler spills the four-float argument directly and omits retail preservation of its fourth component in s16. */
#include "shard/W5_W5Match2_FourFloats.h"
#include "kernel/jyoucyuGetTableEntry.h"
extern "C" {
void FUN_00154710(const FourFloats *values,f32 scale);
/* Apply the supplied values only while resident table entry one is absent. */
void residentApplyFallbackValues(FourFloats values) { if (jyoucyuGetTableEntry(1)==NULL) FUN_00154710(&values,values.w); }
}
