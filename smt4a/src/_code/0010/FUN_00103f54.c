/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103f54` (_code @ 0x103f54, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Supplied declaration required: FUN_002e9c64. */


void FUN_00103f54(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1 [2];
  
  if (param_3 == 0) {
    temp_v0 = 0x11b881;
  }
  else {
    temp_v0 = 0x1190a1;
  }
  temp_v1[0] = param_2;
  FUN_002e9c64(param_1,temp_v0,temp_v1);
  return;
}
