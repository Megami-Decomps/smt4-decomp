/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042f318` (_code @ 0x42f318, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int g_asdCecMessageBoxCriticalSection; /* 0x6426c0 */

extern unsigned int nn_cec_CTR_MessageBox_ReadOutBoxIndex(unsigned int);
extern unsigned int nn_cec_CTR_MessageBox_WriteBoxInfo(unsigned int, int, unsigned int, unsigned int *);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int FUN_0042f318(int *param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2 [2];
  
  nn_os_CriticalSection_Enter((unsigned int)&g_asdCecMessageBoxCriticalSection);
  temp_v1 = param_1[1];
  if (temp_v1 != 0) {
    temp_v2[0] = 0;
    if (param_2 != 1) {
      temp_v1 = (**(romwright_code **)(*param_1 + 0x24))(param_1,temp_v1,0xc,param_2,0);
      if (-1 < temp_v1) {
        (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],0xc,8,temp_v2);
        nn_cec_CTR_MessageBox_WriteBoxInfo((unsigned int)param_1,0,(unsigned int)(param_1 + 0x7f),(unsigned int *)(param_1 + 0x87));
      }
    }
    else {
      temp_v1 = (**(romwright_code **)(*param_1 + 0x24))(param_1,temp_v1,0xd,1,0);
      if (-1 < temp_v1) {
        (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],0xd,8,temp_v2);
        nn_cec_CTR_MessageBox_WriteBoxInfo((unsigned int)param_1,1,(unsigned int)(param_1 + 0xeb),(unsigned int *)(param_1 + 0xf3));
        temp_v0 = (**(romwright_code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,0);
        if ((temp_v0 & 0x80000000) == 0) {
          nn_cec_CTR_MessageBox_ReadOutBoxIndex((unsigned int)param_1);
        }
      }
    }
    nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
    return temp_v1;
  }
  nn_os_CriticalSection_Leave((unsigned int)&g_asdCecMessageBoxCriticalSection);
  return -0x377ef416;
}

} /* extern "C" */
