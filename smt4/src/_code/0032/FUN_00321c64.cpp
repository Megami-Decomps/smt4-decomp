/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321c64` (_code @ 0x321c64, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025c9dc(unsigned int, unsigned int [2], int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_00400002; /* 0x400002 */
extern unsigned char DAT_0044ea80; /* 0x44ea80 */

/* Supplied declaration required: FUN_0025c9dc. */


unsigned char * FUN_00321c64(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = 0;
  FUN_0025c9dc((*(unsigned int *)((unsigned char *)&DAT_0044ea80 + 0x1c)),temp_v0,4);
  return &DAT_00400002;
}

} /* extern "C" */
