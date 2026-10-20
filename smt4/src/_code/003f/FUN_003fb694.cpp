/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fb694` (_code @ 0x3fb694, 0x1b4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022c0a4(...);
int FUN_0022c100(...);

typedef struct fn_003fb694_arg0 fn_003fb694_arg0;
struct fn_003fb694_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    undefined4 field_0xc; /* +0xc */
    uint field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
};

typedef int romwright_code(...);
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

/* Supplied declaration required: FUN_0022c0a4. */
/* Supplied declaration required: FUN_0022c100. */


unsigned int FUN_003fb694(fn_003fb694_arg0 *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  fn_003fb694_arg0 *pfVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *temp_v5;
  int temp_v6;
  
  temp_v0 = param_1->field_0x18 + 1;
  param_1->field_0x18 = temp_v0;
  if ((unsigned int)param_1->field_0xc < temp_v0) {
    temp_v3 = *param_2;
    temp_v4 = param_2[1];
    temp_v6 = param_2[3];
    *(unsigned int **)(temp_v6 + 8) = (unsigned int *)&temp_v3;
    param_2[3] = (unsigned int)&temp_v3;
    temp_v2 = param_1->field_0xc;
    temp_v5 = param_2;
    if (param_1->field_0x10 >= (unsigned int)param_1->field_0x14) {
      pfVar1 = param_1;
      FUN_0022c100(param_1,temp_v0 + param_1->field_0x10,&temp_v3);
      if (pfVar1 == (fn_003fb694_arg0 *)0x0) {
        pfVar1 = (fn_003fb694_arg0 *)0x0;
      }
      else {
        if (param_1->field_0x14 != 0) {
          puVar5 = (unsigned int *)param_1->field_0x4;
          puVar7 = puVar5 + param_1->field_0x14 * 4;
          puVar6 = puVar5 + temp_v2 * 4;
          for (; puVar5 != puVar7; puVar5 = puVar5 + 4) {
            if (puVar6 != puVar5) {
              puVar2 = (unsigned int *)puVar6[2];
              if (puVar2 == (unsigned int *)0x0 || puVar2 == puVar6) {
                if (puVar6[1] != 0) {
                  (**(romwright_code **)(*(int *)*puVar6 + 4))();
                }
              }
              else {
                puVar2[3] = puVar6[3];
                *(unsigned int *)(puVar6[3] + 8) = puVar6[2];
                puVar6[2] = 0;
                puVar6[3] = 0;
              }
              puVar6[1] = 0;
              puVar6[1] = puVar5[1];
              temp_v1 = puVar5[3];
              puVar6[3] = temp_v1;
              *(unsigned int **)(temp_v1 + 8) = puVar6;
              puVar6[2] = (unsigned int)puVar5;
              puVar5[3] = (unsigned int)puVar6;
            }
            puVar6 = puVar6 + 4;
          }
        }
        pfVar1 = (fn_003fb694_arg0 *)0x1;
        param_1->field_0x14 = param_1->field_0x14 + temp_v2;
      }
    }
    else {
      pfVar1 = param_1;
      FUN_0022c100(param_1,temp_v0,&temp_v3);
    }
    FUN_0022c0a4(&temp_v3);
    if (pfVar1 != (fn_003fb694_arg0 *)0x1) {
      return 0;
    }
  }
  if (param_1->field_0x14 == param_1->field_0xc) {
    param_1->field_0x14 = 0;
  }
  temp_v2 = param_1->field_0x14;
  param_1->field_0x14 = temp_v2 + 1;
  puVar5 = (unsigned int *)((int)param_1->field_0x4 + temp_v2 * 0x10);
  if (puVar5 != param_2) {
    FUN_0022c0a4(puVar5);
    puVar5[1] = param_2[1];
    temp_v2 = param_2[3];
    puVar5[3] = temp_v2;
    *(unsigned int **)(temp_v2 + 8) = puVar5;
    puVar5[2] = (unsigned int)param_2;
    param_2[3] = (unsigned int)puVar5;
  }
  return 1;
}

} /* extern "C" */
