/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c198c` (_code @ 0x2c198c, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bbb74(unsigned int, int);
int FUN_002bbbc8(int, int, int, int);
int FUN_002bbe30(int);

/* Supplied declaration required: FUN_002bbb74. */
/* Supplied declaration required: FUN_002bbbc8. */
/* Supplied declaration required: FUN_002bbe30. */


void FUN_002c198c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  
  if ((*(char *)(param_1 + 0x5b0) == '\0') && (*(int *)(param_1 + 0x530) == 0x3f800000)) {
    temp_v0 = 0;
    if (*(float *)(param_1 + 0x534) == 0.0f) {
      temp_v0 = *(float *)(param_1 + 0x538) == 0.0f;
    }
    if (temp_v0) {
      temp_v0 = 0;
      if (*(float *)(param_1 + 0x53c) == 0.0f) {
        temp_v0 = *(float *)(param_1 + 0x540) == 0.0f;
      }
      if (temp_v0) {
        temp_v0 = 0;
        if (*(int *)(param_1 + 0x544) == 0x3f800000) {
          temp_v0 = *(float *)(param_1 + 0x548) == 0.0f;
        }
        if (temp_v0) {
          temp_v0 = 0;
          if (*(float *)(param_1 + 0x54c) == 0.0f) {
            temp_v0 = *(float *)(param_1 + 0x550) == 0.0f;
          }
          if (temp_v0) {
            temp_v0 = 0;
            if (*(float *)(param_1 + 0x554) == 0.0f) {
              temp_v0 = *(int *)(param_1 + 0x558) == 0x3f800000;
            }
            if (temp_v0) {
              temp_v0 = 0;
              if (*(float *)(param_1 + 0x55c) == 0.0f) {
                temp_v0 = *(float *)(param_1 + 0x560) == 0.0f;
              }
              if (temp_v0) {
                temp_v0 = 0;
                if (*(float *)(param_1 + 0x564) == 0.0f) {
                  temp_v0 = *(float *)(param_1 + 0x568) == 0.0f;
                }
                temp_v1 = 0;
                if (temp_v0) {
                  temp_v1 = *(int *)(param_1 + 0x56c) == 0x3f800000;
                }
                if (temp_v1) {
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_002bbe30(param_1 + 0x530);
  FUN_002bbe30(param_1 + 0x570);
  FUN_002bbbc8(param_1,param_1 + 0x114c,param_1 + 0x110c,param_1 + 0x530);
  FUN_002bbb74(*(unsigned int *)(param_1 + 0x52c),param_1 + 0x118c);
  *(unsigned char *)(param_1 + 0x5b0) = 0;
  return;
}

} /* extern "C" */
