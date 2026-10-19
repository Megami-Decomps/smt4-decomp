/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b1e08` (_code @ 0x2b1e08, 0x1bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */


void FUN_002b1e08(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  short temp_v0;
  char temp_v1;
  float *pfVar3;
  float temp_v2;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  
  if ((*(char *)(param_1 + 0x87) == '\0') && (*(int *)(param_1 + 0x58) != 0)) {
    pfVar3 = (float *)(*(int *)(param_1 + 0x58) + *(short *)(param_1 + 0x5c) * 0xc);
    temp_v4 = (unsigned int)*(unsigned short *)(pfVar3 + 2);
    if ((int)*(short *)(param_1 + 0x5e) < (int)temp_v4) {
      if (*(char *)(param_1 + 0x60) != '\0') {
        temp_v2 = (float)VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v2 = (*pfVar3 - pfVar3[1]) / temp_v2;
      }
      else {
        temp_v2 = (float)VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v2 = (pfVar3[1] - *pfVar3) / temp_v2;
      }
      *(short *)(param_1 + 0x5e) = *(short *)(param_1 + 0x5e) + 1;
      *(float *)(param_1 + 0x20) = temp_v2 + *(float *)(param_1 + 0x20);
      return;
    }
    if (*(char *)((int)pfVar3 + 10) == '\0') {
      if (*(char *)(param_1 + 0x60) != '\0') {
        temp_v2 = *pfVar3;
      }
      else {
        temp_v2 = pfVar3[1];
      }
      *(float *)(param_1 + 0x20) = temp_v2;
      temp_v7 = *(char *)(param_1 + 0x84) != '\0';
      if (temp_v7) {
        temp_v2 = *(float *)(param_1 + 0x78);
      }
      if ((temp_v7 && temp_v2 != 0.0f) &&
         (*(int *)((int)temp_v2 + *(short *)(param_1 + 0x7e) * 0x1c + 0xc) != -1)) {
        temp_v0 = *(short *)(param_1 + 0x7e) + 1;
        *(short *)(param_1 + 0x7e) = temp_v0;
        temp_v6 = (int)temp_v2 + temp_v0 * 0x1c;
        temp_v5 = *(int *)(temp_v6 + 0xc);
        if (temp_v5 != -1 && temp_v5 != -3) {
          if (temp_v5 != -2) {
            temp_v1 = *(char *)(temp_v6 + 0x10);
            *(short *)(param_1 + 0x5c) = (short)temp_v5;
            *(unsigned short *)(param_1 + 0x5e) = 0;
            *(char *)(param_1 + 0x60) = temp_v1;
            *(unsigned char *)(param_1 + 0x8a) = 0;
            puVar5 = (unsigned int *)(*(int *)(param_1 + 0x58) + (short)temp_v5 * 0xc);
          }
          else {
            *(unsigned short *)(param_1 + 0x7e) = 0;
            temp_v1 = *(char *)((int)temp_v2 + 0x10);
            temp_v0 = (short)*(unsigned int *)((int)temp_v2 + 0xc);
            *(short *)(param_1 + 0x5c) = temp_v0;
            *(unsigned short *)(param_1 + 0x5e) = 0;
            *(char *)(param_1 + 0x60) = temp_v1;
            *(unsigned char *)(param_1 + 0x8a) = 0;
            puVar5 = (unsigned int *)(*(int *)(param_1 + 0x58) + temp_v0 * 0xc);
          }
          if (temp_v1 != '\0') {
            temp_v3 = puVar5[1];
          }
          else {
            temp_v3 = *puVar5;
          }
          *(unsigned int *)(param_1 + 0x20) = temp_v3;
          return;
        }
      }
      *(unsigned char *)(param_1 + 0x87) = 1;
      return;
    }
    if (*(char *)(param_1 + 0x60) != '\0') {
      temp_v2 = pfVar3[1];
    }
    else {
      temp_v2 = *pfVar3;
    }
    *(float *)(param_1 + 0x20) = temp_v2;
    *(unsigned short *)(param_1 + 0x5e) = 0;
  }
  return;
}
