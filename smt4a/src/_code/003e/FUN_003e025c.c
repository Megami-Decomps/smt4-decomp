/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e025c` (_code @ 0x3e025c, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e025c_arg1 fn_003e025c_arg1;
struct fn_003e025c_arg1 {
    unsigned char pad_0x0[0x3];
    byte field_0x3; /* +0x3 */
    unsigned char pad_0x4[0x30];
    undefined4 field_0x34; /* +0x34 */
    unsigned char pad_0x38[0x32];
    short field_0x6a; /* +0x6a */
    unsigned char pad_0x6c[0xfa];
    unsigned char field_0x166; /* +0x166 */
    unsigned char pad_0x167[0x29d];
    void *field_0x404; /* +0x404 */
};

/* stack frame of param_2: 17 slot(s), 68 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned int DAT_00571508; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_003e1068. */
extern int FUN_003eca48(fn_003e025c_arg1 *, unsigned short);
extern int FUN_003eccd0(fn_003e025c_arg1 *);
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004f1a54. */
extern int FUN_004f2294(unsigned int);
/* Supplied declaration required: FUN_004f2abc. */


void FUN_003e025c(unsigned int *param_1,fn_003e025c_arg1 *param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  fn_003e025c_arg1 *pfVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  
  temp_v0 = FUN_003eccd0(param_2);
  if ((temp_v0 != 0) &&
     (pfVar2 = param_2, FUN_003f0e20(param_2,(int)*(short *)(temp_v0 + 0x6a)),
     pfVar2 != (fn_003e025c_arg1 *)0x0)) {
    temp_v0 = FUN_003eca48(param_2,*(unsigned short *)&pfVar2->field_0x166);
    *(unsigned int *)(DAT_00573808 + 0x9c70) = *(unsigned int *)(temp_v0 + 0x34);
    if ((temp_v0 != 0) && ((*(unsigned char *)(temp_v0 + 3) & 1) != 0)) {
      temp_v1 = 0;
      temp_v2 = 0;
      temp_v3 = 0;
      temp_v4 = 0;
      temp_v5 = 0;
      temp_v6 = 0;
      temp_v7 = 0;
      temp_v8 = 0;
      temp_v9 = 0;
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v13 = 0;
      temp_v14 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      FUN_00100388(&temp_v1,"battle/model/en%03d_camera.bch",
                   (int)*(short *)((int)pfVar2->field_0x404 + 0x8c));
      FUN_004f2abc(DAT_00571508,&temp_v1);
      *param_1 = 0xe;
      param_1[4] = 0;
      param_1[3] = 0;
      temp_v0 = FUN_004f2294(DAT_00571508);
      if (temp_v0 != 0) {
        FUN_004f1a54(DAT_00571508);
        *param_1 = 0xf;
        param_1[4] = 0;
        param_1[3] = 0;
        FUN_003e1068(param_1,param_2);
      }
      return;
    }
  }
  param_1[4] = 0;
  *param_1 = 0xf;
  param_1[3] = 0;
  FUN_003e1068(param_1,param_2);
  return;
}
