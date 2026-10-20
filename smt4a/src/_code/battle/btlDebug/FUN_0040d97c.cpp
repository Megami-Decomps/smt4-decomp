/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0040d97c` (_code @ 0x40d97c, 0x34c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_003e7fa4(unsigned int, int, int);
int FUN_003f0e20(unsigned int *, int);
int FUN_004aa0b0(...);
int FUN_004aa1e8(int, int);
int FUN_004aace8(...);

typedef struct fn_0040d97c_arg1 fn_0040d97c_arg1;
struct fn_0040d97c_arg1 {
    unsigned char pad_0x0[0x2];
    undefined2 field_0x2; /* +0x2 */
    unsigned char pad_0x4[0x10];
    void *field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x8];
    char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x5];
    short field_0x26; /* +0x26 */
    int field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x1c];
    ushort field_0x48; /* +0x48 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned int DAT_00571300; /* 0x571300 */
extern unsigned int DAT_00571304; /* 0x571304 */
extern unsigned int DAT_00571310; /* 0x571310 */
extern unsigned int DAT_00571314; /* 0x571314 */
extern unsigned int DAT_00571318; /* 0x571318 */
extern unsigned int DAT_0057131c; /* 0x57131c */
extern unsigned int DAT_00571320; /* 0x571320 */
extern unsigned int DAT_00571324; /* 0x571324 */
extern int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_003e7fa4. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004aa0b0. */
/* Supplied declaration required: FUN_004aa1e8. */
/* Supplied declaration required: FUN_004aace8. */


void FUN_0040d97c(unsigned int param_1,fn_0040d97c_arg1 *param_2)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  
  puVar3 = (unsigned int *)btlGetMainState();
  FUN_003f0e20(puVar3,(int)*(short *)((int)param_2->field_0x14 + 0x6a));
  if (puVar3 == (unsigned int *)0x0) {
    param_2->field_0x2 = 0;
    return;
  }
  if (param_2->field_0x20 != '\0') {
    if ((param_2->field_0x20 == '\x01') &&
       (temp_v4 = g_btlUiBlock, FUN_004aa1e8(g_btlUiBlock,(int)param_2->field_0x26), temp_v4 == 0)) {
      param_2->field_0x2 = 0;
      return;
    }
  }
  else {
    temp_v3 = *puVar3;
    temp_v5 = puVar3[1];
    if (!((DAT_00571318 & temp_v3) == 0 && (DAT_0057131c & temp_v5) == 0)) {
      temp_v2 = btlGetMainState();
      FUN_003e7fa4(temp_v2,(int)*(short *)((int)param_2->field_0x14 + 0x6a),0);
      temp_v4 = param_2->field_0x28;
      if (temp_v4 == 1) {
        temp_v4 = g_btlUiBlock;
        FUN_004aa0b0(g_btlUiBlock,1);
        temp_v1 = (short)temp_v4;
        param_2->field_0x26 = temp_v1;
        param_2->field_0x20 = '\x01';
        param_2->field_0x2 = 1;
        return;
      }
      if (temp_v4 != 2) {
        if (temp_v4 != 3) {
          if (temp_v4 != 4) {
            param_2->field_0x2 = 0;
            return;
          }
          temp_v4 = g_btlUiBlock;
          FUN_004aa0b0(g_btlUiBlock,2,1);
          temp_v1 = (short)temp_v4;
        }
        else {
          temp_v4 = g_btlUiBlock;
          FUN_004aa0b0(g_btlUiBlock,3,1);
          temp_v1 = (short)temp_v4;
        }
        param_2->field_0x26 = temp_v1;
        param_2->field_0x20 = '\x01';
        param_2->field_0x2 = 1;
        return;
      }
      if (param_2->field_0x48 == 0) {
        temp_v4 = g_btlUiBlock;
        FUN_004aa0b0(g_btlUiBlock,0,1);
        temp_v1 = (short)temp_v4;
        param_2->field_0x26 = temp_v1;
        param_2->field_0x20 = '\x01';
        param_2->field_0x2 = 1;
        return;
      }
      temp_v4 = g_btlUiBlock;
      FUN_004aa0b0(g_btlUiBlock,0,1);
      param_2->field_0x26 = (short)temp_v4;
      FUN_004aa0b0(g_btlUiBlock,1);
    }
    else {
      if (((DAT_00571300 | DAT_00571310 | DAT_00571320) & temp_v3) == 0 &&
          ((DAT_00571304 | DAT_00571314 | DAT_00571324) & temp_v5) == 0) {
        param_2->field_0x2 = 0;
        return;
      }
      temp_v7 = (int)*(short *)((int)puVar3 + 0x6e);
      temp_v4 = param_2->field_0x28;
      if ((temp_v3 & DAT_00571320) != 0 || (temp_v5 & DAT_00571324) != 0) {
        temp_v7 = 4;
      }
      temp_v1 = (short)(int)*(float *)((int)param_2->field_0x14 + 0x30);
      temp_v8 = (int)temp_v1;
      temp_v0 = (short)(int)*(float *)((int)param_2->field_0x14 + 0x34);
      temp_v6 = (int)temp_v0;
      if (temp_v4 != 1) {
        if (temp_v4 != 2) {
          if (temp_v4 != 3) {
            if (temp_v4 != 4) {
              param_2->field_0x2 = 0;
              return;
            }
            temp_v4 = g_btlUiBlock;
            FUN_004aace8(g_btlUiBlock,temp_v7,2,temp_v8,temp_v6);
            temp_v1 = (short)temp_v4;
          }
          else {
            temp_v4 = g_btlUiBlock;
            FUN_004aace8(g_btlUiBlock,temp_v7,3,temp_v8,temp_v6);
            temp_v1 = (short)temp_v4;
          }
        }
        else {
          if (param_2->field_0x48 != 0) {
            temp_v4 = g_btlUiBlock;
            FUN_004aace8(g_btlUiBlock,temp_v7,0,temp_v8,temp_v6);
            param_2->field_0x26 = (short)temp_v4;
            FUN_004aace8(g_btlUiBlock,temp_v7,1,(int)(short)(temp_v1 - 0x16),(int)(short)(temp_v0 - 0xd));
            param_2->field_0x20 = '\x01';
            param_2->field_0x2 = 1;
            return;
          }
          temp_v4 = g_btlUiBlock;
          FUN_004aace8(g_btlUiBlock,temp_v7,0,temp_v8,temp_v6);
          temp_v1 = (short)temp_v4;
        }
      }
      else {
        temp_v4 = g_btlUiBlock;
        FUN_004aace8(g_btlUiBlock,temp_v7,1,temp_v8,temp_v6);
        temp_v1 = (short)temp_v4;
      }
      param_2->field_0x26 = temp_v1;
    }
    param_2->field_0x20 = '\x01';
  }
  param_2->field_0x2 = 1;
  return;
}

} /* extern "C" */
