/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00190e48` (_code @ 0x190e48, 0x9e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029a268(...);
int FUN_002b1fc4(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002c5d5c(float [24], unsigned char *, int, int);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 23 slot(s), 92 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
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
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
} void_stack;

extern unsigned char LAB_00141adc; /* 0x141adc */
extern int DAT_0043da2c; /* 0x43da2c */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0029a268. */
/* Supplied declaration required: FUN_002b1fc4. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5d5c. */
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002ebf80(unsigned short);


void FUN_00190e48(void)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int *piVar9;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int in_fpscr;
  unsigned int temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  char acStack_130 [8];
  float temp_v21 [24];
  int aiStack_c8 [6];
  int aiStack_b0 [7];
  char acStack_94 [8];
  char acStack_8c [8];
  unsigned char temp_v22 [12];
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  float temp_v39;
  float temp_v40;
  
  temp_v5 = DAT_0043da2c;
  temp_v19 = 0;
  temp_v20 = 0;
  FUN_002c5d5c(temp_v21,&LAB_00141adc,0x10,6);
  temp_v10 = 0;
  temp_v16 = 255.0f;
  temp_v17 = 0.003921569f;
  temp_v7 = 0;
  do {
    temp_v9 = temp_v5 + temp_v7 * 4;
    if ((*(char *)(temp_v9 + 0x494) != '\0') &&
       (temp_v8 = temp_v5 + temp_v7 * 0x8c, *(char *)(temp_v8 + 0xb9) != '\0')) {
      acStack_130[temp_v7] = '\x01';
      temp_v3 = FUN_002beda4(temp_v8 + 0x34);
      aiStack_c8[temp_v7] = temp_v3 + *(short *)(temp_v8 + 0x4c);
      temp_v3 = FUN_002bed98(temp_v8 + 0x34);
      aiStack_b0[temp_v7] = temp_v3 + *(short *)(temp_v8 + 0x4e);
      temp_v11 = VectorFloatToUnsigned(*(float *)(temp_v8 + 0x54) * temp_v16,3);
      temp_v6 = (temp_v11 & 0xff) - 0x100;
      temp_v22[temp_v7] = (unsigned char)temp_v11;
      temp_v15 = (float)VectorUnsignedToFloat(temp_v6 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v12 = (float)VectorUnsignedToFloat((temp_v6 & 0xff0000) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3)
      ;
      temp_v13 = (float)VectorUnsignedToFloat((temp_v6 & 0xff00) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v14 = (float)VectorUnsignedToFloat(temp_v6 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v21[temp_v7 * 4] = temp_v15 * temp_v17;
      temp_v21[temp_v7 * 4 + 1] = temp_v12 * temp_v17;
      temp_v21[temp_v7 * 4 + 2] = temp_v13 * temp_v17;
      temp_v21[temp_v7 * 4 + 3] = temp_v14 * temp_v17;
      acStack_94[temp_v7] = '\x01';
      acStack_8c[temp_v7] = '\x01';
      temp_v0 = *(char *)(temp_v9 + 0x494);
      if (temp_v0 == '\x12' || temp_v0 == '\x11') {
        acStack_94[temp_v7] = '\0';
        acStack_8c[temp_v7] = '\0';
      }
      else if ((((temp_v0 == '\a' || temp_v0 == '\n') || (temp_v0 == '\v' || temp_v0 == '\f')) ||
               (temp_v0 == '\r' || temp_v0 == '\x0e')) || (temp_v0 == '\x0f' || temp_v0 == '\x10')) {
        acStack_94[temp_v7] = '\0';
      }
      temp_v10 = temp_v10 + 1;
    }
    else {
      acStack_130[temp_v7] = '\0';
    }
    temp_v9 = DAT_0044ea00;
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 6);
  if (temp_v10 != 0) {
    temp_v7 = FUN_002c5da8(6,1,0);
    piVar9 = (int *)(temp_v9 + 0x12ac);
    temp_v10 = piVar9[*piVar9 + 2];
    piVar9[*piVar9 + 2] = temp_v7;
    if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v10 != temp_v7) {
      (**(romwright_code **)(temp_v9 + 0x12c8))();
      *(unsigned char *)(temp_v9 + 0x12c4) = 0;
    }
    temp_v7 = 0;
    do {
      if (acStack_130[temp_v7] != '\0') {
        temp_v9 = aiStack_c8[temp_v7];
        temp_v10 = aiStack_b0[temp_v7];
        temp_v23 = temp_v21[temp_v7 * 4];
        temp_v24 = temp_v21[temp_v7 * 4 + 1];
        temp_v25 = temp_v21[temp_v7 * 4 + 2];
        temp_v26 = temp_v21[temp_v7 * 4 + 3];
        temp_v27 = temp_v23;
        temp_v28 = temp_v24;
        temp_v29 = temp_v25;
        temp_v30 = temp_v26;
        temp_v31 = temp_v23;
        temp_v32 = temp_v24;
        temp_v33 = temp_v25;
        temp_v34 = temp_v26;
        temp_v35 = temp_v23;
        temp_v36 = temp_v24;
        temp_v37 = temp_v25;
        temp_v38 = temp_v26;
        FUN_002b1fc4(&temp_v35,&temp_v27,&temp_v31,&temp_v23,0,1);
        temp_v0 = *(char *)(temp_v5 + temp_v7 * 4 + 0x494);
        if (((!(temp_v0 == '\a' || temp_v0 == '\n')) && (!(temp_v0 == '\v' || temp_v0 == '\f'))) &&
           ((!(temp_v0 == '\r' || temp_v0 == '\x0e') && (!(temp_v0 == '\x0f' || temp_v0 == '\x10'))))) {
          if (temp_v0 != '\x11') {
            if (temp_v0 != '\b') {
              temp_v1 = *(char *)(temp_v5 + temp_v7 + 0x4b8);
              if (temp_v0 != '\t') {
                if (temp_v1 != '\0') {
                  FUN_002bf288(2,0x12,4,temp_v9,temp_v10,0xb);
                }
                else {
                  FUN_002bf288(2,0x12,2,temp_v9,temp_v10,0xb);
                }
              }
              else if (temp_v1 != '\0') {
                FUN_002bf380(2,0x12,2,temp_v9,temp_v10,0xb);
              }
              else {
                FUN_002bf380(2,0x12,6,temp_v9,temp_v10,0xb);
              }
            }
            else if (*(char *)(temp_v5 + temp_v7 + 0x4b8) != '\0') {
              FUN_002bf380(2,0x12,5,temp_v9,temp_v10,0xb);
            }
            else {
              FUN_002bf380(2,0x12,3,temp_v9,temp_v10,0xb);
            }
          }
          else {
            FUN_002bf380(2,0x12,0,temp_v9,temp_v10,0xb);
          }
        }
        else if (*(char *)(temp_v5 + temp_v7 + 0x4b8) != '\0') {
          FUN_002bf380(2,0x12,2,temp_v9,temp_v10,0xb);
        }
        else {
          FUN_002bf380(2,0x12,0,temp_v9,temp_v10,0xb);
        }
      }
      temp_v10 = DAT_0044ea00;
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 6);
    temp_v7 = FUN_002c5da8(6,7,0);
    piVar9 = (int *)(temp_v10 + 0x12ac);
    temp_v9 = piVar9[*piVar9 + 2];
    piVar9[*piVar9 + 2] = temp_v7;
    if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v9 != temp_v7) {
      (**(romwright_code **)(temp_v10 + 0x12c8))();
      *(unsigned char *)(temp_v10 + 0x12c4) = 0;
    }
    temp_v7 = 0;
    temp_v16 = temp_v21[0];
    do {
      if (acStack_130[temp_v7] != '\0') {
        temp_v12 = temp_v21[temp_v7 * 4];
        temp_v9 = aiStack_c8[temp_v7];
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v16 == temp_v12) << 0x1e);
        temp_v10 = aiStack_b0[temp_v7];
        temp_v2 = temp_v22[temp_v7];
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
          temp_v26 = temp_v21[temp_v7 * 4 + 1];
          temp_v27 = temp_v21[temp_v7 * 4 + 2];
          temp_v28 = temp_v21[temp_v7 * 4 + 3];
          temp_v16 = temp_v12;
          temp_v25 = temp_v12;
          temp_v29 = temp_v12;
          temp_v30 = temp_v26;
          temp_v31 = temp_v27;
          temp_v32 = temp_v28;
          temp_v33 = temp_v12;
          temp_v34 = temp_v26;
          temp_v35 = temp_v27;
          temp_v36 = temp_v28;
          temp_v37 = temp_v12;
          temp_v38 = temp_v26;
          temp_v39 = temp_v27;
          temp_v40 = temp_v28;
          FUN_002b1fc4(&temp_v25,&temp_v29,&temp_v33,&temp_v37,0,1);
        }
        temp_v0 = acStack_8c[temp_v7];
        if (acStack_94[temp_v7] != '\0') {
          temp_v1 = *(char *)(temp_v5 + temp_v7 * 4 + 0x494);
          temp_v8 = temp_v9;
          if (temp_v1 != '\x05') {
            if (temp_v1 != '\x06') {
              if (temp_v1 != '\x01') {
                if (temp_v1 != '\x02') {
                  if (temp_v1 != '\x03') {
                    if (temp_v1 != '\x04') {
                      if (temp_v1 != '\b') {
                        if (temp_v1 == '\t') {
                          temp_v1 = *(char *)(temp_v5 + temp_v7 + 0x4b8);
                          if (temp_v1 == '\0') {
                            temp_v19 = 5;
                          }
                          else {
                            temp_v19 = 6;
                          }
                          temp_v20 = 0xd;
                        }
                      }
                      else {
                        if (*(char *)(temp_v5 + temp_v7 + 0x4b8) == '\0') {
                          temp_v19 = 5;
                        }
                        else {
                          temp_v19 = 6;
                        }
                        temp_v20 = 0xe;
                        temp_v8 = FUN_002bf4f8(0x12,0x57);
                        temp_v8 = (int)*(short *)(temp_v8 + 8);
                      }
                    }
                    else {
                      if (*(char *)(temp_v5 + temp_v7 + 0x4b8) == '\0') {
                        temp_v19 = 5;
                      }
                      else {
                        temp_v19 = 6;
                      }
                      temp_v20 = 0xe;
                    }
                  }
                  else {
                    temp_v1 = *(char *)(temp_v5 + temp_v7 + 0x4b8);
                    if (temp_v1 == '\0') {
                      temp_v19 = 5;
                    }
                    else {
                      temp_v19 = 6;
                    }
                    temp_v20 = 0xd;
                  }
                }
                else {
                  if (*(char *)(temp_v5 + temp_v7 + 0x4b8) == '\0') {
                    temp_v19 = 5;
                  }
                  else {
                    temp_v19 = 6;
                  }
                  temp_v20 = 0xc;
                }
              }
              else {
                if (*(char *)(temp_v5 + temp_v7 + 0x4b8) == '\0') {
                  temp_v19 = 5;
                }
                else {
                  temp_v19 = 6;
                }
                temp_v20 = 0xb;
              }
            }
            else {
              if (*(char *)(temp_v5 + temp_v7 + 0x4b8) == '\0') {
                temp_v19 = 7;
              }
              else {
                temp_v19 = 8;
              }
              temp_v20 = 0x10;
            }
          }
          else {
            if (*(char *)(temp_v5 + temp_v7 + 0x4b8) == '\0') {
              temp_v19 = 9;
            }
            else {
              temp_v19 = 10;
            }
            temp_v20 = 0xf;
          }
          FUN_002bf288(2,0x12,temp_v19,temp_v8,temp_v10,0xc);
          if (*(char *)(temp_v5 + temp_v7 + 0x4b8) != '\0') {
            temp_v25 = (float)VectorUnsignedToFloat(0,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v27 = (float)VectorUnsignedToFloat(0,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v26 = (float)VectorUnsignedToFloat(0,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v25 = temp_v25 * temp_v17;
            temp_v28 = (float)VectorUnsignedToFloat((unsigned int)temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v27 = temp_v27 * temp_v17;
            temp_v26 = temp_v26 * temp_v17;
            temp_v28 = temp_v28 * temp_v17;
            temp_v29 = temp_v25;
            temp_v30 = temp_v26;
            temp_v31 = temp_v27;
            temp_v32 = temp_v28;
            temp_v33 = temp_v25;
            temp_v34 = temp_v26;
            temp_v35 = temp_v27;
            temp_v36 = temp_v28;
            temp_v37 = temp_v25;
            temp_v38 = temp_v26;
            temp_v39 = temp_v27;
            temp_v40 = temp_v28;
            FUN_002b1fc4(&temp_v25,&temp_v29,&temp_v33,&temp_v37,0,1);
            FUN_002bf288(2,0x12,temp_v20,temp_v8,temp_v10,0x10);
            temp_v6 = temp_v2 - 0x100;
            temp_v16 = (float)VectorUnsignedToFloat(temp_v6 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v16 = temp_v16 * temp_v17;
            temp_v26 = (float)VectorUnsignedToFloat
                                        ((temp_v6 & 0xff0000) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v28 = (float)VectorUnsignedToFloat(temp_v6 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v26 = temp_v26 * temp_v17;
            temp_v28 = temp_v28 * temp_v17;
            temp_v27 = (float)VectorUnsignedToFloat
                                        ((temp_v6 & 0xff00) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v27 = temp_v27 * temp_v17;
            temp_v25 = temp_v16;
            temp_v29 = temp_v16;
            temp_v30 = temp_v26;
            temp_v31 = temp_v27;
            temp_v32 = temp_v28;
            temp_v33 = temp_v16;
            temp_v34 = temp_v26;
            temp_v35 = temp_v27;
            temp_v36 = temp_v28;
            temp_v37 = temp_v16;
            temp_v38 = temp_v26;
            temp_v39 = temp_v27;
            temp_v40 = temp_v28;
            FUN_002b1fc4(&temp_v37,&temp_v33,&temp_v29,&temp_v25,0,1);
          }
          else {
            FUN_002bf288(2,0x12,temp_v20,temp_v8,temp_v10,0x10);
          }
        }
        if (temp_v0 != '\0') {
          temp_v4 = FUN_002ebf80(*(unsigned short *)(temp_v5 + temp_v7 * 4 + 0x496) & 0xff);
          FUN_002bf288(2,0x12,temp_v4,temp_v9,temp_v10,0xd);
        }
      }
      temp_v10 = DAT_0044ea00;
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 6);
    temp_v7 = FUN_002c5da8(6,1,0);
    piVar9 = (int *)(temp_v10 + 0x12ac);
    temp_v9 = piVar9[*piVar9 + 2];
    piVar9[*piVar9 + 2] = temp_v7;
    if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v9 != temp_v7) {
      (**(romwright_code **)(temp_v10 + 0x12c8))();
      *(unsigned char *)(temp_v10 + 0x12c4) = 0;
    }
    temp_v18 = (unsigned long long)(unsigned int)temp_v21[0];
    temp_v7 = 0;
    do {
      if (acStack_130[temp_v7] != '\0') {
        temp_v16 = temp_v21[temp_v7 * 4];
        if ((float)temp_v18 != temp_v16) {
          temp_v18 = (unsigned long long)(unsigned int)temp_v16;
          temp_v24 = temp_v21[temp_v7 * 4 + 1];
          temp_v25 = temp_v21[temp_v7 * 4 + 2];
          temp_v26 = temp_v21[temp_v7 * 4 + 3];
          temp_v23 = temp_v16;
          temp_v27 = temp_v16;
          temp_v28 = temp_v24;
          temp_v29 = temp_v25;
          temp_v30 = temp_v26;
          temp_v31 = temp_v16;
          temp_v32 = temp_v24;
          temp_v33 = temp_v25;
          temp_v34 = temp_v26;
          temp_v35 = temp_v16;
          temp_v36 = temp_v24;
          temp_v37 = temp_v25;
          temp_v38 = temp_v26;
          FUN_002b1fc4(&temp_v23,&temp_v27,&temp_v31,&temp_v35,0,1);
        }
        FUN_0029a268(temp_v5 + temp_v7 * 0x8c + 0x34);
      }
      temp_v10 = DAT_0044ea00;
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 6);
    temp_v5 = FUN_002c5da8(6,7,0);
    piVar9 = (int *)(temp_v10 + 0x12ac);
    temp_v7 = piVar9[*piVar9 + 2];
    piVar9[*piVar9 + 2] = temp_v5;
    if (*(char *)(temp_v10 + 0x12c4) != '\0' || temp_v7 != temp_v5) {
      (**(romwright_code **)(temp_v10 + 0x12c8))();
      *(unsigned char *)(temp_v10 + 0x12c4) = 0;
    }
  }
  return;
}

} /* extern "C" */
