/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_MessageBox_SetMessageBoxData` (_code @ 0x42f46c, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: nn_cec_CTR_MessageBox_WriteMessageBoxInfo. */


void nn_cec_CTR_MessageBox_SetMessageBoxData
               (int *param_1,int param_2,unsigned char *param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = param_1[1];
  if ((temp_v0 != 0) && (param_4 < 0x2801)) {
    if (param_2 == 0x8c) {
      *(unsigned char *)(param_1 + 0x77) = *param_3;
      nn_cec_CTR_MessageBox_WriteMessageBoxInfo();
      return;
    }
    if (param_2 == 0x8d) {
      *(unsigned char *)((int)param_1 + 0x1dd) = *param_3;
      nn_cec_CTR_MessageBox_WriteMessageBoxInfo();
      return;
    }
    if (param_2 == 0x8e) {
      *(unsigned char *)((int)param_1 + 0x1de) = *param_3;
      nn_cec_CTR_MessageBox_WriteMessageBoxInfo();
      return;
    }
    if (param_2 == 0x8f) {
      *(unsigned char *)((int)param_1 + 0x1df) = *param_3;
      nn_cec_CTR_MessageBox_WriteMessageBoxInfo();
      return;
    }
    if (param_2 - 0x65U < 99) {
      if (param_4 == 0 || param_3 == (unsigned char *)0x0) {
        (**(romwright_code **)(*param_1 + 0x24))(param_1,temp_v0,param_2,0,0,0);
        return;
      }
      (**(romwright_code **)(*param_1 + 0x30))(param_1,param_3,param_4,temp_v0,param_2,0x14);
    }
  }
  return;
}
