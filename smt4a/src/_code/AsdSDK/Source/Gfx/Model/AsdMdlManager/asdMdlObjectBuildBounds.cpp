/* NON_MATCHING: romwright 0.5.0 decompilation of `asdMdlObjectBuildBounds` (_code @ 0x185b84, 0x204 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAllocTracked(int, int, int, int, int);
int nn_math_ARMv6_VEC3TransformAsm_2A87B4(float *, int *, int *);

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_2_stack;

/* Supplied declaration required: asdMemoryAllocTracked. */
extern int FUN_0019c49c(int, int, int);
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2A87B4. */


unsigned int asdMdlObjectBuildBounds(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar9;
  unsigned char temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  int temp_v14;
  unsigned int uStack_9c;
  unsigned int temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  int temp_v19;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int temp_v20;
  
  temp_v7 = param_1 != 0;
  temp_v0 = 0;
  if (temp_v7) {
    temp_v0 = *(int *)(param_1 + 8);
  }
  if (temp_v7 && temp_v0 != 0) {
    param_2 = *(int *)(temp_v0 + 4);
  }
  if (((temp_v7 && temp_v0 != 0) && param_2 != 0) && (temp_v0 = *(int *)(temp_v0 + 0x28), 0 < temp_v0)) {
    temp_v1 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,temp_v0 * 0x1c,1);
    temp_v6 = 0;
    temp_v13 = 0;
    temp_v12 = 0.5f;
    *(unsigned int *)(param_1 + 0x18) = temp_v1;
    do {
      puVar9 = (unsigned int *)(*(int *)(param_1 + 0x18) + temp_v6 * 0x1c);
      piVar3 = (int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x18) + 0x20);
      temp_v3 = *piVar3;
      if (temp_v3 != 0) {
        temp_v3 = (int)piVar3 + temp_v3;
      }
      else {
        temp_v3 = 0;
      }
      temp_v4 = 0;
      if (temp_v3 != 0) {
        piVar3 = (int *)(temp_v3 + temp_v6 * 0x10 + 0x28);
        temp_v4 = *piVar3;
        if (temp_v4 == 0) {
          temp_v4 = 0;
        }
        else {
          temp_v4 = (int)piVar3 + temp_v4;
        }
      }
      temp_v4 = *(int *)(temp_v4 + 0xc4);
      temp_v1 = 0x100;
      asdMemoryAllocTracked(0x100,0x100,0,temp_v4 * 0x84,1);
      temp_v8 = (float)temp_v13;
      *puVar9 = temp_v1;
      puVar9[1] = temp_v4;
      temp_v3 = 0;
      temp_v9 = temp_v8;
      if (0 < temp_v4) {
        do {
          temp_v2 = FUN_0019c49c(param_1,temp_v6,temp_v3);
          temp_v5 = *(int *)(temp_v2 + 0x1c);
          if (temp_v5 != 0) {
            temp_v5 = temp_v2 + 0x1c + temp_v5;
          }
          else {
            temp_v5 = 0;
          }
          temp_v19 = *(unsigned int *)(temp_v5 + 0x10);
          uStack_64 = *(unsigned int *)(temp_v5 + 0x14);
          uStack_60 = *(unsigned int *)(temp_v5 + 0x18);
          uStack_5c = *(unsigned int *)(temp_v5 + 0x1c);
          uStack_58 = *(unsigned int *)(temp_v5 + 0x20);
          uStack_54 = *(unsigned int *)(temp_v5 + 0x24);
          uStack_50 = *(unsigned int *)(temp_v5 + 0x28);
          uStack_4c = *(unsigned int *)(temp_v5 + 0x2c);
          temp_v10 = *(unsigned long long *)(temp_v5 + 4);
          temp_v11 = *(float *)(temp_v5 + 0xc);
          temp_v20 = *(unsigned int *)(temp_v5 + 0x30);
          temp_v15 = *(unsigned int *)(temp_v5 + 0x3c);
          temp_v14 = *(unsigned int *)(temp_v5 + 0x34);
          uStack_9c = *(unsigned int *)(temp_v5 + 0x38);
          nn_math_ARMv6_VEC3TransformAsm_2A87B4(&temp_v16,&temp_v19,&temp_v14);
          temp_v3 = temp_v3 + 1;
          temp_v16 = temp_v16 * temp_v12 + (float)temp_v10;
          if (temp_v8 < temp_v16) {
            temp_v8 = temp_v16;
          }
          temp_v17 = temp_v17 * temp_v12 + (float)((unsigned long long)temp_v10 >> 0x20);
          temp_v18 = temp_v18 * temp_v12 + temp_v11;
          if (temp_v8 < temp_v18) {
            temp_v8 = temp_v18;
          }
          if (temp_v9 < temp_v17) {
            temp_v9 = temp_v17;
          }
        } while (temp_v3 < temp_v4);
      }
      temp_v6 = temp_v6 + 1;
      *(float *)&puVar9[5] = temp_v8;
      *(float *)&puVar9[6] = temp_v9;
    } while (temp_v6 < temp_v0);
    return 1;
  }
  return 0;
}

} /* extern "C" */
