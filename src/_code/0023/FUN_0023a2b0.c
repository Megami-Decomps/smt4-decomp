/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a2b0` (_code @ 0x23a2b0, 0x34 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_00139ae0(unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bbd10. */


unsigned int FUN_0023a2b0(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  int temp_v0;
  unsigned int in_r3;
  unsigned int temp_v1 [2];
  
  temp_v1[0] = in_r3 & 0xffffff00;
  temp_v0 = FUN_00139ae0(temp_v1,1,0xa0002);
  if (temp_v0 < 0) {
    FUN_002bbd10(temp_v0,0x23a2d8);
  }
  return temp_v1[0] & 0xff;
}
