/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f1cdc` (_code @ 0x4f1cdc, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004f1cdc_arg0 fn_004f1cdc_arg0;
typedef struct fn_004f1cdc_arg1 fn_004f1cdc_arg1;
struct fn_004f1cdc_arg0 {
    unsigned char pad_0x0[0x64c];
    uint field_0x64c; /* +0x64c */
    unsigned char pad_0x650[0x154];
    undefined4 field_0x7a4; /* +0x7a4 */
    undefined4 field_0x7a8; /* +0x7a8 */
    undefined4 field_0x7ac; /* +0x7ac */
    unsigned char pad_0x7b0[0x18];
    undefined4 field_0x7c8; /* +0x7c8 */
    int field_0x7cc; /* +0x7cc */
    undefined4 field_0x7d0; /* +0x7d0 */
    undefined4 field_0x7d4; /* +0x7d4 */
    undefined4 field_0x7d8; /* +0x7d8 */
};
struct fn_004f1cdc_arg1 {
    unsigned char pad_0x0[0x64c];
    unsigned char field_0x64c; /* +0x64c */
    unsigned char pad_0x64d[0x157];
    unsigned char field_0x7a4; /* +0x7a4 */
    unsigned char pad_0x7a5[0x3];
    unsigned char field_0x7a8; /* +0x7a8 */
    unsigned char pad_0x7a9[0x3];
    unsigned char field_0x7ac; /* +0x7ac */
    unsigned char pad_0x7ad[0x1b];
    unsigned char field_0x7c8; /* +0x7c8 */
    unsigned char pad_0x7c9[0x3];
    unsigned char field_0x7cc; /* +0x7cc */
    unsigned char pad_0x7cd[0x3];
    unsigned char field_0x7d0; /* +0x7d0 */
    unsigned char pad_0x7d1[0x3];
    unsigned char field_0x7d4; /* +0x7d4 */
    unsigned char pad_0x7d5[0x3];
    unsigned char field_0x7d8; /* +0x7d8 */
    unsigned char pad_0x7d9[0x1823];
    int field_0x1ffc; /* +0x1ffc */
    unsigned char pad_0x2000[0x25a0];
    uint field_0x45a0; /* +0x45a0 */
    uint field_0x45a4; /* +0x45a4 */
};

extern unsigned int DAT_00571540; /* 0x571540 */
extern unsigned int DAT_00571544; /* 0x571544 */
extern unsigned int DAT_00571548; /* 0x571548 */
extern unsigned int DAT_0057154c; /* 0x57154c */
extern unsigned int DAT_00571560; /* 0x571560 */
extern unsigned int DAT_00571564; /* 0x571564 */
extern unsigned int DAT_005e1554; /* 0x5e1554 */
extern unsigned int DAT_005e1558; /* 0x5e1558 */
extern unsigned int DAT_005e155c; /* 0x5e155c */

/* Supplied declaration required: FUN_00184310. */
extern int FUN_004f2708(fn_004f1cdc_arg0 *, fn_004f1cdc_arg1 *, unsigned int);


void FUN_004f1cdc(fn_004f1cdc_arg0 *param_1,fn_004f1cdc_arg1 *param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  param_1->field_0x7ac = 0;
  param_1->field_0x7a8 = 0;
  param_1->field_0x7a4 = 0;
  param_1->field_0x64c = param_1->field_0x64c & 0xff7fffff;
  param_1->field_0x7d8 = 0;
  param_1->field_0x7d4 = 0;
  param_1->field_0x7d0 = 0;
  temp_v1 = FUN_004f2708(param_1,param_2,1);
  if (temp_v1 == 0) {
    return;
  }
  temp_v1 = param_1->field_0x7cc;
  param_1->field_0x7cc = param_3;
  param_1->field_0x7c8 = temp_v1;
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        if (param_3 != 3) {
          return;
        }
        param_1->field_0x7a4 = 0x41400000;
        temp_v0 = DAT_005e155c;
        temp_v3 = DAT_005e1558;
        param_1->field_0x7d0 = DAT_005e1554;
        param_1->field_0x7d4 = temp_v3;
        param_1->field_0x7d8 = temp_v0;
        if (!((DAT_00571560 & param_2->field_0x45a0) == 0 &&
             (DAT_00571564 & param_2->field_0x45a4) == 0)) {
          temp_v3 = 0x3fc00000;
          param_1->field_0x7d0 = temp_v3;
        }
      }
      else {
        param_1->field_0x7a4 = 0x40c00000;
        temp_v0 = DAT_005e155c;
        temp_v3 = DAT_005e1558;
        param_1->field_0x7d0 = DAT_005e1554;
        param_1->field_0x7d4 = temp_v3;
        param_1->field_0x7d8 = temp_v0;
      }
    }
    else {
      param_1->field_0x7a4 = 0xc0c00000;
      temp_v0 = DAT_005e155c;
      temp_v3 = DAT_005e1558;
      param_1->field_0x7d0 = DAT_005e1554;
      param_1->field_0x7d4 = temp_v3;
      param_1->field_0x7d8 = temp_v0;
    }
  }
  else {
    param_1->field_0x7a4 = 0xc1400000;
    temp_v0 = DAT_005e155c;
    temp_v3 = DAT_005e1558;
    param_1->field_0x7d0 = DAT_005e1554;
    param_1->field_0x7d4 = temp_v3;
    param_1->field_0x7d8 = temp_v0;
    if (!((DAT_00571560 & param_2->field_0x45a0) == 0 && (DAT_00571564 & param_2->field_0x45a4) == 0
         )) {
      temp_v3 = 0xbfc00000;
      param_1->field_0x7d0 = temp_v3;
    }
  }
  puVar4 = (unsigned int *)(param_2->field_0x1ffc + param_3 * 0x408);
  if ((DAT_00571540 & *puVar4) == 0 && (DAT_00571544 & puVar4[1]) == 0) {
    if ((*puVar4 & DAT_00571548) == 0 && (puVar4[1] & DAT_0057154c) == 0) {
      return;
    }
    temp_v2 = (unsigned int)*(unsigned short *)((int)puVar4 + 0x166);
    FUN_00184310();
    temp_v2 = (*(unsigned int *)(temp_v2 + 0x34) & 0x1fffffff) >> 0x19;
    if (temp_v2 != 0) {
      if (temp_v2 == 1) {
        temp_v4 = 0xc0600000;
      }
      else {
        if (temp_v2 != 2) {
          return;
        }
        temp_v4 = 0x40400000;
      }
      param_1->field_0x7a8 = temp_v4;
      return;
    }
  }
  param_1->field_0x7a8 = temp_v4;
  return;
}
