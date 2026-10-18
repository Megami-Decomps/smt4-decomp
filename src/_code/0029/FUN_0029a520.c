/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029a520` (_code @ 0x29a520, 0x688 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_8: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_8_stack;

extern unsigned char LAB_0029a968; /* 0x29a968 */
extern unsigned char LAB_0029a974; /* 0x29a974 */
extern unsigned char LAB_0029a9ac; /* 0x29a9ac */
extern unsigned char LAB_0029abb0; /* 0x29abb0 */
extern unsigned char LAB_0029abb4; /* 0x29abb4 */
extern int DAT_0044e190; /* 0x44e190 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_0028d498(int);
/* Supplied declaration required: FUN_0029a418. */
extern unsigned int FUN_0029abc0(void);
extern unsigned int FUN_0029ac70(int, unsigned int);
extern int FUN_0029af30(void);
extern int FUN_0029f0f4(int);
extern int FUN_0029f248(void);
/* Supplied declaration required: FUN_002ae3f0. */
/* Supplied declaration required: FUN_002b6f74. */
/* Supplied declaration required: FUN_002bcff0. */
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002bef70(int);
extern int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf710. */


void FUN_0029a520(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 int param_6,int param_7,int param_8)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned int in_fpscr;
  unsigned char temp_v9 [68];
  int temp_v10;
  int temp_v11;
  int temp_v12;
  
  temp_v3 = DAT_0044e190;
  temp_v1 = FUN_002bf6d0(0x1a,param_4);
  temp_v12 = temp_v3 + 0x4d4;
  temp_v11 = FUN_0029f248();
  temp_v6 = 0;
  FUN_002bf710();
  FUN_002bf558(2,0x1a,8,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xbf);
  FUN_002bf710();
  FUN_002bf460(2,0x1a,0x41f,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4);
  temp_v2 = *(int *)(temp_v3 + 0x418);
  temp_v4 = 0x420;
  temp_v7 = temp_v2 == 0;
  if (temp_v7) {
    temp_v2 = *(int *)(temp_v3 + 0x41c);
  }
  if (temp_v7 && temp_v2 == 0) {
    temp_v2 = *(int *)(temp_v3 + 0x420);
    temp_v7 = temp_v2 == 0;
    if (temp_v7) {
      temp_v2 = *(int *)(temp_v3 + 0x424);
    }
    temp_v8 = temp_v7 && temp_v2 == 0;
    if (temp_v7 && temp_v2 == 0) {
      temp_v8 = *(int *)(temp_v3 + 0x428) == 0;
    }
    if ((temp_v8) && (-1 < *(int *)(temp_v3 + 0x414))) {
      temp_v4 = 0x421;
    }
  }
  FUN_002bf460(2,0x1a,temp_v4,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4);
  temp_v10 = FUN_002bf6d0(0x1a,0x420);
  temp_v2 = DAT_0044ea00;
  piVar7 = (int *)(DAT_0044ea00 + 0x130c);
  temp_v5 = piVar7[*piVar7 + 2];
  piVar7[*piVar7 + 2] = 3;
  if (*(char *)(temp_v2 + 0x1324) != '\0' || temp_v5 != 3) {
    (**(romwright_code **)(temp_v2 + 0x1328))();
    *(unsigned char *)(temp_v2 + 0x1324) = 0;
  }
  FUN_0029a418((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v10 + 8) + param_1,
               (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v10 + 10) + param_2,
               (int)**(short **)(temp_v10 + 0xc),(int)(*(short **)(temp_v10 + 0xc))[1],1);
  temp_v2 = FUN_002bef70(temp_v3 + 0x1cc);
  temp_v0 = *(short *)(temp_v1 + 10);
  temp_v5 = FUN_002bef7c(temp_v3 + 0x1cc);
  FUN_002bf460(2,0x1a,0x422,temp_v5 + param_1 + (int)*(short *)(temp_v1 + 8),
               temp_v2 + param_2 + (int)temp_v0,0xc9);
  temp_v2 = DAT_0044ea00;
  piVar7 = (int *)(DAT_0044ea00 + 0x130c);
  temp_v5 = piVar7[*piVar7 + 2];
  piVar7[*piVar7 + 2] = 0;
  if (*(char *)(temp_v2 + 0x1324) != '\0' || temp_v5 != 0) {
    (**(romwright_code **)(temp_v2 + 0x1328))();
    *(unsigned char *)(temp_v2 + 0x1324) = 0;
  }
  temp_v4 = 0xffffffff;
  if (param_8 == 1) {
    temp_v4 = 0x72e027ff;
  }
  else if (param_8 == 2) {
    temp_v4 = 0xdc0f14ff;
  }
  temp_v2 = temp_v3 + 0x400;
  temp_v5 = *(int *)(temp_v3 + 0x400);
  if (!(temp_v5 == 0xb || temp_v5 == 0xe)) {
    if (((!(temp_v5 == 6 || temp_v5 == 9)) && (*(char *)(temp_v3 + 0x548) != '\0')) &&
       (*(int *)(temp_v3 + 0x54c) == temp_v11)) {
      temp_v4 = 0x72e027ff;
    }
  }
  else if ((*(int *)(temp_v3 + 0x544) != temp_v11) &&
          (temp_v3 = FUN_0029f0f4(temp_v12), temp_v3 - 1 != temp_v11)) {
    temp_v4 = 0x5a5a5aff;
  }
  else {
    temp_v4 = 0x72e027ff;
  }
  temp_v3 = FUN_002bf6d0(0x1a,0x42b);
  if ((param_7 == 0) || (param_3 != 0)) {
    if (param_6 != 0) {
      FUN_002be7fc(temp_v9,&LAB_0029a968);
    }
    else {
      temp_v5 = param_3;
      FUN_002bcff0(param_3);
      FUN_002be7fc(temp_v9,&LAB_0029a9ac,temp_v5);
    }
  }
  else {
    FUN_002be7fc(temp_v9,&LAB_0029a974);
    temp_v4 = 0x5a5a5aff;
  }
  VectorSignedToFloat((int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v3 + 8) + param_1,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be77c(3,temp_v4,temp_v9,(int)*(short *)(temp_v3 + 8));
  if ((param_7 == 0) || (param_3 != 0)) {
    FUN_002bf460(2,0x1a,0x425,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4)
    ;
    temp_v3 = FUN_002bf6d0(0x1a,0x42a);
    FUN_002b6f74((int)(short)param_3,
                 (int)*(short *)(temp_v3 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v3 + 10) + param_2,0xc9,param_5,0)
    ;
  }
  if (param_6 == 0) {
    if (param_7 == 0) {
      FUN_002bf460(2,0x1a,0x423,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,
                   0xc4);
      if (*(short *)(temp_v2 + 0x7e) < 0) {
        temp_v6 = FUN_0029ac70(param_3,1);
      }
      else {
        temp_v2 = FUN_0029af30();
        if (temp_v2 != 6) {
          temp_v6 = FUN_0029abc0();
        }
        else {
          FUN_002ae3f0();
          if (param_3 != 0) {
            temp_v6 = (unsigned int)*(unsigned char *)(param_3 + 0x22);
          }
        }
      }
      temp_v2 = FUN_002bf6d0(0x1a,0x429);
      FUN_002be16c(0,(int)*(short *)(temp_v2 + 8) + (int)*(short *)(temp_v1 + 8) + param_1,
                   (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v2 + 10) + param_2,1,4,0xc9,
                   &LAB_0029abb0,temp_v6);
      return;
    }
    FUN_002bf460(2,0x1a,0x522,*(short *)(temp_v1 + 8) + param_1,*(short *)(temp_v1 + 10) + param_2,0xc4)
    ;
    temp_v2 = FUN_002bf6d0(0x1a,0x52a);
    if (param_3 == 0) {
      FUN_002be7fc(temp_v9,&LAB_0029abb4);
      FUN_002be16c(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                   (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,1,8,0xc9,
                   temp_v9);
      return;
    }
    temp_v4 = FUN_0028d498(param_3);
    FUN_002be16c(0,(int)*(short *)(temp_v1 + 8) + (int)*(short *)(temp_v2 + 8) + param_1,
                 (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v1 + 10) + param_2,1,8,0xc9,
                 &LAB_0029abb0,temp_v4);
  }
  return;
}
