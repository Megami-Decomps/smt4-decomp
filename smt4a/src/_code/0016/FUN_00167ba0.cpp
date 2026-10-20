/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00167ba0` (_code @ 0x167ba0, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017d920(int, unsigned int [2]);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_005b3fe4; /* 0x5b3fe4 */
extern unsigned int DAT_005b3fe8; /* 0x5b3fe8 */

/* Supplied declaration required: FUN_0017d920. */


void FUN_00167ba0(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  unsigned int in_r3;
  unsigned int temp_v0 [2];
  
  temp_v0[0] = in_r3;
  FUN_0017d920(0x208,temp_v0);
  DAT_005b3fe4 = temp_v0[0];
  DAT_005b3fe8 = 0;
  return;
}

} /* extern "C" */
