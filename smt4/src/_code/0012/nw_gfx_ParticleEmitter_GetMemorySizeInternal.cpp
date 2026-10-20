/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_ParticleEmitter_GetMemorySizeInternal` (_code @ 0x12c778, 0x2e0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0012c778_arg1 fn_0012c778_arg1;
struct fn_0012c778_arg1 {
    unsigned char pad_0x0[0x28];
    int field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x90];
    int field_0xbc; /* +0xbc */
    byte field_0xc0; /* +0xc0 */
};

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_3_stack;


void nw_gfx_ParticleEmitter_GetMemorySizeInternal
               (int *param_1,fn_0012c778_arg1 *param_2,unsigned int *param_3)

{
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  
  if (param_2->field_0xc0 != 0) {
    *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x20;
  }
  if (param_2->field_0xbc != 0) {
    piVar2 = (int *)((int)&param_2->field_0xbc + param_2->field_0xbc);
  }
  else {
    piVar2 = (int *)0x0;
  }
  if ((piVar2 != (int *)0x0) && ((char)piVar2[1] != '\0')) {
    temp_v1 = *piVar2;
    if (temp_v1 != 0x10000000) {
      if (temp_v1 < 0x10000001) {
        if (temp_v1 != -0x80000000) {
          if (temp_v1 != 0x4000000) {
            if (temp_v1 == 0x8000000) {
              temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x18;
              *param_1 = temp_v1;
            }
          }
          else {
            temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x28;
            *param_1 = temp_v1;
          }
        }
        else {
          temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x1c;
          *param_1 = temp_v1;
        }
      }
      else if (temp_v1 != 0x20000000) {
        if (temp_v1 == 0x40000000) {
          temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x28;
          *param_1 = temp_v1;
        }
      }
      else {
        temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x24;
        *param_1 = temp_v1;
      }
    }
    else {
      temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 8;
      *param_1 = temp_v1;
    }
  }
  *param_1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x188;
  temp_v3 = *param_3;
  temp_v2 = param_3[1];
  temp_v6 = param_3[2];
  temp_v0 = param_3[3];
  temp_v7 = param_1[1];
  param_1[1] = 0x20;
  temp_v5 = 0x20;
  if ((unsigned int)param_1[2] >= 0x20) {
    temp_v5 = param_1[2];
  }
  param_1[2] = temp_v5;
  if (temp_v5 < temp_v7) {
    temp_v5 = temp_v7;
  }
  *param_1 = temp_v6 * 4 + ((*param_1 + 0x1fU) & 0xffffffe0);
  param_1[1] = temp_v7;
  param_1[2] = temp_v5;
  if (temp_v2 != 0) {
    temp_v5 = param_1[1] - 1;
    temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~temp_v5) + 0x14;
    *param_1 = temp_v1;
    temp_v1 = (((temp_v1 + param_1[1]) - 1U) & ~temp_v5) + temp_v2 * 4;
  }
  else {
    temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x14;
  }
  *param_1 = temp_v1;
  temp_v1 = (int)(((temp_v3 & 0xff) | ((((int)(temp_v3 << 0x10) >> 0x18) & 0xffU) << 8)) << 0x10) >> 0x18;
  temp_v8 = temp_v1 != 0;
  if (temp_v8 && param_2 != (fn_0012c778_arg1 *)0x0) {
    temp_v1 = param_2->field_0x28;
  }
  if ((temp_v8 && param_2 != (fn_0012c778_arg1 *)0x0) && temp_v1 != 0) {
    temp_v4 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x2c;
    *param_1 = temp_v4;
    temp_v4 = (((temp_v4 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + temp_v1 * 4;
    *param_1 = temp_v4;
    *param_1 = (((temp_v4 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + temp_v1 * temp_v0 * 4;
  }
  temp_v1 = (((*param_1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + 0x14;
  if (temp_v2 != 0) {
    *param_1 = temp_v1;
    temp_v1 = (((temp_v1 + param_1[1]) - 1U) & ~(param_1[1] - 1U)) + temp_v2 * 4;
  }
  *param_1 = temp_v1;
  return;
}

} /* extern "C" */
