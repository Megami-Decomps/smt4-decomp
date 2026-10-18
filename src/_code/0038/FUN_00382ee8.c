/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00382ee8` (_code @ 0x382ee8, 0x250 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00382ee8_arg0 fn_00382ee8_arg0;
struct fn_00382ee8_arg0 {
    unsigned char pad_0x0[0x1];
    unsigned char field_0x1; /* +0x1 */
    unsigned char pad_0x2[0x2];
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    unsigned char pad_0xc[0xd3c];
    unsigned char field_0xd48; /* +0xd48 */
    unsigned char pad_0xd49[0x1];
    byte field_0xd4a; /* +0xd4a */
    unsigned char pad_0xd4b[0x1];
    byte field_0xd4c; /* +0xd4c */
    unsigned char pad_0xd4d[0x1];
    ushort field_0xd4e; /* +0xd4e */
    ushort field_0xd50; /* +0xd50 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned short DAT_0049fa94; /* 0x49fa94 */

extern int FUN_00215bc0(void);
extern unsigned char FUN_00223be8(void);
/* Supplied declaration required: FUN_002356d4. */
/* Supplied declaration required: FUN_00235744. */
extern int FUN_00241ac0(void);
/* Supplied declaration required: FUN_00273ec4. */
/* Supplied declaration required: FUN_00273fa4. */
/* Supplied declaration required: FUN_002741cc. */
/* Supplied declaration required: FUN_0027db78. */
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_00289f00. */
/* Supplied declaration required: FUN_00296bd8. */
/* Supplied declaration required: FUN_0029e8c0. */
/* Supplied declaration required: FUN_0029e8e8. */
/* Supplied declaration required: FUN_0029f10c. */
extern int FUN_002c2b1c(void);
extern int FUN_002cf68c(void);
extern unsigned char FUN_002cf6a4(void);
extern unsigned short FUN_002efee8(void);
extern unsigned short FUN_0030ab70(void);


void FUN_00382ee8(fn_00382ee8_arg0 *param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v2 = FUN_00241ac0();
  if (temp_v2 == 0) {
    return;
  }
  temp_v0 = FUN_002cf6a4();
  param_1->field_0xd4c = temp_v0;
  temp_v1 = FUN_0030ab70();
  param_1->field_0xd4e = temp_v1;
  temp_v1 = FUN_002efee8();
  param_1->field_0xd50 = temp_v1;
  temp_v2 = FUN_00215bc0();
  temp_v0 = FUN_00223be8();
  param_1->field_0xd4a = temp_v0;
  temp_v3 = FUN_002cf68c();
  if (temp_v3 != 0) {
    if (param_1->field_0xd50 != 0xca) {
      if (param_1->field_0xd50 == 0xc3) {
        FUN_002899c4(0x24c,0,1);
        FUN_002899c4(0x24e,0,1);
        FUN_002899c4(0x24d,0);
        FUN_002899c4(0x24f,0,1);
        FUN_002899c4(0x250,0,1);
        FUN_002899c4(0x252,0,1);
        FUN_002899c4(0x251,0);
        temp_v4 = 0x253;
        FUN_002899c4(temp_v4,0,1);
      }
    }
    else {
      FUN_002899c4(0x246,0,1);
      FUN_002899c4(0x274,0,1);
      FUN_002899c4(0x26b,0,1);
      FUN_002899c4(0x248,0,1);
      temp_v4 = 0x247;
      FUN_002899c4(temp_v4,0,1);
    }
  }
  if (param_1->field_0xd4c != 0) {
    temp_v3 = FUN_002c2b1c();
    *(unsigned short *)(temp_v3 + 0x22) = 0;
    FUN_002741cc();
    FUN_0027db78();
    if (temp_v2 == 0) {
      *(unsigned short *)(temp_v3 + 0x1e) = param_1->field_0xd4e;
      FUN_00273fa4();
      FUN_00273ec4();
    }
  }
  FUN_00296bd8();
  if (param_1->field_0xd4a == 0) {
    if (temp_v2 == 0) {
      if (param_1[1].field_0x1 != '\0') {
        FUN_0029e8e8(1,0);
        FUN_0029e8c0(0xffffff9c,0);
        FUN_002356d4(1);
        param_1[1].field_0x1 = 0;
      }
      FUN_00296bd8();
      param_1->field_0x4 = 5;
      param_1->field_0x8 = 0;
      return;
    }
    param_1->field_0xd48 = (char)temp_v2;
    FUN_0029f10c(0,0x323232ff);
    FUN_00289f00(1);
    param_1->field_0x4 = 0xc;
    param_1->field_0x8 = 0;
    FUN_00235744(0);
    return;
  }
  DAT_0049fa94 = 1;
  param_1->field_0x4 = 0xf;
  param_1->field_0x8 = 0;
  FUN_00235744(0);
  return;
}
