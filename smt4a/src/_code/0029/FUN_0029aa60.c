/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029aa60` (_code @ 0x29aa60, 0x2c90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
} param_1_stack;

extern int DAT_005806a4; /* 0x5806a4 */
extern int DAT_0058103c; /* 0x58103c */
extern int DAT_00581040; /* 0x581040 */
extern int DAT_00581288; /* 0x581288 */
extern signed char DAT_005f1614; /* 0x5f1614 */
extern signed char DAT_005f1859; /* 0x5f1859 */
extern unsigned char DAT_005f185a; /* 0x5f185a */
extern signed char DAT_005f185b; /* 0x5f185b */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0018a924. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: FUN_00203d04. */
/* Supplied declaration required: FUN_0025cb1c. */
extern int FUN_0029d6f0(void);
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_002b5cd4. */
/* Supplied declaration required: FUN_002d2288. */
/* Supplied declaration required: FUN_002d23f0. */
/* Supplied declaration required: FUN_00329dd4. */
/* Supplied declaration required: FUN_0032a904. */
/* Supplied declaration required: FUN_00352bc4. */
extern int FUN_0036d984(float *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_003a3e60. */
/* Supplied declaration required: FUN_003d4ed8. */
extern short aeabi_idivmod(int, int);


/* WARNING: Type propagation algorithm not settling */

void FUN_0029aa60(int param_1)

{
/* irregular: 3 goto(s); irregular input(s): in_fpscr; 17 native warning(s); review required */
  unsigned int temp_v0;
  short temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  int temp_v5;
  short temp_v6;
  short temp_v7;
  int *piVar9;
  int temp_v8;
  int temp_v9;
  unsigned char *puVar12;
  unsigned int temp_v10;
  char *pcVar14;
  int temp_v11;
  float *pfVar16;
  int temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  int temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22;
  unsigned long long temp_v23;
  unsigned long long temp_v24;
  unsigned long long temp_v25;
  float temp_v26 [2];
  char acStack_f8 [20];
  float temp_v27 [4];
  int temp_v28;
  float temp_v29;
  unsigned int uStack_cc;
  unsigned int temp_v30;
  float temp_v31 [3];
  int temp_v32;
  int temp_v33;
  
  temp_v5 = DAT_0058103c;
  temp_v3 = 0;
  temp_v32 = 0;
  temp_v30 = 0;
  puVar12 = (unsigned char *)(DAT_0058103c + 0xcd10);
  piVar9 = (int *)(DAT_0058103c + 0xcd14);
  if (DAT_005f1614 != '\0') {
    *puVar12 = 1;
    *piVar9 = 2;
  }
  else {
    temp_v8 = *piVar9;
    if (temp_v8 >= 1) {
      temp_v9 = temp_v8 - 1;
    }
    else {
      temp_v9 = 0;
    }
    *piVar9 = temp_v9;
    if (temp_v8 >= 1) {
      *puVar12 = 1;
    }
    else {
      *puVar12 = (char)temp_v9;
    }
  }
  temp_v33 = param_1;
  temp_v8 = FUN_0018719c(0xc);
  if ((temp_v8 != 0) && (temp_v8 = FUN_0018719c(0x10), temp_v8 == 0)) {
    DAT_005f1859 = '\0';
    DAT_005f185a = 0;
    *(unsigned char *)(temp_v5 + 0xcd10) = 1;
  }
  temp_v8 = DAT_0058103c;
  temp_v14 = *(int *)(DAT_005806a4 + 0x5c);
  FUN_002b5cb4();
  temp_v9 = DAT_0058103c;
  temp_v23 = 0x4248000000000000;
  temp_v24 = 0x3f800000;
  if (temp_v14 >= 0x3f800000) {
    temp_v14 = 0;
    do {
      temp_v11 = temp_v9 + temp_v14 * 0x194;
      if (*(char *)(temp_v11 + 0x1dc) != '\0') {
        temp_v15 = *(unsigned int *)(DAT_00581288 + 0x1c);
        FUN_002b5cb4();
        *(unsigned int *)(temp_v11 + 0x224) = temp_v15;
      }
      temp_v11 = DAT_0058103c;
      temp_v18 = (float)((unsigned long long)temp_v23 >> 0x20);
      temp_v14 = temp_v14 + 1;
    } while (temp_v14 < 0x80);
    temp_v9 = 0;
    do {
      temp_v14 = temp_v11 + temp_v9 * 0x194;
      temp_v10 = (unsigned int)*(unsigned char *)(temp_v14 + 0x1dc);
      if (temp_v10 != 0) {
        *(unsigned char *)(temp_v14 + 0x228) = 0;
        acStack_f8[temp_v9] = '\0';
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 0x80);
    temp_v9 = 0;
    do {
      temp_v14 = temp_v11 + temp_v9 * 0x194;
      pcVar14 = (char *)(temp_v14 + 0x1dc);
      temp_v13 = *pcVar14 != '\0';
      if (temp_v13) {
        temp_v10 = *(unsigned int *)(temp_v14 + 0x1f8);
      }
      if ((temp_v13 && 0 < (int)temp_v10) && (acStack_f8[temp_v9] == '\0')) {
        acStack_f8[temp_v9] = '\x01';
        temp_v14 = temp_v9;
        while (temp_v4 = temp_v14, temp_v14 = temp_v4 + 1, temp_v14 < 0x80) {
          temp_v12 = temp_v11 + temp_v14 * 0x194;
          if ((*(char *)(temp_v12 + 0x1dc) != '\0' && 0 < (int)temp_v10) &&
             (*(int *)(pcVar14 + 0x1c) == *(int *)(temp_v12 + 0x1f8))) {
            acStack_f8[temp_v4 + 1] = '\x01';
            temp_v16 = *(float *)(pcVar14 + 0x48);
            temp_v17 = *(float *)(temp_v12 + 0x224);
            temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 < temp_v17) << 0x1f) |
                    ((unsigned int)(temp_v16 == temp_v17) << 0x1e);
            in_fpscr = temp_v0 | ((unsigned int)((temp_v16 != temp_v16) || (temp_v17 != temp_v17)) << 0x1c);
            temp_v2 = (unsigned char)(temp_v0 >> 0x18);
            if (!(unsigned char)((temp_v2 >> 6) & 1) && temp_v2 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              pcVar14 = (char *)(temp_v12 + 0x1dc);
            }
          }
        }
        pcVar14[0x4c] = '\x01';
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 0x80);
    temp_v19 = *(float *)(DAT_005806a4 + 0x5c) - *(float *)(DAT_005806a4 + 0x50);
    temp_v17 = *(float *)(DAT_005806a4 + 0x60) - *(float *)(DAT_005806a4 + 0x54);
    temp_v16 = *(float *)(DAT_005806a4 + 100) - *(float *)(DAT_005806a4 + 0x58);
    temp_v21 = (float)temp_v24 / romwright_sqrt_4(temp_v19 * temp_v19 + temp_v17 * temp_v17 + temp_v16 * temp_v16);
    temp_v19 = temp_v19 * temp_v21;
    temp_v23 = CONCAT44(temp_v17 * temp_v21,temp_v16 * temp_v21);
    temp_v10 = *(unsigned int *)(DAT_005806a4 + 0x50);
    FUN_00352bc4();
    temp_v25 = (unsigned long long)temp_v10;
    temp_v16 = 10000.0f;
    temp_v9 = 0;
    do {
      temp_v14 = temp_v8 + temp_v9 * 0x194;
      if (*(char *)(temp_v14 + 0x1dc) != '\0') {
        temp_v21 = *(float *)(temp_v14 + 0x224);
        temp_v17 = temp_v16;
        if (*(int *)(temp_v14 + 0x1f0) < 0x2d) {
          temp_v17 = *(float *)(temp_v14 + 0x218);
        }
        temp_v11 = *(int *)(temp_v14 + 0x220);
        temp_v10 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v21 < temp_v17) << 0x1f) |
                 ((unsigned int)(temp_v21 == temp_v17) << 0x1e);
        in_fpscr = temp_v10 | ((unsigned int)((temp_v21 != temp_v21) || (temp_v17 != temp_v17)) << 0x1c);
        temp_v2 = (unsigned char)(temp_v10 >> 0x18);
        if (!((unsigned char)((temp_v2 >> 6) & 1) || temp_v2 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1))) {
          if (0 < temp_v11) {
            temp_v11 = temp_v11 - 1;
            *(int *)(temp_v14 + 0x220) = temp_v11;
          }
          if (temp_v11 != 0) goto LAB_0029ad50;
LAB_0029ae94:
          *(unsigned char *)(temp_v14 + 0x21e) = 0;
        }
        else {
          if (temp_v11 < 0x10) {
            *(int *)(temp_v14 + 0x220) = temp_v11 + 1;
          }
LAB_0029ad50:
          if ((0 >= *(int *)(temp_v14 + 0x1f8)) || (*(char *)(temp_v14 + 0x228) != '\0')) {
            if (*(int *)(temp_v14 + 0x1f8) == -1) {
              temp_v27[1] = *(float *)(DAT_00581288 + 0x1c);
              temp_v27[3] = *(float *)(DAT_00581288 + 0x24);
              temp_v28 = *(unsigned int *)(temp_v14 + 0x238);
              uStack_cc = *(unsigned int *)(temp_v14 + 0x240);
              temp_v27[2] = *(float *)(DAT_00581288 + 0x20) + temp_v18;
              temp_v29 = *(float *)(temp_v14 + 0x23c) + temp_v18;
              temp_v11 = FUN_0036d984(temp_v27 + 1,(unsigned int *)&temp_v28,0);
              if (temp_v11 != -1) goto LAB_0029ae94;
            }
            if (*(int *)(temp_v14 + 0x1f0) >= 0x2d) {
              *(unsigned char *)(temp_v14 + 0x21e) = 1;
            }
            else {
              FUN_00352bc4();
              temp_v17 = *(float *)(temp_v14 + 0x238) - *(float *)(DAT_005806a4 + 0x50);
              temp_v20 = *(float *)(temp_v14 + 0x240) - *(float *)(DAT_005806a4 + 0x58);
              temp_v21 = *(float *)(temp_v14 + 0x23c) - *(float *)(DAT_005806a4 + 0x54);
              temp_v22 = (float)temp_v24 / romwright_sqrt_4(temp_v17 * temp_v17 + temp_v21 * temp_v21 + temp_v20 * temp_v20);
              temp_v10 = (unsigned int)temp_v25;
              temp_v17 = temp_v19 * temp_v17 * temp_v22 +
                       (float)((unsigned long long)temp_v23 >> 0x20) * temp_v21 * temp_v22 +
                       (float)temp_v23 * temp_v20 * temp_v22;
              FUN_002b5cd4();
              if ((temp_v10 < 0xc2200000) && ((int)temp_v10 < 0x42200000)) {
                *(unsigned char *)(temp_v14 + 0x21e) = 1;
              }
              else {
                *(unsigned char *)(temp_v14 + 0x21e) = 0;
              }
              in_fpscr = (in_fpscr & 0xfffffff) |
                         ((unsigned int)((float)((unsigned long long)temp_v24 >> 0x20) <= temp_v17) << 0x1d);
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                *(unsigned char *)(temp_v14 + 0x21e) = 0;
              }
            }
          }
          else {
            *(unsigned char *)(temp_v14 + 0x21e) = 0;
          }
        }
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 0x80);
  }
  temp_v8 = 0;
  do {
    temp_v9 = temp_v5 + temp_v8 * 0x194;
    pcVar14 = (char *)(temp_v9 + 0x1dc);
    if (*pcVar14 != '\0') {
      temp_v18 = (float)((unsigned long long)temp_v24 >> 0x20);
      switch(*(unsigned int *)(temp_v9 + 0x1e0)) {
      case 0:
        *(unsigned short *)(temp_v9 + 0x1e8) = 0;
        if ((*(int *)(temp_v9 + 0x200) != -1) && (temp_v14 = FUN_002d2288(), temp_v14 == 0)) {
          if (*(int *)(temp_v9 + 0x1f8) != 99) {
            *(unsigned int *)(temp_v9 + 0x1e0) = 1;
          }
          else {
            FUN_002d23f0(*(unsigned int *)(temp_v9 + 0x200));
            *(unsigned int *)(temp_v9 + 0x1e0) = 2;
          }
          temp_v14 = *(int *)(temp_v9 + 0x1f8);
          if (temp_v14 != 0x65) {
            if (temp_v14 != 0x66) {
              if (temp_v14 != 0x67) {
                if (temp_v14 != 0x68) {
                  if (temp_v14 != 0x69) {
                    if (temp_v14 != 0x6a) {
                      if (temp_v14 != 0x6b) {
                        if (temp_v14 != 0x6c) {
                          if (temp_v14 != 0x6d) {
                            if (temp_v14 != 0x6e) {
                              if (temp_v14 != 0x6f) {
                                if (temp_v14 != 0x70) {
                                  if (temp_v14 != 0x71) {
                                    if (temp_v14 != 0x72) {
                                      if (temp_v14 != 0x73) {
                                        if (temp_v14 != 0x74) {
                                          if (temp_v14 != 0x75) {
                                            if (temp_v14 != 0x76) {
                                              if (temp_v14 != 0x77) {
                                                if (temp_v14 != 0x78) {
                                                  if (temp_v14 != 0x79) {
                                                    if (temp_v14 != 0x7a) {
                                                      if (temp_v14 != 0x7b) break;
                                                      temp_v14 = FUN_0018719c(0x4e8);
                                                    }
                                                    else {
                                                      temp_v14 = FUN_0018719c(0x4e7);
                                                    }
                                                  }
                                                  else {
                                                    temp_v14 = FUN_0018719c(0x4e6);
                                                  }
                                                }
                                                else {
                                                  temp_v14 = FUN_0018719c(0x4e5);
                                                }
                                              }
                                              else {
                                                temp_v14 = FUN_0018719c(0x4e4);
                                              }
                                            }
                                            else {
                                              temp_v14 = FUN_0018719c(0x4e3);
                                            }
                                          }
                                          else {
                                            temp_v14 = FUN_0018719c(0x4e2);
                                          }
                                        }
                                        else {
                                          temp_v14 = FUN_0018719c(0x4e1);
                                        }
                                      }
                                      else {
                                        temp_v14 = FUN_0018719c(0x4e0);
                                      }
                                    }
                                    else {
                                      temp_v14 = FUN_0018719c(0x4df);
                                    }
                                  }
                                  else {
                                    temp_v14 = FUN_0018719c(0x4de);
                                  }
                                }
                                else {
                                  temp_v14 = FUN_0018719c(0x4dd);
                                }
                              }
                              else {
                                temp_v14 = FUN_0018719c(0x4dc);
                              }
                            }
                            else {
                              temp_v14 = FUN_0018719c(0x4cf);
                            }
                          }
                          else {
                            temp_v14 = FUN_0018719c(0x4ce);
                          }
                        }
                        else {
                          temp_v14 = FUN_0018719c(0x4cd);
                        }
                      }
                      else {
                        temp_v14 = FUN_0018719c(0x499);
                      }
                    }
                    else {
                      temp_v14 = FUN_0018719c(0x498);
                    }
                  }
                  else {
                    temp_v14 = FUN_0018719c(0x497);
                  }
                }
                else {
                  temp_v14 = FUN_0018719c(0x496);
                }
              }
              else {
                temp_v14 = FUN_0018719c(0x495);
              }
            }
            else {
              temp_v14 = FUN_0018719c(0x494);
            }
          }
          else {
            temp_v14 = FUN_0018719c(0x493);
          }
          if (temp_v14 != 0) {
            FUN_002d23f0(*(unsigned int *)(temp_v9 + 0x200));
            temp_v10 = 2;
            *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
          }
          break;
        }
        temp_v10 = 2;
        *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
        break;
      case 1:
        temp_v14 = FUN_002d2288(*(unsigned int *)(temp_v9 + 0x200));
        if (temp_v14 != 0) {
          temp_v10 = 2;
          *(unsigned short *)(temp_v9 + 0x1e8) = 0;
          *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
          break;
        }
        *(unsigned short *)(temp_v9 + 0x1e8) = 0;
        *(int *)(temp_v9 + 0x20c) = (int)((unsigned long long)temp_v24 >> 0x20);
        if ((DAT_005f1859 != '\0') && (temp_v14 = FUN_0029d6f0(), temp_v14 != 0)) {
          temp_v10 = 5;
          *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
        }
        break;
      case 2:
        *(unsigned short *)(temp_v9 + 0x1e8) = 0;
        *(float *)(temp_v9 + 0x20c) = temp_v18;
        if ((DAT_005f1859 != '\0') && (temp_v14 = FUN_0029d6f0(), temp_v14 != 0)) {
          temp_v10 = 6;
          *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
        }
        break;
      case 3:
        *(unsigned short *)(temp_v9 + 0x1e8) = 1;
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        temp_v3 = 1;
        if (*(int *)(temp_v9 + 0x1e4) == 0) {
          temp_v18 = temp_v18 + 0.2f;
          *(float *)(temp_v9 + 0x20c) = temp_v18;
        }
        FUN_001bc124();
        *(float *)(temp_v9 + 0x244) =
             *(float *)(temp_v9 + 0x244) +
             (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
        *(float *)(temp_v9 + 0x248) =
             *(float *)(temp_v9 + 0x248) +
             ((*(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f) - *(float *)(temp_v9 + 0x248)) * 0.25f;
        *(float *)(temp_v9 + 0x24c) =
             *(float *)(temp_v9 + 0x24c) +
             (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
        FUN_00329dd4(pcVar14);
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffffff;
        *(short *)(temp_v9 + 0x204) = *(short *)(temp_v9 + 0x204) + 1;
        if (DAT_005f1859 != '\0') {
          temp_v14 = FUN_0029d6f0();
          if (temp_v14 == 0) {
            if ((DAT_005f1859 == '\0') || (temp_v14 = FUN_0029d6f0(), temp_v14 == 0)) {
              *(unsigned int *)(temp_v9 + 0x1e0) = 1;
              break;
            }
            *(unsigned int *)(temp_v9 + 0x1e0) = 5;
          }
          temp_v14 = *(int *)(temp_v9 + 0x1f0);
          if (((!(temp_v14 == 1 || temp_v14 == 3)) && (!(temp_v14 == 2 || temp_v14 == 4))) &&
             (!((temp_v14 == 5 || temp_v14 == 7) || temp_v14 == 0x2b))) {
            temp_v30 = 0;
            if (*(short *)(temp_v9 + 0x204) >= 0x1f) {
              if (*(char *)(temp_v5 + 0xcd10) == '\0') {
                FUN_003d4ed8(0x10002aa);
              }
              *(unsigned int *)(temp_v9 + 0x1e0) = 4;
              temp_v3 = 1;
              *(unsigned short *)(temp_v9 + 0x206) = 0;
            }
          }
          else {
            temp_v30 = 1;
            if (*(short *)(temp_v9 + 0x204) >= 0x1f) {
              FUN_002d23f0(*(unsigned int *)(temp_v9 + 0x200));
              temp_v10 = 6;
              *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
            }
          }
        }
        else {
          *(unsigned int *)(temp_v9 + 0x1e0) = 1;
        }
        break;
      case 4:
        *(unsigned short *)(temp_v9 + 0x1e8) = 2;
        temp_v3 = 1;
        *(float *)(temp_v9 + 0x20c) = temp_v18;
        FUN_001bc124();
        *(float *)(temp_v9 + 0x244) =
             *(float *)(temp_v9 + 0x244) +
             (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
        *(float *)(temp_v9 + 0x248) =
             *(float *)(temp_v9 + 0x248) +
             ((*(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f) - *(float *)(temp_v9 + 0x248)) * 0.25f;
        *(float *)(temp_v9 + 0x24c) =
             *(float *)(temp_v9 + 0x24c) +
             (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
        temp_v14 = (int)*(short *)(temp_v9 + 0x206);
        if (temp_v14 >= 0x11) {
          temp_v14 = 0x10;
        }
        VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00329dd4(pcVar14);
        if (temp_v14 >= 9) {
          *(unsigned int *)(temp_v9 + 0x260) = 0;
          *(unsigned int *)(temp_v9 + 0x264) = 0xffffff80;
          VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_003a3e60(pcVar14,2);
        }
        else {
          *(unsigned int *)(temp_v9 + 0x260) = 0xffffff80;
          VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_003a3e60(pcVar14,1);
          if (5 >= temp_v14) {
            *(unsigned int *)(temp_v9 + 0x264) = 0;
          }
          else {
            *(unsigned int *)(temp_v9 + 0x264) = 0xffffff80;
            VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_003a3e60(pcVar14,2);
          }
        }
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffffff;
        temp_v6 = *(short *)(temp_v9 + 0x206) + 2;
        *(short *)(temp_v9 + 0x206) = temp_v6;
        if (temp_v6 >= 0x11) {
          if (*(int *)(temp_v9 + 0x1f0) == 0x22) {
            DAT_005f1859 = '\0';
          }
          else {
            FUN_002d23f0();
          }
          temp_v10 = 6;
          *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
        }
        break;
      case 5:
        temp_v14 = FUN_002d2288(*(unsigned int *)(temp_v9 + 0x200));
        if (temp_v14 != 0) {
          temp_v10 = 6;
          *(unsigned short *)(temp_v9 + 0x1e8) = 0;
          *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
          break;
        }
        temp_v32 = 1;
        *(unsigned short *)(temp_v9 + 0x1e8) = 3;
        if (*(int *)(temp_v9 + 0x1f0) >= 0x2d) {
          *(unsigned short *)(temp_v9 + 0x1e8) = 0;
        }
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        if (*(int *)(temp_v9 + 0x1e4) == 0) {
          temp_v18 = temp_v18 + 0.2f;
          *(float *)(temp_v9 + 0x20c) = temp_v18;
        }
        FUN_001bc124();
        *(float *)(temp_v9 + 0x244) =
             *(float *)(temp_v9 + 0x244) +
             (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
        *(float *)(temp_v9 + 0x248) =
             *(float *)(temp_v9 + 0x248) +
             ((*(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f) - *(float *)(temp_v9 + 0x248)) * 0.25f;
        *(float *)(temp_v9 + 0x24c) =
             *(float *)(temp_v9 + 0x24c) +
             (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
        FUN_00329dd4(pcVar14);
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffffff;
        if (DAT_005f1859 == '\0') {
          *(unsigned int *)(temp_v9 + 0x1e0) = 1;
          break;
        }
        temp_v14 = FUN_0029d6f0();
        if (temp_v14 != 0) {
          if (*(int *)(temp_v9 + 0x1f0) >= 0x2d) {
            if (*(char *)(temp_v5 + 0xcd10) == '\0') {
              FUN_003d4ed8(0x10002a9);
            }
            FUN_002d23f0(*(unsigned int *)(temp_v9 + 0x200));
            temp_v10 = 6;
            *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
            break;
          }
          if (*(char *)(temp_v5 + 0xcd10) == '\0') {
            FUN_003d4ed8(0x10002a9);
          }
          *(unsigned int *)(temp_v9 + 0x1e0) = 3;
          *(unsigned short *)(temp_v9 + 0x204) = 0;
        }
        else if ((DAT_005f1859 == '\0') || (temp_v14 = FUN_0029d6f0(), temp_v14 == 0)) {
          *(unsigned int *)(temp_v9 + 0x1e0) = 1;
        }
        break;
      case 6:
        *(unsigned short *)(temp_v9 + 0x1e8) = 4;
        if (*(int *)(temp_v9 + 0x1f0) >= 0x2d) {
          *(unsigned short *)(temp_v9 + 0x1e8) = 0x10;
        }
        if (*(int *)(temp_v9 + 0x1e4) != 0) {
          *(float *)(temp_v9 + 0x268) = temp_v18;
        }
        else {
          *(float *)(temp_v9 + 0x268) =
               *(float *)(temp_v9 + 0x268) - *(float *)(temp_v9 + 0x268) * 0.25f;
          *(float *)(temp_v9 + 0x20c) = *(float *)(temp_v9 + 0x20c) + 0.2f;
        }
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        if (*(int *)(temp_v9 + 0x1f0) >= 0x2d) {
          FUN_001bc124();
          temp_v18 = *(float *)(temp_v9 + 0x23c) + temp_v18 * 35.0f + 200.0f;
          if (*(int *)(temp_v9 + 0x1e4) != 0) {
            *(float *)(temp_v9 + 0x244) = *(float *)(temp_v9 + 0x238);
            *(unsigned int *)(temp_v9 + 0x254) = 0x42f00000;
            *(unsigned int *)(temp_v9 + 600) = 0x42f00000;
            *(float *)(temp_v9 + 0x248) = temp_v18;
            *(float *)(temp_v9 + 0x24c) = *(float *)(temp_v9 + 0x240);
          }
          else {
            *(float *)(temp_v9 + 0x244) =
                 *(float *)(temp_v9 + 0x244) +
                 (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
            *(float *)(temp_v9 + 0x248) =
                 *(float *)(temp_v9 + 0x248) + (temp_v18 - *(float *)(temp_v9 + 0x248)) * 0.25f;
            *(float *)(temp_v9 + 0x24c) =
                 *(float *)(temp_v9 + 0x24c) +
                 (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
            *(float *)(temp_v9 + 0x254) =
                 *(float *)(temp_v9 + 0x254) + (120.0f - *(float *)(temp_v9 + 0x254)) * 0.25f;
            *(float *)(temp_v9 + 600) =
                 *(float *)(temp_v9 + 600) + (120.0f - *(float *)(temp_v9 + 600)) * 0.25f;
          }
        }
        else {
          FUN_001bc124();
          *(float *)(temp_v9 + 0x244) =
               *(float *)(temp_v9 + 0x244) +
               (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
          *(float *)(temp_v9 + 0x248) =
               *(float *)(temp_v9 + 0x248) +
               ((*(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f) - *(float *)(temp_v9 + 0x248)) * 0.25f;
          *(float *)(temp_v9 + 0x24c) =
               *(float *)(temp_v9 + 0x24c) +
               (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
        }
        FUN_00329dd4(pcVar14);
        if (*(int *)(temp_v9 + 0x1e4) != 0) {
          *(unsigned int *)(temp_v9 + 0x1e4) = 0;
        }
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffff00;
        if ((0 < *(int *)(temp_v9 + 500)) && (*(char *)(temp_v9 + 0x21d) != '\0')) {
          *(unsigned int *)(temp_v9 + 0x25c) = 0x40404000;
        }
        temp_v14 = *(int *)(temp_v9 + 0x1fc);
        temp_v10 = *(int *)(temp_v9 + 0x220) * 0x10;
        if (temp_v10 >= 0x100) {
          temp_v10 = 0xff;
        }
        *(unsigned int *)(temp_v9 + 0x25c) = temp_v10 | *(unsigned int *)(temp_v9 + 0x25c);
        if (((temp_v14 != -3 && temp_v14 != -2) && (temp_v14 != -1 && temp_v14 != 1)) &&
           ((DAT_005f1859 == '\0' || (temp_v14 = FUN_0029d6f0(), temp_v14 == 0)))) {
          temp_v10 = 2;
          *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
        }
        break;
      case 7:
        *(unsigned short *)(temp_v9 + 0x1e8) = 5;
        if (temp_v33 != 0) {
          *(unsigned short *)(temp_v9 + 0x208) = 10;
          *(unsigned int *)(temp_v9 + 0x220) = 0x10;
        }
        if (*(int *)(temp_v9 + 0x1f0) >= 0x2d) {
          *(unsigned short *)(temp_v9 + 0x1e8) = 0x11;
          temp_v16 = *(float *)(temp_v9 + 0x20c);
          FUN_001bc124();
          temp_v18 = *(float *)(temp_v9 + 0x23c);
          temp_v14 = (int)*(short *)(temp_v9 + 0x208);
          temp_v16 = temp_v18 + temp_v16 * 35.0f;
          if (temp_v14 >= 4) {
            temp_v18 = 300.0f;
          }
          if (temp_v14 < 4) {
            temp_v18 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v18 = temp_v18 * 75.0f;
          }
          temp_v17 = (float)temp_v24;
          *(float *)(temp_v9 + 0x244) =
               *(float *)(temp_v9 + 0x244) +
               (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * temp_v17;
          *(float *)(temp_v9 + 0x248) =
               *(float *)(temp_v9 + 0x248) +
               ((temp_v16 + 200.0f + temp_v18) - *(float *)(temp_v9 + 0x248)) * temp_v17;
          *(float *)(temp_v9 + 0x24c) =
               *(float *)(temp_v9 + 0x24c) +
               (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * temp_v17;
          if (temp_v33 != 0) {
            temp_v18 = *(float *)(temp_v9 + 0x254) + (168.0f - *(float *)(temp_v9 + 0x254));
            temp_v16 = *(float *)(temp_v9 + 600) + (168.0f - *(float *)(temp_v9 + 600));
          }
          else {
            temp_v18 = *(float *)(temp_v9 + 0x254) + (168.0f - *(float *)(temp_v9 + 0x254)) * 0.25f;
            temp_v16 = *(float *)(temp_v9 + 600) + (168.0f - *(float *)(temp_v9 + 600)) * 0.25f;
          }
          *(float *)(temp_v9 + 0x254) = temp_v18;
          *(float *)(temp_v9 + 600) = temp_v16;
          if (*(short *)(temp_v9 + 0x208) < 4) {
            *(int *)(temp_v9 + 0x35c) = (int)((unsigned long long)temp_v24 >> 0x20);
            *(float *)(temp_v9 + 0x268) =
                 *(float *)(temp_v9 + 0x268) - *(float *)(temp_v9 + 0x268) * 0.25f;
          }
          else {
            temp_v18 = (float)VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            *(float *)(temp_v9 + 0x268) = temp_v18 * -60.0f;
            VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_0032a904(pcVar14);
            temp_v18 = (float)VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            *(float *)(temp_v9 + 0x35c) = temp_v18 * 0.16666667f;
          }
        }
        else {
          temp_v18 = *(float *)(temp_v9 + 0x20c);
          FUN_001bc124();
          temp_v18 = *(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f;
          switch(*(unsigned int *)(temp_v9 + 0x1fc)) {
          case 0:
          case 1:
            if (*(short *)(temp_v9 + 0x208) >= 4) {
              temp_v18 = temp_v18 + 55.0f;
            }
            else {
              temp_v16 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 0x208),
                                                  (unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v18 = temp_v18 + temp_v16 * 13.75f;
            }
          }
          temp_v16 = (float)temp_v24;
          *(float *)(temp_v9 + 0x244) =
               *(float *)(temp_v9 + 0x244) +
               (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * temp_v16;
          *(float *)(temp_v9 + 0x248) =
               *(float *)(temp_v9 + 0x248) + (temp_v18 - *(float *)(temp_v9 + 0x248)) * temp_v16;
          *(float *)(temp_v9 + 0x24c) =
               *(float *)(temp_v9 + 0x24c) +
               (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * temp_v16;
          if (*(short *)(temp_v9 + 0x208) < 4) {
            *(int *)(temp_v9 + 0x35c) = (int)((unsigned long long)temp_v24 >> 0x20);
            *(float *)(temp_v9 + 0x268) =
                 *(float *)(temp_v9 + 0x268) - *(float *)(temp_v9 + 0x268) * 0.25f;
          }
          else {
            temp_v14 = *(short *)(temp_v9 + 0x208) - 4;
            if (*(int *)(temp_v9 + 0x1fc) != 0) {
              temp_v18 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
              *(float *)(temp_v9 + 0x268) = temp_v18 * -5.0f;
            }
            else {
              temp_v18 = (float)VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
              *(float *)(temp_v9 + 0x268) = temp_v18 * -10.0f;
            }
            VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_0032a904(pcVar14);
            temp_v18 = (float)VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,
                                                (unsigned char)(in_fpscr >> 0x16) & 3);
            *(float *)(temp_v9 + 0x35c) = temp_v18 * 0.16666667f;
          }
        }
        FUN_00329dd4(pcVar14);
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffff00;
        if ((0 < *(int *)(temp_v9 + 500)) && (*(char *)(temp_v9 + 0x21d) != '\0')) {
          *(unsigned int *)(temp_v9 + 0x25c) = 0x40404000;
        }
        temp_v10 = *(int *)(temp_v9 + 0x220) * 0x10;
        if (temp_v10 >= 0x100) {
          temp_v10 = 0xff;
        }
        temp_v6 = *(short *)(temp_v9 + 0x208) + 1;
        temp_v10 = temp_v10 | *(unsigned int *)(temp_v9 + 0x25c);
        *(unsigned int *)(temp_v9 + 0x25c) = temp_v10;
        if (temp_v6 >= 11) {
          temp_v10 = 8;
        }
        *(short *)(temp_v9 + 0x208) = temp_v6;
        if (temp_v6 >= 11) {
          *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
        }
        break;
      case 8:
        *(unsigned short *)(temp_v9 + 0x1e8) = 6;
        if (*(int *)(temp_v9 + 0x1f0) >= 0x2d) {
          *(unsigned short *)(temp_v9 + 0x1e8) = 0x11;
        }
        if (*(int *)(temp_v9 + 0x1e4) == 0) {
          *(float *)(temp_v9 + 0x20c) = *(float *)(temp_v9 + 0x20c) + 0.2f;
        }
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        if (*(int *)(temp_v9 + 0x1f0) >= 0x2d) {
          FUN_001bc124();
          *(float *)(temp_v9 + 0x244) =
               *(float *)(temp_v9 + 0x244) +
               (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
          *(float *)(temp_v9 + 0x248) =
               *(float *)(temp_v9 + 0x248) +
               ((*(float *)(temp_v9 + 0x23c) + temp_v18 * 35.0f + 500.0f) - *(float *)(temp_v9 + 0x248)) *
               0.25f;
          *(float *)(temp_v9 + 0x24c) =
               *(float *)(temp_v9 + 0x24c) +
               (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
          *(unsigned int *)(temp_v9 + 0x268) = 0xc3b40000;
          *(int *)(temp_v9 + 0x35c) = (int)temp_v24;
          *(float *)(temp_v9 + 0x254) =
               *(float *)(temp_v9 + 0x254) + (168.0f - *(float *)(temp_v9 + 0x254)) * 0.25f;
          *(float *)(temp_v9 + 600) =
               *(float *)(temp_v9 + 600) + (168.0f - *(float *)(temp_v9 + 600)) * 0.25f;
          FUN_00329dd4(pcVar14);
          FUN_0032a904(pcVar14);
        }
        else {
          FUN_001bc124();
          temp_v18 = *(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f;
          switch(*(unsigned int *)(temp_v9 + 0x1fc)) {
          case 0:
          case 1:
            temp_v18 = temp_v18 + 55.0f;
          }
          *(float *)(temp_v9 + 0x244) =
               *(float *)(temp_v9 + 0x244) +
               (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
          *(float *)(temp_v9 + 0x248) =
               *(float *)(temp_v9 + 0x248) + (temp_v18 - *(float *)(temp_v9 + 0x248)) * 0.25f;
          *(float *)(temp_v9 + 0x24c) =
               *(float *)(temp_v9 + 0x24c) +
               (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
          if (*(int *)(temp_v9 + 0x1fc) == 0) {
            temp_v15 = 0xc2700000;
          }
          else {
            temp_v15 = 0xc1f00000;
          }
          *(unsigned int *)(temp_v9 + 0x268) = temp_v15;
          FUN_00329dd4(pcVar14);
          FUN_0032a904(pcVar14);
        }
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffff00;
        if ((0 < *(int *)(temp_v9 + 500)) && (*(char *)(temp_v9 + 0x21d) != '\0')) {
          *(unsigned int *)(temp_v9 + 0x25c) = 0x40404000;
        }
        temp_v10 = *(int *)(temp_v9 + 0x220) * 0x10;
        if (temp_v10 >= 0x100) {
          temp_v10 = 0xff;
        }
        *(unsigned int *)(temp_v9 + 0x25c) = temp_v10 | *(unsigned int *)(temp_v9 + 0x25c);
        if (DAT_005f185b != '\0') {
          temp_v10 = 0x11;
          *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
        }
        break;
      case 9:
        *(unsigned short *)(temp_v9 + 0x1e8) = 7;
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        FUN_001bc124();
        temp_v18 = *(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f;
        if (*(short *)(temp_v9 + 0x208) >= 4) {
          temp_v18 = temp_v18 + 25.0f;
        }
        else {
          temp_v16 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 0x208),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = temp_v18 + temp_v16 * 6.25f;
        }
        temp_v16 = (float)temp_v24;
        *(float *)(temp_v9 + 0x244) =
             *(float *)(temp_v9 + 0x244) +
             (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * temp_v16;
        *(float *)(temp_v9 + 0x248) =
             *(float *)(temp_v9 + 0x248) + (temp_v18 - *(float *)(temp_v9 + 0x248)) * temp_v16;
        *(float *)(temp_v9 + 0x24c) =
             *(float *)(temp_v9 + 0x24c) +
             (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * temp_v16;
        temp_v18 = *(float *)(DAT_00581288 + 0x50) + 180.0f;
        *(float *)(temp_v9 + 0x250) = temp_v18;
        if ((int)temp_v18 >= 0x43b40001) {
          *(float *)(temp_v9 + 0x250) = temp_v18 - 360.0f;
        }
        *(unsigned int *)(temp_v9 + 0x1ec) = 1;
        if (*(short *)(temp_v9 + 0x208) < 4) {
          temp_v17 = 0.25f;
          *(int *)(temp_v9 + 0x35c) = (int)((unsigned long long)temp_v24 >> 0x20);
          *(float *)(temp_v9 + 0x268) =
               *(float *)(temp_v9 + 0x268) - *(float *)(temp_v9 + 0x268) * 0.25f;
          FUN_0018a924(temp_v26,temp_v31);
          temp_v16 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 0x208),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 0x208),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v9 + 0x244) =
               *(float *)(temp_v9 + 0x238) + temp_v26[0] * 90.0f * temp_v17 * temp_v18;
          *(float *)(temp_v9 + 0x24c) =
               *(float *)(temp_v9 + 0x240) + temp_v31[0] * 90.0f * temp_v17 * temp_v16;
        }
        else {
          temp_v16 = (float)VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = (float)VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v9 + 0x268) = temp_v16 * -10.0f;
          *(float *)(temp_v9 + 0x35c) = temp_v18 * 0.16666667f;
          FUN_0018a924(temp_v26,temp_v31);
          *(float *)(temp_v9 + 0x244) = *(float *)(temp_v9 + 0x238) + temp_v26[0] * 90.0f;
          *(float *)(temp_v9 + 0x24c) = *(float *)(temp_v9 + 0x240) + temp_v31[0] * 90.0f;
          VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0032a904(pcVar14);
        }
        FUN_00329dd4(pcVar14);
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffff00;
        *(unsigned int *)(temp_v9 + 0x1ec) = 0;
        if ((0 < *(int *)(temp_v9 + 500)) && (*(char *)(temp_v9 + 0x21d) != '\0')) {
          *(unsigned int *)(temp_v9 + 0x25c) = 0x40404000;
        }
        temp_v10 = *(int *)(temp_v9 + 0x220) * 0x10;
        if (temp_v10 >= 0x100) {
          temp_v10 = 0xff;
        }
        temp_v6 = *(short *)(temp_v9 + 0x208) + 1;
        temp_v10 = temp_v10 | *(unsigned int *)(temp_v9 + 0x25c);
        *(unsigned int *)(temp_v9 + 0x25c) = temp_v10;
        if (temp_v6 >= 11) {
          temp_v10 = 10;
        }
        *(short *)(temp_v9 + 0x208) = temp_v6;
        if (temp_v6 >= 11) {
          *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
        }
        break;
      case 10:
        *(unsigned short *)(temp_v9 + 0x1e8) = 8;
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        if (*(int *)(temp_v9 + 0x1e4) == 0) {
          temp_v18 = temp_v18 + 0.2f;
          *(float *)(temp_v9 + 0x20c) = temp_v18;
        }
        FUN_001bc124();
        *(float *)(temp_v9 + 0x244) =
             *(float *)(temp_v9 + 0x244) +
             (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
        *(float *)(temp_v9 + 0x248) =
             *(float *)(temp_v9 + 0x248) +
             ((*(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f + 25.0f) - *(float *)(temp_v9 + 0x248)) *
             0.25f;
        *(float *)(temp_v9 + 0x24c) =
             *(float *)(temp_v9 + 0x24c) +
             (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
        *(unsigned int *)(temp_v9 + 0x268) = 0xc2700000;
        temp_v18 = *(float *)(DAT_00581288 + 0x50) + 180.0f;
        *(float *)(temp_v9 + 0x250) = temp_v18;
        if ((int)temp_v18 >= 0x43b40001) {
          *(float *)(temp_v9 + 0x250) = temp_v18 - 360.0f;
        }
        FUN_0018a924(temp_v26,temp_v31);
        *(float *)(temp_v9 + 0x244) = *(float *)(temp_v9 + 0x238) + temp_v26[0] * 90.0f;
        *(unsigned int *)(temp_v9 + 0x1ec) = 1;
        *(float *)(temp_v9 + 0x24c) = *(float *)(temp_v9 + 0x240) + temp_v31[0] * 90.0f;
        FUN_00329dd4(pcVar14);
        FUN_0032a904(pcVar14);
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffff00;
        *(unsigned int *)(temp_v9 + 0x1ec) = 0;
        if ((0 < *(int *)(temp_v9 + 500)) && (*(char *)(temp_v9 + 0x21d) != '\0')) {
          *(unsigned int *)(temp_v9 + 0x25c) = 0x40404000;
        }
        temp_v14 = *(int *)(temp_v9 + 0x220);
        temp_v10 = temp_v14 * 0x10;
        if (temp_v10 >= 0x100) {
          temp_v10 = 0xff;
        }
        *(unsigned int *)(temp_v9 + 0x25c) = temp_v10 | *(unsigned int *)(temp_v9 + 0x25c);
        break;
      case 0xb:
        *(unsigned short *)(temp_v9 + 0x1e8) = 9;
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        FUN_001bc124();
        temp_v18 = *(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f;
        if (*(short *)(temp_v9 + 0x208) >= 4) {
          temp_v18 = temp_v18 + 35.0f;
        }
        else {
          temp_v16 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 0x208),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = temp_v18 + temp_v16 * 8.75f;
        }
        temp_v16 = (float)temp_v24;
        *(float *)(temp_v9 + 0x244) =
             *(float *)(temp_v9 + 0x244) +
             (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * temp_v16;
        *(float *)(temp_v9 + 0x248) =
             *(float *)(temp_v9 + 0x248) + (temp_v18 - *(float *)(temp_v9 + 0x248)) * temp_v16;
        *(float *)(temp_v9 + 0x24c) =
             *(float *)(temp_v9 + 0x24c) +
             (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * temp_v16;
        temp_v18 = *(float *)(DAT_00581288 + 0x50) + 180.0f;
        *(float *)(temp_v9 + 0x250) = temp_v18;
        if ((int)temp_v18 >= 0x43b40001) {
          *(float *)(temp_v9 + 0x250) = temp_v18 - 360.0f;
        }
        if (*(short *)(temp_v9 + 0x208) < 4) {
          temp_v17 = 0.25f;
          *(int *)(temp_v9 + 0x35c) = (int)((unsigned long long)temp_v24 >> 0x20);
          *(float *)(temp_v9 + 0x268) =
               *(float *)(temp_v9 + 0x268) - *(float *)(temp_v9 + 0x268) * 0.25f;
          FUN_0018a924(temp_v26,temp_v31);
          temp_v16 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 0x208),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 0x208),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v9 + 0x244) =
               *(float *)(temp_v9 + 0x238) + temp_v26[0] * 30.0f * temp_v17 * temp_v18;
          *(float *)(temp_v9 + 0x24c) =
               *(float *)(temp_v9 + 0x240) + temp_v31[0] * 30.0f * temp_v17 * temp_v16;
        }
        else {
          temp_v16 = (float)VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = (float)VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v9 + 0x268) = temp_v16 * -9.166667f;
          *(float *)(temp_v9 + 0x35c) = temp_v18 * 0.16666667f;
          FUN_0018a924(temp_v26,temp_v31);
          *(float *)(temp_v9 + 0x244) = *(float *)(temp_v9 + 0x238) + temp_v26[0] * 30.0f;
          *(float *)(temp_v9 + 0x24c) = *(float *)(temp_v9 + 0x240) + temp_v31[0] * 30.0f;
          VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0032a904(pcVar14);
        }
        FUN_00329dd4(pcVar14);
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffff00;
        if ((0 < *(int *)(temp_v9 + 500)) && (*(char *)(temp_v9 + 0x21d) != '\0')) {
          *(unsigned int *)(temp_v9 + 0x25c) = 0x40404000;
        }
        temp_v10 = *(int *)(temp_v9 + 0x220) * 0x10;
        if (temp_v10 >= 0x100) {
          temp_v10 = 0xff;
        }
        temp_v6 = *(short *)(temp_v9 + 0x208) + 1;
        temp_v10 = temp_v10 | *(unsigned int *)(temp_v9 + 0x25c);
        *(unsigned int *)(temp_v9 + 0x25c) = temp_v10;
        if (temp_v6 >= 11) {
          temp_v10 = 0xc;
        }
        *(short *)(temp_v9 + 0x208) = temp_v6;
        goto joined_r0x0029d070;
      case 0xc:
        *(unsigned short *)(temp_v9 + 0x1e8) = 10;
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        if (*(int *)(temp_v9 + 0x1e4) == 0) {
          temp_v18 = temp_v18 + 0.2f;
          *(float *)(temp_v9 + 0x20c) = temp_v18;
        }
        FUN_001bc124();
        *(float *)(temp_v9 + 0x244) =
             *(float *)(temp_v9 + 0x244) +
             (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
        *(float *)(temp_v9 + 0x248) =
             *(float *)(temp_v9 + 0x248) +
             ((*(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f + 35.0f) - *(float *)(temp_v9 + 0x248)) *
             0.25f;
        *(float *)(temp_v9 + 0x24c) =
             *(float *)(temp_v9 + 0x24c) +
             (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
        *(unsigned int *)(temp_v9 + 0x268) = 0xc25c0000;
        temp_v18 = *(float *)(DAT_00581288 + 0x50) + 180.0f;
        *(float *)(temp_v9 + 0x250) = temp_v18;
        if ((int)temp_v18 >= 0x43b40001) {
          *(float *)(temp_v9 + 0x250) = temp_v18 - 360.0f;
        }
        FUN_0018a924(temp_v26,temp_v31);
        *(float *)(temp_v9 + 0x244) = *(float *)(temp_v9 + 0x238) + temp_v26[0] * 30.0f;
        *(float *)(temp_v9 + 0x24c) = *(float *)(temp_v9 + 0x240) + temp_v31[0] * 30.0f;
        FUN_00329dd4(pcVar14);
        FUN_0032a904(pcVar14);
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffff00;
        if ((0 < *(int *)(temp_v9 + 500)) && (*(char *)(temp_v9 + 0x21d) != '\0')) {
          *(unsigned int *)(temp_v9 + 0x25c) = 0x40404000;
        }
        temp_v14 = *(int *)(temp_v9 + 0x220);
        temp_v10 = temp_v14 * 0x10;
        if (temp_v10 >= 0x100) {
          temp_v10 = 0xff;
        }
        *(unsigned int *)(temp_v9 + 0x25c) = temp_v10 | *(unsigned int *)(temp_v9 + 0x25c);
        break;
      case 0xd:
        *(unsigned short *)(temp_v9 + 0x1e8) = 0xb;
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        FUN_001bc124();
        temp_v16 = (float)temp_v24;
        *(float *)(temp_v9 + 0x244) =
             *(float *)(temp_v9 + 0x244) +
             (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * temp_v16;
        *(float *)(temp_v9 + 0x248) =
             *(float *)(temp_v9 + 0x248) +
             ((*(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f) - *(float *)(temp_v9 + 0x248)) * temp_v16;
        *(float *)(temp_v9 + 0x24c) =
             *(float *)(temp_v9 + 0x24c) +
             (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * temp_v16;
        if (*(short *)(temp_v9 + 0x208) < 4) {
          temp_v17 = 0.25f;
          *(int *)(temp_v9 + 0x35c) = (int)((unsigned long long)temp_v24 >> 0x20);
          *(float *)(temp_v9 + 0x268) =
               *(float *)(temp_v9 + 0x268) - *(float *)(temp_v9 + 0x268) * 0.25f;
          FUN_0018a924(temp_v26,temp_v31);
          temp_v16 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 0x208),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 0x208),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v9 + 0x244) =
               *(float *)(temp_v9 + 0x238) + temp_v26[0] * 200.0f * temp_v17 * temp_v18;
          *(float *)(temp_v9 + 0x24c) =
               *(float *)(temp_v9 + 0x240) + temp_v31[0] * 200.0f * temp_v17 * temp_v16;
        }
        else {
          temp_v16 = (float)VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v18 = (float)VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          *(float *)(temp_v9 + 0x268) = temp_v16 * -11.666667f;
          *(float *)(temp_v9 + 0x35c) = temp_v18 * 0.16666667f;
          FUN_0018a924(temp_v26,temp_v31);
          *(float *)(temp_v9 + 0x244) = *(float *)(temp_v9 + 0x238) + temp_v26[0] * 200.0f;
          *(float *)(temp_v9 + 0x24c) = *(float *)(temp_v9 + 0x240) + temp_v31[0] * 200.0f;
          VectorSignedToFloat(*(short *)(temp_v9 + 0x208) - 4,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_0032a904(pcVar14);
        }
        FUN_00329dd4(pcVar14);
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffff00;
        if ((0 < *(int *)(temp_v9 + 500)) && (*(char *)(temp_v9 + 0x21d) != '\0')) {
          *(unsigned int *)(temp_v9 + 0x25c) = 0x40404000;
        }
        temp_v10 = *(int *)(temp_v9 + 0x220) * 0x10;
        if (temp_v10 >= 0x100) {
          temp_v10 = 0xff;
        }
        temp_v6 = *(short *)(temp_v9 + 0x208) + 1;
        temp_v10 = temp_v10 | *(unsigned int *)(temp_v9 + 0x25c);
        *(unsigned int *)(temp_v9 + 0x25c) = temp_v10;
        if (temp_v6 >= 11) {
          temp_v10 = 0xe;
        }
        *(short *)(temp_v9 + 0x208) = temp_v6;
joined_r0x0029d070:
        if (temp_v6 < 0xb) break;
        *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
        break;
      case 0xe:
        *(unsigned short *)(temp_v9 + 0x1e8) = 0xc;
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        if (*(int *)(temp_v9 + 0x1e4) == 0) {
          temp_v18 = temp_v18 + 0.2f;
          *(float *)(temp_v9 + 0x20c) = temp_v18;
        }
        FUN_001bc124();
        *(float *)(temp_v9 + 0x244) =
             *(float *)(temp_v9 + 0x244) +
             (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
        *(float *)(temp_v9 + 0x248) =
             *(float *)(temp_v9 + 0x248) +
             ((*(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f) - *(float *)(temp_v9 + 0x248)) * 0.25f;
        *(float *)(temp_v9 + 0x24c) =
             *(float *)(temp_v9 + 0x24c) +
             (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
        *(unsigned int *)(temp_v9 + 0x268) = 0xc28c0000;
        FUN_0018a924(temp_v26,temp_v31);
        *(float *)(temp_v9 + 0x244) = *(float *)(temp_v9 + 0x238) + temp_v26[0] * 200.0f;
        *(float *)(temp_v9 + 0x24c) = *(float *)(temp_v9 + 0x240) + temp_v31[0] * 200.0f;
        FUN_00329dd4(pcVar14);
        FUN_0032a904(pcVar14);
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffff00;
        if ((0 < *(int *)(temp_v9 + 500)) && (*(char *)(temp_v9 + 0x21d) != '\0')) {
          *(unsigned int *)(temp_v9 + 0x25c) = 0x40404000;
        }
        temp_v10 = *(int *)(temp_v9 + 0x220) * 0x10;
        if (temp_v10 >= 0x100) {
          temp_v10 = 0xff;
        }
        temp_v10 = temp_v10 | *(unsigned int *)(temp_v9 + 0x25c);
        *(unsigned int *)(temp_v9 + 0x25c) = temp_v10;
        break;
      case 0xf:
        *(unsigned short *)(temp_v9 + 0x1e8) = 0xd;
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        FUN_001bc124();
        temp_v18 = *(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f;
        switch(*(unsigned int *)(temp_v9 + 0x1fc)) {
        case 0:
        case 1:
          temp_v18 = temp_v18 + 55.0f;
        }
        *(float *)(temp_v9 + 0x244) =
             *(float *)(temp_v9 + 0x244) +
             (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
        *(float *)(temp_v9 + 0x248) =
             *(float *)(temp_v9 + 0x248) + (temp_v18 - *(float *)(temp_v9 + 0x248)) * 0.25f;
        *(float *)(temp_v9 + 0x24c) =
             *(float *)(temp_v9 + 0x24c) +
             (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
        FUN_00329dd4(pcVar14);
        temp_v10 = *(int *)(temp_v9 + 0x220) * 0x10;
        if (temp_v10 >= 0x100) {
          temp_v10 = 0xff;
        }
        temp_v6 = *(short *)(temp_v9 + 0x208) + 2;
        *(unsigned int *)(temp_v9 + 0x25c) = temp_v10 | 0xffffff00;
        *(short *)(temp_v9 + 0x208) = temp_v6;
        if (temp_v6 >= 0xd) {
          temp_v10 = 0x10;
          *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
        }
        break;
      case 0x10:
        *(unsigned short *)(temp_v9 + 0x1e8) = 0xe;
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        if (*(int *)(temp_v9 + 0x1e4) == 0) {
          temp_v18 = temp_v18 + 0.2f;
          *(float *)(temp_v9 + 0x20c) = temp_v18;
        }
        FUN_001bc124();
        temp_v18 = *(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f;
        switch(*(unsigned int *)(temp_v9 + 0x1fc)) {
        case 0:
        case 1:
          temp_v18 = temp_v18 + 55.0f;
        }
        *(float *)(temp_v9 + 0x244) =
             *(float *)(temp_v9 + 0x244) +
             (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
        *(float *)(temp_v9 + 0x248) =
             *(float *)(temp_v9 + 0x248) + (temp_v18 - *(float *)(temp_v9 + 0x248)) * 0.25f;
        *(float *)(temp_v9 + 0x24c) =
             *(float *)(temp_v9 + 0x24c) +
             (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
        FUN_00329dd4(pcVar14);
        temp_v10 = *(int *)(temp_v9 + 0x220) * 0x10;
        if (temp_v10 >= 0x100) {
          temp_v10 = 0xff;
        }
        temp_v10 = temp_v10 | 0xffffff00;
        *(unsigned int *)(temp_v9 + 0x25c) = temp_v10;
        break;
      case 0x11:
        *(unsigned short *)(temp_v9 + 0x1e8) = 0xf;
        if (*(int *)(temp_v9 + 0x1f0) >= 0x2d) {
          *(unsigned short *)(temp_v9 + 0x1e8) = 0x12;
        }
        if (*(int *)(temp_v9 + 0x1e4) == 0) {
          *(float *)(temp_v9 + 0x20c) = *(float *)(temp_v9 + 0x20c) + 0.2f;
        }
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        if (*(int *)(temp_v9 + 0x1f0) >= 0x2d) {
          FUN_001bc124();
          *(float *)(temp_v9 + 0x244) =
               *(float *)(temp_v9 + 0x244) +
               (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
          *(float *)(temp_v9 + 0x248) =
               *(float *)(temp_v9 + 0x248) +
               ((*(float *)(temp_v9 + 0x23c) + temp_v18 * 35.0f + 200.0f) - *(float *)(temp_v9 + 0x248)) *
               0.25f;
          *(float *)(temp_v9 + 0x24c) =
               *(float *)(temp_v9 + 0x24c) +
               (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
          *(float *)(temp_v9 + 0x268) =
               *(float *)(temp_v9 + 0x268) - *(float *)(temp_v9 + 0x268) * 0.25f;
          *(int *)(temp_v9 + 0x35c) = (int)temp_v24;
          *(float *)(temp_v9 + 0x254) =
               *(float *)(temp_v9 + 0x254) + (120.0f - *(float *)(temp_v9 + 0x254)) * 0.25f;
          *(float *)(temp_v9 + 600) =
               *(float *)(temp_v9 + 600) + (120.0f - *(float *)(temp_v9 + 600)) * 0.25f;
          FUN_00329dd4(pcVar14);
        }
        else {
          FUN_001bc124();
          *(float *)(temp_v9 + 0x244) =
               *(float *)(temp_v9 + 0x244) +
               (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
          *(float *)(temp_v9 + 0x248) =
               *(float *)(temp_v9 + 0x248) +
               ((*(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f) - *(float *)(temp_v9 + 0x248)) * 0.25f;
          *(float *)(temp_v9 + 0x24c) =
               *(float *)(temp_v9 + 0x24c) +
               (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
          *(float *)(temp_v9 + 0x268) =
               *(float *)(temp_v9 + 0x268) - *(float *)(temp_v9 + 0x268) * 0.25f;
          FUN_00329dd4(pcVar14);
        }
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffff00;
        if ((0 < *(int *)(temp_v9 + 500)) && (*(char *)(temp_v9 + 0x21d) != '\0')) {
          *(unsigned int *)(temp_v9 + 0x25c) = 0x40404000;
        }
        temp_v10 = *(int *)(temp_v9 + 0x220) * 0x10;
        if (temp_v10 >= 0x100) {
          temp_v10 = 0xff;
        }
        *(unsigned int *)(temp_v9 + 0x25c) = temp_v10 | *(unsigned int *)(temp_v9 + 0x25c);
        if (DAT_005f185b == '\0') {
          *(unsigned int *)(temp_v9 + 0x1e0) = 6;
        }
        break;
      case 0x12:
        *(unsigned short *)(temp_v9 + 0x1e8) = 1;
        temp_v18 = *(float *)(temp_v9 + 0x20c);
        temp_v3 = 1;
        if (*(int *)(temp_v9 + 0x1e4) == 0) {
          temp_v18 = temp_v18 + 0.2f;
          *(float *)(temp_v9 + 0x20c) = temp_v18;
        }
        FUN_001bc124();
        *(float *)(temp_v9 + 0x244) =
             *(float *)(temp_v9 + 0x244) +
             (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
        *(float *)(temp_v9 + 0x248) =
             *(float *)(temp_v9 + 0x248) +
             ((*(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f) - *(float *)(temp_v9 + 0x248)) * 0.25f;
        *(float *)(temp_v9 + 0x24c) =
             *(float *)(temp_v9 + 0x24c) +
             (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
        FUN_00329dd4(pcVar14);
        temp_v30 = 0;
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffffff;
        temp_v6 = *(short *)(temp_v9 + 0x204) + 1;
        *(short *)(temp_v9 + 0x204) = temp_v6;
        if (temp_v6 >= 0x1f) {
          FUN_003d4ed8(0x10002aa);
          temp_v14 = DAT_00581040;
          *(unsigned int *)(temp_v9 + 0x360) = *(unsigned int *)(DAT_00581040 + 100);
          *(unsigned int *)(temp_v9 + 0x364) = *(unsigned int *)(temp_v14 + 100);
          *(unsigned int *)(temp_v9 + 0x1e0) = 0x13;
          temp_v3 = 1;
          *(unsigned short *)(temp_v9 + 0x206) = 0;
        }
        break;
      case 0x13:
        *(unsigned short *)(temp_v9 + 0x1e8) = 2;
        temp_v3 = 1;
        *(float *)(temp_v9 + 0x20c) = temp_v18;
        FUN_001bc124();
        *(float *)(temp_v9 + 0x244) =
             *(float *)(temp_v9 + 0x244) +
             (*(float *)(temp_v9 + 0x238) - *(float *)(temp_v9 + 0x244)) * 0.25f;
        *(float *)(temp_v9 + 0x248) =
             *(float *)(temp_v9 + 0x248) +
             ((*(float *)(temp_v9 + 0x23c) + temp_v18 * 5.0f) - *(float *)(temp_v9 + 0x248)) * 0.25f;
        *(float *)(temp_v9 + 0x24c) =
             *(float *)(temp_v9 + 0x24c) +
             (*(float *)(temp_v9 + 0x240) - *(float *)(temp_v9 + 0x24c)) * 0.25f;
        temp_v14 = (int)*(short *)(temp_v9 + 0x206);
        if (temp_v14 >= 0x11) {
          temp_v14 = 0x10;
        }
        VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00329dd4(pcVar14);
        if (temp_v14 >= 9) {
          *(unsigned int *)(temp_v9 + 0x260) = 0;
        }
        else {
          *(unsigned int *)(temp_v9 + 0x260) = 0xffffff80;
          VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_003a3e60(pcVar14,1);
        }
        if (temp_v14 < 6) {
          *(unsigned int *)(temp_v9 + 0x264) = 0;
        }
        else {
          *(unsigned int *)(temp_v9 + 0x264) = 0xffffff80;
          VectorSignedToFloat(temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_003a3e60(pcVar14,2);
        }
        *(unsigned int *)(temp_v9 + 0x25c) = 0xffffffff;
        temp_v6 = *(short *)(temp_v9 + 0x206) + 2;
        *(short *)(temp_v9 + 0x206) = temp_v6;
        if (temp_v6 == 0x19) {
          DAT_005f1859 = '\0';
        }
        if (*(short *)(temp_v9 + 0x206) >= 0x21) {
          temp_v10 = 6;
          *(unsigned int *)(temp_v9 + 0x1e0) = temp_v10;
        }
        break;
      case 0x14:
        *(unsigned short *)(temp_v9 + 0x1e8) = 0;
      }
    }
    temp_v8 = temp_v8 + 1;
  } while (temp_v8 < 0x80);
  if (temp_v33 != 0) {
    return;
  }
  if (*(int *)(temp_v5 + 0x3c) != 1) {
    if (*(int *)(temp_v5 + 0x3c) == 2) {
      temp_v8 = *(int *)(temp_v5 + 0x44);
      if (temp_v8 >= 1) {
        *(int *)(temp_v5 + 0x44) = temp_v8 - 1;
      }
      else {
        temp_v8 = *(int *)(temp_v5 + 0x40) + 0x10;
        *(int *)(temp_v5 + 0x40) = temp_v8;
        if (temp_v8 >= 0x100) {
          temp_v8 = 0xff;
        }
        *(int *)(temp_v5 + 0x40) = temp_v8;
      }
    }
  }
  else {
    temp_v8 = *(int *)(temp_v5 + 0x44);
    if (temp_v8 < 1) {
      temp_v8 = *(int *)(temp_v5 + 0x40) - 0x10;
      *(int *)(temp_v5 + 0x40) = temp_v8;
      if (temp_v8 < 1) {
        *(unsigned int *)(temp_v5 + 0x40) = 0;
        *(unsigned int *)(temp_v5 + 0x3c) = 0;
      }
    }
    else {
      *(int *)(temp_v5 + 0x44) = temp_v8 - 1;
    }
  }
  if ((*(char *)(temp_v5 + 0x1d) != '\0') &&
     (temp_v8 = *(int *)(temp_v5 + 0x20) + 1, *(int *)(temp_v5 + 0x20) = temp_v8, temp_v8 >= 0x79)) {
    *(unsigned char *)(temp_v5 + 0x1d) = 0;
    FUN_00203d04(1);
  }
  temp_v5 = DAT_00581288;
  if (temp_v32 == 0) {
    *(unsigned char *)(DAT_00581288 + 0x194) = 0;
  }
  else {
    if (*(char *)(DAT_00581288 + 0x194) == '\0') {
      *(unsigned char *)(DAT_00581288 + 0x195) = 1;
    }
    *(unsigned char *)(temp_v5 + 0x194) = 1;
  }
  temp_v5 = DAT_00581288;
  if (!temp_v3) {
    *(unsigned char *)(DAT_00581288 + 0x196) = 0;
  }
  else {
    if (*(char *)(DAT_00581288 + 0x196) == '\0') {
      *(char *)(DAT_00581288 + 0x198) = (char)temp_v30;
      *(unsigned char *)(temp_v5 + 0x197) = 1;
    }
    *(unsigned char *)(temp_v5 + 0x196) = 1;
  }
  temp_v5 = DAT_0058103c;
  temp_v26[1] = 0.6f;
  acStack_f8[0] = -0x66;
  acStack_f8[1] = -0x67;
  acStack_f8[2] = '\x19';
  acStack_f8[3] = '?';
  acStack_f8[4] = -0x66;
  acStack_f8[5] = -0x67;
  acStack_f8[6] = '\x19';
  acStack_f8[7] = '?';
  if (*(char *)(DAT_0058103c + 0xccf0) != '\0') {
    if (*(short *)(DAT_0058103c + 0xccf2) == 0) {
      *(unsigned char *)(DAT_0058103c + 0xccf0) = 0;
    }
    else {
      temp_v16 = 0.5f;
      temp_v23 = 0x40000000;
      temp_v8 = 0;
      temp_v18 = (float)VectorSignedToFloat((int)*(short *)(DAT_0058103c + 0xccf4),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v27[0] = temp_v18 * 0.01f;
      temp_v18 = (float)VectorSignedToFloat((int)*(short *)(DAT_0058103c + 0xccf6),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v27[1] = temp_v18 * 0.01f;
      temp_v18 = (float)VectorSignedToFloat((int)*(short *)(DAT_0058103c + 0xccf8),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v27[2] = temp_v18 * 0.01f;
      do {
        pfVar16 = temp_v27 + temp_v8;
        temp_v18 = *pfVar16;
        if (temp_v18 != (float)((unsigned long long)temp_v24 >> 0x20)) {
          FUN_0025cb1c();
          temp_v19 = *pfVar16;
          temp_v9 = temp_v5 + temp_v8 * 4;
          temp_v17 = *(float *)(temp_v9 + 0xccfc);
          temp_v18 = temp_v18 * temp_v16 * temp_v19 + temp_v19 * temp_v16;
          if (romwright_fabs_4(temp_v17) >= temp_v19 * temp_v26[temp_v8 + 1]) {
            if (temp_v17 <= (float)((unsigned long long)temp_v24 >> 0x20)) {
              temp_v17 = temp_v17 + temp_v18;
            }
            else {
              temp_v17 = temp_v17 - temp_v18;
            }
            *(float *)(temp_v9 + 0xccfc) = temp_v17;
          }
          else {
            FUN_0025cb1c();
            *(float *)(temp_v9 + 0xccfc) =
                 *(float *)(temp_v9 + 0xccfc) + (temp_v17 - temp_v16) * temp_v18 * (float)temp_v23;
          }
          temp_v18 = -*pfVar16;
          if (-*pfVar16 < *(float *)(temp_v9 + 0xccfc)) {
            temp_v18 = *(float *)(temp_v9 + 0xccfc);
          }
          *(float *)(temp_v9 + 0xccfc) = temp_v18;
          if (*pfVar16 < temp_v18) {
            temp_v18 = *pfVar16;
          }
          *(float *)(temp_v9 + 0xccfc) = temp_v18;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 3);
      temp_v6 = *(short *)(temp_v5 + 0xccf2);
      temp_v8 = (int)temp_v6;
      if (0 < temp_v8) {
        temp_v1 = *(short *)(temp_v5 + 0xccf4);
        temp_v7 = aeabi_idivmod((int)temp_v1,temp_v8 + 5);
        *(short *)(temp_v5 + 0xccf4) = temp_v1 - temp_v7;
        temp_v1 = *(short *)(temp_v5 + 0xccf6);
        temp_v7 = aeabi_idivmod((int)temp_v1,temp_v8 + 5);
        *(short *)(temp_v5 + 0xccf6) = temp_v1 - temp_v7;
        temp_v1 = *(short *)(temp_v5 + 0xccf8);
        temp_v7 = aeabi_idivmod((int)temp_v1,temp_v8 + 5);
        *(short *)(temp_v5 + 0xccf8) = temp_v1 - temp_v7;
        *(short *)(temp_v5 + 0xccf2) = temp_v6 - 1;
        return;
      }
    }
  }
  else {
    temp_v15 = (unsigned int)((unsigned long long)temp_v24 >> 0x20);
    *(unsigned int *)(DAT_0058103c + 0xccfc) = temp_v15;
    *(unsigned int *)(temp_v5 + 0xcd00) = temp_v15;
    *(unsigned int *)(temp_v5 + 0xcd04) = temp_v15;
  }
  return;
}
