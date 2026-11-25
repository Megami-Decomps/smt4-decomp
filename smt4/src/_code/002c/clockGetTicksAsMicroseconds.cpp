/* NON_MATCHING: retail stores the scaled elapsed value one word at a time and copies the epoch
 * with LDM/STM; armcc allocates the multiply differently and copies the epoch with LDRD/STRD. */
#include "common.h"

extern "C" {
u64 FUN_0011c95c();
u64 *FUN_0011c264(u64 *baseTime, const u64 *elapsed);
extern const u64 DAT_0044e630;

/* Adds the elapsed time to the system's epoch value. */
void clockGetTicksAsMicroseconds(u64 *output)
{
    u64 elapsed = FUN_0011c95c() * 1000000;
    u64 time = DAT_0044e630;
    *output = *FUN_0011c264(&time, &elapsed);
}
} /* extern "C" */
