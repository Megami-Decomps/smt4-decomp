/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028550c` (_code @ 0x28550c, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0044cdf0; /* 0x44cdf0 */

/* Supplied declaration required: FUN_002c86a8. */
extern int FUN_0039d730(int);


void FUN_0028550c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0044cdf0;
  FUN_002c86a8();
  if ((temp_v0 != 0) && (temp_v1 = FUN_0039d730(temp_v0 + 0x40), temp_v1 != 0)) {
    *(unsigned char *)(temp_v0 + 0x5acc) = 1;
    return;
  }
  return;
}
