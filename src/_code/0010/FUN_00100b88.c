/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100b88` (_code @ 0x100b88, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_00100ce6. */
/* Supplied declaration required: FUN_00100d0c. */


unsigned int FUN_00100b88(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int uStack_4;
  
  temp_v1 = param_1;
  if (param_2 != 0) {
    temp_v1 = (param_2 * 2 + param_1) - 2;
  }
  temp_v0 = param_1;
  uStack_4 = param_4;
  FUN_00100ce6(param_3,&temp_v0,&uStack_4,0x100d0d);
  if (param_2 != 0) {
    temp_v1 = temp_v1 + 2;
    FUN_00100d0c(0,&temp_v0);
  }
  if (param_2 <= param_3) {
    param_3 = 0xffffffff;
  }
                    /* WARNING: Treating indirect jump as return */
  return param_3;
}
