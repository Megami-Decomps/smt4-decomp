/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d0f48` (_code @ 0x4d0f48, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(int *, unsigned char *, unsigned int);
int FUN_00180118(...);
int FUN_00212234(...);
int sysMemClear(unsigned int [12], int);
int FUN_004bb9c0(unsigned int [12], unsigned int);
int FUN_004bbb74(void);
int FUN_004bbc4c(unsigned int [12], int, int);
int VectorUnsignedToFloat(int, int);

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
extern unsigned int FUN_004bb80c(int);
/* Supplied declaration required: FUN_004bb9c0. */
/* Supplied declaration required: FUN_004bbb74. */
extern int FUN_004bbbd8(int);
/* Supplied declaration required: FUN_004bbc4c. */
extern unsigned int FUN_004bc850(int);


void FUN_004d0f48(unsigned int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  unsigned int temp_v4 [12];
  unsigned int uStack_e0;
  unsigned int uStack_dc;
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
    uStack_e0 = 0x3f800000;
    uStack_dc = 0x3f800000;
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
      temp_v3 = FUN_004bbbd8(param_2);
      FUN_00212234(acStack_88 + temp_v3 * 0x20);
      temp_v1 = FUN_004bc850(param_2);
      FUN_00180118();
      uStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      FUN_00100388(&uStack_48,&LAB_004d117c,temp_v1);
      VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00212234(&uStack_48);
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
