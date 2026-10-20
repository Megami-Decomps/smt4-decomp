/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_MessageBox_WriteMessageBoxInfo` (_code @ 0x238f00, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;


unsigned int nn_cec_CTR_MessageBox_WriteMessageBoxInfo(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1[1] != 0) {
    temp_v0 = (**(romwright_code **)(*param_1 + 0x30))(param_1,param_1 + 0x67,0x60,param_1[1],2,0x14);
                    /* WARNING: Treating indirect jump as return */
    return temp_v0;
  }
  return 0xc8810bea;
}

} /* extern "C" */
