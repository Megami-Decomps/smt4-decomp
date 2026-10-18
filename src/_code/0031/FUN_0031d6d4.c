/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d6d4` (_code @ 0x31d6d4, 0x55c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int DAT_00432fc8; /* 0x432fc8 */
extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e28; /* 0x447e28 */
extern int DAT_00447e88; /* 0x447e88 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */
extern unsigned int DAT_0049f924; /* 0x49f924 */
extern unsigned int DAT_0049f928; /* 0x49f928 */
extern unsigned int DAT_0049f92c; /* 0x49f92c */
extern unsigned char DAT_0049f934; /* 0x49f934 */
extern unsigned char DAT_0049f93c; /* 0x49f93c */
extern int DAT_0049f964; /* 0x49f964 */
extern int DAT_0049f96c; /* 0x49f96c */
extern int DAT_0049f970; /* 0x49f970 */
extern unsigned int DAT_0049f990; /* 0x49f990 */
extern int DAT_0049f9d0; /* 0x49f9d0 */
extern unsigned char DAT_0049fa14; /* 0x49fa14 */
extern unsigned char DAT_0049fa15; /* 0x49fa15 */
extern unsigned char DAT_0049fa16; /* 0x49fa16 */
extern unsigned char DAT_0049fa17; /* 0x49fa17 */
extern unsigned char DAT_0049fa18; /* 0x49fa18 */
extern unsigned char DAT_0049fa19; /* 0x49fa19 */
extern unsigned char DAT_0049fb44; /* 0x49fb44 */
extern unsigned char DAT_0049fb45; /* 0x49fb45 */
extern unsigned char DAT_0049fb46; /* 0x49fb46 */
extern unsigned char DAT_0049fb47; /* 0x49fb47 */
extern signed char DAT_0049fb69; /* 0x49fb69 */
extern signed char DAT_0049fb6a; /* 0x49fb6a */
extern signed char DAT_0049fb6b; /* 0x49fb6b */
extern signed char DAT_0049fb6c; /* 0x49fb6c */
extern int DAT_0049fd14; /* 0x49fd14 */
extern int DAT_0049fd18; /* 0x49fd18 */
extern unsigned int DAT_0049fd1c; /* 0x49fd1c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0026fbc0(void);
/* Supplied declaration required: FUN_002706e4. */
/* Supplied declaration required: FUN_00271280. */
/* Supplied declaration required: FUN_002735c8. */
/* Supplied declaration required: FUN_00273ab0. */
/* Supplied declaration required: FUN_00273de8. */
/* Supplied declaration required: FUN_00276088. */
/* Supplied declaration required: FUN_002760bc. */
/* Supplied declaration required: FUN_002766cc. */
/* Supplied declaration required: FUN_002766f0. */
/* Supplied declaration required: FUN_00276bc0. */
/* Supplied declaration required: FUN_00276c24. */
/* Supplied declaration required: FUN_0027d35c. */
/* Supplied declaration required: FUN_0027d6e4. */
extern int FUN_0027d9b8(void);
/* Supplied declaration required: FUN_0027da20. */
/* Supplied declaration required: FUN_0027fd08. */
/* Supplied declaration required: FUN_0027fe84. */
/* Supplied declaration required: FUN_0028550c. */
extern int FUN_002857e4(void);
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_002bf9e8. */
/* Supplied declaration required: FUN_002c2ba4. */
extern int FUN_002c2bd0(unsigned int);


void FUN_0031d6d4(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 20 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  unsigned int temp_v6;
  
  temp_v2 = DAT_00447e28;
  if (DAT_0049fb6c != '\0') {
    DAT_0049fb6c = '\0';
    temp_v1 = FUN_00297674();
    if (temp_v1 == 0) {
      FUN_0027fd08(0x26);
      *(unsigned int *)(temp_v2 + 0x24) = 0x52;
      *(unsigned int *)(temp_v2 + 0x28) = 0;
      FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17,DAT_0049fa18,DAT_0049fa19);
      FUN_002766cc(1);
      return;
    }
    DAT_0049fd14 = -1;
    DAT_0049f970 = 0;
    FUN_002735c8(0xffffffff);
  }
  else if (DAT_0049fb69 != '\0') {
    DAT_0049fb69 = '\0';
    temp_v1 = FUN_00297674();
    if (temp_v1 == 0) {
      FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17,DAT_0049fa18,DAT_0049fa19);
      *(unsigned int *)(temp_v2 + 0x24) = 0x2c;
      *(unsigned int *)(temp_v2 + 0x28) = 0;
      return;
    }
    DAT_0049fd14 = -1;
    DAT_0049f970 = 0;
    FUN_002735c8(0xffffffff);
  }
  else if (DAT_0049fb6a != '\0') {
    DAT_0049fb6a = '\0';
    temp_v1 = FUN_00297674();
    if (temp_v1 == 0) {
      FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17,DAT_0049fa18,DAT_0049fa19);
      *(unsigned char *)(temp_v2 + 0x14) = 1;
      FUN_0027fd08(0x26);
      *(unsigned int *)(temp_v2 + 0x24) = 0x3c;
      return;
    }
    DAT_0049fd14 = -1;
    DAT_0049f970 = 0;
    FUN_002735c8(0xffffffff);
  }
  else if (DAT_0049fb6b != '\0') {
    DAT_0049fb6b = '\0';
    FUN_002735c8(0xffffffff);
  }
  temp_v1 = FUN_0026fbc0();
  temp_v0 = DAT_0049fb44;
  if (temp_v1 != 0) {
    *(unsigned int *)(temp_v2 + 0x28) = 0;
    *(unsigned int *)(temp_v2 + 0x24) = 0x6f;
    *(unsigned char *)(temp_v2 + 0xd) = 1;
    return;
  }
  if (DAT_0049f970 != 0) {
    FUN_002760bc();
    *(unsigned int *)(temp_v2 + 0x28) = 0;
    *(unsigned int *)(temp_v2 + 0x24) = 0x6f;
    *(unsigned char *)(temp_v2 + 0x14) = 1;
    return;
  }
  if (DAT_0049f96c != 0) {
    DAT_0049f96c = 0;
    FUN_0028550c(DAT_0049fa14,DAT_0049fa15,DAT_0049fa16,DAT_0049fa17,DAT_0049fa18,DAT_0049fa19);
    if ((DAT_0049f91c - 0x1fU >= 5) && (DAT_0049f91c - 0x19U >= 6)) {
      temp_v1 = DAT_0049f91c;
      if (DAT_0049f91c == 5) {
        temp_v1 = DAT_0049f920;
      }
      if (DAT_0049f91c != 5 || temp_v1 != 6) {
        FUN_002760bc();
        *(unsigned int *)(temp_v2 + 0x38) = DAT_0049f990;
        *(unsigned char *)(temp_v2 + 0xe) = 1;
        *(unsigned int *)(temp_v2 + 0x24) = 0x6f;
        *(unsigned int *)(temp_v2 + 0x28) = 0;
        return;
      }
    }
    if (DAT_0049f9d0 < 99) {
      FUN_002bf9e8(DAT_0049f9d0 + 0x10000af);
    }
    FUN_002706e4();
    *(unsigned int *)(temp_v2 + 0x38) = DAT_0049f990;
    *(unsigned char *)(temp_v2 + 0xe) = 1;
    *(unsigned int *)(temp_v2 + 0x24) = 0x6f;
    *(unsigned int *)(temp_v2 + 0x28) = 0;
    return;
  }
  if (DAT_0049fd14 != -1) {
    temp_v3 = *(int *)(temp_v2 + 0x30);
    DAT_0049fb44 = DAT_0049f964 != 0;
    temp_v1 = FUN_002857e4();
    if (temp_v1 != 0) {
      temp_v3 = FUN_002857e4();
    }
    temp_v1 = *(int *)(temp_v2 + 0x2c);
    temp_v4 = temp_v1 == DAT_0049fd14;
    if (temp_v4) {
      param_3 = DAT_0049fd18;
    }
    temp_v5 = temp_v4 && param_3 == temp_v3;
    if (temp_v4 && param_3 == temp_v3) {
      temp_v5 = DAT_0049fb44 == temp_v0;
    }
    if (!temp_v5) {
      *(unsigned int *)(temp_v2 + 0x24) = 0x6f;
      return;
    }
    FUN_0027da20(temp_v1,temp_v3,DAT_0049fd1c);
    if (temp_v1 != -1) {
      temp_v3 = FUN_0027d9b8();
      temp_v1 = DAT_00447e88;
      temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v3 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(DAT_00447e88 + 0x1c) = temp_v6;
      temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v3 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(temp_v1 + 0x20) = temp_v6;
      temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v3 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(temp_v1 + 0x24) = temp_v6;
      *(unsigned int *)(temp_v1 + 0x28) = *(unsigned int *)(temp_v1 + 0x1c);
      *(unsigned int *)(temp_v1 + 0x2c) = *(unsigned int *)(temp_v1 + 0x20);
      *(unsigned int *)(temp_v1 + 0x30) = temp_v6;
      temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(temp_v1 + 0x4c) = temp_v6;
      *(unsigned int *)(temp_v1 + 0x50) = temp_v6;
      temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
      *(unsigned int *)(DAT_004474f4 + 0x18) = temp_v6;
    }
    FUN_0027d6e4(DAT_0049f928,DAT_0049f92c,DAT_0049f924);
    FUN_002766f0(DAT_0049f928,DAT_0049f92c,DAT_0049f924);
    FUN_00276bc0(DAT_0049f928);
    FUN_002766cc(0);
    FUN_00276c24(0xffffffff,0xffffffff);
    FUN_00276088();
    FUN_0027fe84(0);
    FUN_00273ab0(0);
    FUN_0027fd08(1);
    *(unsigned char *)(temp_v2 + 0x47) = 1;
    *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
    DAT_0049fb45 = 1;
    DAT_0049fb46 = 1;
    DAT_0049f934 = 0;
    DAT_0049f93c = 0;
    *(unsigned int *)(temp_v2 + 0x24) = 0x15;
    *(unsigned int *)(temp_v2 + 0x28) = 0;
    FUN_00273de8();
    FUN_0027d35c();
    temp_v2 = FUN_002c2bd0(0);
    if (temp_v2 == 3) {
      FUN_002c2ba4(0,10,0xff);
    }
    temp_v2 = FUN_002c2bd0(1);
    if (temp_v2 != 3) {
      return;
    }
  }
  else {
    if (*(char *)(DAT_00432fc8 + 0xc0) != '\0') {
      *(unsigned char *)(DAT_00432fc8 + 0xc0) = 0;
      *(unsigned int *)(temp_v2 + 0x24) = 0x1f;
      *(unsigned int *)(temp_v2 + 0x28) = 0;
      return;
    }
    FUN_0027fe84(0);
    FUN_00273ab0(0);
    FUN_0027fd08(1);
    *(unsigned char *)(temp_v2 + 0x47) = 1;
    *(unsigned char *)(DAT_004474f4 + 0xa4) = 1;
    DAT_0049fb45 = 1;
    DAT_0049fb46 = 1;
    DAT_0049fb47 = 0;
    FUN_00273de8();
    DAT_0049f934 = 0;
    DAT_0049f93c = 0;
    FUN_00271280(0);
    *(unsigned int *)(temp_v2 + 0x24) = 0x15;
    *(unsigned int *)(temp_v2 + 0x28) = 0;
    temp_v2 = FUN_002c2bd0(0);
    if (temp_v2 == 3) {
      FUN_002c2ba4(0,10,0xff);
    }
    temp_v2 = FUN_002c2bd0(1);
    if (temp_v2 != 3) {
      return;
    }
  }
  FUN_002c2ba4(1,10,0xff);
  return;
}
