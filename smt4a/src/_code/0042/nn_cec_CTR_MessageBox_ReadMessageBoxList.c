/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_MessageBox_ReadMessageBoxList` (_code @ 0x42f580, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: nn_cec_CTR_Base64Str2CecTitleId. */
/* Supplied declaration required: nn_cec_CTR_MessageBox_WriteMessageBoxList. */


int nn_cec_CTR_MessageBox_ReadMessageBoxList(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [8];
  
  temp_v2 = 0;
  temp_v0 = (**(romwright_code **)(*param_1 + 0x34))(param_1,param_1 + 4,0x18c,&temp_v2,param_1[1],1,0x12);
  if ((temp_v0 & 0x3ff) != 0x3f7) {
    if (temp_v2 == 0) {
      nn_cec_CTR_MessageBox_WriteMessageBoxList(param_1);
      (**(romwright_code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,5);
      return 0;
    }
    if ((-1 < (int)temp_v0) && ((short)param_1[4] == 0x6868)) {
      temp_v0 = 0;
      if (temp_v0 < (unsigned int)param_1[6]) {
        do {
          piVar2 = param_1 + temp_v0 * 4 + 7;
          nn_cec_CTR_Base64Str2CecTitleId(piVar2);
          temp_v1 = (**(romwright_code **)(*param_1 + 8))(param_1,piVar2,0xb,0,temp_v3);
          if (temp_v1 < 0) {
            nn_cec_CTR_MessageBox_WriteMessageBoxList();
            if (-1 < (int)param_1) {
              return temp_v2;
            }
            return 0;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < (unsigned int)param_1[6]);
      }
      return temp_v2;
    }
    nn_cec_CTR_MessageBox_WriteMessageBoxList(param_1);
  }
  return 0;
}
