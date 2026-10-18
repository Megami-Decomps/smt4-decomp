/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3210` (_code @ 0x3c3210, 0x8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003c3444; /* 0x3c3444 */
extern unsigned char LAB_003c3454; /* 0x3c3454 */
extern signed char DAT_00434388; /* 0x434388 */
extern short DAT_0043438a; /* 0x43438a */
extern unsigned int DAT_00435dc0; /* 0x435dc0 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_002200f8(unsigned int);
extern unsigned int FUN_0023ec74(int);
/* Supplied declaration required: FUN_00256464. */
extern unsigned int FUN_0025c294(int);
/* Supplied declaration required: FUN_002bd25c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_003bc204. */
/* Supplied declaration required: FUN_003bc35c. */
extern int FUN_003bc3c0(int);
/* Supplied declaration required: FUN_003bc470. */


void FUN_003c3210(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  unsigned int temp_v4 [12];
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  char acStack_88 [4];
  char acStack_84 [4];
  char acStack_80 [4];
  char acStack_7c [4];
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  char acStack_68 [4];
  char acStack_64 [4];
  char acStack_60 [4];
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  if (param_2 < 0) {
    return;
  }
  if ((int)DAT_00435dc0 >= 1) {
    FUN_002bd25c(DAT_00435dc0 & 0xffff);
    FUN_00256464();
  }
  else {
    FUN_002c4b30(temp_v4,0x74);
    temp_v4[0] = 0;
    temp_v4[1] = 0;
    temp_v4[2] = 0;
    temp_v4[3] = 0;
    temp_v4[4] = 0;
    temp_v4[5] = 0;
    uStack_d0 = 0x3f800000;
    uStack_cc = 0x3f800000;
    if (DAT_00434388 != '\0') {
      FUN_003bc35c();
      FUN_003bc470(temp_v4,param_2,0);
    }
    else {
      temp_v1 = FUN_0023ec74(param_2);
      FUN_003bc204(temp_v4,temp_v1);
    }
    temp_v3 = 0;
    temp_v0 = FUN_002200f8(3);
    temp_v2 = 0;
    do {
      if (temp_v4[temp_v2] != 0) {
        FUN_002bd25c(temp_v4[temp_v2] & 0xffff);
        VectorUnsignedToFloat(temp_v0 * temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00256464();
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 6);
    if (DAT_00434388 == '\0') {
      acStack_88[0] = -0x74;
      acStack_88[1] = 'R';
      acStack_88[2] = -0x70;
      acStack_88[3] = -0x58;
      acStack_84[0] = -0x7e;
      acStack_84[1] = -0x5e;
      acStack_84[2] = -0x7e;
      acStack_84[3] = -0x38;
      acStack_80[0] = -0x7e;
      acStack_80[1] = -0x5e;
      acStack_80[2] = '\0';
      acStack_80[3] = '\0';
      acStack_7c[0] = '\0';
      acStack_7c[1] = '\0';
      acStack_7c[2] = '\0';
      acStack_7c[3] = '\0';
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      uStack_6c = 0;
      acStack_68[0] = -0x74;
      acStack_68[1] = 'R';
      acStack_68[2] = -0x70;
      acStack_68[3] = -0x58;
      acStack_64[0] = -0x7e;
      acStack_64[1] = -0x5e;
      acStack_64[2] = -0x7e;
      acStack_64[3] = -0x17;
      acStack_60[0] = '\0';
      acStack_60[1] = '\0';
      acStack_60[2] = '\0';
      acStack_60[3] = '\0';
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      temp_v3 = FUN_003bc3c0(param_2);
      FUN_00256464(acStack_88 + temp_v3 * 0x20);
      temp_v1 = FUN_0025c294(param_2);
      FUN_002bd25c();
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      FUN_002be7fc(&uStack_48,&LAB_003c3444,temp_v1);
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00256464(&uStack_48);
    }
    FUN_00256464(&LAB_003c3454);
    if (0 < DAT_0043438a) {
      FUN_002bd25c(DAT_0043438a);
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00256464();
      return;
    }
  }
  return;
}
