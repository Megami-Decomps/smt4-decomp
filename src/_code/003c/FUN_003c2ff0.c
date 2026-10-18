/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2ff0` (_code @ 0x3c2ff0, 0x210 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 18 slot(s), 72 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
} param_2_stack;

extern unsigned char LAB_003c321c; /* 0x3c321c */
extern unsigned char LAB_003c322c; /* 0x3c322c */
extern signed char DAT_00434388; /* 0x434388 */
extern short DAT_0043438a; /* 0x43438a */
extern unsigned int DAT_00435dc0; /* 0x435dc0 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_002201f4(unsigned int);
extern unsigned int FUN_0023eb18(unsigned int);
/* Supplied declaration required: FUN_00256224. */
/* Supplied declaration required: FUN_0025c05c. */
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_003bbfdc. */
/* Supplied declaration required: FUN_003bc134. */
extern int FUN_003bc198(unsigned int);
/* Supplied declaration required: FUN_003bc248. */


void FUN_003c2ff0(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  unsigned int temp_v4 [12];
  unsigned int temp_v5;
  unsigned int temp_v6;
  char temp_v7 [4];
  char acStack_84 [4];
  char acStack_80 [4];
  char acStack_7c [4];
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  char temp_v8 [4];
  char acStack_64 [4];
  char acStack_60 [4];
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  
  if ((int)DAT_00435dc0 >= 1) {
    FUN_002bd06c(DAT_00435dc0 & 0xffff);
    FUN_00256224();
  }
  else {
    FUN_002c4938(temp_v4,0x74);
    temp_v4[0] = 0;
    temp_v4[1] = 0;
    temp_v4[2] = 0;
    temp_v4[3] = 0;
    temp_v4[4] = 0;
    temp_v4[5] = 0;
    temp_v5 = 0x3f800000;
    temp_v6 = 0x3f800000;
    if (DAT_00434388 != '\0') {
      FUN_003bc134();
      FUN_003bc248(temp_v4,param_2,0);
    }
    else {
      temp_v1 = FUN_0023eb18(param_2);
      FUN_003bbfdc(temp_v4,temp_v1);
    }
    temp_v3 = 0;
    temp_v0 = FUN_002201f4(3);
    temp_v2 = 0;
    do {
      if (temp_v4[temp_v2] != 0) {
        temp_v1 = FUN_002bd06c(temp_v4[temp_v2] & 0xffff);
        VectorUnsignedToFloat(temp_v0 * temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00256224(temp_v1,temp_v0 * temp_v3);
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 6);
    if (DAT_00434388 == '\0') {
      temp_v7[0] = -0x74;
      temp_v7[1] = 'R';
      temp_v7[2] = -0x70;
      temp_v7[3] = -0x58;
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
      temp_v8[0] = -0x74;
      temp_v8[1] = 'R';
      temp_v8[2] = -0x70;
      temp_v8[3] = -0x58;
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
      temp_v3 = FUN_003bc198(param_2);
      FUN_00256224(temp_v7 + temp_v3 * 0x20);
      FUN_0025c05c(param_2);
      temp_v1 = FUN_002bd06c();
      temp_v9 = 0;
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v13 = 0;
      temp_v14 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      FUN_002be624(&temp_v9,&LAB_003c321c,temp_v1);
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00256224(&temp_v9);
    }
    FUN_00256224(&LAB_003c322c);
    if (0 < DAT_0043438a) {
      FUN_002bd06c(DAT_0043438a);
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00256224();
      return;
    }
  }
  return;
}
