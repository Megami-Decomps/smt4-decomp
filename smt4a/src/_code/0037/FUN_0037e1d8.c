/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037e1d8` (_code @ 0x37e1d8, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00137ee0. */
extern unsigned int FUN_00236038(unsigned int);


unsigned int FUN_0037e1d8(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  unsigned int in_r3;
  unsigned int temp_v0 [2];
  
  temp_v0[0] = in_r3;
  temp_v0[0] = FUN_00236038(0);
  FUN_00137ee0(0xd,temp_v0,4);
  return 1;
}
