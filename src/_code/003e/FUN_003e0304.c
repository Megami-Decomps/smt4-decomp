/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0304` (_code @ 0x3e0304, 0x1dc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00226500. */
extern unsigned int FUN_003dfea0(int, int, unsigned int);
extern unsigned int *FUN_003e013c(int, unsigned int, unsigned int);


/* WARNING: Removing unreachable block (ram,0x003e0358) */

unsigned int * FUN_003e0304(int param_1)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v3 = param_1;
  FUN_00226500();
  temp_v1 = FUN_003dfea0(param_1,temp_v3,0);
  puVar3 = (unsigned int *)FUN_003e013c(param_1 + 0x3c,temp_v1,0);
  *puVar3 = (*(unsigned int *)(param_1 + 0x76) & 0xffffff) | ((unsigned int)*(unsigned char *)(param_1 + 0x79) << 0x18);
  puVar3[1] = 0xf0099;
  puVar3[2] = (*(unsigned int *)(param_1 + 100) >> 0x10) | (*(unsigned int *)(param_1 + 100) << 0x10);
  puVar3[3] = 0xf009a;
  temp_v0 = *(char *)(param_1 + 0x6c);
  if ((temp_v0 == '\x03' || temp_v0 == '\x04') || (temp_v0 == '\x05')) {
    temp_v3 = 1;
  }
  else {
    temp_v3 = 0;
  }
  if (*(char *)(param_1 + 0x68) == '\f') {
    temp_v4 = 2;
  }
  else {
    temp_v4 = 0;
  }
  puVar3[4] = (temp_v3 << 2) | ((unsigned int)*(unsigned char *)(param_1 + 0x6b) << 1) | (temp_v4 << 4) |
              ((unsigned int)*(unsigned char *)(param_1 + 0x69) << 8) | ((unsigned int)*(unsigned char *)(param_1 + 0x6a) << 0xc) |
              ((unsigned int)(temp_v0 == '\x02' || temp_v0 == '\x05') << 0x18);
  puVar3[5] = 0xf009b;
  temp_v2 = 0;
  if (!(*(char *)(param_1 + 0x6c) == '\x03' || *(char *)(param_1 + 0x6c) == '\0')) {
    temp_v6 = *(float *)(param_1 + 0x70);
    temp_v7 = 0.0f;
    if ((temp_v6 != 0.0f) && ((unsigned int)romwright_fabs_4(temp_v6) >> 0x17 != 0xff)) {
      temp_v6 = (temp_v6 + 16.0f) * 256.0f;
      if (0.0f <= temp_v6) {
        temp_v5 = SBORROW4((int)temp_v6,0x46000000);
        temp_v3 = (int)temp_v6 - 0x46000000;
        if ((int)temp_v6 >= 0x46000000) {
          temp_v7 = 8191.0f;
        }
        else {
          temp_v5 = SBORROW4((int)temp_v6,0x45800000);
          temp_v3 = (int)temp_v6 - 0x45800000;
          temp_v7 = temp_v6;
        }
        if (temp_v3 < 0 == temp_v5) {
          temp_v2 = VectorFloatToUnsigned(temp_v7 - 4096.0f,3);
        }
        else {
          temp_v2 = VectorFloatToUnsigned(temp_v7 + 4096.0f,3);
        }
      }
      else {
        temp_v2 = VectorFloatToUnsigned(temp_v7 + 4096.0f,3);
      }
    }
    temp_v2 = temp_v2 | ((unsigned int)*(unsigned char *)(param_1 + 0x75) << 0x10) |
            ((unsigned int)*(unsigned char *)(param_1 + 0x74) << 0x18);
  }
  puVar3[6] = temp_v2;
  puVar3[7] = 0xf009c;
  puVar3[8] = *(unsigned int *)(param_1 + 0x60) >> 3;
  puVar3[9] = 0xf009d;
  puVar3[10] = (unsigned int)*(unsigned char *)(param_1 + 0x68);
  puVar3[0xb] = 0xf009e;
  return puVar3 + 0xc;
}
