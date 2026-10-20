/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038dc48` (_code @ 0x38dc48, 0x42c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002341d4(...);
int FUN_00234330(...);
int FUN_00234974(...);
int FUN_0023499c(int *, int, int);
int FUN_0023a198(...);
int FUN_002a12d8(...);
int FUN_003526c4(...);
int FUN_00352f14(int [3], unsigned char [1024], int);
int FUN_003531dc(...);
int FUN_0035474c(int *, unsigned char [16]);
int FUN_00354a20(int *, unsigned char [16], int);
int FUN_00354b18(unsigned char [16], unsigned int, unsigned char [1024], int);
int FUN_00354b3c(...);
int FUN_0038b2fc(...);
int FUN_0038d598(void);

/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int sp900; /* 0x900: local_900 */
} param_1_stack;

extern unsigned char LAB_0038e078; /* 0x38e078 */
extern unsigned char LAB_0038e088; /* 0x38e088 */
extern unsigned char LAB_0038e08c; /* 0x38e08c */
extern unsigned char LAB_0038e09c; /* 0x38e09c */
extern unsigned char LAB_0038e0ac; /* 0x38e0ac */
extern unsigned char LAB_0038e0bc; /* 0x38e0bc */
extern int g_aocMain; /* 0x432fc8 */

/* Supplied declaration required: FUN_002341d4. */
/* Supplied declaration required: FUN_00234330. */
extern unsigned int FUN_0023445c(int);
extern unsigned int FUN_00234468(int);
/* Supplied declaration required: FUN_00234974. */
/* Supplied declaration required: FUN_0023499c. */
/* Supplied declaration required: FUN_0023a198. */
/* Supplied declaration required: FUN_002a12d8. */
/* Supplied declaration required: FUN_003526c4. */
/* Supplied declaration required: FUN_00352f14. */
/* Supplied declaration required: FUN_003531dc. */
/* Supplied declaration required: FUN_0035474c. */
/* Supplied declaration required: FUN_00354a20. */
/* Supplied declaration required: FUN_00354b18. */
/* Supplied declaration required: FUN_00354b3c. */
/* Supplied declaration required: FUN_0038b2fc. */
/* Supplied declaration required: FUN_0038d598. */
extern unsigned int FUN_003df34c(unsigned int);
extern unsigned int FUN_003df35c(unsigned int);
extern int nn_fnd_DateTime_DateToDays(int, int, int);
extern int nn_fnd_DateTime_GetDay(unsigned int);
extern int nn_fnd_DateTime_GetMonth(unsigned int);
extern int nn_fnd_DateTime_GetYear(unsigned int);


void FUN_0038dc48(int param_1)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [1024];
  unsigned char temp_v7 [1024];
  int temp_v8;
  unsigned int uStack_f4;
  int temp_v9;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned int uStack_e0;
  unsigned int uStack_dc;
  unsigned int temp_v10;
  unsigned int uStack_d4;
  unsigned int temp_v11;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  int temp_v12 [3];
  int iStack_a4;
  unsigned int *temp_v13;
  int temp_v14;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int temp_v15;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  int temp_v16;
  unsigned int uStack_34;
  unsigned char temp_v17 [16];
  
  temp_v0 = g_aocMain;
  FUN_0023499c(&temp_v8,g_aocMain + 0x28,g_aocMain + 0x18);
  *(unsigned int *)(param_1 + 0xc) = temp_v8;
  *(unsigned int *)(param_1 + 0x10) = uStack_f4;
  temp_v1 = FUN_002a12d8(param_1 + 0xc);
  if (temp_v1 < 0) {
    return;
  }
  FUN_00354b18(temp_v17,*(unsigned int *)(temp_v0 + 0x80),temp_v6,0x400);
  FUN_00354a20(&temp_v8,temp_v17,temp_v0 + 0x694);
  *(unsigned int *)(param_1 + 0xc) = temp_v8;
  *(unsigned int *)(param_1 + 0x10) = uStack_f4;
  temp_v1 = FUN_002a12d8(param_1 + 0xc);
  if (temp_v1 < 0) {
    FUN_00234974(temp_v0 + 0x28);
    FUN_00354b3c(temp_v17);
    return;
  }
  FUN_00352f14(temp_v12,temp_v7,0x400);
  FUN_0035474c(&temp_v8,temp_v17);
  temp_v14 = temp_v8;
  uStack_74 = uStack_f4;
  uStack_70 = temp_v9;
  uStack_6c = uStack_ec;
  uStack_68 = uStack_e8;
  uStack_64 = uStack_e4;
  uStack_60 = uStack_e0;
  uStack_5c = uStack_dc;
  temp_v15 = temp_v10;
  uStack_54 = uStack_d4;
  uStack_50 = temp_v11;
  uStack_4c = uStack_cc;
  uStack_48 = uStack_c8;
  uStack_44 = uStack_c4;
  uStack_40 = uStack_c0;
  uStack_3c = uStack_bc;
  temp_v13 = (unsigned int *)&temp_v14;
  temp_v2 = FUN_00234468(temp_v0 + 0x28);
  temp_v3 = FUN_0023445c(temp_v0 + 0x28);
  FUN_00234330(&temp_v9,0,temp_v3,temp_v2);
  *(unsigned int *)(temp_v0 + 0x368) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x36c) = uStack_ec;
  *(unsigned int *)(temp_v0 + 0x370) = uStack_e8;
  *(unsigned int *)(temp_v0 + 0x374) = uStack_e4;
  *(unsigned int *)(temp_v0 + 0x378) = uStack_e0;
  *(unsigned int *)(temp_v0 + 0x37c) = uStack_dc;
  *(unsigned int *)(temp_v0 + 0x380) = temp_v10;
  *(unsigned int *)(temp_v0 + 900) = uStack_d4;
  *(unsigned int *)(temp_v0 + 0x388) = temp_v11;
  *(unsigned int *)(temp_v0 + 0x38c) = uStack_cc;
  *(unsigned int *)(temp_v0 + 0x390) = uStack_c8;
  *(unsigned int *)(temp_v0 + 0x394) = uStack_c4;
  *(unsigned int *)(temp_v0 + 0x398) = uStack_c0;
  *(unsigned int *)(temp_v0 + 0x39c) = uStack_bc;
  *(unsigned int *)(temp_v0 + 0x3a0) = uStack_b8;
  *(unsigned int *)(temp_v0 + 0x3a4) = uStack_b4;
  temp_v2 = FUN_00234468(temp_v0 + 0x28);
  temp_v3 = FUN_0023445c(temp_v0 + 0x28);
  FUN_00234330(&temp_v9,2,temp_v3,temp_v2);
  *(unsigned int *)(temp_v0 + 0x3a8) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x3ac) = uStack_ec;
  *(unsigned int *)(temp_v0 + 0x3b0) = uStack_e8;
  *(unsigned int *)(temp_v0 + 0x3b4) = uStack_e4;
  *(unsigned int *)(temp_v0 + 0x3b8) = uStack_e0;
  *(unsigned int *)(temp_v0 + 0x3bc) = uStack_dc;
  *(unsigned int *)(temp_v0 + 0x3c0) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x3c4) = uStack_d4;
  *(unsigned int *)(temp_v0 + 0x3c8) = temp_v11;
  *(unsigned int *)(temp_v0 + 0x3cc) = uStack_cc;
  *(unsigned int *)(temp_v0 + 0x3d0) = uStack_c8;
  *(unsigned int *)(temp_v0 + 0x3d4) = uStack_c4;
  *(unsigned int *)(temp_v0 + 0x3d8) = uStack_c0;
  *(unsigned int *)(temp_v0 + 0x3dc) = uStack_bc;
  *(unsigned int *)(temp_v0 + 0x3e0) = uStack_b8;
  *(unsigned int *)(temp_v0 + 0x3e4) = uStack_b4;
  temp_v2 = FUN_00234468(temp_v0 + 0x28);
  temp_v3 = FUN_0023445c(temp_v0 + 0x28);
  FUN_00234330(&temp_v9,3,temp_v3,temp_v2);
  *(unsigned int *)(temp_v0 + 1000) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x3ec) = uStack_ec;
  *(unsigned int *)(temp_v0 + 0x3f0) = uStack_e8;
  *(unsigned int *)(temp_v0 + 0x3f4) = uStack_e4;
  *(unsigned int *)(temp_v0 + 0x3f8) = uStack_e0;
  *(unsigned int *)(temp_v0 + 0x3fc) = uStack_dc;
  *(unsigned int *)(temp_v0 + 0x400) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x404) = uStack_d4;
  *(unsigned int *)(temp_v0 + 0x408) = temp_v11;
  *(unsigned int *)(temp_v0 + 0x40c) = uStack_cc;
  *(unsigned int *)(temp_v0 + 0x410) = uStack_c8;
  *(unsigned int *)(temp_v0 + 0x414) = uStack_c4;
  *(unsigned int *)(temp_v0 + 0x418) = uStack_c0;
  *(unsigned int *)(temp_v0 + 0x41c) = uStack_bc;
  *(unsigned int *)(temp_v0 + 0x420) = uStack_b8;
  *(unsigned int *)(temp_v0 + 0x424) = uStack_b4;
  temp_v2 = FUN_00234468(temp_v0 + 0x28);
  temp_v3 = FUN_0023445c(temp_v0 + 0x28);
  FUN_00234330(&temp_v9,5,temp_v3,temp_v2);
  *(unsigned int *)(temp_v0 + 0x428) = temp_v9;
  *(unsigned int *)(temp_v0 + 0x42c) = uStack_ec;
  *(unsigned int *)(temp_v0 + 0x430) = uStack_e8;
  *(unsigned int *)(temp_v0 + 0x434) = uStack_e4;
  *(unsigned int *)(temp_v0 + 0x438) = uStack_e0;
  *(unsigned int *)(temp_v0 + 0x43c) = uStack_dc;
  *(unsigned int *)(temp_v0 + 0x440) = temp_v10;
  *(unsigned int *)(temp_v0 + 0x444) = uStack_d4;
  *(unsigned int *)(temp_v0 + 0x448) = temp_v11;
  *(unsigned int *)(temp_v0 + 0x44c) = uStack_cc;
  *(unsigned int *)(temp_v0 + 0x450) = uStack_c8;
  *(unsigned int *)(temp_v0 + 0x454) = uStack_c4;
  *(unsigned int *)(temp_v0 + 0x458) = uStack_c0;
  *(unsigned int *)(temp_v0 + 0x45c) = uStack_bc;
  *(unsigned int *)(temp_v0 + 0x460) = uStack_b8;
  *(unsigned int *)(temp_v0 + 0x464) = uStack_b4;
  FUN_0023a198(temp_v0 + 0x468,&LAB_0038e088,&LAB_0038e078);
  FUN_0023a198(temp_v0 + 0x4a8,&LAB_0038e088,&LAB_0038e08c);
  FUN_0023a198(temp_v0 + 0x4e8,&LAB_0038e088,&LAB_0038e09c);
  FUN_0023a198(temp_v0 + 0x528,&LAB_0038e088,&LAB_0038e0ac);
  FUN_0023a198(temp_v0 + 0x568,&LAB_0038e088,&LAB_0038e0bc);
  temp_v12[0] = temp_v0 + 0x368;
  temp_v12[1] = 9;
  if (*(int *)(temp_v0 + 0x364) != 0) {
    temp_v12[2] = temp_v0 + 0xe3;
    iStack_a4 = *(int *)(temp_v0 + 0x364);
  }
  FUN_0038b2fc(temp_v0);
  FUN_003526c4(&temp_v8,*(unsigned int *)(temp_v0 + 0x5b0),*(unsigned int *)(temp_v0 + 0x684),0x40,temp_v12
              );
  *(unsigned int *)(param_1 + 0xc) = temp_v8;
  *(unsigned int *)(param_1 + 0x10) = uStack_f4;
  temp_v1 = FUN_002a12d8(param_1 + 0xc);
  if (-1 < temp_v1) {
    temp_v2 = FUN_003df34c(*(unsigned int *)(temp_v0 + 0x5b0));
    *(unsigned int *)(temp_v0 + 0x68c) = temp_v2;
    temp_v2 = FUN_003df35c(*(unsigned int *)(temp_v0 + 0x5b0));
    *(unsigned int *)(temp_v0 + 0x690) = temp_v2;
    temp_v16 = 0;
    uStack_34 = 0;
    FUN_003531dc(&temp_v8,temp_v0 + 0x84,&temp_v16);
    *(unsigned int *)(param_1 + 0xc) = temp_v8;
    *(unsigned int *)(param_1 + 0x10) = uStack_f4;
    temp_v1 = FUN_002a12d8(param_1 + 0xc);
    if (-1 < temp_v1) {
      temp_v1 = nn_fnd_DateTime_GetDay((unsigned int)&temp_v16);
      temp_v4 = nn_fnd_DateTime_GetMonth((unsigned int)&temp_v16);
      temp_v5 = nn_fnd_DateTime_GetYear((unsigned int)&temp_v16);
      temp_v1 = nn_fnd_DateTime_DateToDays(temp_v5,temp_v4,temp_v1);
      *(int *)(param_1 + 0x18) = temp_v1;
      temp_v1 = param_1;
      FUN_0038d598();
      FUN_00234974(temp_v0 + 0x28);
      if (-1 < temp_v1) {
        FUN_002341d4(&temp_v8,temp_v0);
        *(unsigned int *)(param_1 + 0xc) = temp_v8;
        *(unsigned int *)(param_1 + 0x10) = uStack_f4;
        FUN_002a12d8(param_1 + 0xc);
      }
      FUN_00354b3c(temp_v17);
      return;
    }
  }
  FUN_00234974(temp_v0 + 0x28);
  FUN_00354b3c(temp_v17);
  return;
}

} /* extern "C" */
