/* NON_MATCHING: retail stores the scaled elapsed value one word at a time and copies the epoch
 * with LDM/STM; armcc allocates the multiply differently and copies the epoch with LDRD/STRD. */
#include "common.h"

extern "C" {
u64 FUN_00159aa4();
u64 *FUN_001593ac(u64 *baseTime, const u64 *elapsed);
extern const u64 DAT_00589370;

/* Adds the elapsed time to the system's epoch value. */
void clockGetTicksAsMicroseconds(u64 *output)
{
    u64 elapsed = FUN_00159aa4() * 1000000;
    u64 time = DAT_00589370;
    *output = *FUN_001593ac(&time, &elapsed);
}
} /* extern "C" */
