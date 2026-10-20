/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019552c` (_code @ 0x19552c, 0x194 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int aeabi_idivmod(...);

extern int FUN_00360d38(void);
/* Supplied declaration required: aeabi_idivmod. */


void FUN_0019552c(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  float temp_v5;
  long long temp_v6;
  
  temp_v0 = *(char *)(param_1 + 0x1d8);
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 == '\x02') {
        temp_v1 = FUN_00360d38();
        temp_v3 = ((temp_v1 - 0x4000U) & 0xffff) * 0x168 >> 0x10;
        *(unsigned int *)(param_1 + 0xc) = temp_v3;
        if (param_2 != 0) {
          *(unsigned int *)(param_1 + 0xc) = -temp_v3;
        }
      }
    }
    else {
      temp_v6 = (unsigned long long)(unsigned int)*(float *)(param_1 + 0x124) << 0x20;
      if (*(float *)(param_1 + 0x124) > 0.0f) {
        if (*(float *)(param_1 + 0x120) > 0.0f) {
          temp_v2 = aeabi_idivmod(0x5a,(int)*(float *)(param_1 + 0x34c));
          *(unsigned int *)(param_1 + 0xc) = temp_v2;
        }
        else {
          temp_v2 = aeabi_idivmod(0xffffffa6,(int)*(float *)(param_1 + 0x34c));
          *(unsigned int *)(param_1 + 0xc) = temp_v2;
        }
      }
      else {
        if (*(float *)(param_1 + 0x120) > 0.0f) {
          temp_v1 = aeabi_idivmod(0x5a,(int)*(float *)(param_1 + 0x34c));
          temp_v1 = temp_v1 + 0x5a;
        }
        else {
          temp_v1 = aeabi_idivmod(0xffffffa6,(int)*(float *)(param_1 + 0x34c));
          temp_v1 = temp_v1 - 0x5a;
        }
        *(int *)(param_1 + 0xc) = temp_v1;
      }
      temp_v3 = (unsigned int)*(unsigned char *)(param_1 + 0x130);
      if ((*(unsigned char *)(param_1 + 0x130) & 1) != 0) {
        temp_v5 = (float)temp_v6;
        temp_v4 = *(float *)(param_1 + 0x128);
        if ((float)((unsigned long long)temp_v6 >> 0x20) > temp_v5) {
          if (temp_v5 < temp_v4) {
            temp_v3 = 0xffffffa6;
          }
          if (temp_v4 <= temp_v5) {
            temp_v3 = 0x5a;
          }
          temp_v1 = aeabi_idivmod(temp_v3,(int)*(float *)(param_1 + 0x34c));
        }
        else if (temp_v4 > temp_v5) {
          temp_v1 = aeabi_idivmod(0xffffffa6,(int)*(float *)(param_1 + 0x34c));
          temp_v1 = temp_v1 - 0x5a;
        }
        else {
          temp_v1 = aeabi_idivmod(0x5a,(int)*(float *)(param_1 + 0x34c));
          temp_v1 = temp_v1 + 0x5a;
        }
        *(int *)(param_1 + 4) = temp_v1;
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
