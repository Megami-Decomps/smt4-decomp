/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5df4` (_code @ 0x2c5df4, 0x918 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0035d1e0(void);
int FUN_00376f48(void);
int FUN_003fd76c(...);
int FUN_003fdb18(...);
int VectorSignedToFloat(int, int);

/* stack frame of void: 11 slot(s), 44 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern signed char DAT_005f161f; /* 0x5f161f */
extern signed char DAT_0060ff9c; /* 0x60ff9c */
extern unsigned int DAT_0060ffa4; /* 0x60ffa4 */
extern int iRam006104d4; /* 0x6104d4 */
extern int iRam006104d8; /* 0x6104d8 */
extern int DAT_006105d4; /* 0x6105d4 */
extern int DAT_006105d8; /* 0x6105d8 */
extern int DAT_006105dc; /* 0x6105dc */
extern int DAT_006105e0; /* 0x6105e0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameFlagsGetBlock(void);
extern int FUN_00297008(int);
extern int FUN_00355418(int);
/* Supplied declaration required: FUN_0035d1e0. */
/* Supplied declaration required: FUN_00376f48. */
extern int FUN_00376f94(void);
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fdb18. */


void FUN_002c5df4(void)

{
/* irregular: 4 goto(s); irregular input(s): in_fpscr; 5 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned int temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  float temp_v19;
  unsigned int temp_v20;
  float temp_v21;
  int temp_v22;
  int temp_v23 [15];
  
  temp_v22 = gameFlagsGetBlock();
  temp_v9 = 0;
  temp_v5 = 0;
  if (DAT_005f161f != '\0') {
    do {
      temp_v9 = 0;
      if (temp_v9 < (int)(&DAT_0060ffa4)[temp_v5]) {
        do {
          temp_v3 = temp_v9 * 4;
          temp_v9 = temp_v9 + 1;
          temp_v3 = *(int *)(*(int *)(temp_v5 * 0x100 + temp_v3 + 0x60ffd4) + 4);
          *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 3;
        } while (temp_v9 < (int)(&DAT_0060ffa4)[temp_v5]);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 6);
    if (DAT_006105d8 != 0) {
      *(unsigned int *)(*(int *)(DAT_006105d8 + 4) + 4) = *(unsigned int *)(*(int *)(DAT_006105d8 + 4) + 4) | 3;
    }
    if (DAT_006105d4 != 0) {
      *(unsigned int *)(*(int *)(DAT_006105d4 + 4) + 4) = *(unsigned int *)(*(int *)(DAT_006105d4 + 4) + 4) | 3;
    }
    if (DAT_006105dc != 0) {
      *(unsigned int *)(*(int *)(DAT_006105dc + 4) + 4) = *(unsigned int *)(*(int *)(DAT_006105dc + 4) + 4) | 3;
    }
    if (DAT_006105e0 != 0) {
      *(unsigned int *)(*(int *)(DAT_006105e0 + 4) + 4) = *(unsigned int *)(*(int *)(DAT_006105e0 + 4) + 4) | 3;
    }
    DAT_0060ff9c = '\x01';
  }
  else {
    do {
      temp_v3 = 0;
      if (temp_v3 < (int)(&DAT_0060ffa4)[temp_v5]) {
        do {
          temp_v4 = temp_v3 * 4;
          temp_v3 = temp_v3 + 1;
          temp_v4 = *(int *)(*(int *)(temp_v5 * 0x100 + temp_v4 + 0x60ffd4) + 4);
          *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 4) & 0xfffffffc;
        } while (temp_v3 < (int)(&DAT_0060ffa4)[temp_v5]);
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 6);
    if (DAT_006105d8 != 0) {
      *(unsigned int *)(*(int *)(DAT_006105d8 + 4) + 4) =
           *(unsigned int *)(*(int *)(DAT_006105d8 + 4) + 4) & 0xfffffffc;
    }
    if (DAT_006105d4 != 0) {
      *(unsigned int *)(*(int *)(DAT_006105d4 + 4) + 4) =
           *(unsigned int *)(*(int *)(DAT_006105d4 + 4) + 4) & 0xfffffffc;
    }
    if (DAT_006105dc != 0) {
      *(unsigned int *)(*(int *)(DAT_006105dc + 4) + 4) =
           *(unsigned int *)(*(int *)(DAT_006105dc + 4) + 4) & 0xfffffffc;
    }
    if (DAT_006105e0 != 0) {
      *(unsigned int *)(*(int *)(DAT_006105e0 + 4) + 4) =
           *(unsigned int *)(*(int *)(DAT_006105e0 + 4) + 4) & 0xfffffffc;
    }
    if (DAT_0060ff9c != '\0') {
      FUN_00376f48();
      FUN_0035d1e0();
      temp_v5 = temp_v22;
      temp_v23[0] = 0;
      temp_v23[1] = 0;
      temp_v23[2] = 0;
      temp_v23[3] = 0;
      temp_v23[4] = 0;
      temp_v23[5] = 0;
      temp_v3 = 0;
      if ('\0' < *(char *)(temp_v22 + 0xe05)) {
        temp_v23[6] = temp_v22 + 0x1400;
        temp_v16 = 0x442f000043af0000;
        temp_v18 = 0x42c8000000000000;
        temp_v14 = 0;
        do {
          temp_v4 = 0;
          if ('\0' < *(char *)(temp_v5 + 0xe04)) {
            temp_v10 = temp_v22 + temp_v3 * 0x78;
            do {
              temp_v6 = temp_v10 + temp_v4 * 8;
              if (*(char *)(temp_v6 + 0x42) == '\x01') {
                temp_v7 = 0;
                temp_v12 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v13 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v17 = (float)((unsigned long long)temp_v16 >> 0x20);
                temp_v19 = (float)temp_v16 + temp_v12 * temp_v17;
                temp_v21 = (float)temp_v16 + temp_v13 * temp_v17;
                temp_v20 = (unsigned int)(temp_v14 >> 0x20);
                temp_v0 = *(unsigned char *)(temp_v6 + 0x41);
                if (temp_v0 != 0x30) {
                  if (0x30 >= temp_v0) {
                    if (temp_v0 != 0x12) {
                      if (0x12 >= temp_v0) {
                        if (temp_v0 != 0) {
                          if (temp_v0 != 0x10) {
                            if (temp_v0 == 0x11) {
                              temp_v7 = *(int *)(temp_v23[1] * 4 + 0x6100d4);
                              goto LAB_002c61b0;
                            }
                          }
                          else {
                            temp_v14 = (unsigned long long)temp_v20 << 0x20;
                            temp_v7 = *(int *)(temp_v23[1] * 4 + 0x6100d4);
                            temp_v23[1] = temp_v23[1] + 1;
                            if (temp_v7 != 0) {
                              temp_v11 = *(int *)(temp_v7 + 4);
                              FUN_003fd76c(temp_v11,&temp_v19);
                              FUN_003fdb18(temp_v11);
                              *(unsigned int *)(temp_v11 + 4) = *(unsigned int *)(temp_v11 + 4) & 0xfffffffc;
                            }
                          }
                        }
                        else {
                          temp_v14 = (unsigned long long)temp_v20 << 0x20;
                          temp_v7 = *(int *)(temp_v23[0] * 4 + 0x60ffd4);
                          temp_v23[0] = temp_v23[0] + 1;
                          if (temp_v7 != 0) {
                            temp_v11 = *(int *)(temp_v7 + 4);
                            FUN_003fd76c(temp_v11,&temp_v19);
                            FUN_003fdb18(temp_v11);
                            *(unsigned int *)(temp_v11 + 4) = *(unsigned int *)(temp_v11 + 4) & 0xfffffffc;
                          }
                        }
                      }
                      else {
                        if (temp_v0 != 0x13) {
                          if (temp_v0 != 0x20) {
                            if (temp_v0 != 0x21) goto LAB_002c63b8;
                            temp_v14 = (unsigned long long)temp_v20 << 0x20;
                            temp_v7 = *(int *)(temp_v23[2] * 4 + 0x6101d4);
                            temp_v23[2] = temp_v23[2] + 1;
                          }
                          else {
                            temp_v14 = (unsigned long long)temp_v20 << 0x20;
                            temp_v7 = *(int *)(temp_v23[2] * 4 + 0x6101d4);
                            temp_v23[2] = temp_v23[2] + 1;
                          }
                        }
                        else {
                          temp_v7 = *(int *)(temp_v23[1] * 4 + 0x6100d4);
LAB_002c61b0:
                          temp_v14 = (unsigned long long)temp_v20 << 0x20;
                          temp_v23[1] = temp_v23[1] + 1;
                        }
                        if (temp_v7 != 0) {
                          temp_v11 = *(int *)(temp_v7 + 4);
                          FUN_003fd76c(temp_v11,&temp_v19);
                          FUN_003fdb18(temp_v11);
                          *(unsigned int *)(temp_v11 + 4) = *(unsigned int *)(temp_v11 + 4) & 0xfffffffc;
                        }
                      }
                    }
                    else {
                      temp_v14 = (unsigned long long)temp_v20 << 0x20;
                      temp_v7 = *(int *)(temp_v23[1] * 4 + 0x6100d4);
                      temp_v23[1] = temp_v23[1] + 1;
                      if (temp_v7 != 0) {
                        temp_v11 = *(int *)(temp_v7 + 4);
                        FUN_003fd76c(temp_v11,&temp_v19);
                        FUN_003fdb18(temp_v11);
                        *(unsigned int *)(temp_v11 + 4) = *(unsigned int *)(temp_v11 + 4) & 0xfffffffc;
                      }
                    }
                  }
                  else {
                    if (temp_v0 != 0x40) {
                      if (temp_v0 < 0x41) {
                        if (temp_v0 != 0x31) {
                          if (temp_v0 != 0x32) {
                            if (temp_v0 != 0x33) goto LAB_002c63b8;
                            temp_v14 = (unsigned long long)temp_v20 << 0x20;
                            temp_v7 = *(int *)(temp_v23[3] * 4 + 0x6102d4);
                          }
                          else {
                            temp_v14 = (unsigned long long)temp_v20 << 0x20;
                            temp_v7 = *(int *)(temp_v23[3] * 4 + 0x6102d4);
                          }
                        }
                        else {
                          temp_v14 = (unsigned long long)temp_v20 << 0x20;
                          temp_v7 = *(int *)(temp_v23[3] * 4 + 0x6102d4);
                        }
                        temp_v23[3] = temp_v23[3] + 1;
                      }
                      else if (temp_v0 != 0x41) {
                        if (temp_v0 != 0x42) {
                          if (temp_v0 != 0x43) goto LAB_002c63b8;
                          temp_v14 = (unsigned long long)temp_v20 << 0x20;
                          temp_v7 = *(int *)(temp_v23[4] * 4 + 0x6103d4);
                          temp_v23[4] = temp_v23[4] + 1;
                        }
                        else {
                          temp_v14 = (unsigned long long)temp_v20 << 0x20;
                          temp_v7 = *(int *)(temp_v23[4] * 4 + 0x6103d4);
                          temp_v23[4] = temp_v23[4] + 1;
                        }
                      }
                      else {
                        temp_v14 = (unsigned long long)temp_v20 << 0x20;
                        temp_v7 = *(int *)(temp_v23[4] * 4 + 0x6103d4);
                        temp_v23[4] = temp_v23[4] + 1;
                      }
                    }
                    else {
                      temp_v14 = (unsigned long long)temp_v20 << 0x20;
                      temp_v7 = *(int *)(temp_v23[4] * 4 + 0x6103d4);
                      temp_v23[4] = temp_v23[4] + 1;
                    }
                    if (temp_v7 != 0) {
                      temp_v11 = *(int *)(temp_v7 + 4);
                      FUN_003fd76c(temp_v11,&temp_v19);
                      FUN_003fdb18(temp_v11);
                      *(unsigned int *)(temp_v11 + 4) = *(unsigned int *)(temp_v11 + 4) & 0xfffffffc;
                    }
                  }
                }
                else {
                  temp_v14 = (unsigned long long)temp_v20 << 0x20;
                  temp_v7 = *(int *)(temp_v23[3] * 4 + 0x6102d4);
                  temp_v23[3] = temp_v23[3] + 1;
                  if (temp_v7 != 0) {
                    temp_v11 = *(int *)(temp_v7 + 4);
                    FUN_003fd76c(temp_v11,&temp_v19);
                    FUN_003fdb18(temp_v11);
                    *(unsigned int *)(temp_v11 + 4) = *(unsigned int *)(temp_v11 + 4) & 0xfffffffc;
                  }
                }
LAB_002c63b8:
                if (*(char *)(temp_v6 + 0x3e) == '\x01') {
                  temp_v11 = FUN_00376f94();
                  if ((temp_v11 < 100) ||
                     (((temp_v2 = FUN_00355418((int)*(float *)(temp_v23[6] + 0x1c4)),
                       temp_v11 = DAT_006105d8, temp_v2 != 0 &&
                       (temp_v2 = FUN_00355418((int)*(float *)(temp_v23[6] + 0x1c4)),
                       temp_v11 = DAT_006105e0, temp_v2 != 1)) &&
                      (temp_v2 = FUN_00355418((int)*(float *)(temp_v23[6] + 0x1c4)), temp_v11 = temp_v7,
                      temp_v2 == 2)))) {
                    temp_v11 = iRam006104d4;
                  }
                  if (temp_v11 != 0) {
                    temp_v1 = *(char *)(temp_v6 + 0x40);
                    temp_v15 = (unsigned int)(temp_v14 >> 0x20);
                    temp_v12 = (float)((unsigned long long)temp_v18 >> 0x20);
                    if (temp_v1 != '\x01') {
                      if (temp_v1 != '\x02') {
                        if (temp_v1 != '\x03') {
                          if (temp_v1 == '\x04') {
                            temp_v21 = temp_v21 + temp_v12;
                            temp_v14 = (unsigned long long)temp_v15 << 0x20;
                          }
                        }
                        else {
                          temp_v21 = temp_v21 - temp_v12;
                          temp_v14 = (unsigned long long)temp_v15 << 0x20;
                        }
                      }
                      else {
                        temp_v19 = temp_v19 + temp_v12;
                        temp_v14 = (unsigned long long)temp_v15 << 0x20;
                      }
                    }
                    else {
                      temp_v19 = temp_v19 - temp_v12;
                      temp_v14 = (unsigned long long)temp_v15 << 0x20;
                    }
                    temp_v8 = *(unsigned int *)(temp_v11 + 4);
                    FUN_003fd76c(temp_v8,&temp_v19);
                    FUN_003fdb18(temp_v8);
                  }
                }
                if (*(char *)(temp_v6 + 0x3f) == '\x01') {
                  temp_v11 = FUN_00376f94();
                  temp_v7 = iRam006104d8;
                  if ((temp_v11 >= 100) &&
                     (temp_v11 = FUN_00297008((int)*(float *)(temp_v23[6] + 0x1c4)),
                     temp_v7 = iRam006104d8, temp_v11 != 0)) {
                    temp_v7 = DAT_006105d4;
                  }
                  if (temp_v7 != 0) {
                    temp_v1 = *(char *)(temp_v6 + 0x40);
                    temp_v15 = (unsigned int)(temp_v14 >> 0x20);
                    temp_v12 = (float)((unsigned long long)temp_v18 >> 0x20);
                    if (temp_v1 != '\x01') {
                      if (temp_v1 != '\x02') {
                        if (temp_v1 != '\x03') {
                          if (temp_v1 == '\x04') {
                            temp_v21 = temp_v21 + temp_v12;
                            temp_v14 = (unsigned long long)temp_v15 << 0x20;
                          }
                        }
                        else {
                          temp_v21 = temp_v21 - temp_v12;
                          temp_v14 = (unsigned long long)temp_v15 << 0x20;
                        }
                      }
                      else {
                        temp_v19 = temp_v19 + temp_v12;
                        temp_v14 = (unsigned long long)temp_v15 << 0x20;
                      }
                    }
                    else {
                      temp_v19 = temp_v19 - temp_v12;
                      temp_v14 = (unsigned long long)temp_v15 << 0x20;
                    }
                    temp_v8 = *(unsigned int *)(temp_v7 + 4);
                    FUN_003fd76c(temp_v8,&temp_v19);
                    FUN_003fdb18(temp_v8);
                  }
                }
                temp_v15 = (unsigned int)(temp_v14 >> 0x20);
                if (*(char *)(temp_v6 + 0x43) != '\x02') {
                  if (*(char *)(temp_v6 + 0x43) == '\x01') {
                    temp_v7 = *(int *)(temp_v9 * 4 + 0x6104dc);
                    if (temp_v7 != 0) {
                      temp_v1 = *(char *)(temp_v6 + 0x40);
                      if (temp_v1 == '\x01') {
                        temp_v14 = (unsigned long long)temp_v15 << 0x20;
                      }
                      else if (temp_v1 == '\x02') {
                        temp_v14 = temp_v14 & 0xffffffff00000000;
                      }
                      else if (temp_v1 == '\x03') {
                        temp_v14 = temp_v14 & 0xffffffff00000000;
                      }
                      else if (temp_v1 == '\x04') {
                        temp_v14 = temp_v14 & 0xffffffff00000000;
                      }
                      temp_v8 = *(unsigned int *)(temp_v7 + 4);
                      FUN_003fd76c(temp_v8,&temp_v19);
                      FUN_003fdb18(temp_v8);
                    }
                    temp_v9 = temp_v9 + 1;
                  }
                }
                else {
                  temp_v6 = *(int *)(temp_v9 * 4 + 0x6104dc);
                  if (temp_v6 != 0) {
                    temp_v8 = *(unsigned int *)(temp_v6 + 4);
                    temp_v14 = (unsigned long long)temp_v15 << 0x20;
                    FUN_003fd76c(temp_v8,&temp_v19);
                    FUN_003fdb18(temp_v8);
                  }
                  temp_v9 = temp_v9 + 1;
                }
              }
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < *(char *)(temp_v5 + 0xe04));
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < *(char *)(temp_v5 + 0xe05));
      }
      temp_v5 = 0;
      do {
        temp_v9 = temp_v23[temp_v5];
        if (temp_v9 < (int)(&DAT_0060ffa4)[temp_v5]) {
          do {
            temp_v3 = temp_v9 * 4;
            temp_v9 = temp_v9 + 1;
            temp_v3 = *(int *)(*(int *)(temp_v5 * 0x100 + temp_v3 + 0x60ffd4) + 4);
            *(unsigned int *)(temp_v3 + 4) = *(unsigned int *)(temp_v3 + 4) | 1;
          } while (temp_v9 < (int)(&DAT_0060ffa4)[temp_v5]);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 5);
      return;
    }
  }
  return;
}

} /* extern "C" */
