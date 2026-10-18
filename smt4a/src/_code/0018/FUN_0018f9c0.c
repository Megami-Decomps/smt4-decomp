/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018f9c0` (_code @ 0x18f9c0, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0018f9c0_arg0 fn_0018f9c0_arg0;
struct fn_0018f9c0_arg0 {
    unsigned char pad_0x0[0x4c];
    int field_0x4c; /* +0x4c */
    int field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x8];
    int field_0x5c; /* +0x5c */
    int field_0x60; /* +0x60 */
    int field_0x64; /* +0x64 */
    int field_0x68; /* +0x68 */
};

extern int FUN_001a7a20(int, int, unsigned int);
extern unsigned int FUN_002e3390(int);
/* Supplied declaration required: FUN_0030ea58. */


unsigned int FUN_0018f9c0(fn_0018f9c0_arg0 *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  
  temp_v5 = 0;
  if (((param_1->field_0x4c == 0) && (temp_v3 = param_1->field_0x5c, temp_v3 != 0)) &&
     (param_1->field_0x60 != 0)) {
    temp_v0 = *(int *)(param_2 + 0x30);
    temp_v1 = FUN_002e3390(temp_v3);
    temp_v3 = FUN_001a7a20(temp_v0 + 0x34,temp_v3,temp_v1);
    if (temp_v3 == 0xffff) {
      temp_v5 = 0x80000020;
    }
    else {
      temp_v0 = param_1->field_0x60;
      piVar7 = *(int **)(*(int *)(*(int *)(param_2 + 0x30) + 0x30) + temp_v3 * 4);
      if (temp_v0 != 0) {
        temp_v3 = *piVar7;
        temp_v4 = temp_v3 + piVar7[1] * 0x10;
        for (; temp_v3 != temp_v4; temp_v3 = temp_v3 + 0x10) {
          temp_v2 = *(int *)(temp_v3 + 0xc);
          FUN_0030ea58(temp_v2,temp_v0);
          if (temp_v2 == 0) break;
        }
        if (*piVar7 + piVar7[1] * 0x10 == temp_v3) {
          temp_v3 = 0;
        }
      }
      else {
        temp_v3 = 0;
      }
      param_1->field_0x4c = temp_v3;
    }
  }
  if (param_1->field_0x50 != 0) {
    return temp_v5;
  }
  temp_v3 = param_1->field_0x64;
  if (temp_v3 == 0) {
    return temp_v5;
  }
  if (param_1->field_0x68 == 0) {
    return temp_v5;
  }
  temp_v0 = *(int *)(param_2 + 0x30);
  temp_v1 = FUN_002e3390(temp_v3);
  temp_v3 = FUN_001a7a20(temp_v0 + 0x34,temp_v3,temp_v1);
  if (temp_v3 == 0xffff) {
    return 0x80000020;
  }
  temp_v0 = param_1->field_0x68;
  piVar7 = *(int **)(*(int *)(*(int *)(param_2 + 0x30) + 0x30) + temp_v3 * 4);
  if (temp_v0 != 0) {
    temp_v3 = *piVar7;
    temp_v4 = temp_v3 + piVar7[1] * 0x10;
    for (; temp_v3 != temp_v4; temp_v3 = temp_v3 + 0x10) {
      temp_v2 = *(int *)(temp_v3 + 0xc);
      FUN_0030ea58(temp_v2,temp_v0);
      if (temp_v2 == 0) break;
    }
    if (*piVar7 + piVar7[1] * 0x10 != temp_v3) {
      param_1->field_0x50 = temp_v3;
      return temp_v5;
    }
  }
  temp_v3 = 0;
  param_1->field_0x50 = temp_v3;
  return temp_v5;
}
