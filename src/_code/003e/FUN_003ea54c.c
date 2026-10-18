/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ea54c` (_code @ 0x3ea54c, 0x60c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003ea54c_arg0 fn_003ea54c_arg0;
struct fn_003ea54c_arg0 {
    unsigned char pad_0x0[0x8];
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    uint field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x1c];
    int field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x4];
    uint field_0x3c; /* +0x3c */
    uint field_0x40; /* +0x40 */
    unsigned char pad_0x44[0x18];
    void *field_0x5c; /* +0x5c */
    byte *field_0x60; /* +0x60 */
    uint field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
};

typedef int romwright_code();
/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern unsigned int FUN_0022c198(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5ff4. */


/* WARNING: Removing unreachable block (ram,0x003ea6fc) */
/* WARNING: Removing unreachable block (ram,0x003ea624) */
/* WARNING: Removing unreachable block (ram,0x003ea62c) */
/* WARNING: Removing unreachable block (ram,0x003ea634) */
/* WARNING: Removing unreachable block (ram,0x003ea644) */
/* WARNING: Removing unreachable block (ram,0x003ea660) */
/* WARNING: Removing unreachable block (ram,0x003ea6e0) */
/* WARNING: Removing unreachable block (ram,0x003ea710) */
/* WARNING: Removing unreachable block (ram,0x003ea714) */
/* WARNING: Removing unreachable block (ram,0x003ea724) */
/* WARNING: Removing unreachable block (ram,0x003ea72c) */
/* WARNING: Removing unreachable block (ram,0x003ea734) */
/* WARNING: Removing unreachable block (ram,0x003ea738) */
/* WARNING: Removing unreachable block (ram,0x003ea73c) */
/* WARNING: Removing unreachable block (ram,0x003ea668) */
/* WARNING: Removing unreachable block (ram,0x003ea690) */
/* WARNING: Removing unreachable block (ram,0x003ea694) */
/* WARNING: Removing unreachable block (ram,0x003ea69c) */
/* WARNING: Removing unreachable block (ram,0x003ea6a4) */
/* WARNING: Removing unreachable block (ram,0x003ea6b4) */
/* WARNING: Removing unreachable block (ram,0x003ea6bc) */
/* WARNING: Removing unreachable block (ram,0x003ea6c0) */
/* WARNING: Removing unreachable block (ram,0x003ea6c4) */
/* WARNING: Removing unreachable block (ram,0x003ea67c) */
/* WARNING: Removing unreachable block (ram,0x003ea71c) */

unsigned int FUN_003ea54c(fn_003ea54c_arg0 *param_1,int *param_2,unsigned int *param_3)

{
/* irregular: 2 goto(s); 26 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned int temp_v2;
  unsigned char *pbVar5;
  int temp_v3;
  unsigned char *pbVar7;
  unsigned char *pbVar8;
  unsigned int temp_v4;
  unsigned int unaff_r5;
  unsigned int temp_v5;
  int *piVar11;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = param_1->field_0x14;
  temp_v6 = param_1->field_0x10;
  temp_v3 = param_1->field_0x8;
  temp_v5 = param_1->field_0x3c;
  if (temp_v6 <= temp_v0) {
    unaff_r5 = temp_v3 + (temp_v0 - temp_v6);
  }
  temp_v2 = param_1->field_0x40;
  if (temp_v6 > temp_v0) {
    unaff_r5 = temp_v3 + temp_v0;
  }
  temp_v4 = temp_v2;
  if (temp_v5 <= temp_v2) {
    temp_v4 = temp_v2 - temp_v5;
  }
  temp_v4 = (*(int *)(*(int *)(param_1->field_0x34 + temp_v4 * 0x10 + 4) + 8) - 1) + temp_v0;
  if (temp_v6 <= temp_v4) {
    temp_v4 = temp_v4 - temp_v6;
  }
  if (unaff_r5 > temp_v4 + temp_v3) {
    if (temp_v5 <= temp_v2) {
      temp_v2 = temp_v2 - temp_v5;
    }
    temp_v5 = param_1->field_0x68;
    pbVar5 = param_1->field_0x60;
    temp_v0 = *(unsigned int *)(*(int *)(param_1->field_0x34 + temp_v2 * 0x10 + 4) + 8);
    if (temp_v5 < temp_v0) {
      temp_v3 = temp_v0 - temp_v5;
      if (temp_v3 != 0) {
        temp_v0 = temp_v5 + temp_v3;
        if (param_1->field_0x64 >= temp_v0) {
          temp_v6 = param_1->field_0x68;
          if (temp_v5 + temp_v3 < (unsigned int)param_1->field_0x68) {
            temp_v6 = temp_v5 + temp_v3;
          }
          if (0 < (int)(temp_v6 - temp_v5)) {
            for (temp_v1 = (int)(temp_v6 - temp_v5) >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
            }
          }
        }
        else {
          temp_v2 = FUN_0022c198(param_1->field_0x64,temp_v0);
          piVar11 = param_1->field_0x5c;
          pbVar5 = (unsigned char *)0x0;
          temp_v7 = 0;
          temp_v6 = temp_v7;
          if ((temp_v2 != 0) &&
             (pbVar5 = (unsigned char *)(**(romwright_code **)*piVar11)(piVar11,temp_v2), temp_v6 = temp_v2,
             pbVar5 == (unsigned char *)0x0)) {
            (**(romwright_code **)(*piVar11 + 8))
                      (piVar11,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                       temp_v2);
            if (temp_v0 == temp_v2) {
              (**(romwright_code **)(*piVar11 + 4))(piVar11);
              return 0;
            }
            temp_v6 = temp_v7;
            if ((temp_v0 != 0) &&
               (pbVar5 = (unsigned char *)(**(romwright_code **)*piVar11)(piVar11,temp_v0), temp_v6 = temp_v0,
               pbVar5 == (unsigned char *)0x0)) {
              (**(romwright_code **)(*piVar11 + 8))
                        (piVar11,"MoLive::Allocator: not enough memory to allocate %d bytes !!!\n",
                         temp_v0);
              (**(romwright_code **)(*piVar11 + 4))(piVar11);
              return 0;
            }
          }
          temp_v7 = temp_v6;
          pbVar7 = param_1->field_0x60;
          pbVar3 = pbVar5;
          for (temp_v6 = temp_v5; temp_v6 != 0; temp_v6 = temp_v6 - 1) {
            if (pbVar3 != (unsigned char *)0x0) {
              *pbVar3 = *pbVar7;
            }
            pbVar3 = pbVar3 + 1;
            pbVar7 = pbVar7 + 1;
          }
          temp_v1 = param_1->field_0x68 - temp_v5;
          pbVar7 = param_1->field_0x60 + temp_v5;
          if (temp_v1 != 0) {
            pbVar3 = pbVar5 + temp_v5 + temp_v3;
            do {
              if (pbVar3 != (unsigned char *)0x0) {
                *pbVar3 = *pbVar7;
              }
              pbVar3 = pbVar3 + 1;
              pbVar7 = pbVar7 + 1;
              temp_v1 = temp_v1 - 1;
            } while (temp_v1 != 0);
          }
          pbVar7 = param_1->field_0x60;
          param_1->field_0x60 = pbVar5;
          param_1->field_0x64 = temp_v7;
          if (0 < (int)param_1->field_0x68) {
            for (temp_v1 = (int)param_1->field_0x68 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
            }
          }
          (**(romwright_code **)(*piVar11 + 4))(piVar11,pbVar7);
        }
        param_1->field_0x68 = temp_v0;
        do {
          pbVar5 = param_1->field_0x60 + temp_v5;
          temp_v5 = temp_v5 + 1;
          if (pbVar5 != (unsigned char *)0x0) {
            *pbVar5 = 0;
          }
          temp_v3 = temp_v3 - 1;
        } while (temp_v3 != 0);
      }
    }
    else {
      pbVar3 = pbVar5 + temp_v5;
      pbVar7 = pbVar5 + temp_v0;
      if (pbVar7 != pbVar3) {
        temp_v2 = (int)pbVar3 - (int)pbVar5;
        temp_v6 = (int)pbVar7 - (int)pbVar5;
        temp_v0 = temp_v5 - temp_v2;
        temp_v3 = temp_v5 - ((int)pbVar3 - (int)pbVar7);
        if (temp_v0 != 0) {
          if (temp_v2 >= temp_v6) {
            pbVar7 = pbVar5 + temp_v6;
            pbVar5 = pbVar5 + temp_v2;
            if (temp_v0 >= 0x80000000) {
              do {
                temp_v0 = temp_v0 - 1;
                *pbVar7 = *pbVar5;
                pbVar5 = pbVar5 + 1;
                pbVar7 = pbVar7 + 1;
              } while (temp_v0 != 0);
            }
            else {
              if ((int)temp_v0 < 2) {
                temp_v0 = 1;
              }
              else if ((int)temp_v0 < 1) goto LAB_003eaa4c;
              pbVar3 = pbVar5 + -1;
              pbVar8 = pbVar7 + -1;
              if ((temp_v0 & 1) != 0) {
                *pbVar7 = *pbVar5;
                pbVar3 = pbVar5;
                pbVar8 = pbVar7;
              }
              for (temp_v1 = (int)temp_v0 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
                pbVar8[1] = pbVar3[1];
                pbVar3 = pbVar3 + 2;
                pbVar8 = pbVar8 + 2;
                *pbVar8 = *pbVar3;
              }
            }
          }
          else {
            pbVar7 = pbVar5 + temp_v6 + temp_v0;
            pbVar5 = pbVar5 + temp_v2 + temp_v0;
            if (temp_v0 >= 0x80000000) {
              do {
                pbVar5 = pbVar5 + -1;
                temp_v0 = temp_v0 - 1;
                pbVar7 = pbVar7 + -1;
                *pbVar7 = *pbVar5;
              } while (temp_v0 != 0);
            }
            else {
              if ((int)temp_v0 < 2) {
                temp_v0 = 1;
              }
              else if ((int)temp_v0 < 1) goto LAB_003eaa4c;
              if ((temp_v0 & 1) != 0) {
                pbVar5 = pbVar5 + -1;
                pbVar7 = pbVar7 + -1;
                *pbVar7 = *pbVar5;
              }
              for (temp_v1 = (int)temp_v0 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
                pbVar7[-1] = pbVar5[-1];
                pbVar5 = pbVar5 + -2;
                pbVar7 = pbVar7 + -2;
                *pbVar7 = *pbVar5;
              }
            }
          }
        }
LAB_003eaa4c:
        temp_v1 = param_1->field_0x68 - temp_v3;
        if (0 < temp_v1) {
          for (temp_v1 = temp_v1 >> 1; temp_v1 != 0; temp_v1 = temp_v1 - 1) {
          }
        }
        param_1->field_0x68 = temp_v3;
      }
    }
    temp_v0 = param_1->field_0x14;
    temp_v5 = param_1->field_0x10;
    temp_v3 = temp_v5 - temp_v0;
    if (temp_v5 <= temp_v0) {
      temp_v0 = temp_v0 - temp_v5;
    }
    FUN_002c5ff4(param_1->field_0x60,param_1->field_0x8 + temp_v0,temp_v3);
    temp_v0 = param_1->field_0x40;
    if (param_1->field_0x3c <= temp_v0) {
      temp_v0 = temp_v0 - param_1->field_0x3c;
    }
    temp_v5 = param_1->field_0x14 + temp_v3;
    if (param_1->field_0x10 <= temp_v5) {
      temp_v5 = temp_v5 - param_1->field_0x10;
    }
    FUN_002c5ff4(param_1->field_0x60 + temp_v3,param_1->field_0x8 + temp_v5,
                 *(int *)(*(int *)(param_1->field_0x34 + temp_v0 * 0x10 + 4) + 8) - temp_v3);
    *param_2 = (int)param_1->field_0x60;
  }
  else {
    if (temp_v6 <= temp_v0) {
      temp_v0 = temp_v0 - temp_v6;
    }
    *param_2 = temp_v0 + temp_v3;
  }
  temp_v0 = param_1->field_0x40;
  if (param_1->field_0x3c <= temp_v0) {
    temp_v0 = temp_v0 - param_1->field_0x3c;
  }
  temp_v5 = *(unsigned int *)(*(int *)(param_1->field_0x34 + temp_v0 * 0x10 + 4) + 8);
  *param_3 = temp_v5;
  temp_v0 = *(unsigned int *)(param_1 + 1);
  if (*(unsigned int *)(param_1 + 1) < temp_v5) {
    temp_v0 = temp_v5;
  }
  *(unsigned int *)(param_1 + 1) = temp_v0;
  return 1;
}
