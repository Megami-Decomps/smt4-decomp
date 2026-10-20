/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bd294` (_code @ 0x4bd294, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001fef70(unsigned int [2], unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_001fef70. */


unsigned short FUN_004bd294(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0 [2];
  
  temp_v0[0] = param_4;
  FUN_001fef70(temp_v0,param_1,param_2);
  return (unsigned short)temp_v0[0] >> 10;
}

} /* extern "C" */
