/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aef48` (_code @ 0x3aef48, 0x9e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00152cf8(...);
int FUN_00167c14(...);
int FUN_001681cc(...);
int FUN_001834a4(...);
int FUN_002844e4(void);
int FUN_002e2680(...);
int FUN_0032ef0c(...);
int FUN_00344bc8(...);
int FUN_0035a0bc(...);
int FUN_0037b578(...);
int FUN_00387ad8(int, int);
int FUN_003a4980(...);
int FUN_003d2150(...);
int SBORROW4(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00152cf8. */
extern int FUN_00164af0(unsigned int);
extern int FUN_001656a0(unsigned int);
/* Supplied declaration required: FUN_00167c14. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_002844e4. */
extern int FUN_002e1a18(unsigned int);
/* Supplied declaration required: FUN_002e2680. */
extern unsigned int FUN_003192e0(void);
extern unsigned int FUN_0032ec7c(void);
extern int FUN_0032ecac(void);
/* Supplied declaration required: FUN_0032ef0c. */
/* Supplied declaration required: FUN_00344bc8. */
/* Supplied declaration required: FUN_0035a0bc. */
/* Supplied declaration required: FUN_0037b578. */
/* Supplied declaration required: FUN_00387ad8. */
/* Supplied declaration required: FUN_003a4980. */
/* Supplied declaration required: FUN_003d2150. */


unsigned int FUN_003aef48(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 15 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  int temp_v20;
  int temp_v21;
  int temp_v22;
  unsigned char temp_v23 [4];
  
  temp_v6 = -1;
  temp_v22 = 0;
  temp_v19 = *(int *)(param_1 + 0x128);
  temp_v20 = *(int *)(param_1 + 0x120);
  *(unsigned int *)(param_1 + 0x11c) = 0;
  temp_v9 = 0;
  temp_v8 = temp_v19 + temp_v20;
  temp_v7 = -1;
  temp_v10 = -1;
  temp_v21 = 0;
  temp_v18 = 0;
  FUN_00167c14(param_1 + 0x140,param_1 + 0x144,1);
  *(unsigned char *)(param_1 + 0x138) = 0;
  FUN_001834a4(0x2e,*(int *)(param_1 + 0x128) + 0xe6);
  temp_v1 = param_1;
  FUN_00387ad8(param_1,1);
  if (temp_v1 != 0) {
    temp_v1 = FUN_001834a4(0x2e,0x42);
    temp_v17 = 0;
    temp_v11 = (int)*(short *)(temp_v1 + 8);
    FUN_00152cf8(temp_v11,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
                 (int)(*(short **)(temp_v1 + 0xc))[1]);
    if (temp_v11 != 0) {
      temp_v2 = *(unsigned int *)(param_1 + 0x11c) | 1;
    }
    else {
      temp_v2 = *(unsigned int *)(param_1 + 0x11c) & 0xfffffffe;
    }
    *(unsigned int *)(param_1 + 0x11c) = temp_v2;
    temp_v1 = FUN_001834a4(0x2e,0x43);
    temp_v17 = 0;
    temp_v11 = (int)*(short *)(temp_v1 + 8);
    FUN_00152cf8(temp_v11,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
                 (int)(*(short **)(temp_v1 + 0xc))[1]);
    if (temp_v11 != 0) {
      temp_v2 = *(unsigned int *)(param_1 + 0x11c) | 2;
    }
    else {
      temp_v2 = *(unsigned int *)(param_1 + 0x11c) & 0xfffffffd;
    }
    *(unsigned int *)(param_1 + 0x11c) = temp_v2;
    temp_v1 = FUN_001834a4(0x2e,0x41);
    temp_v17 = 0;
    temp_v11 = (int)*(short *)(temp_v1 + 8);
    FUN_00152cf8(temp_v11,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
                 (int)(*(short **)(temp_v1 + 0xc))[1]);
    temp_v1 = 0;
    if (temp_v11 != 0) {
      temp_v2 = *(unsigned int *)(param_1 + 0x11c) | 4;
    }
    else {
      temp_v2 = *(unsigned int *)(param_1 + 0x11c) & 0xfffffffb;
    }
    *(unsigned int *)(param_1 + 0x11c) = temp_v2;
    do {
      if (temp_v1 < *(int *)(param_1 + 0x124)) {
        temp_v11 = FUN_001834a4(0x2e,temp_v1 + 0xd1);
        temp_v17 = 0;
        temp_v3 = (int)*(short *)(temp_v11 + 8);
        FUN_00152cf8(temp_v3,(int)*(short *)(temp_v11 + 10),(int)**(short **)(temp_v11 + 0xc),
                     (int)(*(short **)(temp_v11 + 0xc))[1]);
        if (temp_v3 != 0) {
          *(unsigned char *)(param_1 + 0x138) = 1;
          temp_v6 = temp_v1;
        }
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0xb);
    if (*(int *)(param_1 + 0x124) < 10) {
      *(unsigned int *)(param_1 + 0x11c) = 0;
      *(unsigned int *)(param_1 + 0x13c) = 0;
    }
    else {
      temp_v2 = *(unsigned int *)(param_1 + 0x11c);
      if (temp_v2 != 0) {
        temp_v5 = *(int *)(param_1 + 0x13c) + 1;
        *(unsigned int *)(param_1 + 0x13c) = temp_v5;
        if ((temp_v5 == 1) || (((int)temp_v5 >= 0xf && ((temp_v5 & 1) == 0)))) {
          if ((temp_v2 & 1) != 0) {
            temp_v2 = temp_v2 | 8;
            *(unsigned int *)(param_1 + 0x11c) = temp_v2;
          }
          else if ((temp_v2 & 2) != 0) {
            temp_v2 = temp_v2 | 0x10;
            *(unsigned int *)(param_1 + 0x11c) = temp_v2;
          }
        }
      }
      else {
        *(unsigned int *)(param_1 + 0x13c) = 0;
      }
    }
    temp_v1 = FUN_001834a4(0x2e,*(int *)(param_1 + 0x128) + 0xe6);
    temp_v17 = 3;
    temp_v11 = (int)*(short *)(temp_v1 + 8);
    FUN_00152cf8(temp_v11,(int)*(short *)(temp_v1 + 10),(int)**(short **)(temp_v1 + 0xc),
                 (int)(*(short **)(temp_v1 + 0xc))[1]);
    if (temp_v11 != 0) {
      FUN_00167c14(&temp_v21,&temp_v18,3);
      temp_v1 = temp_v18 - *(int *)(param_1 + 0x144);
      temp_v11 = *(int *)(param_1 + 0x100);
      if (temp_v1 < 0) {
        temp_v1 = -temp_v1;
      }
      temp_v13 = SBORROW4(temp_v11,0xf);
      temp_v3 = temp_v11 - 0xf;
      temp_v12 = temp_v11 == 0xf;
      if (temp_v11 < 0x10) {
        temp_v13 = SBORROW4(temp_v1,8);
        temp_v3 = temp_v1 - 8;
        temp_v12 = temp_v1 == 8;
      }
      if (temp_v12 || temp_v3 < 0 != temp_v13) {
        temp_v22 = 1;
      }
    }
    temp_v2 = *(unsigned int *)(param_1 + 0x11c);
    if ((temp_v2 & 8) != 0) {
      if (0 < *(int *)(param_1 + 0x118)) {
        *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) - 1;
      }
      if (*(int *)(param_1 + 0x128) >= 1) {
        *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) - 1;
      }
      else if (0 < *(int *)(param_1 + 0x120)) {
        temp_v1 = *(int *)(param_1 + 0x120) - 1;
        *(int *)(param_1 + 0x120) = temp_v1;
      }
    }
    else if ((temp_v2 & 0x10) != 0) {
      temp_v1 = *(int *)(param_1 + 0x124) - 1;
      if (*(int *)(param_1 + 0x118) < temp_v1) {
        *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
      }
      temp_v11 = *(int *)(param_1 + 0x128);
      temp_v3 = *(int *)(param_1 + 0x124) - 0xb;
      temp_v12 = SBORROW4(temp_v11,10);
      temp_v6 = temp_v11 - 10;
      if (temp_v11 < 10) {
        temp_v12 = SBORROW4(temp_v11,temp_v1);
        temp_v6 = temp_v11 - temp_v1;
      }
      if (temp_v6 < 0 != temp_v12) {
        *(int *)(param_1 + 0x128) = temp_v11 + 1;
      }
      temp_v11 = *(int *)(param_1 + 0x120);
      temp_v12 = SBORROW4(temp_v11,temp_v3);
      temp_v6 = temp_v11 - temp_v3;
      if (temp_v11 < temp_v3) {
        temp_v12 = SBORROW4(*(int *)(param_1 + 0x128),temp_v1);
        temp_v6 = *(int *)(param_1 + 0x128) - temp_v1;
      }
      if (temp_v6 < 0 != temp_v12) {
        temp_v1 = temp_v11 + 1;
        *(int *)(param_1 + 0x120) = temp_v1;
      }
    }
    else if ((temp_v2 & 4) != 0) {
      temp_v11 = *(int *)(param_1 + 0x128);
      FUN_00167c14(temp_v23,&temp_v17,0);
      temp_v1 = FUN_001834a4(0x2e,0x41);
      temp_v17 = temp_v17 - *(short *)(temp_v1 + 10);
      temp_v6 = *(int *)(param_1 + 0x124);
      temp_v16 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v15 = (float)VectorSignedToFloat((int)*(short *)(*(int *)(temp_v1 + 0xc) + 2),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v1 = (int)((temp_v16 / temp_v15) * temp_v14);
      *(int *)(param_1 + 0x118) = temp_v1;
      if (temp_v6 <= temp_v1) {
        temp_v1 = temp_v6 - 1;
        *(int *)(param_1 + 0x118) = temp_v1;
      }
      temp_v1 = temp_v1 - temp_v11;
      *(int *)(param_1 + 0x120) = temp_v1;
      if (temp_v1 < 1) {
        temp_v1 = 0;
      }
      *(int *)(param_1 + 0x120) = temp_v1;
      if (temp_v6 - 0xb < temp_v1) {
        temp_v1 = temp_v6 - 0xb;
      }
      *(int *)(param_1 + 0x120) = temp_v1;
    }
    else if (temp_v6 == -1) {
      *(unsigned int *)(param_1 + 0x100) = 0;
    }
    else {
      *(int *)(param_1 + 0x128) = temp_v6;
      *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x120) + temp_v6;
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
    }
    temp_v1 = *(int *)(param_1 + 0x130) + 8;
    *(int *)(param_1 + 0x130) = temp_v1;
    if (temp_v1 >= 0x119) {
      *(unsigned int *)(param_1 + 0x130) = 0xffffffc8;
    }
    temp_v1 = *(int *)(param_1 + 0x128);
    *(unsigned char *)(param_1 + 0x12d) = 1;
    temp_v12 = temp_v1 != 0;
    if (!temp_v12) {
      temp_v1 = *(int *)(param_1 + 0x120);
    }
    if ((!(temp_v12 || temp_v1 != 0)) &&
       ((temp_v1 = FUN_001656a0(5), temp_v1 != 0 || (temp_v1 = FUN_001656a0(0xe), temp_v1 != 0)))) {
      temp_v1 = *(int *)(param_1 + 0x124);
      if (temp_v1 >= 0xc) {
        *(int *)(param_1 + 0x120) = temp_v1 - 0xb;
        temp_v1 = temp_v1 - 1;
        *(unsigned int *)(param_1 + 0x128) = 10;
      }
      else {
        temp_v1 = temp_v1 - 1;
        *(int *)(param_1 + 0x128) = temp_v1;
        *(unsigned int *)(param_1 + 0x120) = 0;
      }
      *(int *)(param_1 + 0x118) = temp_v1;
    }
    else if (((*(int *)(param_1 + 0x120) + *(int *)(param_1 + 0x128)) - *(int *)(param_1 + 0x124) ==
              -1) && ((temp_v1 = FUN_001656a0(6), temp_v1 != 0 ||
                      (temp_v1 = FUN_001656a0(0xf), temp_v1 != 0)))) {
      *(unsigned int *)(param_1 + 0x120) = 0;
      *(unsigned int *)(param_1 + 0x128) = 0;
      *(unsigned int *)(param_1 + 0x118) = 0;
    }
    else {
      temp_v1 = FUN_00164af0(5);
      if ((temp_v1 != 0) || (temp_v1 = FUN_00164af0(0xe), temp_v1 != 0)) {
        if (0 < *(int *)(param_1 + 0x118)) {
          *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) - 1;
        }
        if (*(int *)(param_1 + 0x120) >= 1) {
          if (1 >= *(int *)(param_1 + 0x128)) {
            temp_v1 = *(int *)(param_1 + 0x120) - 1;
            *(int *)(param_1 + 0x120) = temp_v1;
          }
          else {
            temp_v1 = *(int *)(param_1 + 0x128) - 1;
            *(int *)(param_1 + 0x128) = temp_v1;
          }
        }
        else if (0 < *(int *)(param_1 + 0x128)) {
          temp_v1 = *(int *)(param_1 + 0x128) - 1;
          *(int *)(param_1 + 0x128) = temp_v1;
        }
      }
      else {
        temp_v1 = FUN_00164af0(6);
        if ((temp_v1 != 0) || (temp_v1 = FUN_00164af0(0xf), temp_v1 != 0)) {
          temp_v6 = *(int *)(param_1 + 0x124);
          if (*(int *)(param_1 + 0x118) < temp_v6) {
            *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
          }
          temp_v1 = *(int *)(param_1 + 0x128);
          if (temp_v1 >= 9) {
            if (*(int *)(param_1 + 0x120) < temp_v6 - 0xb) {
              temp_v1 = *(int *)(param_1 + 0x120) + 1;
              *(int *)(param_1 + 0x120) = temp_v1;
            }
            else if (9 >= temp_v1) {
              if (temp_v1 < temp_v6 - 1) {
                temp_v1 = temp_v1 + 1;
                *(int *)(param_1 + 0x128) = temp_v1;
              }
            }
          }
          else if (temp_v1 < temp_v6 - 1) {
            temp_v1 = temp_v1 + 1;
            *(int *)(param_1 + 0x128) = temp_v1;
          }
        }
        else {
          temp_v1 = FUN_00164af0(3);
          if ((temp_v1 != 0) || (temp_v1 = FUN_00164af0(0xc), temp_v1 != 0)) {
            temp_v1 = *(int *)(param_1 + 0x124);
            if (temp_v1 <= *(int *)(param_1 + 0x120) + 0xb) {
              if (temp_v1 >= 0xc) {
                temp_v1 = temp_v1 - 1;
                *(unsigned int *)(param_1 + 0x128) = 10;
              }
              else {
                temp_v1 = temp_v1 - 1;
                *(int *)(param_1 + 0x128) = temp_v1;
                *(unsigned int *)(param_1 + 0x120) = 0;
              }
              *(int *)(param_1 + 0x118) = temp_v1;
            }
            else {
              temp_v6 = *(int *)(param_1 + 0x118) + 10;
              *(int *)(param_1 + 0x118) = temp_v6;
              if (temp_v1 - 1 < temp_v6) {
                temp_v6 = temp_v1 - 1;
              }
              temp_v11 = *(int *)(param_1 + 0x120) + temp_v6;
              *(int *)(param_1 + 0x118) = temp_v6;
              *(int *)(param_1 + 0x120) = temp_v11;
              if (temp_v1 - 0xb < temp_v11) {
                temp_v11 = temp_v1 - 0xb;
              }
              *(int *)(param_1 + 0x120) = temp_v11;
              if (temp_v11 < 1) {
                temp_v11 = 0;
              }
              *(int *)(param_1 + 0x120) = temp_v11;
            }
          }
          else {
            temp_v1 = FUN_00164af0(4);
            if ((temp_v1 != 0) || (temp_v1 = FUN_00164af0(0xd), temp_v1 != 0)) {
              if (*(int *)(param_1 + 0x120) < 1) {
                *(unsigned int *)(param_1 + 0x128) = 0;
                *(unsigned int *)(param_1 + 0x118) = 0;
                *(unsigned int *)(param_1 + 0x120) = 0;
              }
              else {
                temp_v6 = *(int *)(param_1 + 0x120) - 10;
                temp_v1 = *(int *)(param_1 + 0x118) - 10;
                *(int *)(param_1 + 0x118) = temp_v1;
                if (temp_v1 < 1) {
                  temp_v1 = 0;
                }
                *(int *)(param_1 + 0x120) = temp_v6;
                if (temp_v6 < 1) {
                  temp_v6 = 0;
                }
                *(int *)(param_1 + 0x118) = temp_v1;
                *(int *)(param_1 + 0x120) = temp_v6;
              }
            }
          }
        }
      }
    }
    temp_v1 = *(int *)(param_1 + 0x128);
    if ((temp_v1 != temp_v19) || (*(int *)(param_1 + 0x120) != temp_v20)) {
      temp_v6 = *(int *)(param_1 + 0x14c);
      if (temp_v6 != 7) {
        if (temp_v6 != 2) {
          if (temp_v6 != 5) {
            if (temp_v6 == 1) {
              *(char *)(*(int *)(param_1 + 8) + 0x22) =
                   (char)temp_v1 + (char)*(unsigned int *)(param_1 + 0x120);
            }
          }
          else {
            *(char *)(*(int *)(param_1 + 8) + 0x42) =
                 (char)temp_v1 + (char)*(unsigned int *)(param_1 + 0x120);
            temp_v4 = FUN_003192e0();
            FUN_0035a0bc(temp_v4,*(int *)(param_1 + 0x128) + *(int *)(param_1 + 0x120));
          }
        }
        else {
          temp_v0 = FUN_00344bc8(temp_v1 + *(int *)(param_1 + 0x120));
          *(unsigned char *)(*(int *)(param_1 + 8) + 0x23) = temp_v0;
          temp_v4 = FUN_0032ec7c();
          FUN_0037b578(*(unsigned int *)(param_1 + 0x58),temp_v4);
        }
      }
      else {
        *(int *)(*(int *)(param_1 + 8) + 0x24) =
             temp_v1 + *(int *)(param_1 + 0x120) + *(int *)(param_1 + 0x134);
      }
      FUN_003a4980(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 8),
                   *(unsigned int *)(param_1 + 0x58));
      FUN_003d2150(0x100020d);
    }
    temp_v1 = FUN_001656a0(0);
    if (temp_v1 == 0) {
      temp_v6 = FUN_002e1a18(1);
      temp_v1 = temp_v6;
      if (temp_v6 == 0) {
        temp_v1 = temp_v22;
      }
      if (temp_v6 != 0 || temp_v1 != 0) goto LAB_003af720;
      temp_v1 = FUN_001656a0(1);
      if ((temp_v1 != 0) || (temp_v1 = FUN_002e1a18(2), temp_v1 != 0)) {
        FUN_002844e4();
        temp_v1 = *(int *)(param_1 + 0x14c);
        *(unsigned char *)(param_1 + 0x114) = 1;
        *(unsigned char *)(param_1 + 0x12d) = 0;
        if (temp_v1 != 2) {
          if (temp_v1 != 5) {
            if (temp_v1 != 1) {
              if (temp_v1 == 7) {
                *(unsigned int *)(*(int *)(param_1 + 8) + 0x24) = *(unsigned int *)(param_1 + 0x15c);
              }
            }
            else {
              *(char *)(*(int *)(param_1 + 8) + 0x22) = (char)*(unsigned int *)(param_1 + 0x168);
            }
          }
          else {
            *(char *)(*(int *)(param_1 + 8) + 0x42) = (char)*(unsigned int *)(param_1 + 0x160);
            temp_v9 = FUN_003192e0();
            FUN_0035a0bc(temp_v9,*(unsigned int *)(param_1 + 0x160));
          }
        }
        else {
          *(char *)(*(int *)(param_1 + 8) + 0x23) = (char)*(unsigned int *)(param_1 + 0x158);
        }
        FUN_003a4980(*(unsigned int *)(param_1 + 0xc),*(unsigned int *)(param_1 + 8),
                     *(unsigned int *)(param_1 + 0x58));
        *(unsigned int *)(param_1 + 0x44) = 0;
        *(unsigned char *)(param_1 + 0x48) = 0;
        *(unsigned int *)(param_1 + 0xe8) = 0xffffffff;
        *(unsigned int *)(param_1 + 0xf8) = 8;
        *(unsigned int *)(param_1 + 0xec) = 0xffffffff;
        FUN_002e2680(0);
        temp_v4 = 0x100020f;
        temp_v9 = 3;
        FUN_003d2150(temp_v4);
      }
    }
    else {
LAB_003af720:
      temp_v1 = *(int *)(param_1 + 0x14c);
      if (temp_v1 == 2) {
        *(unsigned int *)(param_1 + 0xec) = 0xd;
      }
      else if (temp_v1 == 5) {
        temp_v9 = 0x14;
        *(unsigned int *)(param_1 + 0xec) = temp_v9;
      }
      else if (temp_v1 == 1) {
        temp_v9 = 0x17;
        *(unsigned int *)(param_1 + 0xec) = temp_v9;
      }
      else {
        *(unsigned int *)(param_1 + 0xec) = 10;
      }
      temp_v10 = *(int *)(param_1 + 0x128) + *(int *)(param_1 + 0x120);
      *(unsigned int *)(param_1 + 0xf8) = 2;
      *(unsigned int *)(param_1 + 0xfc) = 5;
      FUN_001681cc(0xe4);
      temp_v4 = 0x100020e;
      temp_v7 = temp_v8;
      temp_v9 = 3;
      FUN_003d2150(temp_v4);
    }
  }
  if ((*(int *)(param_1 + 0x128) + *(int *)(param_1 + 0x120) != temp_v8) &&
     (temp_v1 = *(int *)(param_1 + 400), *(unsigned int *)(param_1 + 400) = 0, temp_v1 >= 3)) {
    temp_v7 = temp_v8;
  }
  if (*(int *)(param_1 + 0x14c) == 2) {
    temp_v4 = FUN_00344bc8(temp_v7);
    if ((-1 < temp_v7) && (temp_v1 = FUN_0032ecac(), temp_v1 != 0)) {
      FUN_0032ef0c(temp_v4,0);
    }
    temp_v4 = FUN_00344bc8(temp_v10);
    if ((-1 < temp_v10) && (temp_v1 = FUN_0032ecac(), temp_v1 != 0)) {
      FUN_0032ef0c(temp_v4,0);
    }
  }
  *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
  return temp_v9;
}

} /* extern "C" */
