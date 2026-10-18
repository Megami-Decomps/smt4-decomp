/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010673c` (_code @ 0x10673c, 0x5e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

/* Supplied declaration required: FUN_00106250. */
/* Supplied declaration required: FUN_0010632c. */
/* Supplied declaration required: FUN_00106384. */
/* Supplied declaration required: FUN_001063f8. */


void FUN_0010673c(int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = param_1;
  temp_v2 = param_2;
  temp_v3 = param_3;
  temp_v4 = param_4;
  FUN_001063f8();
  if ((((param_1 != 0) &&
       (temp_v1 = temp_v0, FUN_0010632c(temp_v0,param_2,param_3,param_4,param_5,temp_v0,temp_v2,temp_v3,temp_v4),
       temp_v0 != 0)) && (temp_v0 = temp_v1, FUN_00106384(temp_v1,param_3), temp_v1 != 0)) &&
     ((*(unsigned short *)(param_3 + 0xa2) & 0xf) == 1)) {
    FUN_00106250(temp_v0,param_3);
  }
  return;
}
