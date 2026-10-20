/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158818` (_code @ 0x158818, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016d144(unsigned int [2], int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00589398; /* 0x589398 */

/* Supplied declaration required: FUN_0016d144. */


unsigned int FUN_00158818(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = param_1;
  (*(unsigned int *)((unsigned char *)&DAT_00589398 + 0x10)) = param_1;
  FUN_0016d144(temp_v0,0xb0101c8);
  return 0;
}

} /* extern "C" */
