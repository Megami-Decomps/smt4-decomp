/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002296f4` (_code @ 0x2296f4, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_6_stack;


void FUN_002296f4(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5,int param_6)

{
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  param_2 = param_2 + param_3 * 10;
  temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 0x9d0);
  if ((int)param_4 < (int)temp_v0) {
    param_4 = temp_v0;
  }
  temp_v1 = param_5 == 0;
  if (-1 < param_5) {
    param_3 = param_4 + param_5;
    temp_v1 = param_3 == temp_v0;
  }
  if (!temp_v1 && (-1 < param_5 && (int)temp_v0 <= (int)param_3)) {
    *(short *)(param_2 + 0x9d0) = (short)param_3;
  }
  if (-1 < param_6) {
    if ((int)(unsigned int)*(unsigned short *)(param_2 + 0x9d2) < (int)(param_4 + param_6)) {
      *(short *)(param_2 + 0x9d2) = (short)(param_4 + param_6);
    }
    if (*(unsigned short *)(param_2 + 0x9d2) < *(unsigned short *)(param_2 + 0x9d0)) {
      *(unsigned short *)(param_2 + 0x9d2) = *(unsigned short *)(param_2 + 0x9d0);
    }
  }
  return;
}

} /* extern "C" */
