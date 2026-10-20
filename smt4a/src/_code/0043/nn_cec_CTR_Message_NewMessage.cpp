/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_Message_NewMessage` (_code @ 0x4308e0, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_7_stack;


int nn_cec_CTR_Message_NewMessage
              (int param_1,int param_2,unsigned int param_3,unsigned char param_4,unsigned int param_5,
              unsigned int param_6,unsigned int param_7)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = -0x1f1ef403;
  if (param_2 != 0) {
    *(int *)(param_1 + 0x10) = param_2;
    temp_v1 = 0;
  }
  if (-1 < temp_v1) {
    *(unsigned int *)(param_1 + 0x18) = param_3;
    temp_v1 = -0x1f1ef403;
    if (param_5 < 4) {
      temp_v1 = 0;
    }
    *(unsigned char *)(param_1 + 0x34) = param_4;
    if (param_5 < 4) {
      *(char *)(param_1 + 0x35) = (char)param_5;
    }
    if (-1 < temp_v1) {
      *(char *)(param_1 + 0x6c) = (char)param_6;
      temp_v0 = param_7;
      if (param_7 >= 2) {
        temp_v0 = param_6;
      }
      *(char *)(param_1 + 0x6d) = (char)param_7;
      if (temp_v0 < 2) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = -0x1f1ef412;
      }
    }
  }
  return temp_v1;
}

} /* extern "C" */
