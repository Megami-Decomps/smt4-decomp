/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016c560` (_code @ 0x16c560, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187a84(int, int, int, unsigned int *);
int FUN_00187d90(unsigned int, int);
int FUN_0018a9bc(...);

/* Supplied declaration required: FUN_00187a84. */
/* Supplied declaration required: FUN_00187d90. */
/* Supplied declaration required: FUN_0018a9bc. */


void FUN_0016c560(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned char temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = (unsigned int)*(unsigned char *)(param_1 + 0x5b4);
  puVar2 = (unsigned int *)(param_1 + 0x534);
  temp_v1 = temp_v0 == 0;
  if (temp_v1) {
    temp_v0 = *puVar2;
  }
  if (temp_v1 && temp_v0 == 0x3f800000) {
    temp_v1 = 0;
    if (*(float *)(param_1 + 0x538) == 0.0f) {
      temp_v1 = *(float *)(param_1 + 0x53c) == 0.0f;
    }
    if (temp_v1) {
      temp_v1 = 0;
      if (*(float *)(param_1 + 0x540) == 0.0f) {
        temp_v1 = *(float *)(param_1 + 0x544) == 0.0f;
      }
      if (temp_v1) {
        temp_v1 = 0;
        if (*(int *)(param_1 + 0x548) == 0x3f800000) {
          temp_v1 = *(float *)(param_1 + 0x54c) == 0.0f;
        }
        if (temp_v1) {
          temp_v1 = 0;
          if (*(float *)(param_1 + 0x550) == 0.0f) {
            temp_v1 = *(float *)(param_1 + 0x554) == 0.0f;
          }
          if (temp_v1) {
            temp_v1 = 0;
            if (*(float *)(param_1 + 0x558) == 0.0f) {
              temp_v1 = *(int *)(param_1 + 0x55c) == 0x3f800000;
            }
            if (temp_v1) {
              temp_v1 = 0;
              if (*(float *)(param_1 + 0x560) == 0.0f) {
                temp_v1 = *(float *)(param_1 + 0x564) == 0.0f;
              }
              if (temp_v1) {
                temp_v1 = 0;
                if (*(float *)(param_1 + 0x568) == 0.0f) {
                  temp_v1 = *(float *)(param_1 + 0x56c) == 0.0f;
                }
                temp_v2 = 0;
                if (temp_v1) {
                  temp_v2 = *(int *)(param_1 + 0x570) == 0x3f800000;
                }
                if (temp_v2) {
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_0018a9bc(puVar2);
  FUN_0018a9bc(param_1 + 0x574);
  FUN_00187a84(param_1,param_1 + 0x1158,param_1 + 0x1118,puVar2);
  FUN_00187d90(*(unsigned int *)(param_1 + 0x530),param_1 + 0x1198);
  *(unsigned char *)(param_1 + 0x5b4) = 0;
  return;
}

} /* extern "C" */
