/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4904` (_code @ 0x2c4904, 0x20 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdLoadFileSync(unsigned int, unsigned int [2], int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: asdLoadFileSync. */


void FUN_002c4904(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = 0;
  asdLoadFileSync(param_1,temp_v0,1,0x80);
  return;
}

} /* extern "C" */
