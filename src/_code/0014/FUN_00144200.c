/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00144200` (_code @ 0x144200, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001465d8. */
/* Supplied declaration required: FUN_002c3b00. */


void FUN_00144200(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  
  param_1[9] = 0;
  *param_1 = param_2;
  param_1[8] = param_3;
  param_1[10] = 0;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1 + 0xb);
  } while (!temp_v0);
  param_1[0xb] = 0;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1 + 0xc);
  } while (!temp_v0);
  param_1[0xc] = 0;
  FUN_001465d8(param_1 + 1,0,0x7fff);
  FUN_001465d8(param_1 + 3,0,0x7fff);
  FUN_002c3b00(param_1 + 5);
  return;
}
