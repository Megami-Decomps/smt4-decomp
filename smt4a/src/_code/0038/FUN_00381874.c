/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381874` (_code @ 0x381874, 0x678 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern unsigned char DAT_00544ac0; /* 0x544ac0 */
extern unsigned int *DAT_006471a0; /* 0x6471a0 */
extern unsigned int *DAT_006471b4; /* 0x6471b4 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001642e4. */
extern int FUN_00164af0(unsigned int);
extern int FUN_001656a0(unsigned int);
/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_001800b8. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_00221f20. */
/* Supplied declaration required: FUN_00222104. */
/* Supplied declaration required: FUN_002b3fd8. */
/* Supplied declaration required: FUN_002cf28c. */
/* Supplied declaration required: FUN_0037a7f4. */
extern unsigned int FUN_0037a834(unsigned int);


unsigned long long FUN_00381874(unsigned int *param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6 [100];
  
  if (param_1[8] != 0) {
    param_1[8] = param_1[8] - 1;
  }
  else if (param_1[0xb] != 0) {
    if (param_1[2] == 0) {
      temp_v4 = FUN_00164af0(5);
      if ((temp_v4 != 0) || (temp_v4 = FUN_00164af0(0x10), temp_v4 != 0)) {
        temp_v4 = *(int *)(param_1[0xc] + 0x3c);
        if (temp_v4 != 0) {
          temp_v1 = param_1[6];
          param_1[0xc] = temp_v4;
          temp_v5 = temp_v1 != 0;
          if (temp_v5) {
            temp_v1 = temp_v1 - 1;
          }
          param_1[5] = param_1[5] - 1;
          if (temp_v5) {
            param_1[6] = temp_v1;
          }
          if ((temp_v4 == param_1[0xb]) && (temp_v4 = *(int *)(param_1[0xb] + 0x3c), temp_v4 != 0)) {
            param_1[0xb] = temp_v4;
            param_1[6] = 1;
          }
        }
      }
      else {
        temp_v4 = FUN_00164af0(6);
        if ((temp_v4 != 0) || (temp_v4 = FUN_00164af0(0x1d), temp_v4 != 0)) {
          if (*(int *)(param_1[0xc] + 0x40) != 0) {
            temp_v4 = param_1[6];
            param_1[0xc] = *(int *)(param_1[0xc] + 0x40);
            param_1[6] = temp_v4 + 1;
            param_1[5] = param_1[5] + 1;
            if ((temp_v4 + 1 == 0x11) && (*(int *)(param_1[0xb] + 0x40) != 0)) {
              param_1[0xb] = *(int *)(param_1[0xb] + 0x40);
              param_1[6] = 0x10;
            }
          }
        }
        else {
          temp_v4 = FUN_00164af0(8);
          if ((temp_v4 != 0) || (temp_v4 = FUN_00164af0(0x1c), temp_v4 != 0)) {
            temp_v4 = 0;
            do {
              temp_v1 = *(int *)(param_1[0xc] + 0x3c);
              if (temp_v1 != 0) {
                temp_v3 = param_1[6];
                param_1[0xc] = temp_v1;
                temp_v5 = temp_v3 != 0;
                if (temp_v5) {
                  temp_v3 = temp_v3 - 1;
                }
                param_1[5] = param_1[5] - 1;
                if (temp_v5) {
                  param_1[6] = temp_v3;
                }
                if ((temp_v1 == param_1[0xb]) && (temp_v1 = *(int *)(param_1[0xb] + 0x3c), temp_v1 != 0))
                {
                  param_1[0xb] = temp_v1;
                  param_1[6] = 1;
                }
              }
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 0x12);
          }
          else {
            temp_v4 = FUN_00164af0(7);
            if ((temp_v4 != 0) || (temp_v4 = FUN_00164af0(0x18), temp_v4 != 0)) {
              temp_v4 = 0;
              do {
                if (*(int *)(param_1[0xc] + 0x40) != 0) {
                  temp_v1 = param_1[6];
                  param_1[0xc] = *(int *)(param_1[0xc] + 0x40);
                  param_1[6] = temp_v1 + 1;
                  param_1[5] = param_1[5] + 1;
                  if ((temp_v1 + 1 == 0x11) && (*(int *)(param_1[0xb] + 0x40) != 0)) {
                    param_1[0xb] = *(int *)(param_1[0xb] + 0x40);
                    param_1[6] = 0x10;
                  }
                }
                temp_v4 = temp_v4 + 1;
              } while (temp_v4 < 0x12);
            }
            else {
              temp_v4 = FUN_001656a0(1);
              if ((temp_v4 != 0) || (temp_v4 = FUN_001656a0(0x16), temp_v4 != 0)) {
                param_1[2] = 2;
              }
              else {
                temp_v4 = FUN_001656a0(0);
                if ((temp_v4 != 0) || (temp_v4 = FUN_001656a0(0x14), temp_v4 != 0)) {
                  param_1[2] = 1;
                }
                else {
                  if (param_1[0xd] != param_1[0xc]) {
                    if (param_1[0xe] != 0) {
                      FUN_001800b8();
                      param_1[0xe] = 0;
                    }
                    if (param_1[0x10] != 0) {
                      FUN_00222104();
                      param_1[0x10] = 0;
                    }
                    piVar2 = (int *)param_1[0xc];
                    temp_v4 = *piVar2;
                    if (temp_v4 != 1) {
                      if (temp_v4 != 2) {
                        if (temp_v4 != 8) {
                          param_1[7] = 0;
                        }
                        else {
                          temp_v0 = FUN_0037a834(piVar2[1] & 0xffff);
                          param_1[0xf] = temp_v0;
                          *(unsigned short *)(param_1 + 0x11) = 8;
                          param_1[7] = 1;
                        }
                      }
                      else {
                        temp_v4 = piVar2[2];
                        if (temp_v4 != 0) {
                          FUN_00221f20();
                          param_1[0x10] = temp_v4;
                        }
                        else {
                          if (piVar2 != (int *)0x0) {
                            if (*(int *)(param_1[0x12] + 4) != 0) {
                              FUN_00100388(temp_v6,"%s%s",*(int *)(param_1[0x12] + 4),piVar2 + 3)
                              ;
                            }
                            else {
                              FUN_00100388(temp_v6,&DAT_00544ac0,piVar2 + 3);
                            }
                          }
                          puVar4 = temp_v6;
                          if (param_1[0x10] != 0) {
                            FUN_00222104();
                            param_1[0x10] = 0;
                          }
                          FUN_001642e4(puVar4,0,1,0x80);
                          if (param_1[0x10] != 0) {
                            FUN_00222104();
                            param_1[0x10] = 0;
                          }
                          puVar5 = puVar4;
                          FUN_00221f20();
                          param_1[0x10] = (unsigned int)puVar5;
                          FUN_0019a5a0(puVar4);
                        }
                        *(unsigned short *)(param_1 + 0x11) = 2;
                        param_1[7] = 1;
                      }
                    }
                    else {
                      temp_v4 = piVar2[2];
                      if (temp_v4 != 0) {
                        if ((param_1[0xe] != 0) && (*(short *)(param_1 + 0x11) == 1)) {
                          FUN_001800b8();
                          param_1[0xe] = 0;
                        }
                        temp_v0 = FUN_0037a7f4(temp_v4);
                        param_1[0xe] = temp_v0;
                      }
                      else {
                        if (piVar2 != (int *)0x0) {
                          if (*(int *)(param_1[0x12] + 4) != 0) {
                            FUN_00100388(temp_v6,"%s%s",*(int *)(param_1[0x12] + 4),piVar2 + 3);
                          }
                          else {
                            FUN_00100388(temp_v6,&DAT_00544ac0,piVar2 + 3);
                          }
                        }
                        puVar4 = temp_v6;
                        if ((param_1[0xe] != 0) && (*(short *)(param_1 + 0x11) == 1)) {
                          FUN_001800b8();
                          param_1[0xe] = 0;
                        }
                        FUN_001642e4(puVar4,0,1,0x80);
                        if ((param_1[0xe] != 0) && (*(short *)(param_1 + 0x11) == 1)) {
                          FUN_001800b8();
                          param_1[0xe] = 0;
                        }
                        temp_v0 = FUN_0037a7f4(puVar4);
                        param_1[0xe] = temp_v0;
                        FUN_0019a5a0(puVar4);
                      }
                      *(unsigned short *)(param_1 + 0x11) = 1;
                      param_1[7] = 1;
                    }
                    param_1[0xd] = param_1[0xc];
                  }
                  if (param_1[7] != 0) {
                    puVar3 = (unsigned int *)0x10000;
                    FUN_00167ab4(0x10000,0x100,0,0x68,0x10,1);
                    puVar3[1] = 0xb;
                    puVar3[2] = (unsigned int)param_1;
                    puVar1 = puVar3;
                    if (DAT_006471a0 != (unsigned int *)0x0) {
                      *DAT_006471b4 = (unsigned int)puVar3;
                      puVar1 = DAT_006471a0;
                    }
                    DAT_006471a0 = puVar1;
                    DAT_006471b4 = puVar3;
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
    temp_v4 = FUN_001656a0(1);
    if ((temp_v4 != 0) || (temp_v4 = FUN_001656a0(0x16), temp_v4 != 0)) {
      param_1[2] = 2;
    }
  }
  FUN_002b3fd8(*param_1,param_1[1],0xcc,0xe8);
  if (param_1[7] != 0) {
    FUN_002cf28c(*param_1,param_1[1] + 0xea,0x80,0x80,param_1[9],0);
  }
  temp_v4 = 0;
  temp_v2 = param_1[1] + 2;
  temp_v1 = param_1[0x12];
  temp_v3 = temp_v2;
  if (*(int *)(param_1[0x12] + 4) != 0) {
    temp_v3 = param_1[1] + 0xe;
    temp_v1 = temp_v2;
  }
  for (temp_v2 = param_1[0xb]; temp_v2 != 0; temp_v2 = *(int *)(temp_v2 + 0x40)) {
    temp_v4 = temp_v4 + 1;
    temp_v1 = temp_v3;
    if (temp_v4 >= 0x12) break;
    temp_v3 = temp_v3 + 0xc;
  }
  return romwright_piece_4_4(temp_v1,param_1[2]);
}
