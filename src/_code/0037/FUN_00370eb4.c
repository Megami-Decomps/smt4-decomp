/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00370eb4` (_code @ 0x370eb4, 0x304 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00370eb4_arg0 fn_00370eb4_arg0;
typedef struct fn_00370eb4_arg0_p8 fn_00370eb4_arg0_p8;
struct fn_00370eb4_arg0 {
    unsigned char pad_0x0[0x8];
    fn_00370eb4_arg0_p8 *field_0x8; /* +0x8 */
    unsigned char pad_0xc[0xa8];
    unsigned char field_0xb4; /* +0xb4 */
    unsigned char pad_0xb5[0x3];
    unsigned char field_0xb8; /* +0xb8 */
    unsigned char pad_0xb9[0x1b];
    unsigned char field_0xd4; /* +0xd4 */
    unsigned char pad_0xd5[0x9b];
    undefined4 field_0x170; /* +0x170 */
    void *field_0x174; /* +0x174 */
    unsigned char pad_0x178[0x7d];
    undefined1 field_0x1f5; /* +0x1f5 */
    unsigned char pad_0x1f6[0x2];
    void *field_0x1f8; /* +0x1f8 */
    int field_0x1fc; /* +0x1fc */
    int field_0x200; /* +0x200 */
    uint field_0x204; /* +0x204 */
};
struct fn_00370eb4_arg0_p8 {
    unsigned char pad_0x0[0x8];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0xab];
    undefined4 field_0xb4; /* +0xb4 */
    undefined4 field_0xb8; /* +0xb8 */
    unsigned char pad_0xbc[0x18];
    byte field_0xd4; /* +0xd4 */
};

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_002bcf58. */


unsigned int FUN_00370eb4(fn_00370eb4_arg0 *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int temp_v2;
  int *piVar6;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  fn_00370eb4_arg0_p8 *pfVar12;
  unsigned int temp_v8;
  unsigned long long temp_v9;
  unsigned int temp_v10;
  
  temp_v10 = 0;
  pfVar12 = param_1->field_0x8;
  temp_v8 = pfVar12->field_0xb4;
  if (temp_v8 == 0) {
    return 0;
  }
  temp_v9 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v8 << 2,4,*(romwright_code **)(*param_2 + 8),0,param_1);
  puVar3 = (unsigned int *)temp_v9;
  temp_v3 = (unsigned int)((unsigned long long)temp_v9 >> 0x20);
  temp_v1 = 0;
  if (puVar3 != (unsigned int *)0x0) {
    temp_v3 = temp_v8;
    temp_v1 = temp_v8;
  }
  if ((puVar3 != (unsigned int *)0x0 && temp_v8 != 0) && -1 < (int)temp_v1) {
    puVar4 = puVar3 + -1;
    if ((temp_v3 & 1) != 0) {
      *puVar3 = 0;
      puVar4 = puVar3;
    }
    for (temp_v4 = (int)temp_v8 >> 1; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
      puVar4[1] = 0;
      puVar4 = puVar4 + 2;
      *puVar4 = 0;
    }
  }
  temp_v4 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v8 * 0x88,4);
  if (puVar3 != (unsigned int *)0x0) {
    if (temp_v4 == 0) {
      (**(romwright_code **)(*param_2 + 0xc))(param_2,puVar3);
      temp_v10 = temp_v10 | 0x80000000;
    }
  }
  else {
    if (temp_v4 != 0) {
      (**(romwright_code **)(*param_2 + 0xc))(param_2,temp_v4);
    }
    temp_v10 = temp_v10 | 0x80000000;
  }
  if (-1 < (int)temp_v10) {
    temp_v6 = 0;
    if (temp_v6 < (int)temp_v8) {
      do {
        if (pfVar12->field_0xb8 != 0) {
          temp_v2 = (int)&pfVar12->field_0xb8 + pfVar12->field_0xb8;
        }
        else {
          temp_v2 = 0;
        }
        piVar6 = (int *)(temp_v2 + temp_v6 * 4);
        temp_v2 = *piVar6;
        if (temp_v2 != 0) {
          temp_v2 = temp_v2 + (int)piVar6;
        }
        else {
          temp_v2 = 0;
        }
        temp_v7 = temp_v4 + temp_v6 * 0x88;
        FUN_002bcf58(temp_v7,temp_v2,0x84);
        piVar6 = (int *)(temp_v7 + 0x20);
        if (param_1->field_0x8 != (fn_00370eb4_arg0_p8 *)0x0) {
          *piVar6 = (int)param_1->field_0x8 - (int)piVar6;
        }
        else {
          *piVar6 = 0;
        }
        *(unsigned int *)(temp_v7 + 0x10) = 0;
        *(unsigned int *)(temp_v7 + 0x14) = 0;
        if (pfVar12->field_0xb8 != 0) {
          temp_v2 = (int)&pfVar12->field_0xb8 + pfVar12->field_0xb8;
        }
        else {
          temp_v2 = 0;
        }
        piVar6 = (int *)(temp_v2 + temp_v6 * 4);
        temp_v2 = *piVar6;
        if (temp_v2 != 0) {
          temp_v2 = (int)piVar6 + temp_v2;
        }
        else {
          temp_v2 = 0;
        }
        temp_v5 = *(int *)(temp_v2 + 0xc);
        if (temp_v5 != 0) {
          temp_v5 = temp_v2 + 0xc + temp_v5;
        }
        else {
          temp_v5 = 0;
        }
        piVar6 = (int *)(temp_v7 + 0xc);
        if (temp_v5 != 0) {
          *piVar6 = temp_v5 - (int)piVar6;
        }
        else {
          *piVar6 = 0;
        }
        if (pfVar12->field_0xb8 != 0) {
          temp_v2 = (int)&pfVar12->field_0xb8 + pfVar12->field_0xb8;
        }
        else {
          temp_v2 = 0;
        }
        piVar6 = (int *)(temp_v2 + temp_v6 * 4);
        temp_v2 = *piVar6;
        if (temp_v2 != 0) {
          temp_v2 = (int)piVar6 + temp_v2;
        }
        else {
          temp_v2 = 0;
        }
        temp_v5 = *(int *)(temp_v2 + 0x70);
        if (temp_v5 != 0) {
          temp_v5 = temp_v2 + 0x70 + temp_v5;
        }
        else {
          temp_v5 = 0;
        }
        piVar6 = (int *)(temp_v7 + 0x70);
        if (temp_v5 != 0) {
          *piVar6 = temp_v5 - (int)piVar6;
        }
        else {
          *piVar6 = 0;
        }
        piVar6 = (int *)(puVar3 + temp_v6);
        if (temp_v7 != 0) {
          *piVar6 = temp_v7 - (int)piVar6;
        }
        else {
          *piVar6 = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < (int)temp_v8);
    }
    param_1->field_0x174 = puVar3 + temp_v8;
    param_1->field_0x170 = puVar3;
    param_1->field_0x1f5 = pfVar12->field_0xd4 != 0;
    temp_v4 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v8,4);
    if (temp_v4 == 0) {
      temp_v10 = temp_v10 | 0x80000000;
    }
    if (-1 < (int)temp_v10) {
      param_1->field_0x200 = param_1->field_0x1fc;
      if (param_1->field_0x1f8 != (int *)0x0 && param_1->field_0x1fc != 0) {
        (**(romwright_code **)(*(int *)param_1->field_0x1f8 + 0xc))();
      }
      param_1->field_0x1fc = temp_v4;
      param_1->field_0x1f8 = param_2;
      param_1->field_0x204 = temp_v8 & 0x3fffffff;
      temp_v6 = 0;
      param_1->field_0x200 = temp_v4;
      if (0 < (int)temp_v8) {
        do {
          piVar6 = (int *)(param_1->field_0x170 + temp_v6 * 4);
          temp_v4 = *piVar6;
          temp_v6 = temp_v6 + 1;
          if (temp_v4 != 0) {
            temp_v4 = (int)piVar6 + temp_v4;
          }
          else {
            temp_v4 = 0;
          }
          temp_v0 = *(char *)(temp_v4 + 0x24);
          temp_v4 = param_1->field_0x200;
          param_1->field_0x200 = temp_v4 + 1;
          if (temp_v4 != 0) {
            *(unsigned char *)temp_v4 = temp_v0 != '\0';
          }
        } while (temp_v6 < (int)temp_v8);
      }
    }
  }
  return temp_v10;
}
