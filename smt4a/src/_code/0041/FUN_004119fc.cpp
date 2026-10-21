/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004119fc` (_code @ 0x4119fc, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int asdMemFree(...);
int scrScriptProcessDestroy(...);
int FUN_00275bc8(...);
int scrScriptProcessStartEntry(...);
int FUN_002804b0(...);
int FUN_00416610(...);

typedef struct fn_004119fc_arg0 fn_004119fc_arg0;
struct fn_004119fc_arg0 {
    unsigned char pad_0x0[0x4];
    unsigned char field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    int field_0x18; /* +0x18 */
    int field_0x1c; /* +0x1c */
    int field_0x20; /* +0x20 */
    int field_0x24; /* +0x24 */
    int field_0x28; /* +0x28 */
};

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
extern int FUN_00224880(void);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_00416610. */


void FUN_004119fc(fn_004119fc_arg0 *param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v0 = param_1->field_0x10;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if ((temp_v0 == 2) && ((param_1->field_0x28 == 0 || (temp_v0 = FUN_00224880(), temp_v0 == 2)))) {
        if ((param_1->field_0x1c != 0) && (param_1->field_0x20 >= 0)) {
          FUN_00416610(*(unsigned int *)&param_1[1].field_0x4);
          param_1->field_0x8 = 5;
        }
        else {
          param_1->field_0x18 = param_1->field_0x18 + 1;
          param_1->field_0x10 = 0;
        }
        if (param_1->field_0x28 != 0) {
          scrScriptProcessDestroy();
          param_1->field_0x28 = 0;
        }
        if (param_1->field_0x24 != 0) {
          asdMemFree();
          param_1->field_0x24 = 0;
          return;
        }
      }
    }
    else {
      temp_v0 = param_1->field_0x24;
      if (temp_v0 != 0) {
        FUN_00275bc8(temp_v0,0);
        param_1->field_0x28 = temp_v0;
        *(unsigned int *)(temp_v0 + 0x108) = 1;
        scrScriptProcessStartEntry(param_1->field_0x28,0);
        param_1->field_0x10 = param_1->field_0x10 + 1;
        return;
      }
    }
  }
  else {
    temp_v0 = param_1->field_0x18;
    if (temp_v0 != 2) {
      if (param_1->field_0x28 != 0) {
        scrScriptProcessDestroy();
        param_1->field_0x28 = 0;
      }
      if (param_1->field_0x24 != 0) {
        asdMemFree();
        param_1->field_0x24 = 0;
      }
      temp_v1 = 0;
      temp_v2 = 0;
      temp_v3 = 0;
      temp_v4 = 0;
      temp_v5 = 0;
      temp_v6 = 0;
      temp_v7 = 0;
      temp_v8 = 0;
      if (temp_v0 != 0) {
        if (temp_v0 == 1) {
          textFormatBuffer(&temp_v1,"battle/scr_prtatk_hojo.bf");
        }
      }
      else {
        textFormatBuffer(&temp_v1,"battle/scr_prtatk_cure.bf");
      }
      FUN_002804b0(&temp_v1,&param_1->field_0x24,0);
      param_1->field_0x10 = param_1->field_0x10 + 1;
      return;
    }
    FUN_00416610(*(unsigned int *)&param_1[1].field_0x4);
    param_1->field_0x8 = 6;
  }
  return;
}

} /* extern "C" */
