/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f82ac` (_code @ 0x2f82ac, 0x678 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern unsigned char DAT_004102f0; /* 0x4102f0 */
extern unsigned int *DAT_004ea7e0; /* 0x4ea7e0 */
extern unsigned int *DAT_004ea7f4; /* 0x4ea7f4 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002491b4. */
extern unsigned int FUN_0024c3c8(unsigned int);
/* Supplied declaration required: FUN_0025715c. */
/* Supplied declaration required: FUN_002826d4. */
/* Supplied declaration required: FUN_00282780. */
/* Supplied declaration required: FUN_0028c814. */
extern int FUN_002b8cec(unsigned int);
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002bfde4(unsigned int);
/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: FUN_002c415c. */
extern unsigned int FUN_002c5c14(unsigned char *, unsigned int, unsigned int, unsigned int);


unsigned long long FUN_002f82ac(unsigned int *param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7 [100];
  
  if (param_1[8] != 0) {
    param_1[8] = param_1[8] - 1;
  }
  else if (param_1[0xb] != 0) {
    if (param_1[2] == 0) {
      temp_v5 = FUN_002b8cec(5);
      if ((temp_v5 != 0) || (temp_v5 = FUN_002b8cec(0x10), temp_v5 != 0)) {
        temp_v5 = *(int *)(param_1[0xc] + 0x3c);
        if (temp_v5 != 0) {
          temp_v2 = param_1[6];
          param_1[0xc] = temp_v5;
          temp_v6 = temp_v2 != 0;
          if (temp_v6) {
            temp_v2 = temp_v2 - 1;
          }
          param_1[5] = param_1[5] - 1;
          if (temp_v6) {
            param_1[6] = temp_v2;
          }
          if ((temp_v5 == param_1[0xb]) && (temp_v5 = *(int *)(param_1[0xb] + 0x3c), temp_v5 != 0)) {
            param_1[0xb] = temp_v5;
            param_1[6] = 1;
          }
        }
      }
      else {
        temp_v5 = FUN_002b8cec(6);
        if ((temp_v5 != 0) || (temp_v5 = FUN_002b8cec(0x1d), temp_v5 != 0)) {
          if (*(int *)(param_1[0xc] + 0x40) != 0) {
            temp_v5 = param_1[6];
            param_1[0xc] = *(int *)(param_1[0xc] + 0x40);
            param_1[6] = temp_v5 + 1;
            param_1[5] = param_1[5] + 1;
            if ((temp_v5 + 1 == 0x11) && (*(int *)(param_1[0xb] + 0x40) != 0)) {
              param_1[0xb] = *(int *)(param_1[0xb] + 0x40);
              param_1[6] = 0x10;
            }
          }
        }
        else {
          temp_v5 = FUN_002b8cec(8);
          if ((temp_v5 != 0) || (temp_v5 = FUN_002b8cec(0x1c), temp_v5 != 0)) {
            temp_v5 = 0;
            do {
              temp_v2 = *(int *)(param_1[0xc] + 0x3c);
              if (temp_v2 != 0) {
                temp_v4 = param_1[6];
                param_1[0xc] = temp_v2;
                temp_v6 = temp_v4 != 0;
                if (temp_v6) {
                  temp_v4 = temp_v4 - 1;
                }
                param_1[5] = param_1[5] - 1;
                if (temp_v6) {
                  param_1[6] = temp_v4;
                }
                if ((temp_v2 == param_1[0xb]) && (temp_v2 = *(int *)(param_1[0xb] + 0x3c), temp_v2 != 0))
                {
                  param_1[0xb] = temp_v2;
                  param_1[6] = 1;
                }
              }
              temp_v5 = temp_v5 + 1;
            } while (temp_v5 < 0x12);
          }
          else {
            temp_v5 = FUN_002b8cec(7);
            if ((temp_v5 != 0) || (temp_v5 = FUN_002b8cec(0x18), temp_v5 != 0)) {
              temp_v5 = 0;
              do {
                if (*(int *)(param_1[0xc] + 0x40) != 0) {
                  temp_v2 = param_1[6];
                  param_1[0xc] = *(int *)(param_1[0xc] + 0x40);
                  param_1[6] = temp_v2 + 1;
                  param_1[5] = param_1[5] + 1;
                  if ((temp_v2 + 1 == 0x11) && (*(int *)(param_1[0xb] + 0x40) != 0)) {
                    param_1[0xb] = *(int *)(param_1[0xb] + 0x40);
                    param_1[6] = 0x10;
                  }
                }
                temp_v5 = temp_v5 + 1;
              } while (temp_v5 < 0x12);
            }
            else {
              temp_v5 = FUN_002bfde4(1);
              if ((temp_v5 != 0) || (temp_v5 = FUN_002bfde4(0x16), temp_v5 != 0)) {
                param_1[2] = 2;
              }
              else {
                temp_v5 = FUN_002bfde4(0);
                if ((temp_v5 != 0) || (temp_v5 = FUN_002bfde4(0x14), temp_v5 != 0)) {
                  param_1[2] = 1;
                }
                else {
                  if (param_1[0xd] != param_1[0xc]) {
                    if (param_1[0xe] != 0) {
                      FUN_002c0894();
                      param_1[0xe] = 0;
                    }
                    if (param_1[0x10] != 0) {
                      FUN_0025715c();
                      param_1[0x10] = 0;
                    }
                    piVar2 = (int *)param_1[0xc];
                    temp_v5 = *piVar2;
                    if (temp_v5 != 1) {
                      if (temp_v5 != 2) {
                        if (temp_v5 != 8) {
                          param_1[7] = 0;
                        }
                        else {
                          temp_v1 = FUN_0024c3c8(piVar2[1] & 0xffff);
                          param_1[0xf] = temp_v1;
                          *(unsigned short *)(param_1 + 0x11) = 8;
                          param_1[7] = 1;
                        }
                      }
                      else {
                        temp_v5 = piVar2[2];
                        if (temp_v5 != 0) {
                          FUN_002491b4();
                          param_1[0x10] = temp_v5;
                        }
                        else {
                          if (piVar2 != (int *)0x0) {
                            if (*(int *)(param_1[0x12] + 4) != 0) {
                              FUN_002be624(temp_v7,"%s%s",*(int *)(param_1[0x12] + 4),piVar2 + 3)
                              ;
                            }
                            else {
                              FUN_002be624(temp_v7,&DAT_004102f0,piVar2 + 3);
                            }
                          }
                          if (param_1[0x10] != 0) {
                            FUN_0025715c();
                            param_1[0x10] = 0;
                          }
                          temp_v1 = FUN_002c5c14(temp_v7,0,1,0x80);
                          if (param_1[0x10] != 0) {
                            FUN_0025715c();
                            param_1[0x10] = 0;
                          }
                          temp_v0 = temp_v1;
                          FUN_002491b4();
                          param_1[0x10] = temp_v0;
                          FUN_002c415c(temp_v1);
                        }
                        *(unsigned short *)(param_1 + 0x11) = 2;
                        param_1[7] = 1;
                      }
                    }
                    else {
                      temp_v5 = piVar2[2];
                      if (temp_v5 != 0) {
                        if ((param_1[0xe] != 0) && (*(short *)(param_1 + 0x11) == 1)) {
                          FUN_002c0894();
                          param_1[0xe] = 0;
                        }
                        temp_v1 = FUN_0028c814(temp_v5);
                        param_1[0xe] = temp_v1;
                      }
                      else {
                        if (piVar2 != (int *)0x0) {
                          if (*(int *)(param_1[0x12] + 4) != 0) {
                            FUN_002be624(temp_v7,"%s%s",*(int *)(param_1[0x12] + 4),piVar2 + 3);
                          }
                          else {
                            FUN_002be624(temp_v7,&DAT_004102f0,piVar2 + 3);
                          }
                        }
                        if ((param_1[0xe] != 0) && (*(short *)(param_1 + 0x11) == 1)) {
                          FUN_002c0894();
                          param_1[0xe] = 0;
                        }
                        temp_v1 = FUN_002c5c14(temp_v7,0,1,0x80);
                        if ((param_1[0xe] != 0) && (*(short *)(param_1 + 0x11) == 1)) {
                          FUN_002c0894();
                          param_1[0xe] = 0;
                        }
                        temp_v0 = FUN_0028c814(temp_v1);
                        param_1[0xe] = temp_v0;
                        FUN_002c415c(temp_v1);
                      }
                      *(unsigned short *)(param_1 + 0x11) = 1;
                      param_1[7] = 1;
                    }
                    param_1[0xd] = param_1[0xc];
                  }
                  if (param_1[7] != 0) {
                    puVar3 = (unsigned int *)0x10000;
                    FUN_002c32a0(0x10000,0x100,0,0x68,0x10,1);
                    puVar3[1] = 0xb;
                    puVar3[2] = (unsigned int)param_1;
                    puVar1 = puVar3;
                    if (DAT_004ea7e0 != (unsigned int *)0x0) {
                      *DAT_004ea7f4 = (unsigned int)puVar3;
                      puVar1 = DAT_004ea7e0;
                    }
                    DAT_004ea7e0 = puVar1;
                    DAT_004ea7f4 = puVar3;
                    *puVar3 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    temp_v5 = FUN_002bfde4(1);
    if ((temp_v5 != 0) || (temp_v5 = FUN_002bfde4(0x16), temp_v5 != 0)) {
      param_1[2] = 2;
    }
  }
  FUN_00282780(*param_1,param_1[1],0xcc,0xe8);
  if (param_1[7] != 0) {
    FUN_002826d4(*param_1,param_1[1] + 0xea,0x80,0x80,param_1[9],0);
  }
  temp_v5 = 0;
  temp_v3 = param_1[1] + 2;
  temp_v2 = param_1[0x12];
  temp_v4 = temp_v3;
  if (*(int *)(param_1[0x12] + 4) != 0) {
    temp_v4 = param_1[1] + 0xe;
    temp_v2 = temp_v3;
  }
  for (temp_v3 = param_1[0xb]; temp_v3 != 0; temp_v3 = *(int *)(temp_v3 + 0x40)) {
    temp_v5 = temp_v5 + 1;
    temp_v2 = temp_v4;
    if (temp_v5 >= 0x12) break;
    temp_v4 = temp_v4 + 0xc;
  }
  return romwright_piece_4_4(temp_v2,param_1[2]);
}
