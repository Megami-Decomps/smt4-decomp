#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;


unsigned int nn_cec_CTR_MessageBox_WriteMessageBoxList(int *param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v4;
  
  (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],10,8,&temp_v1);
  temp_v0 = (**(romwright_code **)(*param_1 + 0x30))(param_1,param_1 + 4,0x18c,param_1[1],1,0x14);
  temp_v4 = temp_v0 >> 0x1f;
  if (temp_v4 == 0) {
    temp_v0 = (**(romwright_code **)(*param_1 + 0x34))(param_1,param_1 + 4,0x18c,&temp_v1,param_1[1],1,0x12);
  }
  return temp_v0;
}

} /* extern "C" */
