/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a118` (_code @ 0x23a118, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bbb2c(int, int);

/* stack frame of void: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_0013a170(unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bbb2c. */


unsigned int FUN_0023a118(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  int temp_v0;
  unsigned int in_r3;
  unsigned int temp_v1 [2];
  
  temp_v1[0] = in_r3 & 0xffffff00;
  temp_v0 = FUN_0013a170(temp_v1,1,0xa0002);
  if (temp_v0 < 0) {
    FUN_002bbb2c(temp_v0,0x23a140);
  }
  return temp_v1[0] & 0xff;
}

} /* extern "C" */
