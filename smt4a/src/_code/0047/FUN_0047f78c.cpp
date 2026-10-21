/* NON_MATCHING: compiler omits retail preserved boolean accumulator. */
#include "common.h"
extern "C" {
s32 lcgRandomRange(s32 limit);
/* Returns true on the low ten outcomes of a 99-value draw. */
bool FUN_0047f78c() { return lcgRandomRange(99)<10; }
}
