/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00431270` (_code @ 0x431270, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00431230. */


unsigned int FUN_00431270(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  unsigned int in_r3;
  unsigned int temp_v0 [2];
  
  temp_v0[0] = in_r3 & 0xffffff00;
  FUN_00431230(temp_v0);
  return temp_v0[0] & 0xff;
}
