/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b39c` (_code @ 0x18b39c, 0x2a8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_2_stack;

extern unsigned char LAB_0018b654; /* 0x18b654 */
extern int DAT_0043dc58; /* 0x43dc58 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00196ee0. */
/* Supplied declaration required: FUN_0029f248. */
/* Supplied declaration required: FUN_0029f260. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
extern int FUN_002c0ba8(unsigned int);
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


void FUN_0018b39c(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int *piVar11;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int in_fpscr;
  unsigned char temp_v12 [64];
  int temp_v13;
  unsigned int temp_v14;
  
  temp_v2 = DAT_0043dc58;
  FUN_0029f260(DAT_0043dc58);
  FUN_0029f248(temp_v2);
  FUN_002bf558(2,0x2f,0,param_1,param_2,0xb);
  temp_v14 = 0xe09800ff;
  temp_v3 = FUN_002bf6d0(0x2f,0x20);
  temp_v5 = DAT_0044ea00;
  temp_v13 = *(short *)(temp_v3 + 8) + param_1;
  temp_v11 = *(short *)(temp_v3 + 10) + param_2;
  temp_v4 = FUN_002c5fa4(6,1,0);
  piVar11 = (int *)(temp_v5 + 0x12ac);
  temp_v8 = piVar11[*piVar11 + 2];
  piVar11[*piVar11 + 2] = temp_v4;
  if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v8 != temp_v4) {
    (**(romwright_code **)(temp_v5 + 0x12c8))();
    *(unsigned char *)(temp_v5 + 0x12c4) = 0;
  }
  FUN_002bf460(2,0x2f,0xc,temp_v13,temp_v11,0xb);
  temp_v5 = DAT_0044ea00;
  temp_v4 = FUN_002c5fa4(6,7,0);
  piVar11 = (int *)(temp_v5 + 0x12ac);
  temp_v8 = piVar11[*piVar11 + 2];
  piVar11[*piVar11 + 2] = temp_v4;
  if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v8 != temp_v4) {
    (**(romwright_code **)(temp_v5 + 0x12c8))();
    *(unsigned char *)(temp_v5 + 0x12c4) = 0;
  }
  FUN_002bf558(2,0x2f,1,temp_v13,temp_v11,0x10);
  temp_v10 = 0xffffffff;
  temp_v5 = FUN_002c0ba8(0x555);
  if ((temp_v5 != 0) && (temp_v5 = FUN_002c0ba8(0x557), temp_v5 != 0)) {
    temp_v10 = 2;
  }
  else {
    temp_v5 = FUN_002c0ba8(0x557);
    if (temp_v5 != 0) {
      temp_v10 = 1;
    }
    else {
      temp_v5 = FUN_002c0ba8(0x555);
      if (temp_v5 != 0) {
        temp_v10 = 0;
      }
    }
  }
  temp_v6 = FUN_002c0ec4(0x36,0);
  temp_v5 = FUN_002c0e9c();
  temp_v7 = FUN_002c0e4c(temp_v6);
  if ((temp_v10 < temp_v7) && (temp_v5 = temp_v5 + temp_v10 * 0x80, temp_v5 != 0)) {
    temp_v4 = FUN_002bf6d0(0x2f,0x1a);
    FUN_002be7fc(temp_v12,&LAB_0018b654,temp_v5);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 10) + (int)*(short *)(temp_v4 + 10) + param_2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v4 + 8) + param_1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(2,temp_v14,temp_v12,(int)*(short *)(temp_v4 + 8));
    if (*(char *)(temp_v2 + 0xa8) != '\x01') {
      temp_v4 = FUN_0029f260(temp_v2);
      temp_v9 = *(unsigned int *)(temp_v2 + temp_v4 * 4 + 0x80);
      temp_v0 = *(short *)(temp_v3 + 10);
      temp_v1 = *(short *)(temp_v3 + 8);
      temp_v6 = 2;
    }
    else {
      temp_v4 = FUN_0029f260(temp_v2);
      temp_v9 = *(unsigned int *)(temp_v2 + temp_v4 * 4 + 0x80);
      temp_v0 = *(short *)(temp_v3 + 10);
      temp_v1 = *(short *)(temp_v3 + 8);
      temp_v6 = 3;
    }
    FUN_00196ee0(temp_v6,temp_v1 + param_1,temp_v0 + param_2,temp_v9,temp_v5);
  }
  return;
}
