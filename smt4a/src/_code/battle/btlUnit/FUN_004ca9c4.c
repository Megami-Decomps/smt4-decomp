/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ca9c4` (_code @ 0x4ca9c4, 0x1c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004ca9c4_arg1 fn_004ca9c4_arg1;
struct fn_004ca9c4_arg1 {
    unsigned char pad_0x0[0xc];
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x24];
    undefined1 field_0x3c; /* +0x3c */
    unsigned char pad_0x3d[0xb];
    undefined4 field_0x48; /* +0x48 */
    unsigned char pad_0x4c[0x4];
    uint field_0x50; /* +0x50 */
    unsigned char pad_0x54[0x4];
    uint field_0x58; /* +0x58 */
    unsigned char pad_0x5c[0xe];
    short field_0x6a; /* +0x6a */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    unsigned char pad_0x78[0x10];
    undefined4 field_0x88; /* +0x88 */
    unsigned char pad_0x8c[0x8];
    undefined4 field_0x94; /* +0x94 */
    undefined4 field_0x98; /* +0x98 */
    unsigned char pad_0x9c[0x120];
    int field_0x1bc; /* +0x1bc */
};

/* stack frame of param_2: 16 slot(s), 64 byte(s) */
typedef struct {
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

extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */
extern unsigned int DAT_0057aa1c; /* 0x57aa1c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004ac0d4. */
/* Supplied declaration required: FUN_004cb9d0. */
/* Supplied declaration required: FUN_004d854c. */
extern int FUN_004d87e4(void);
/* Supplied declaration required: FUN_004d881c. */
extern int FUN_004d88c0(void);


void FUN_004ca9c4(int param_1,fn_004ca9c4_arg1 *param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
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
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  
  if ((param_2->field_0x58 & 1) != 0) {
    param_2->field_0x58 = (param_2->field_0x58 & 0xfffffffe) | 0x12;
  }
  if ((param_2->field_0x58 & 2) != 0) {
    if ((param_2->field_0x58 & 0x10) != 0) {
      if (param_2->field_0x1bc == 0) {
        temp_v1 = param_1;
        FUN_003f0e20(param_1,(int)param_2->field_0x6a);
        temp_v2 = 0x24;
        FUN_00178b04(0x24,"c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlUnit.cpp",0x642);
        temp_v3 = 0;
        if (temp_v2 != 0) {
          temp_v3 = FUN_004d88c0();
        }
        param_2->field_0x1bc = temp_v3;
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
        temp_v17 = 0;
        temp_v18 = 0;
        temp_v19 = 0;
        if (*(int *)(temp_v1 + 0x404) != 0) {
          FUN_00100388(&temp_v4,"battle/model/en%03d.bam",
                       (int)*(short *)(*(int *)(temp_v1 + 0x404) + 0x8c));
          FUN_004d881c(param_2->field_0x1bc,&temp_v4);
        }
      }
      param_2->field_0x58 = param_2->field_0x58 & 0xffffffef;
    }
    if ((param_2->field_0x1bc != 0) && (temp_v3 = FUN_004d87e4(), temp_v3 != 0)) {
      param_2->field_0x50 = param_2->field_0x50 | 0x200002;
      FUN_004d854c(param_2->field_0x1bc);
      FUN_001568f8(param_1,(int)param_2->field_0x6a);
      FUN_004ac0d4(DAT_0057a9c8,*(unsigned short *)(param_1 + 2));
      param_2->field_0x3c = 0;
      param_2->field_0xc = 0;
      param_2->field_0x10 = 0;
      param_2->field_0x14 = 0;
      FUN_004cb9d0(param_2);
      temp_v0 = DAT_0057aa1c;
      param_2->field_0x6c = DAT_0057aa1c;
      param_2->field_0x70 = temp_v0;
      param_2->field_0x88 = 0xff;
      param_2->field_0x74 = temp_v0;
      param_2->field_0x94 = temp_v0;
      param_2->field_0x98 = temp_v0;
      param_2->field_0x58 = (param_2->field_0x58 & 0xfffffffd) | 4;
    }
  }
  if (((param_2->field_0x58 & 4) != 0) && ((param_2->field_0x58 & 8) == 0)) {
    param_2->field_0x48 = 0;
    param_2->field_0x58 = param_2->field_0x58 & 0xfffffffb;
  }
  return;
}
