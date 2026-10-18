/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276bd8` (_code @ 0x276bd8, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_00399d4c. */
/* Supplied declaration required: FUN_0039bdf0. */
/* Supplied declaration required: FUN_003c2ad0. */


void FUN_00276bd8(int param_1,char param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0044cdf0;
  if (DAT_0044cdf0 != 0) {
    FUN_003c2ad0(DAT_0044cdf0 + 0x12334,(int)param_2);
    FUN_00399d4c(temp_v0 + 0x40);
    if (param_1 != 0) {
      FUN_0039bdf0(temp_v0 + 0x40);
      return;
    }
  }
  return;
}
