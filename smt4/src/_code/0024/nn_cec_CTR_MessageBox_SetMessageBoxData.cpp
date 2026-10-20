/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_MessageBox_SetMessageBoxData` (_code @ 0x248ce8, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int nn_cec_CTR_MessageBox_WriteMessageBoxInfo(unsigned int);


unsigned int nn_cec_CTR_MessageBox_SetMessageBoxData
               (int *param_1,unsigned int param_2,unsigned char *param_3,unsigned int param_4)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1[1];
  if (temp_v1 == 0) {
    temp_v0 = 0xc8810bea;
  }
  else if (param_4 >= 0x2801) {
    temp_v0 = 0xc8e10be9;
  }
  else {
    if (param_2 == 0x8c) {
      *(unsigned char *)(param_1 + 0x77) = *param_3;
      temp_v0 = nn_cec_CTR_MessageBox_WriteMessageBoxInfo((unsigned int)param_1);
      return temp_v0;
    }
    if (param_2 == 0x8d) {
      *(unsigned char *)((int)param_1 + 0x1dd) = *param_3;
      temp_v0 = nn_cec_CTR_MessageBox_WriteMessageBoxInfo((unsigned int)param_1);
      return temp_v0;
    }
    if (param_2 == 0x8e) {
      *(unsigned char *)((int)param_1 + 0x1de) = *param_3;
      temp_v0 = nn_cec_CTR_MessageBox_WriteMessageBoxInfo((unsigned int)param_1);
      return temp_v0;
    }
    if (param_2 == 0x8f) {
      *(unsigned char *)((int)param_1 + 0x1df) = *param_3;
      temp_v0 = nn_cec_CTR_MessageBox_WriteMessageBoxInfo((unsigned int)param_1);
      return temp_v0;
    }
    if (param_2 - 0x65 >= 99) {
      temp_v0 = 0xe0e10bfd;
    }
    else {
      if (param_4 == 0 || param_3 == (unsigned char *)0x0) {
        temp_v0 = (**(romwright_code **)(*param_1 + 0x24))(param_1,temp_v1,param_2,0,0,0);
        return temp_v0;
      }
      temp_v0 = (**(romwright_code **)(*param_1 + 0x30))(param_1,param_3,param_4,temp_v1,param_2,0x14);
    }
  }
  return temp_v0;
}

} /* extern "C" */
