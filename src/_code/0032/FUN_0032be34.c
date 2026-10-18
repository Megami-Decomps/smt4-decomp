/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032be34` (_code @ 0x32be34, 0x678 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_2_stack;

extern unsigned char LAB_0032c230; /* 0x32c230 */
extern int DAT_0044e190; /* 0x44e190 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0026ad50. */
/* Supplied declaration required: FUN_00290c38. */
/* Supplied declaration required: FUN_0029a418. */
/* Supplied declaration required: FUN_0029adf0. */
extern int FUN_0029af30(void);
extern unsigned short *FUN_0029af4c(void);
extern int FUN_0029ec6c(unsigned short);
extern int FUN_0029f0f4(int);
extern int FUN_0029f248(int);
extern int FUN_0029f260(void);
/* Supplied declaration required: FUN_002b6a98. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002bef70(int);
extern int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002e1e60. */


void FUN_0032be34(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned short *puVar7;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int *piVar14;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  unsigned char temp_v14 [64];
  int temp_v15;
  
  temp_v2 = DAT_0044e190;
  temp_v3 = DAT_0044e190 + 0xdcc;
  temp_v15 = temp_v3;
  temp_v4 = FUN_0029f260();
  temp_v3 = FUN_0029f248(temp_v3);
  temp_v1 = 0;
  temp_v5 = FUN_0029af30();
  if (temp_v5 != 0xd) {
    if (temp_v5 == 6) {
      puVar7 = (unsigned short *)FUN_0029af4c();
      temp_v5 = FUN_0029ec6c(*puVar7);
      if (temp_v5 == 0) {
        temp_v1 = 1;
      }
    }
  }
  else {
    temp_v1 = 1;
  }
  FUN_002bf558(2,0x1a,5,param_1,param_2,0xb3);
  FUN_002bf558(2,0x1a,0xb,param_1,param_2,0xb5);
  FUN_0029adf0(param_1,param_2);
  temp_v5 = 0;
  do {
    temp_v6 = temp_v2 + (temp_v4 + temp_v5) * 4;
    if (*(short *)(temp_v6 + 0x5ca) != 0) {
      temp_v7 = FUN_002bf6d0(0x1a,temp_v5 + 0x44c);
      temp_v8 = FUN_002bf6d0(0x1a,1099);
      if (temp_v1) {
        FUN_002be7fc(temp_v14,&LAB_0032c230);
        VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v8 + 8) + param_1,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be77c(2,0xff,temp_v14,(int)*(short *)(temp_v8 + 8));
      }
      else {
        temp_v9 = (unsigned int)*(unsigned short *)(temp_v6 + 0x5ca);
        FUN_0026ad50();
        if (temp_v9 != 0) {
          VectorSignedToFloat((int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v8 + 8) + param_1,
                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002be77c(2,0xff,temp_v9,(int)*(short *)(temp_v7 + 8));
        }
      }
      temp_v8 = FUN_002bf6d0(0x1a,0x449);
      if (temp_v1) {
        temp_v0 = *(short *)(temp_v8 + 10);
        temp_v8 = (int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v7 + 8);
        temp_v10 = 0;
      }
      else {
        temp_v0 = *(short *)(temp_v8 + 10);
        temp_v8 = (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v8 + 8);
        temp_v10 = (int)*(short *)(temp_v6 + 0x5c8);
      }
      FUN_002b6a98(temp_v10,temp_v8 + param_1,(int)*(short *)(temp_v7 + 10) + (int)temp_v0 + param_2,0xb5,0
                  );
      temp_v8 = FUN_002bf6d0(0x1a,0x44a);
      FUN_002e1e60(*(unsigned short *)(temp_v6 + 0x5ca),
                   (int)*(short *)(temp_v7 + 8) + (int)*(short *)(temp_v8 + 8) + param_1,
                   (int)*(short *)(temp_v7 + 10) + (int)*(short *)(temp_v8 + 10) + param_2,0xb5);
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0xb);
  if ((*(int *)(temp_v2 + 0x400) == 0x11) &&
     (temp_v4 = temp_v2 + (temp_v3 + temp_v4) * 4, temp_v5 = temp_v4 + 0x500, *(short *)(temp_v4 + 0x5ca) != 0)) {
    temp_v4 = FUN_002bf6d0(0x1a,temp_v3 + 0x42c);
    FUN_002bf710();
    FUN_002bf558(2,0x1a,8,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xbf);
    FUN_002bf710();
    FUN_002bf460(2,0x1a,0x41f,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xc4)
    ;
    temp_v3 = *(int *)(temp_v2 + 0x418);
    temp_v11 = 0x420;
    temp_v12 = temp_v3 == 0;
    if (temp_v12) {
      temp_v3 = *(int *)(temp_v2 + 0x41c);
    }
    if (temp_v12 && temp_v3 == 0) {
      temp_v3 = *(int *)(temp_v2 + 0x420);
      temp_v12 = temp_v3 == 0;
      if (temp_v12) {
        temp_v3 = *(int *)(temp_v2 + 0x424);
      }
      temp_v13 = temp_v12 && temp_v3 == 0;
      if (temp_v12 && temp_v3 == 0) {
        temp_v13 = *(int *)(temp_v2 + 0x428) == 0;
      }
      if ((temp_v13) && (-1 < *(int *)(temp_v2 + 0x414))) {
        temp_v11 = 0x421;
      }
    }
    FUN_002bf460(2,0x1a,temp_v11,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xc4
                );
    FUN_002bf460(2,0x1a,0x457,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0xc4)
    ;
    temp_v6 = FUN_002bf6d0(0x1a,0x420);
    temp_v3 = DAT_0044ea00;
    piVar14 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v7 = piVar14[*piVar14 + 2];
    piVar14[*piVar14 + 2] = 3;
    if (*(char *)(temp_v3 + 0x1324) != '\0' || temp_v7 != 3) {
      (**(romwright_code **)(temp_v3 + 0x1328))();
      *(unsigned char *)(temp_v3 + 0x1324) = 0;
    }
    FUN_0029a418((int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v6 + 8) + param_1,
                 (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v6 + 10) + param_2,
                 (int)**(short **)(temp_v6 + 0xc),(int)(*(short **)(temp_v6 + 0xc))[1],1);
    temp_v3 = FUN_002bef70(temp_v2 + 0x1cc);
    temp_v0 = *(short *)(temp_v4 + 10);
    temp_v6 = FUN_002bef7c(temp_v2 + 0x1cc);
    FUN_002bf460(2,0x1a,0x422,temp_v6 + param_1 + (int)*(short *)(temp_v4 + 8),
                 temp_v3 + param_2 + (int)temp_v0,0xc9);
    temp_v3 = DAT_0044ea00;
    piVar14 = (int *)(DAT_0044ea00 + 0x130c);
    temp_v6 = piVar14[*piVar14 + 2];
    piVar14[*piVar14 + 2] = 0;
    if (*(char *)(temp_v3 + 0x1324) != '\0' || temp_v6 != 0) {
      (**(romwright_code **)(temp_v3 + 0x1328))();
      *(unsigned char *)(temp_v3 + 0x1324) = 0;
    }
    temp_v3 = FUN_002bf6d0(0x1a,0x458);
    if (temp_v1) {
      temp_v0 = *(short *)(temp_v3 + 10);
      temp_v3 = (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8);
      temp_v6 = 0;
    }
    else {
      temp_v0 = *(short *)(temp_v3 + 10);
      temp_v3 = (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8);
      temp_v6 = (int)*(short *)(temp_v5 + 200);
    }
    FUN_002b6a98(temp_v6,temp_v3 + param_1,(int)*(short *)(temp_v4 + 10) + (int)temp_v0 + param_2,0xc9,0);
    temp_v3 = FUN_002bf6d0(0x1a,0x459);
    FUN_002e1e60(*(unsigned short *)(temp_v5 + 0xca),
                 (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v3 + 8) + param_1,
                 (int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,0xc9);
  }
  temp_v3 = FUN_0029f0f4(temp_v15);
  if (temp_v3 < 1) {
    FUN_002bf558(2,0x1a,0x1b,param_1,param_2,0xdd);
  }
  FUN_00290c38(temp_v15,param_1,param_2,0x1a,0x404,0x405,0x406,0x400,0x402,0x401,0x403,
               (int)*(short *)(temp_v2 + 0x474),(int)*(short *)(temp_v2 + 0x476),
               (int)*(short *)(temp_v2 + 0x478),0xc4,0);
  return;
}
