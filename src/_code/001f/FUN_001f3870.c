/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f3870` (_code @ 0x1f3870, 0x758 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_3_stack;

extern unsigned char LAB_001f3ca8; /* 0x1f3ca8 */
extern unsigned char LAB_001f3fd8; /* 0x1f3fd8 */
extern unsigned char LAB_001f4010; /* 0x1f4010 */
extern int DAT_0043da90; /* 0x43da90 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0026ace0(void);
/* Supplied declaration required: FUN_002890d0. */
/* Supplied declaration required: FUN_0028d498. */
/* Supplied declaration required: FUN_0028f938. */
/* Supplied declaration required: FUN_0028fb14. */
extern int FUN_00298ae4(unsigned int, unsigned int);
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
extern int *FUN_002a8a08(void);
/* Supplied declaration required: FUN_002b6f74. */
/* Supplied declaration required: FUN_002bcff0. */
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */


void FUN_001f3870(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int *piVar7;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int in_fpscr;
  unsigned char temp_v9 [64];
  unsigned int temp_v10;
  int iStack_30;
  int iStack_2c;
  int temp_v11;
  
  temp_v4 = DAT_0043da90;
  temp_v0 = DAT_0043da90 + 0x240;
  iStack_30 = param_1;
  iStack_2c = param_2;
  temp_v11 = param_3;
  FUN_002bf558(2,0x1d,0xb,param_1,param_2,0x65);
  FUN_002bf460(2,0x1d,0x44e,param_1,param_2,0x6a);
  temp_v6 = 0;
  do {
    temp_v1 = FUN_0026ace0();
    if (temp_v6 >= temp_v1) {
      FUN_002bf460(2,0x1d,temp_v6 + 0x5a8,param_1,param_2,0x6a);
    }
    else {
      temp_v1 = FUN_0029f260(temp_v0);
      temp_v7 = (unsigned int)*(unsigned short *)(temp_v4 + (temp_v1 + temp_v6) * 2 + 0x1db4);
      temp_v1 = FUN_002bf6d0(0x1d,temp_v6 + 0x40d);
      FUN_002bf460(2,0x1d,0x44f,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0x6a);
      FUN_002bf460(2,0x1d,0x450,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0x6a);
      FUN_002bf460(2,0x1d,0x451,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0x6a);
      FUN_002bf460(2,0x1d,0x452,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0x6f);
      if ((temp_v7 != 0) && (FUN_002890d0(), temp_v10 = temp_v7, temp_v7 != 0)) {
        temp_v2 = FUN_002bf6d0(0x1d,0x454);
        temp_v7 = temp_v10;
        FUN_002bcff0();
        if (temp_v7 != 0) {
          temp_v8 = 0xff;
          temp_v3 = FUN_00298ae4(temp_v10,0xffffffff);
          if (temp_v3 != 0) {
            temp_v3 = FUN_0028d498(temp_v10);
            piVar7 = (int *)FUN_002a8a08();
            if (*piVar7 < temp_v3) {
              temp_v8 = 0x5a5a5aff;
            }
          }
          else {
            temp_v8 = 0x5a5a5aff;
          }
          VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be77c(2,temp_v8,temp_v7,(int)*(short *)(temp_v2 + 8));
        }
        temp_v2 = FUN_002bf6d0(0x1d,0x45c);
        temp_v8 = FUN_0028d498(temp_v10);
        FUN_002be7fc(temp_v9,&LAB_001f3ca8,temp_v8);
        FUN_002be16c(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                     (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,8,0x6f,
                     temp_v9);
        temp_v2 = FUN_002bf6d0(0x1d,0x453);
        FUN_002b6f74((int)(short)temp_v10,
                     (int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                     (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,0x6f,0,0);
      }
      else {
        temp_v2 = FUN_002bf6d0(0x1d,0x454);
        FUN_002be7fc(temp_v9,&LAB_001f3fd8);
        VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be77c(2,0x5a5a5aff,temp_v9,(int)*(short *)(temp_v1 + 8));
        temp_v2 = FUN_002bf6d0(0x1d,0x45c);
        FUN_002be7fc(temp_v9,&LAB_001f4010);
        FUN_002be16c(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                     (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,1,8,0x6f,
                     temp_v9);
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 8);
  FUN_0028fb14(temp_v0,param_1,param_2,1);
  if (temp_v11 == 0) {
    return;
  }
  temp_v6 = FUN_0029f260(temp_v0);
  temp_v1 = FUN_0029f248(temp_v0);
  temp_v7 = (unsigned int)*(unsigned short *)(temp_v4 + (temp_v1 + temp_v6) * 2 + 0x1db4);
  temp_v6 = FUN_0029f248(temp_v0);
  temp_v6 = FUN_002bf6d0(0x1d,temp_v6 + 0x42e);
  temp_v0 = FUN_0029f248(temp_v0);
  FUN_0028f938(*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,
               (int)*(short *)(temp_v4 + temp_v0 * 2 + 0xe0c));
  if ((temp_v7 == 0) || (FUN_002890d0(), temp_v7 == 0)) {
    temp_v4 = FUN_002bf6d0(0x1d,0x460);
    FUN_002be7fc(temp_v9,&LAB_001f3fd8);
    VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(3,0x5a5a5aff,temp_v9,(int)*(short *)(temp_v4 + 8));
    FUN_002bf460(2,0x1d,0x45e,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,0x83)
    ;
    temp_v4 = FUN_002bf6d0(0x1d,0x468);
    FUN_002be7fc(temp_v9,&LAB_001f4010);
    FUN_002be16c(0,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
                 (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,1,8,0x83,
                 temp_v9);
    return;
  }
  temp_v4 = FUN_002bf6d0(0x1d,0x460);
  temp_v5 = temp_v7;
  FUN_002bcff0();
  if (temp_v5 != 0) {
    temp_v8 = 0xffffffff;
    temp_v0 = FUN_00298ae4(temp_v7,0xffffffff);
    if (temp_v0 != 0) {
      temp_v0 = FUN_0028d498(temp_v7);
      piVar7 = (int *)FUN_002a8a08();
      if (*piVar7 < temp_v0) {
        temp_v8 = 0x5a5a5aff;
      }
    }
    else {
      temp_v8 = 0x5a5a5aff;
    }
    VectorSignedToFloat((int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(3,temp_v8,temp_v5,(int)*(short *)(temp_v4 + 8));
  }
  FUN_002bf460(2,0x1d,0x45e,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,0x83);
  temp_v4 = FUN_002bf6d0(0x1d,0x468);
  temp_v8 = FUN_0028d498(temp_v7);
  FUN_002be7fc(temp_v9,&LAB_001f3ca8,temp_v8);
  FUN_002be16c(0,(int)*(short *)(temp_v6 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
               (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,1,8,0x83,
               temp_v9);
  FUN_002bf460(2,0x1d,0x45d,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2,0x83);
  temp_v4 = FUN_002bf6d0(0x1d,0x45f);
  FUN_002b6f74((int)(short)temp_v7,(int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v6 + 8) + param_1,
               (int)*(short *)(temp_v6 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,0x88,0,0);
  return;
}
