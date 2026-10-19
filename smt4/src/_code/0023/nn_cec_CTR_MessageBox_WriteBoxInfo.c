/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_MessageBox_WriteBoxInfo` (_code @ 0x2393cc, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0023959c. */


unsigned int nn_cec_CTR_MessageBox_WriteBoxInfo
               (int *param_1,int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = param_1[1];
  if (temp_v0 == 0) {
    piVar1 = (int *)0xc8810bea;
  }
  else if (param_2 != 0) {
    piVar1 = (int *)(**(romwright_code **)(*param_1 + 0x30))(param_1,param_3,0x20,temp_v0,4,0x14);
    if (-1 < (int)piVar1) {
      piVar1 = param_1;
      FUN_0023959c(param_1,param_1 + 0xeb,param_1 + 0xf3,param_1[0x156],1);
      *(unsigned char *)((int)param_1 + 0xb) = 0;
    }
  }
  else {
    piVar1 = (int *)(**(romwright_code **)(*param_1 + 0x30))(param_1,param_3,0x20,temp_v0,3,0x14);
    if (-1 < (int)piVar1) {
      piVar1 = param_1;
      FUN_0023959c(param_1,param_1 + 0x7f,param_1 + 0x87,param_1[0xea],0);
      *(unsigned char *)((int)param_1 + 10) = 0;
      return (unsigned int)piVar1;
    }
  }
  return (unsigned int)piVar1;
}
