/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bfeb8` (_code @ 0x3bfeb8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00272204(unsigned int, unsigned int [2], int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_00400002; /* 0x400002 */
extern unsigned char DAT_0059dbe0; /* 0x59dbe0 */

/* Supplied declaration required: FUN_00272204. */


unsigned char * FUN_003bfeb8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = 0;
  FUN_00272204((*(unsigned int *)((unsigned char *)&DAT_0059dbe0 + 0x1c)),temp_v0,4);
  return &LAB_00400002;
}

} /* extern "C" */
