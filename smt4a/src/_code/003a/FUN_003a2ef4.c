/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a2ef4` (_code @ 0x3a2ef4, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00581288; /* 0x581288 */

/* Supplied declaration required: FUN_00303460. */
/* Supplied declaration required: FUN_00313648. */
/* Supplied declaration required: FUN_003d54f8. */


void FUN_003a2ef4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_00313648();
  temp_v0 = DAT_00581288;
  *(unsigned int *)(DAT_00581288 + 4) = 8;
  *(unsigned int *)(temp_v0 + 8) = 0;
  FUN_003d54f8(0,10);
  FUN_003d54f8(1,10);
  temp_v0 = DAT_00581288;
  *(unsigned int *)(DAT_00581288 + 0x54) = 0x23;
  *(unsigned int *)(temp_v0 + 0x58) = 0;
  FUN_00303460(0x16);
  return;
}
