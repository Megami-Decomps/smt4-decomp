/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358518` (_code @ 0x358518, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_00238f4c. */
extern unsigned int nn_cec_CTR_MessageBox_WriteMessageBoxList(unsigned int);


unsigned int FUN_00358518(int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  (**(romwright_code **)(*param_1 + 0x24))(param_1,param_2,0xb,0,0,0);
  temp_v0 = nn_cec_CTR_MessageBox_WriteMessageBoxList((unsigned int)param_1);
  FUN_00238f4c(param_1,0);
  return temp_v0;
}
