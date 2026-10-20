/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a0b4` (_code @ 0x35a0b4, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0035a078(unsigned int [2]);

/* stack frame of void: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_0035a078. */


unsigned int FUN_0035a0b4(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  unsigned int in_r3;
  unsigned int temp_v0 [2];
  
  temp_v0[0] = in_r3 & 0xffffff00;
  FUN_0035a078(temp_v0);
  return temp_v0[0] & 0xff;
}

} /* extern "C" */
