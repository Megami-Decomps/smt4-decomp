/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ce98c` (_code @ 0x1ce98c, 0x1540 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 12 slot(s), 45 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern unsigned char LAB_002c6dd8; /* 0x2c6dd8 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_0019dfbc. */
/* Supplied declaration required: FUN_001c897c. */
extern int FUN_002168b4(void);
/* Supplied declaration required: FUN_0026a96c. */
/* Supplied declaration required: FUN_0026a9fc. */
/* Supplied declaration required: FUN_0026b9a4. */
/* Supplied declaration required: FUN_0026b9ec. */
/* Supplied declaration required: FUN_0027e9e4. */
/* Supplied declaration required: FUN_0027ea24. */
/* Supplied declaration required: FUN_002956c0. */
/* Supplied declaration required: FUN_00295780. */
/* Supplied declaration required: FUN_00295798. */
extern int FUN_002958a0(void);
extern int FUN_002958bc(void);
extern int FUN_00295e74(void);
/* Supplied declaration required: FUN_00296a18. */
/* Supplied declaration required: FUN_00297128. */
/* Supplied declaration required: FUN_002971e4. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_0029ad98. */
/* Supplied declaration required: FUN_0029bfec. */
/* Supplied declaration required: FUN_0029c650. */
extern int FUN_0029c72c(void);
/* Supplied declaration required: FUN_0029cbec. */
/* Supplied declaration required: FUN_0029ccf8. */
/* Supplied declaration required: FUN_0029d080. */
/* Supplied declaration required: FUN_0029d8c0. */
extern int FUN_0029f0f4(int);
/* Supplied declaration required: FUN_0029f10c. */
extern int FUN_0029f248(int);
/* Supplied declaration required: FUN_0029f278. */
/* Supplied declaration required: FUN_0029f878. */
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002a0640. */
extern int FUN_002a0f88(void);
/* Supplied declaration required: FUN_002a7540. */
extern int FUN_002a89e4(int);
extern int FUN_002b66ec(void);
extern int FUN_002b6e44(void);
/* Supplied declaration required: FUN_002b7f0a. */
extern unsigned short FUN_002b88c4(unsigned int, int);
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b8ccc(void);
extern int FUN_002b9220(int, unsigned int);
/* Supplied declaration required: FUN_002bc200. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002bf9f0. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002c1830. */
/* Supplied declaration required: FUN_002eff18. */
/* Supplied declaration required: FUN_002f6734. */
/* Supplied declaration required: FUN_00334018. */
/* Supplied declaration required: FUN_0033428c. */


void FUN_001ce98c(int param_1)

{
/* irregular: 6 goto(s); 39 native warning(s); review required */
  short *psVar1;
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned short temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar9;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  short *psVar18;
  int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  int *piVar25;
  int temp_v21;
  int *piVar27;
  unsigned int *puVar28;
  unsigned int temp_v22;
  unsigned char temp_v23;
  unsigned char temp_v24;
  char temp_v25 [12];
  int temp_v26;
  int temp_v27;
  
  temp_v4 = param_1 + *(int *)(param_1 + 0xcf78) * 0x620;
  temp_v5 = FUN_002a89e4((int)*(char *)(temp_v4 + 0x3654));
  temp_v6 = FUN_002b66ec();
  FUN_002bf9f0(param_1 + 0x624);
  piVar9 = (int *)(param_1 + 0x3534);
  temp_v25[0] = '\0';
  temp_v15 = *piVar9;
  temp_v26 = 0;
  temp_v27 = 0;
  temp_v7 = param_1 + 0xd114;
  piVar25 = (int *)(param_1 + 0x3538);
  piVar27 = (int *)(param_1 + 0x3544);
  puVar28 = (unsigned int *)(param_1 + 0x3574);
  if (temp_v15 == 5) {
    if (*piVar27 == 1) {
      *(unsigned int *)(param_1 + 0xd2d0) = 0;
      *(unsigned int *)(param_1 + 0xd2d4) = 0;
      temp_v4 = -1;
      temp_v15 = 0;
      temp_v24 = 0;
      do {
        if (*(short *)(param_1 + temp_v15 * 2 + 0xd114) ==
            *(short *)(param_1 + *(int *)(param_1 + 0xd2c4) * 2 + 0xd132)) {
          temp_v9 = temp_v6 + temp_v15 * 2;
          if (*(short *)(temp_v9 + 0x34) != 0) {
            temp_v10 = param_1 + temp_v15 * 2;
            *(unsigned short *)(temp_v10 + 0xd124) = 0;
            temp_v2 = *(unsigned short *)(temp_v9 + 0x34);
            temp_v13 = (unsigned int)*(unsigned short *)(temp_v10 + 0xd114);
            *(unsigned short *)(temp_v10 + 0xd114) = temp_v2;
            *(unsigned char *)(param_1 + temp_v15 + 0xd2d0) = 1;
            temp_v4 = FUN_0026b9ec(temp_v5,temp_v2);
            if (temp_v4 != 0) {
              if (*(int *)(param_1 + 0xd2c8) < 0) {
                *(unsigned short *)(param_1 + *(int *)(param_1 + 0xd2c4) * 2 + 0xd132) = temp_v2;
              }
              else {
                temp_v16 = *(unsigned int *)(param_1 + 0xd2c4);
                if (0 < (int)temp_v16) {
                  temp_v14 = temp_v16 & 1;
                  if (temp_v14 == 1) {
                    temp_v4 = param_1 + temp_v16 * 2;
                    *(unsigned short *)(temp_v4 + 0xd134) = *(unsigned short *)(temp_v4 + 0xd132);
                  }
                  temp_v20 = (unsigned int)(temp_v14 == 1);
                  temp_v16 = *(unsigned int *)(param_1 + 0xd2c4);
                  if ((int)temp_v14 < (int)temp_v16) {
                    do {
                      temp_v4 = temp_v20 + 1;
                      temp_v9 = param_1 + (temp_v16 - temp_v20) * 2;
                      temp_v14 = temp_v14 + 2;
                      *(unsigned short *)(temp_v9 + 0xd134) = *(unsigned short *)(temp_v9 + 0xd132);
                      temp_v20 = temp_v20 + 2;
                      temp_v4 = param_1 + (*(int *)(param_1 + 0xd2c4) - temp_v4) * 2;
                      *(unsigned short *)(temp_v4 + 0xd134) = *(unsigned short *)(temp_v4 + 0xd132);
                      temp_v16 = *(unsigned int *)(param_1 + 0xd2c4);
                    } while ((int)temp_v14 < (int)temp_v16);
                  }
                }
                temp_v14 = 8 - temp_v16;
                if (0 < (int)temp_v14) {
                  temp_v4 = 0;
                  if ((int)temp_v16 >= 8) {
                    temp_v20 = 0;
                  }
                  else {
                    temp_v20 = temp_v14 & 1;
                    if (temp_v20 == 1) {
                      temp_v4 = 1;
                      *(unsigned short *)(param_1 + temp_v16 * 2 + 0xd134) = 0;
                    }
                  }
                  for (; (int)temp_v20 < (int)temp_v14; temp_v20 = temp_v20 + 2) {
                    temp_v9 = temp_v4 + 1;
                    *(unsigned short *)(param_1 + (temp_v16 + temp_v4) * 2 + 0xd134) = 0;
                    temp_v4 = temp_v4 + 2;
                    *(unsigned short *)(param_1 + (temp_v16 + temp_v9) * 2 + 0xd134) = 0;
                  }
                }
                *(unsigned short *)(param_1 + 0xd134) = temp_v2;
              }
              *(unsigned short *)(temp_v10 + 0xd124) = 1;
              temp_v4 = FUN_0026b9a4(temp_v13);
              if (temp_v4 == 0) {
                *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) + 1;
              }
              temp_v24 = 1;
              temp_v4 = temp_v15;
            }
            else {
              temp_v9 = FUN_0026b9ec(temp_v5,temp_v13);
              temp_v4 = temp_v15;
              if ((temp_v9 != 0) && (temp_v9 = FUN_0026b9a4(temp_v13), temp_v4 = temp_v15, temp_v9 != 0)) {
                *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) - 1;
              }
              temp_v24 = 1;
              temp_v15 = *(int *)(param_1 + 0xd2c4) - 1;
              *(int *)(param_1 + 0xd2c4) = temp_v15;
              *(unsigned short *)(param_1 + temp_v15 * 2 + 0xd134) = 0;
            }
          }
          else {
            temp_v9 = param_1 + temp_v15 * 2;
            *(unsigned short *)(temp_v9 + 0xd114) = 0;
            *(unsigned short *)(temp_v9 + 0xd124) = 0;
            *(unsigned char *)(param_1 + temp_v15 + 0xd2d0) = 1;
          }
          break;
        }
        temp_v15 = temp_v15 + 1;
      } while (temp_v15 < 8);
      FUN_002b7f0a(temp_v7,8,2,&LAB_002c6dd8);
      if (!temp_v24) {
        temp_v15 = *(int *)(param_1 + 0xd2c4) - 1;
        *(int *)(param_1 + 0xd2c4) = temp_v15;
        *(unsigned short *)(param_1 + temp_v15 * 2 + 0xd134) = 0;
      }
      FUN_001c897c(param_1,temp_v5,temp_v6,temp_v4);
      FUN_002b7f0a(temp_v7,8,2,&LAB_002c6dd8);
      *(unsigned int *)(param_1 + 0xd2c4) = 0;
      temp_v4 = 0;
      *(unsigned int *)(param_1 + 0xd2c8) = 0;
      do {
        temp_v6 = param_1 + temp_v4 * 2;
        if (*(short *)(temp_v6 + 0xd114) != 0) {
          temp_v7 = FUN_0026b9a4();
          if ((temp_v7 != 0) &&
             (temp_v7 = FUN_0026b9ec(temp_v5,*(unsigned short *)(temp_v6 + 0xd114)), temp_v7 != 0)) {
            *(int *)(param_1 + 0xd2c4) = *(int *)(param_1 + 0xd2c4) + 1;
            *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) + 1;
          }
          else {
            temp_v7 = FUN_0026b9a4(*(unsigned short *)(temp_v6 + 0xd114));
            if ((temp_v7 == 0) &&
               (temp_v6 = FUN_0026b9ec(temp_v5,*(unsigned short *)(temp_v6 + 0xd114)), temp_v6 != 0)) {
              *(int *)(param_1 + 0xd2c4) = *(int *)(param_1 + 0xd2c4) + 1;
            }
          }
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 8);
    }
    if (*piVar27 != 6) {
      return;
    }
    *piVar9 = 2;
    *(unsigned int *)(param_1 + 0xd2d0) = 0;
    *(unsigned int *)(param_1 + 0xd2d4) = 0;
    return;
  }
  if (temp_v15 >= 5) {
    if (temp_v15 == 99) {
      temp_v4 = FUN_002a0f88();
      if (temp_v4 == 0) {
        return;
      }
      FUN_002a7540(0);
      FUN_002971e4(*puVar28,0xf);
      *piVar9 = *piVar9 + 1;
      return;
    }
    if (temp_v15 < 99) {
      if (temp_v15 != 10) {
        if (temp_v15 != 0x14) {
          return;
        }
        temp_v4 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0x3568));
        if (temp_v4 != 2) {
          return;
        }
        *piVar9 = 1;
        temp_v11 = 0xe1;
        FUN_002b8b78(temp_v11);
        return;
      }
      temp_v24 = 1;
      temp_v5 = 0;
      do {
        temp_v9 = param_1 + temp_v5 * 0x8c;
        temp_v15 = FUN_002bf9f0(temp_v9 + 0x7c8);
        if (temp_v15 == 0) {
          temp_v24 = 0;
        }
        temp_v15 = FUN_002bf9f0(temp_v9 + 0xc28);
        if (temp_v15 == 0) {
          temp_v24 = 0;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 8);
      temp_v5 = FUN_002b6e44();
      if ((temp_v5 == 0) && (temp_v5 = FUN_00295e74(), temp_v5 == 0)) {
        if (!temp_v24) {
          return;
        }
        temp_v4 = 0;
        do {
          FUN_002bf030(param_1 + temp_v4 * 0x8c + 0x7c8,0);
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x10);
        *piVar9 = 2;
        FUN_002971e4(*puVar28,0xe);
        return;
      }
      temp_v5 = temp_v26;
    }
    else {
      if (temp_v15 == 100) {
        temp_v4 = FUN_0019dfbc(*puVar28);
        if (temp_v4 != 2) {
          return;
        }
        temp_v4 = FUN_00297674();
        if (temp_v4 != 0) {
          FUN_002971e4(*puVar28,0xe);
          if (*(int *)(param_1 + 0xd2c4) - *(int *)(param_1 + 0xd2c8) < 1) {
            temp_v11 = 0xe1;
          }
          else {
            temp_v11 = 0x6b;
          }
          FUN_002b8b78(temp_v11);
          *piVar9 = *piVar25;
        }
        else {
          FUN_0029f10c(0,0x323232ff);
          FUN_002bdac0(param_1 + 0xac,1,0);
          *piVar9 = *piVar9 + 1;
          if (*piVar25 == 3) {
            *(unsigned short *)(param_1 + *(int *)(param_1 + 0xd2c4) * 2 + 0xd134) = 0;
            *(int *)(param_1 + 0xd2c4) = *(int *)(param_1 + 0xd2c4) - 1;
          }
          FUN_002eff18();
          FUN_0026a96c();
        }
        FUN_002a7540(1);
        return;
      }
      if (temp_v15 != 0x65) {
        return;
      }
      temp_v5 = FUN_002a0f88();
      if (temp_v5 == 0) {
        return;
      }
      temp_v5 = FUN_002bf9f0(param_1 + 0xac);
      if (temp_v5 == 0) {
        return;
      }
      temp_v5 = FUN_002168b4();
    }
    goto joined_r0x001ceb14;
  }
  temp_v8 = param_1 + 0xd134;
  temp_v9 = param_1 + 0xd04c;
  temp_v10 = param_1 + 0xd0b0;
  switch(temp_v15) {
  case 0:
    *(unsigned char *)(temp_v5 + 0x4b) = 1;
    FUN_002bdac0(param_1 + 0xac,4,0);
    temp_v11 = *(unsigned int *)(temp_v6 + 0x34);
    temp_v17 = *(unsigned int *)(temp_v6 + 0x38);
    temp_v19 = *(unsigned int *)(temp_v6 + 0x3c);
    temp_v22 = *(unsigned int *)(temp_v6 + 0x40);
    *(unsigned int *)(param_1 + 0xd134) = 0;
    *(unsigned int *)(param_1 + 0xd138) = 0;
    *(unsigned int *)(param_1 + 0xd13c) = 0;
    *(unsigned int *)(param_1 + 0xd140) = 0;
    *(unsigned int *)(param_1 + 0xd124) = 0;
    *(unsigned int *)(param_1 + 0xd128) = 0;
    *(unsigned int *)(param_1 + 0xd12c) = 0;
    *(unsigned int *)(param_1 + 0xd130) = 0;
    *(unsigned int *)(param_1 + 0xd2c4) = 0;
    *(unsigned int *)(param_1 + 0xd2c8) = 0;
    *(unsigned int *)(param_1 + 0xd114) = temp_v11;
    *(unsigned int *)(param_1 + 0xd118) = temp_v17;
    *(unsigned int *)(param_1 + 0xd11c) = temp_v19;
    *(unsigned int *)(param_1 + 0xd120) = temp_v22;
    temp_v4 = FUN_002958bc();
    if (temp_v4 == 0) {
      FUN_0029ccf8();
    }
    FUN_0029bfec();
    *piVar9 = *piVar9 + 1;
    FUN_002f6734(*(unsigned short *)(temp_v5 + 0x46));
    return;
  case 1:
    temp_v15 = FUN_002b9220(param_1 + 0xac,0);
    if (temp_v15 == 0) {
      return;
    }
    temp_v15 = FUN_0029c72c();
    if (temp_v15 == 0) {
      return;
    }
    temp_v15 = FUN_002958a0();
    if (temp_v15 == 0) {
      FUN_00295798(*(unsigned short *)(temp_v5 + 0x46),1);
      FUN_00295780(1);
    }
    temp_v15 = FUN_002c0ba8(0x406);
    if (temp_v15 == 0) {
      FUN_002971e4(*(unsigned int *)(param_1 + 0x3568),3);
      *piVar9 = 0x14;
      temp_v11 = 0x9e;
      FUN_002b8b78(temp_v11);
      return;
    }
    temp_v18 = 0;
    temp_v15 = temp_v18;
    do {
      temp_v21 = temp_v5 + temp_v18 * 2;
      if (*(short *)(temp_v21 + 0x34) != 0) {
        temp_v12 = temp_v8;
        FUN_0029d080(temp_v8,8);
        if ((temp_v12 == 0) &&
           (temp_v12 = temp_v7, FUN_0029d080(temp_v7,8,*(unsigned short *)(temp_v21 + 0x34)), temp_v12 != 0)) {
          *(unsigned short *)(param_1 + *(int *)(param_1 + 0xd2c4) * 2 + 0xd134) =
               *(unsigned short *)(temp_v21 + 0x34);
          *(int *)(param_1 + 0xd2c4) = *(int *)(param_1 + 0xd2c4) + 1;
          *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) + 1;
        }
        temp_v15 = temp_v15 + 1;
      }
      temp_v18 = temp_v18 + 1;
    } while (temp_v18 < 8);
    temp_v11 = FUN_0029ad98();
    FUN_0029fae8(temp_v9,temp_v11,temp_v11,1,1,1);
    FUN_0029fae8(temp_v10,temp_v15,8,1,1,1);
    temp_v15 = FUN_0029f248(temp_v10);
    FUN_0029cbec(*(unsigned short *)(temp_v5 + temp_v15 * 2 + 0x34));
    temp_v8 = 0;
    temp_v15 = FUN_0029f0f4(temp_v9);
    if (0 < temp_v15) {
      do {
        temp_v2 = FUN_002b88c4(0x28,temp_v8 + 0xe4);
        temp_v15 = temp_v8 * 2;
        temp_v8 = temp_v8 + 1;
        *(unsigned short *)(param_1 + temp_v15 + 0x357e) = temp_v2;
        *(short *)(param_1 + 0x357c) = *(short *)(param_1 + 0x357c) + 1;
        temp_v15 = FUN_0029f0f4(temp_v9);
      } while (temp_v8 < temp_v15);
    }
    temp_v9 = 0;
    temp_v15 = FUN_0029f0f4(temp_v10);
    if (0 < temp_v15) {
      do {
        temp_v2 = FUN_002b88c4(0x28,temp_v9 + 0xec);
        temp_v15 = temp_v9 * 2;
        temp_v9 = temp_v9 + 1;
        *(unsigned short *)(param_1 + temp_v15 + 0x358e) = temp_v2;
        *(short *)(param_1 + 0x357c) = *(short *)(param_1 + 0x357c) + 1;
        temp_v15 = FUN_0029f0f4(temp_v10);
      } while (temp_v9 < temp_v15);
    }
    if (*(int *)(param_1 + 0xd2c4) < 1) {
      *piVar9 = *piVar9 + 1;
      FUN_002971e4(*puVar28,0xe);
      return;
    }
    temp_v15 = 0;
    do {
      temp_v9 = param_1 + temp_v15 * 2;
      temp_v10 = 0;
      do {
        temp_v8 = param_1 + temp_v10 * 2;
        if (*(short *)(temp_v8 + 0xd114) == *(short *)(temp_v9 + 0xd134)) {
          FUN_002bf030(param_1 + temp_v10 * 0x8c + 0x7c8,5);
          *(short *)(temp_v8 + 0xd124) = *(short *)(temp_v8 + 0xd124) + 1;
        }
        temp_v10 = temp_v10 + 1;
      } while (temp_v10 < 8);
      temp_v10 = 0;
      do {
        if (*(short *)(temp_v5 + temp_v10 * 2 + 0x34) == *(short *)(temp_v9 + 0xd134)) {
          FUN_002bf030(param_1 + temp_v10 * 0x8c + 0xc28,5);
        }
        temp_v10 = temp_v10 + 1;
      } while (temp_v10 < 8);
      temp_v15 = temp_v15 + 1;
    } while (temp_v15 < *(int *)(param_1 + 0xd2c4));
    *piVar9 = 10;
    FUN_0027ea24(*(unsigned int *)(param_1 + 0x356c),0xca);
    FUN_0027e9e4(1);
  default:
    temp_v5 = temp_v26;
joined_r0x001ceb14:
    if (temp_v5 != 0) {
      temp_v5 = 0;
      if (temp_v5 < *(int *)(param_1 + 0xd2c4)) {
        do {
          temp_v13 = FUN_0029ad98();
          temp_v15 = param_1 + temp_v5 * 2;
          temp_v9 = FUN_0026b9a4(*(unsigned short *)(temp_v15 + 0xd134));
          if (temp_v9 == 0) {
            temp_v9 = 0;
            if ((int)temp_v13 < 1) {
              temp_v16 = 0;
            }
            else {
              temp_v16 = temp_v13 & 1;
              if (temp_v16 != 0) {
                do {
                  if (*(short *)(param_1 + temp_v9 * 2 + 0xd114) == *(short *)(temp_v15 + 0xd134))
                  goto LAB_001cfcfc;
                  temp_v9 = temp_v9 + 1;
                } while (temp_v9 < (int)temp_v16);
              }
            }
            if ((int)temp_v16 < (int)temp_v13) {
              temp_v14 = (unsigned int)*(unsigned short *)(temp_v15 + 0xd134);
              do {
                temp_v10 = param_1 + temp_v16 * 2;
                temp_v20 = (unsigned int)*(unsigned short *)(temp_v10 + 0xd114);
                temp_v9 = temp_v20 - temp_v14;
                temp_v24 = temp_v20 != temp_v14;
                temp_v1 = temp_v10 + 0xd100;
                if (temp_v24) {
                  temp_v20 = (unsigned int)*(unsigned short *)(temp_v10 + 0xd116);
                  temp_v9 = temp_v20 - temp_v14;
                  temp_v1 = temp_v20;
                }
                temp_v23 = SBORROW4(temp_v20,temp_v14);
                if (temp_v24 && temp_v1 != temp_v14) {
                  temp_v16 = temp_v16 + 2;
                  temp_v23 = SBORROW4(temp_v13,temp_v16);
                  temp_v9 = temp_v13 - temp_v16;
                }
              } while (((temp_v24 && temp_v1 != temp_v14) && temp_v13 != temp_v16) && temp_v9 < 0 == temp_v23);
            }
          }
LAB_001cfcfc:
          temp_v9 = 0;
          if (0 < (int)temp_v13) {
            do {
              temp_v3 = *(short *)(temp_v6 + temp_v9 * 2 + 0x34);
              temp_v24 = 1;
              if (temp_v3 != *(short *)(temp_v15 + 0xd134) && temp_v3 != 0) {
                temp_v16 = *(unsigned int *)(param_1 + 0xd2c4);
                temp_v24 = 0;
                if (0 < (int)temp_v16) {
                  psVar18 = (short *)(param_1 + 0xd132);
                  if (((temp_v16 & 1) != 0) &&
                     (psVar18 = (short *)(param_1 + 0xd134), temp_v3 == *psVar18)) {
                    temp_v24 = 1;
                  }
                  for (temp_v10 = (int)temp_v16 >> 1; temp_v10 != 0; temp_v10 = temp_v10 - 1) {
                    psVar1 = psVar18 + 1;
                    psVar18 = psVar18 + 2;
                    if (temp_v3 == *psVar1) {
                      temp_v24 = 1;
                    }
                    if (temp_v3 == *psVar18) {
                      temp_v24 = 1;
                    }
                  }
                }
              }
              temp_v10 = temp_v7;
              FUN_0029d080(temp_v7,temp_v13);
              if (temp_v10 == 0 && !temp_v24) {
                FUN_00334018(*(unsigned short *)(temp_v6 + temp_v9 * 2 + 0x34));
                break;
              }
              temp_v9 = temp_v9 + 1;
            } while (temp_v9 < (int)temp_v13);
          }
          FUN_0033428c(*(unsigned short *)(temp_v15 + 0xd134));
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < *(int *)(param_1 + 0xd2c4));
      }
      temp_v5 = 0;
      do {
        temp_v7 = temp_v5 + 1;
        if (temp_v7 < 8) {
          do {
            if (*(short *)(param_1 + temp_v5 * 2 + 0xd114) == *(short *)(temp_v6 + temp_v7 * 2 + 0x34)) {
              temp_v15 = temp_v6 + temp_v7 * 2;
              temp_v9 = temp_v6 + temp_v5 * 2;
              temp_v2 = *(unsigned short *)(temp_v9 + 0x34);
              *(unsigned short *)(temp_v9 + 0x34) = *(unsigned short *)(temp_v15 + 0x34);
              *(unsigned short *)(temp_v15 + 0x34) = temp_v2;
              temp_v0 = *(unsigned char *)(temp_v6 + temp_v5 + 0x44);
              *(unsigned char *)(temp_v6 + temp_v5 + 0x44) = *(unsigned char *)(temp_v7 + temp_v6 + 0x44);
              *(unsigned char *)(temp_v7 + temp_v6 + 0x44) = temp_v0;
              break;
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 8);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 7);
      if (*(int *)(temp_v4 + 0x3c6c) != 1) {
        FUN_00296a18(param_1,0xc);
      }
      else if (*(char *)(temp_v4 + 0x3c72) != '\0') {
        FUN_00296a18(param_1,0x10);
      }
      else {
        FUN_002956c0(param_1);
      }
      if (*(int *)(param_1 + 0x352c) != 0x14) {
        FUN_0029c650(0);
        FUN_002a0640(0x100003c,0);
        return;
      }
    }
    break;
  case 2:
    FUN_0019dfbc(*puVar28);
    if (*(int *)(param_1 + 0xd2c4) - *(int *)(param_1 + 0xd2c8) >= 1) {
      temp_v4 = FUN_002b8ccc();
      if (temp_v4 == 0xe1) {
        temp_v11 = 0x6b;
        FUN_002b8b78(temp_v11);
      }
    }
    else {
      temp_v4 = FUN_002b8ccc();
      if (temp_v4 == 0x6b) {
        temp_v11 = 0xe1;
        FUN_002b8b78(temp_v11);
      }
    }
    temp_v6 = FUN_0029f248(temp_v10);
    temp_v4 = temp_v10;
    FUN_0029f878(temp_v10,0,param_1 + 0x358e,0xffffffff,0xffffffff,0xffffffff,temp_v25,0,1);
    if ((temp_v4 == 0) && (temp_v4 = temp_v10, FUN_0029f278(temp_v10,0), temp_v4 == 0)) {
      temp_v15 = FUN_002c1830(0,1);
      temp_v10 = 0;
      temp_v4 = temp_v10;
      if (!(temp_v15 == 0 && temp_v25[0] == '\0')) {
        do {
          temp_v13 = (unsigned int)*(unsigned short *)(temp_v5 + temp_v10 * 2 + 0x34);
          if ((temp_v13 != 0) && (FUN_0026a9fc(), temp_v13 != 0)) {
            temp_v4 = temp_v4 + 1;
          }
          temp_v10 = temp_v10 + 1;
        } while (temp_v10 < 8);
        if (temp_v4 <= *(int *)(param_1 + 0xd2c4)) {
          return;
        }
        temp_v5 = temp_v5 + temp_v6 * 2;
        temp_v13 = (unsigned int)*(unsigned short *)(temp_v5 + 0x34);
        FUN_0026a9fc();
        if (temp_v13 == 0) {
          return;
        }
        FUN_0029d080(temp_v8,*(unsigned int *)(param_1 + 0xd2c4),*(unsigned short *)(temp_v5 + 0x34));
        if (temp_v8 != 0) {
          return;
        }
        *(unsigned short *)(param_1 + *(int *)(param_1 + 0xd2c4) * 2 + 0xd134) =
             *(unsigned short *)(temp_v5 + 0x34);
        *(int *)(param_1 + 0xd2c4) = *(int *)(param_1 + 0xd2c4) + 1;
        FUN_0029d080(temp_v7,8,*(unsigned short *)(temp_v5 + 0x34));
        if (temp_v7 != 0) {
          FUN_002bf030(param_1 + temp_v6 * 0x8c + 0xc28,5);
          temp_v4 = 0;
          do {
            temp_v6 = param_1 + temp_v4 * 2;
            if (*(short *)(temp_v6 + 0xd114) == *(short *)(temp_v5 + 0x34)) {
              FUN_002bf030(param_1 + temp_v4 * 0x8c + 0x7c8,5);
              *(unsigned short *)(temp_v6 + 0xd124) = 1;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 8);
          *piVar9 = 10;
        }
        else {
          temp_v4 = FUN_0029f248(temp_v9);
          FUN_0029cbec(*(unsigned short *)(param_1 + temp_v4 * 2 + 0xd114));
          *piVar9 = *piVar9 + 1;
        }
        temp_v4 = FUN_0029ad98();
        temp_v5 = 0;
        if (temp_v5 < temp_v4) {
          do {
            if (*(short *)(param_1 + temp_v5 * 2 + 0xd114) == 0) {
              FUN_0029d8c0(temp_v9);
              FUN_0029cbec(0);
              break;
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < temp_v4);
        }
        temp_v11 = 0x100016d;
      }
      else {
        temp_v4 = FUN_002c1830(10,1);
        if (temp_v4 != 0) {
LAB_001cf18c:
          FUN_002bc200(0x100016e);
          FUN_00297128();
          FUN_002b8b78(0x9a);
          *piVar25 = *piVar9;
          *piVar9 = 99;
          return;
        }
        temp_v4 = FUN_002c1830(9,1);
        if (temp_v4 != 0) {
          return;
        }
        temp_v4 = FUN_002c1830(1);
        if (temp_v4 == 0) {
          return;
        }
        if (*(int *)(param_1 + 0xd2c4) - *(int *)(param_1 + 0xd2c8) < 1) {
          return;
        }
        *piVar27 = 0;
        *piVar9 = 5;
        temp_v11 = 0x100016e;
      }
      FUN_002bc200(temp_v11);
      return;
    }
    temp_v4 = FUN_0029f248(temp_v10);
    if (temp_v4 != temp_v6) {
      FUN_002bc200(0x100016c);
    }
    temp_v4 = FUN_0029f248(temp_v10);
    FUN_0029cbec(*(unsigned short *)(temp_v5 + temp_v4 * 2 + 0x34));
    return;
  case 3:
    FUN_0019dfbc(*puVar28);
    if (*(int *)(param_1 + 0xd2c4) - *(int *)(param_1 + 0xd2c8) >= 1) {
      temp_v4 = FUN_002b8ccc();
      if (temp_v4 == 0xe1) {
        temp_v11 = 0x6b;
        FUN_002b8b78(temp_v11);
      }
    }
    else {
      temp_v4 = FUN_002b8ccc();
      if (temp_v4 == 0x6b) {
        temp_v11 = 0xe1;
        FUN_002b8b78(temp_v11);
      }
    }
    temp_v6 = FUN_0029f248(temp_v9);
    temp_v4 = temp_v9;
    FUN_0029f878(temp_v9,0,param_1 + 0x357e,0xffffffff,0xffffffff,0xffffffff,temp_v25,0,1);
    if ((temp_v4 != 0) || (temp_v4 = temp_v9, FUN_0029f278(temp_v9,0), temp_v4 != 0)) {
      temp_v4 = FUN_0029f248(temp_v9);
      if (temp_v4 != temp_v6) {
        FUN_002bc200(0x100016c);
      }
      temp_v4 = FUN_0029f248(temp_v9);
      FUN_0029cbec(*(unsigned short *)(param_1 + temp_v4 * 2 + 0xd114));
    }
    else {
      temp_v4 = FUN_002c1830(0,1);
      if (!(temp_v4 == 0 && temp_v25[0] == '\0')) {
        *piVar27 = 0;
        *piVar9 = *piVar9 + 1;
        temp_v11 = 0x100016d;
        FUN_002bc200(temp_v11);
      }
      else {
        temp_v4 = FUN_002c1830(10,1);
        if (temp_v4 != 0) goto LAB_001cf18c;
        temp_v4 = FUN_002c1830(9,1);
        if ((temp_v4 == 0) && (temp_v4 = FUN_002c1830(1), temp_v4 != 0)) {
          temp_v4 = *(int *)(param_1 + 0xd2c4) - 1;
          *(int *)(param_1 + 0xd2c4) = temp_v4;
          *(unsigned short *)(param_1 + temp_v4 * 2 + 0xd134) = 0;
          *piVar9 = 2;
          temp_v11 = 0x100016e;
          FUN_002bc200(temp_v11);
        }
      }
    }
    temp_v4 = *piVar9;
    if (temp_v4 == 2) {
      temp_v4 = FUN_0029f248(temp_v10);
      FUN_0029cbec(*(unsigned short *)(temp_v5 + temp_v4 * 2 + 0x34));
      return;
    }
    break;
  case 4:
    temp_v4 = FUN_0029f248(temp_v9);
    if (*piVar27 == 1) {
      temp_v15 = param_1 + temp_v4 * 2;
      if (*(short *)(temp_v15 + 0xd114) != 0) {
        temp_v18 = *(int *)(param_1 + 0xd2c4);
        temp_v3 = *(short *)(param_1 + temp_v18 * 2 + 0xd132);
        temp_v9 = 0;
        if (temp_v9 < temp_v18) {
          do {
            if (*(short *)(param_1 + temp_v9 * 2 + 0xd134) == *(short *)(temp_v15 + 0xd114)) {
              *(int *)(param_1 + 0xd2c4) = temp_v18 - 1;
              *(unsigned short *)(param_1 + temp_v9 * 2 + 0xd134) = 0;
              *(unsigned short *)(temp_v15 + 0xd124) = 0;
              temp_v9 = FUN_0026b9a4(*(unsigned short *)(temp_v15 + 0xd114));
              if (temp_v9 != 0) {
                temp_v9 = FUN_0029f248(temp_v10);
                temp_v9 = FUN_0026b9a4(*(unsigned short *)(temp_v5 + temp_v9 * 2 + 0x34));
                if (temp_v9 == 0) {
                  *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) - 1;
                }
                else {
                  temp_v27 = 1;
                }
              }
              break;
            }
            temp_v9 = temp_v9 + 1;
          } while (temp_v9 < temp_v18);
        }
        FUN_002b7f0a(temp_v8,8,2,&LAB_002c6dd8);
        *(short *)(temp_v15 + 0xd114) = temp_v3;
        *(unsigned short *)(temp_v15 + 0xd124) = 0;
        temp_v9 = FUN_0029ad98();
        if (temp_v27 != 0) {
          temp_v8 = 0;
          if (0 < temp_v9) {
LAB_001cf4dc:
            if (*(short *)(temp_v6 + temp_v8 * 2 + 0x34) != temp_v3) goto LAB_001cf538;
            temp_v3 = 1;
            *(short *)(temp_v15 + 0xd124) = temp_v3;
          }
        }
        else {
          temp_v8 = 0;
          if (temp_v8 < temp_v9) {
            do {
              if (*(short *)(temp_v6 + temp_v8 * 2 + 0x34) == temp_v3) {
                *(unsigned short *)(temp_v15 + 0xd124) = 1;
                *(int *)(param_1 + 0xd2c8) = *(int *)(param_1 + 0xd2c8) + 1;
                break;
              }
              temp_v8 = temp_v8 + 1;
            } while (temp_v8 < temp_v9);
          }
        }
      }
      else {
        temp_v8 = 0;
        *(unsigned short *)(temp_v15 + 0xd114) =
             *(unsigned short *)(param_1 + *(int *)(param_1 + 0xd2c4) * 2 + 0xd132);
        *(unsigned short *)(temp_v15 + 0xd124) = 0;
        temp_v9 = FUN_0029ad98();
        if (0 < temp_v9) {
          do {
            if (*(short *)(temp_v6 + temp_v8 * 2 + 0x34) == *(short *)(temp_v15 + 0xd114)) {
              temp_v3 = *(short *)(temp_v15 + 0xd124) + 1;
              *(short *)(temp_v15 + 0xd124) = temp_v3;
              break;
            }
            temp_v8 = temp_v8 + 1;
            temp_v9 = FUN_0029ad98();
          } while (temp_v8 < temp_v9);
        }
      }
LAB_001cf5b0:
      FUN_002bf030(param_1 + 0x6b0,6);
      FUN_002bf030(param_1 + temp_v4 * 0x8c + 0x7c8,5);
    }
    if (*piVar27 >= 2) {
      if (*piVar27 >= 6) {
        FUN_002bf9f0(param_1 + temp_v4 * 0x8c + 0x7c8);
      }
      temp_v6 = FUN_002bf9f0(param_1 + 0x6b0);
      if ((temp_v6 != 0) && (param_1 = param_1 + temp_v4 * 0x8c, *(char *)(param_1 + 0x852) != '\0')) {
        FUN_002bf030(param_1 + 0x7c8,0);
        FUN_002b7f0a(temp_v7,8,2,&LAB_002c6dd8);
        *piVar9 = 2;
        temp_v4 = FUN_0029f248(temp_v10);
        FUN_0029cbec(*(unsigned short *)(temp_v5 + temp_v4 * 2 + 0x34));
        return;
      }
    }
    temp_v4 = *piVar9;
    if (temp_v4 == 2) {
      temp_v4 = FUN_0029f248(temp_v10);
      FUN_0029cbec(*(unsigned short *)(temp_v5 + temp_v4 * 2 + 0x34));
      return;
    }
  }
  return;
LAB_001cf538:
  temp_v8 = temp_v8 + 1;
  if (temp_v9 <= temp_v8) goto LAB_001cf5b0;
  goto LAB_001cf4dc;
}
