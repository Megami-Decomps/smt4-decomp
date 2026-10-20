/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cf370` (_code @ 0x4cf370, 0x208 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f4908(...);
int FUN_00290ba4(...);
int FUN_002ce874(...);
int FUN_002fe2ac(...);
int FUN_00321744(...);
int FUN_003d9164(...);
int FUN_003f14a0(...);
int FUN_004ab854(...);
int FUN_004f6d34(...);
int FUN_004f7b84(...);
int FUN_004fdcd8(...);
int FUN_004fddf4(...);

typedef struct fn_004cf370_arg0 fn_004cf370_arg0;
struct fn_004cf370_arg0 {
    unsigned char pad_0x0[0x8];
    byte field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    undefined4 field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
};

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_00571508; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */
extern int DAT_0057a684; /* 0x57a684 */
extern int DAT_0057a688; /* 0x57a688 */
extern unsigned int DAT_0057a68c; /* 0x57a68c */
extern int DAT_0057a690; /* 0x57a690 */
extern unsigned int DAT_0057a694; /* 0x57a694 */
extern int DAT_0057a698; /* 0x57a698 */
extern unsigned int DAT_0057a69c; /* 0x57a69c */
extern unsigned int DAT_0057a6a0; /* 0x57a6a0 */
extern int DAT_0057a6a4; /* 0x57a6a4 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_0013def0(unsigned int);
extern unsigned int FUN_0014aa78(void);
/* Supplied declaration required: FUN_001f4908. */
/* Supplied declaration required: FUN_00290ba4. */
/* Supplied declaration required: FUN_002ce874. */
/* Supplied declaration required: FUN_002fe2ac. */
/* Supplied declaration required: FUN_00321744. */
/* Supplied declaration required: FUN_003d9164. */
/* Supplied declaration required: FUN_003f14a0. */
/* Supplied declaration required: FUN_004ab854. */
/* Supplied declaration required: FUN_004f6d34. */
/* Supplied declaration required: FUN_004f7b84. */
/* Supplied declaration required: FUN_004fdcd8. */
/* Supplied declaration required: FUN_004fddf4. */


unsigned int FUN_004cf370(fn_004cf370_arg0 *param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = param_1->field_0x10;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        return 0;
      }
    }
    else {
      temp_v0 = DAT_00573808;
      FUN_004f6d34();
      if (temp_v0 == 0) {
        return 0;
      }
      param_1->field_0x10 = 2;
    }
  }
  else {
    FUN_004f7b84(DAT_00573808,"Dead_eyes");
    param_1->field_0x10 = 1;
    param_1->field_0x14 = 0;
    temp_v0 = DAT_00573808;
    FUN_004f6d34();
    if (temp_v0 == 0) {
      return 0;
    }
    param_1->field_0x10 = 2;
  }
  if (param_1->field_0x14 == DAT_0057a684) {
    FUN_004fdcd8(0,0,0,0,7,0,0xb,0);
    FUN_004ab854(DAT_0057a9c8);
  }
  if (param_1->field_0x14 == DAT_0057a698) {
    FUN_004fddf4(0,0,DAT_0057a69c,0x10,0,DAT_0057a6a0,0,2,0xffffffff);
  }
  if (((param_1->field_0x14 == DAT_0057a688) && (temp_v0 = FUN_0013def0(0), temp_v0 != 1)) &&
     (temp_v0 = FUN_0013def0(0), temp_v0 != 3)) {
    FUN_001f4908(0,DAT_0057a68c,0xff);
  }
  if (((param_1->field_0x14 == DAT_0057a690) && (temp_v0 = FUN_0013def0(1), temp_v0 != 1)) &&
     (temp_v0 = FUN_0013def0(1), temp_v0 != 3)) {
    FUN_001f4908(1,DAT_0057a694,0xff);
  }
  if (DAT_0057a6a4 < param_1->field_0x14) {
    temp_v1 = FUN_0014aa78();
    FUN_003f14a0();
    FUN_00321744();
    FUN_002fe2ac(temp_v1);
    FUN_002ce874(temp_v1);
    FUN_00290ba4(temp_v1);
    if (DAT_00571508 != 0) {
      FUN_003d9164();
    }
    if (param_1->field_0x8 == 2) {
      temp_v1 = 1;
    }
    else {
      temp_v1 = 3;
    }
    param_1->field_0xc = temp_v1;
    param_1->field_0x10 = 0;
  }
  param_1->field_0x14 = param_1->field_0x14 + 1;
  return 0;
}

} /* extern "C" */
