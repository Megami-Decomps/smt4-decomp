/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_MessageBox_WriteBoxInfo` (_code @ 0x42dcc0, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_0042d798. */


void nn_cec_CTR_MessageBox_WriteBoxInfo(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1[1];
  if (temp_v0 != 0) {
    if (param_2 != 0) {
      temp_v0 = (**(romwright_code **)(*param_1 + 0x30))(param_1,param_3,0x20,temp_v0,4,0x14);
      if (-1 < temp_v0) {
        FUN_0042d798(param_1,param_1 + 0xeb,param_1 + 0xf3,param_1[0x156],1);
        *(unsigned char *)((int)param_1 + 0xb) = 0;
      }
    }
    else {
      temp_v0 = (**(romwright_code **)(*param_1 + 0x30))(param_1,param_3,0x20,temp_v0,3,0x14);
      if (-1 < temp_v0) {
        FUN_0042d798(param_1,param_1 + 0x7f,param_1 + 0x87,param_1[0xea],0);
        *(unsigned char *)((int)param_1 + 10) = 0;
        return;
      }
    }
  }
  return;
}
