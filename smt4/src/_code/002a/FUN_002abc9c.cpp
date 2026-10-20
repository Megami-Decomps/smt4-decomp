/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002abc9c` (_code @ 0x2abc9c, 0x19c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_002abc9c_arg0 fn_002abc9c_arg0;
struct fn_002abc9c_arg0 {
    unsigned char pad_0x0[0x8];
    undefined4 *field_0x8; /* +0x8 */
    void *field_0xc; /* +0xc */
    void *field_0x10; /* +0x10 */
    uint field_0x14; /* +0x14 */
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    void *field_0x20; /* +0x20 */
};

typedef int romwright_code(...);
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;


int FUN_002abc9c(fn_002abc9c_arg0 *param_1,unsigned int param_2,int param_3,unsigned int param_4,
                unsigned int param_5)

{
  unsigned char temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar7;
  unsigned long long *puVar8;
  romwright_code *pcVar9;
  unsigned int *puVar10;
  unsigned int temp_v3;
  unsigned long long temp_v4;
  
  piVar2 = (int *)0x0;
  if (param_3 == 0) {
    piVar2 = *(int **)&param_1->field_0x18;
  }
  else if (param_3 == 1) {
    piVar2 = *(int **)&param_1->field_0x1c;
  }
  else if (param_3 == 2) {
    piVar2 = *(int **)(param_1 + 1);
  }
  else if (param_3 == 3) {
    piVar2 = (int *)param_1->field_0x20;
  }
  temp_v4 = (**(romwright_code **)(*piVar2 + 0xc))();
  temp_v2 = param_1->field_0x14 & 0x3fffffff;
  if ((int)temp_v2 <= ((int)param_1->field_0x10 - (int)param_1->field_0xc) >> 4) {
    if (temp_v2 == 0) {
      temp_v2 = 1;
    }
    else {
      temp_v2 = temp_v2 << 1;
    }
    if ((param_1->field_0x14 & 0x3fffffff) < temp_v2) {
      if ((param_1->field_0x8 == (unsigned int *)0x0) ||
         ((param_1->field_0x14 & 0xc0000000) != 0x40000000)) {
        temp_v0 = 0;
        temp_v1 = 0;
        if (temp_v0) {
          temp_v1 = (int)param_1->field_0x10 - 0x10;
        }
        return temp_v1;
      }
      pcVar9 = *(romwright_code **)(*param_1->field_0x8 + 8);
      puVar3 = (unsigned int *)(*pcVar9)(param_1->field_0x8,temp_v2 << 4,0x20,pcVar9,param_5);
      puVar7 = (unsigned int *)param_1->field_0xc;
      puVar10 = (unsigned int *)param_1->field_0x10;
      temp_v1 = 0;
      puVar4 = puVar3;
      if (puVar7 != puVar10) {
        do {
          if (puVar4 != (unsigned int *)0x0) {
            temp_v3 = puVar7[1];
            *puVar4 = *puVar7;
            puVar4[1] = temp_v3;
            puVar4[2] = puVar7[2];
            puVar4[3] = puVar7[3];
          }
          puVar7 = puVar7 + 4;
          puVar4 = puVar4 + 4;
        } while (puVar7 != puVar10);
        puVar7 = (unsigned int *)param_1->field_0xc;
        temp_v1 = ((int)param_1->field_0x10 - (int)puVar7) >> 4;
      }
      if (puVar7 != (unsigned int *)0x0) {
        (**(romwright_code **)(*param_1->field_0x8 + 0xc))();
      }
      param_1->field_0x10 = puVar3 + temp_v1 * 4;
      param_1->field_0xc = puVar3;
      param_1->field_0x14 = (param_1->field_0x14 & 0xc0000000) | temp_v2;
    }
  }
  temp_v0 = 1;
  puVar8 = (unsigned long long *)param_1->field_0x10;
  if (puVar8 != (unsigned long long *)0x0) {
    *(unsigned int *)(puVar8 + 1) = 0;
    *(unsigned int *)((int)puVar8 + 0xc) = 0;
    *puVar8 = temp_v4;
  }
  param_1->field_0x10 = (void *)((int)param_1->field_0x10 + 0x10);
  temp_v1 = 0;
  if (temp_v0) {
    temp_v1 = (int)param_1->field_0x10 - 0x10;
  }
  return temp_v1;
}

} /* extern "C" */
