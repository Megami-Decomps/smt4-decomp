/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0f50` (_code @ 0x4d0f50, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(int *, unsigned char *, unsigned int);
int FUN_00180118(...);
int FUN_00212234(...);
int sysMemClear(unsigned int [12], int);
int FUN_004bb9c0(unsigned int [12], unsigned int);
int FUN_004bbb74(void);
int FUN_004bbc4c(unsigned int [12], unsigned int, int);
int VectorUnsignedToFloat(int, int);

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
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
} param_2_stack;

extern unsigned char LAB_004d117c; /* 0x4d117c */
extern unsigned char LAB_004d118c; /* 0x4d118c */
extern signed char DAT_005715f8; /* 0x5715f8 */
extern short DAT_005715fa; /* 0x5715fa */
extern unsigned int DAT_00573970; /* 0x573970 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_00212234. */
/* Supplied declaration required: sysMemClear. */
extern int FUN_003173c4(unsigned int);
extern unsigned int FUN_004bb80c(unsigned int);
/* Supplied declaration required: FUN_004bb9c0. */
/* Supplied declaration required: FUN_004bbb74. */
extern int FUN_004bbbd8(unsigned int);
/* Supplied declaration required: FUN_004bbc4c. */
extern unsigned int FUN_004bc850(unsigned int);


void FUN_004d0f50(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
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
  
  if ((int)DAT_00573970 >= 1) {
    FUN_00180118(DAT_00573970 & 0xffff);
    FUN_00212234();
  }
  else {
    sysMemClear(temp_v4,0x84);
    temp_v4[0] = 0;
    temp_v4[1] = 0;
    temp_v4[2] = 0;
    temp_v4[3] = 0;
    temp_v4[4] = 0;
    temp_v4[5] = 0;
    temp_v5 = 0x3f800000;
    temp_v6 = 0x3f800000;
    if (DAT_005715f8 != '\0') {
      FUN_004bbb74();
      FUN_004bbc4c(temp_v4,param_2,0);
    }
    else {
      temp_v1 = FUN_004bb80c(param_2);
      FUN_004bb9c0(temp_v4,temp_v1);
    }
    temp_v3 = 0;
    temp_v0 = FUN_003173c4(3);
    temp_v2 = 0;
    do {
      if (temp_v4[temp_v2] != 0) {
        FUN_00180118(temp_v4[temp_v2] & 0xffff);
        VectorUnsignedToFloat(temp_v0 * temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00212234();
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 6);
    if (DAT_005715f8 == '\0') {
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
      temp_v3 = FUN_004bbbd8(param_2);
      FUN_00212234(temp_v7 + temp_v3 * 0x20);
      temp_v1 = FUN_004bc850(param_2);
      FUN_00180118();
      temp_v9 = 0;
      temp_v10 = 0;
      temp_v11 = 0;
      temp_v12 = 0;
      temp_v13 = 0;
      temp_v14 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      FUN_00100388(&temp_v9,&LAB_004d117c,temp_v1);
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00212234(&temp_v9);
    }
    FUN_00212234(&LAB_004d118c);
    if (0 < DAT_005715fa) {
      FUN_00180118(DAT_005715fa);
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00212234();
      return;
    }
  }
  return;
}

} /* extern "C" */
