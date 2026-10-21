/* NON_MATCHING: compiler reserves the temporary pair with sub sp instead of saving r2/r3. */
#include "common.h"
extern "C" {
struct Pair { u32 first, second; };
const Pair *FUN_00307e74(Pair *value, u32 count);
/* Transforms a pair through temporary storage and copies it back. */
void FUN_002f1840(Pair *value, const Pair *source, u32 count) {
    Pair temporary = *source;
    *value = *FUN_00307e74(&temporary, count);
}
}
