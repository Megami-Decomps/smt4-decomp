/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b1838` (_code @ 0x2b1838, 0xca0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(...);
int FUN_001846d0(...);
int FUN_00184b80(...);
int SBORROW4(int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */
extern int FUN_00291e14(void);


void FUN_002b1838(int param_1)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  short *psVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  short temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar12;
  unsigned char temp_v10;
  int *piVar14;
  int *piVar15;
  unsigned char temp_v11;
  unsigned char temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  
  temp_v10 = 0;
  temp_v9 = 0;
  piVar14 = (int *)(param_1 + 0x2440);
  temp_v16 = 0x3d490fdb;
  temp_v15 = 0.0f;
  do {
    temp_v1 = param_1 + temp_v9 * 2;
    if ((-1 < *(short *)(temp_v1 + 0x2450)) && (*(short *)(temp_v1 + 0x2464) == 1)) {
      FUN_00163aa4(param_1 + *(short *)(temp_v1 + 0x2450) * 0x8c + 0x20);
      temp_v2 = param_1 + temp_v9 * 4;
      temp_v13 = *(float *)(temp_v2 + 0x2478);
      if (*piVar14 != 0) {
        temp_v13 = temp_v13 - (float)temp_v16;
      }
      else {
        temp_v13 = temp_v13 + (float)temp_v16;
      }
      *(float *)(temp_v2 + 0x2478) = temp_v13;
      if (*(char *)(param_1 + *(short *)(temp_v1 + 0x2450) * 0x8c + 0xaa) != '\0') {
        *(unsigned short *)(temp_v1 + 0x2450) = 0xffff;
        *(unsigned short *)(temp_v1 + 0x2464) = 0;
        *(float *)(param_1 + temp_v9 * 4 + 0x2478) = temp_v15;
      }
    }
    temp_v13 = (float)temp_v16;
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 10);
  piVar15 = (int *)(param_1 + 0x243c);
  temp_v9 = param_1 + 0x217c;
  piVar12 = (int *)(param_1 + 0x2438);
  switch(*piVar15) {
  case 1:
    temp_v9 = 0;
    if (0 < *(short *)(param_1 + 0x2448)) {
      do {
        temp_v1 = param_1 + temp_v9 * 0x8c;
        FUN_00163aa4(temp_v1 + 0x20);
        FUN_00163aa4(temp_v1 + 0x598);
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x2448));
    }
    if (0 < *(short *)(param_1 + 0x244a)) {
      temp_v9 = 0;
      do {
        FUN_00163aa4(param_1 + ((*(short *)(param_1 + 0x2448) - temp_v9) - 1) * 0x8c + 0xb10);
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x244a));
      temp_v13 = *(float *)(param_1 + 0x2444) + 0.1f;
      *(float *)(param_1 + 0x2444) = temp_v13;
      if ((int)temp_v13 >= 0x40c8f5c3) {
        *(float *)(param_1 + 0x2444) = temp_v13 - 6.28f;
      }
    }
    break;
  case 2:
    if (0 < *(short *)(param_1 + 0x2448)) {
      temp_v1 = 0;
      do {
        if (temp_v1 * 2 <= *piVar12) {
          temp_v2 = param_1 + temp_v1 * 0x8c;
          FUN_00163aa4(temp_v2 + 0x20);
          if (temp_v1 < 4) {
            if (temp_v1 == 0) {
              FUN_00163aa4(temp_v9);
            }
            FUN_00163aa4(temp_v2 + 0x2208);
          }
          if (((temp_v1 * 2 + 2 <= *piVar12) &&
              (FUN_00163aa4(temp_v2 + 0xb10), *(short *)(param_1 + 0x2448) - 1 <= temp_v1)) &&
             (*(char *)(temp_v2 + 0xb9a) != '\0')) {
            temp_v10 = 1;
          }
          if (temp_v1 * 2 + 4 <= *piVar12) {
            FUN_00163aa4();
            FUN_00163aa4();
            if ((*(char *)(temp_v2 + 0x1112) != '\0') && (*(int *)(temp_v2 + 0x59c) == 6)) {
              FUN_001846d0(temp_v2 + 0x598,0);
            }
          }
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(short *)(param_1 + 0x2448));
      if (!temp_v10) break;
    }
    temp_v9 = 0;
    if (0 < *(short *)(param_1 + 0x2448)) {
      do {
        temp_v1 = param_1 + temp_v9 * 0x8c;
        FUN_001846d0(temp_v1 + 0xb10,6);
        FUN_001846d0(temp_v1 + 0x1088,4);
        FUN_001846d0(temp_v1 + 0x598,0);
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x2448));
    }
    if (0 < *(short *)(param_1 + 0x244a)) {
      temp_v9 = 0;
      do {
        temp_v3 = (*(short *)(param_1 + 0x2448) - temp_v9) - 1;
        temp_v1 = param_1 + temp_v3 * 0x8c;
        FUN_00184b80(temp_v1 + 0x598,6);
        FUN_001846d0(temp_v1 + 0x598,1);
        FUN_001846d0(temp_v1 + 0xb10,6);
        FUN_001846d0(temp_v1 + 0x1088,4);
        if ((temp_v3 < 10) && (temp_v1 = param_1 + temp_v3 * 2, *(short *)(temp_v1 + 0x24a0) < 0)) {
          *(unsigned short *)(temp_v1 + 0x24a0) = 0;
        }
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x244a));
    }
    *piVar15 = 1;
    *piVar12 = 0;
    break;
  case 3:
    temp_v10 = 1;
    if (0 < *(short *)(param_1 + 0x244e)) {
      temp_v1 = (int)*(short *)(param_1 + 0x2448);
      if (0 < *(short *)(param_1 + 0x244c)) {
        temp_v1 = temp_v1 + *(short *)(param_1 + 0x244c);
      }
      temp_v2 = (int)*(short *)(param_1 + 0x244a) + (int)*(short *)(param_1 + 0x244e);
      if ((0 < temp_v2) && (*piVar12 == 0xe)) {
        temp_v7 = 0;
        psVar4 = (short *)(param_1 + temp_v1 * 2 + 0x249e);
        do {
          if (((temp_v1 - temp_v7) - 1U < 10) && (*psVar4 < 0)) {
            *psVar4 = 0;
          }
          temp_v2 = temp_v2 - 1;
          psVar4 = psVar4 + -1;
          temp_v7 = temp_v7 + 1;
        } while (temp_v2 != 0);
      }
      temp_v2 = 0;
      if (temp_v2 < *(short *)(param_1 + 0x244e)) {
        do {
          temp_v7 = (temp_v1 - *(short *)(param_1 + 0x244a)) - temp_v2;
          temp_v0 = (short)temp_v7 + 0x31;
          *(short *)(param_1 + (temp_v7 - 1) * 2 + 0x2450) = temp_v0;
          FUN_00163aa4(param_1 + temp_v0 * 0x8c + 0x20);
          temp_v13 = (float)temp_v16;
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < *(short *)(param_1 + 0x244e));
      }
      temp_v2 = (int)*(short *)(param_1 + 0x244e);
      if (*piVar12 < 9) {
        if (0 < temp_v2) {
          temp_v7 = 0;
          do {
            temp_v8 = (temp_v1 - *(short *)(param_1 + 0x244a)) - temp_v7;
            temp_v7 = temp_v7 + 1;
            temp_v8 = param_1 + temp_v8 * 4;
            temp_v13 = *(float *)(temp_v8 + 0x2474);
            if (*piVar14 == 0) {
              temp_v13 = temp_v13 + 0.19634955f;
            }
            else {
              temp_v13 = temp_v13 - 0.19634955f;
            }
            temp_v2 = temp_v2 - 1;
            *(float *)(temp_v8 + 0x2474) = temp_v13;
          } while (temp_v2 != 0);
        }
      }
      else if (0 < temp_v2) {
        temp_v7 = 0;
        do {
          temp_v8 = (temp_v1 - *(short *)(param_1 + 0x244a)) - temp_v7;
          temp_v7 = temp_v7 + 1;
          temp_v8 = param_1 + temp_v8 * 4;
          temp_v14 = *(float *)(temp_v8 + 0x2474);
          if (*piVar14 == 0) {
            temp_v14 = temp_v14 + temp_v13;
          }
          else {
            temp_v14 = temp_v14 - temp_v13;
          }
          temp_v2 = temp_v2 - 1;
          *(float *)(temp_v8 + 0x2474) = temp_v14;
        } while (temp_v2 != 0);
      }
      temp_v2 = *piVar12;
      temp_v11 = temp_v2 == 0xf;
      temp_v10 = temp_v2 >= 0xf;
      if (temp_v10) {
        temp_v3 = (unsigned int)*(short *)(param_1 + 0x244e);
      }
      else {
        temp_v3 = 0;
      }
      temp_v4 = temp_v2 - 0xf;
      if (temp_v2 >= 0xf) {
        temp_v11 = temp_v3 == 0;
        temp_v4 = temp_v3;
      }
      if (!temp_v11 && (int)temp_v4 < 0 == (temp_v2 < 0xf && SBORROW4(temp_v2,0xf))) {
        temp_v3 = temp_v3 & 1;
        if (temp_v3 == 1) {
          *(unsigned short *)(param_1 + (temp_v1 - *(short *)(param_1 + 0x244a)) * 2 + 0x2462) = 1;
        }
        temp_v4 = (unsigned int)(temp_v3 == 1);
        if ((int)temp_v3 < (int)*(short *)(param_1 + 0x244e)) {
          do {
            temp_v3 = temp_v3 + 2;
            temp_v2 = temp_v4 + 1;
            *(unsigned short *)(param_1 + ((temp_v1 - *(short *)(param_1 + 0x244a)) - temp_v4) * 2 + 0x2462)
                 = 1;
            temp_v4 = temp_v4 + 2;
            *(unsigned short *)(param_1 + ((temp_v1 - *(short *)(param_1 + 0x244a)) - temp_v2) * 2 + 0x2462)
                 = 1;
          } while ((int)temp_v3 < (int)*(short *)(param_1 + 0x244e));
        }
      }
    }
    if (0 < *(short *)(param_1 + 0x244c)) {
      temp_v1 = 0;
      if (temp_v1 < (int)*(short *)(param_1 + 0x244c) + (int)*(short *)(param_1 + 0x2448)) {
        do {
          temp_v2 = param_1 + temp_v1 * 0x8c;
          FUN_00163aa4(temp_v2 + 0x20);
          FUN_00163aa4(temp_v2 + 0x598);
          if (temp_v1 < 4) {
            if (temp_v1 == 0) {
              FUN_00163aa4(temp_v9);
            }
            FUN_00163aa4(temp_v2 + 0x2208);
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < (int)*(short *)(param_1 + 0x244c) + (int)*(short *)(param_1 + 0x2448));
      }
      if (*(char *)(param_1 + ((int)*(short *)(param_1 + 0x2448) + (int)*(short *)(param_1 + 0x244c)
                              ) * 0x8c + 0x1c) == '\0') {
        temp_v10 = 0;
      }
    }
    if (*(short *)(param_1 + 0x244c) < 0) {
      temp_v1 = 0;
      if (0 < *(short *)(param_1 + 0x2448)) {
        do {
          FUN_00163aa4(temp_v9);
          do {
            FUN_00163aa4(param_1 + temp_v1 * 0x8c + 0x2208);
            do {
              temp_v7 = param_1 + temp_v1 * 0x8c;
              temp_v2 = FUN_00163aa4(temp_v7 + 0x20);
              if (temp_v2 == 0) {
                FUN_00163aa4(temp_v7 + 0x598);
                FUN_00163aa4(temp_v7 + 0xb10);
                FUN_00163aa4(temp_v7 + 0x1088);
                *(unsigned short *)(param_1 + temp_v1 * 2 + 0x24a0) = 0xffff;
              }
              temp_v1 = temp_v1 + 1;
              if (*(short *)(param_1 + 0x2448) <= temp_v1) goto LAB_002b1fe8;
            } while (temp_v1 >= 4);
          } while (temp_v1 != 0);
        } while( 1 );
      }
LAB_002b1fe8:
      temp_v12 = *(char *)(param_1 + *(short *)(param_1 + 0x2448) * 0x8c + 0x1c) == '\0';
      temp_v11 = 0;
      if (!temp_v12) {
        temp_v11 = temp_v10;
      }
      if (temp_v12 || !temp_v11) break;
      temp_v9 = 0;
      if (0 < *(short *)(param_1 + 0x2448)) {
        do {
          temp_v1 = param_1 + temp_v9 * 0x8c;
          *(unsigned char *)(temp_v1 + 0xb95) = 0;
          *(unsigned char *)(temp_v1 + 0x110d) = 0;
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < *(short *)(param_1 + 0x2448));
        goto LAB_002b2058;
      }
    }
    else {
LAB_002b2058:
      if (!temp_v10) break;
    }
    temp_v0 = *(short *)(param_1 + 0x2448) + *(short *)(param_1 + 0x244c);
    temp_v6 = *(short *)(param_1 + 0x244a) + *(short *)(param_1 + 0x244e);
    *(short *)(param_1 + 0x2448) = temp_v0;
    *(short *)(param_1 + 0x244a) = temp_v6;
    if (temp_v6 < 0) {
      *(unsigned short *)(param_1 + 0x244a) = 0;
    }
    temp_v6 = *(short *)(param_1 + 0x244a);
    if (temp_v0 < *(short *)(param_1 + 0x244a)) {
      temp_v6 = temp_v0;
    }
    *(short *)(param_1 + 0x244a) = temp_v6;
    *(unsigned short *)(param_1 + 0x244c) = 0;
    temp_v9 = 0;
    *(unsigned short *)(param_1 + 0x244e) = 0;
    if (0 < temp_v0) {
      do {
        temp_v1 = param_1 + temp_v9 * 0x8c;
        FUN_001846d0(temp_v1 + 0xb10,6);
        FUN_001846d0(temp_v1 + 0x1088,4);
        FUN_001846d0(temp_v1 + 0x598,0);
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x2448));
    }
    if (0 < *(short *)(param_1 + 0x244a)) {
      temp_v9 = 0;
      do {
        temp_v1 = param_1 + ((*(short *)(param_1 + 0x2448) - temp_v9) - 1) * 0x8c;
        FUN_00184b80(temp_v1 + 0x598,6);
        FUN_001846d0(temp_v1 + 0x598,1);
        FUN_001846d0(temp_v1 + 0xb10,6);
        FUN_001846d0(temp_v1 + 0x1088,4);
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x244a));
    }
    *piVar15 = 1;
    *piVar12 = 0;
    break;
  case 4:
    if (0 < *(short *)(param_1 + 0x2448)) {
      temp_v1 = 0;
      do {
        if (temp_v1 * 2 <= *piVar12) {
          temp_v2 = (*(short *)(param_1 + 0x2448) - temp_v1) - 1;
          if (temp_v2 < 4) {
            if (temp_v2 == 0) {
              FUN_00163aa4(temp_v9);
            }
            FUN_00163aa4(param_1 + temp_v2 * 0x8c + 0x2208);
          }
          FUN_00163aa4((param_1 + (*(short *)(param_1 + 0x2448) - temp_v1) * 0x8c) - 0x6c);
          FUN_00163aa4(param_1 + (*(short *)(param_1 + 0x2448) - temp_v1) * 0x8c + 0x50c);
          if (*(short *)(param_1 + 0x2448) - 1 <= temp_v1) {
            temp_v10 = 1;
          }
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(short *)(param_1 + 0x2448));
      if (!temp_v10) break;
    }
    temp_v9 = 0;
    do {
      *(unsigned char *)(param_1 + temp_v9 * 0x8c + 0xa5) = 0;
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 0x42);
    *(float *)(param_1 + 0x2444) = temp_v15;
    *(unsigned short *)(param_1 + 0x2448) = 0;
    *(unsigned short *)(param_1 + 0x244a) = 0;
    *piVar15 = 0;
    *piVar12 = 0;
    break;
  case 5:
    temp_v9 = FUN_00163aa4(param_1 + 0x20f0);
    if (temp_v9 == 0) break;
    *piVar15 = 1;
    *piVar12 = 0;
    break;
  case 6:
    temp_v9 = FUN_00163aa4(param_1 + 0x20f0);
    if (temp_v9 != 0) {
      *piVar15 = 0;
      *piVar12 = 0;
    }
  }
  temp_v9 = 0;
  do {
    temp_v1 = param_1 + temp_v9 * 0x8c;
    if (*(float *)(temp_v1 + 0x44) <= temp_v15) {
      *(unsigned char *)(temp_v1 + 0xa5) = 0;
    }
    if (*(float *)(temp_v1 + 0x40) <= temp_v15) {
      *(unsigned char *)(temp_v1 + 0xa5) = 0;
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0x42);
  temp_v9 = 0;
  do {
    temp_v1 = param_1 + temp_v9 * 2;
    temp_v0 = *(short *)(temp_v1 + 0x24a0);
    if (temp_v0 < 0) {
      temp_v1 = param_1 + temp_v9 * 0x8c;
      if (*(char *)(temp_v1 + 0x168a) == '\0') {
        FUN_00163aa4(temp_v1 + 0x1600);
      }
    }
    else {
      if (!(*piVar15 == 1 || *piVar15 == 3)) {
        *(unsigned short *)(temp_v1 + 0x24a0) = 0xffff;
      }
      else {
        if (temp_v0 < 0xf) {
          if (temp_v0 == 1) {
            FUN_001846d0(param_1 + temp_v9 * 0x8c + 0x1600,0xb);
          }
          if (*(short *)(temp_v1 + 0x24a0) == 0) {
            if (*piVar14 != 0) {
              temp_v5 = 0xfa1;
              temp_v2 = param_1 + temp_v9 * 0x8c + 0x20;
            }
            else {
              temp_v2 = FUN_00291e14();
              if (temp_v2 == 0) {
                temp_v5 = 4000;
              }
              else {
                temp_v5 = 0xfb0;
              }
              temp_v2 = param_1 + temp_v9 * 0x8c + 0x20;
            }
            FUN_00184b80(temp_v2,temp_v5);
          }
        }
        else if (temp_v0 == 0xf) {
          if (*piVar14 != 0) {
            temp_v5 = 1;
            temp_v2 = param_1 + temp_v9 * 0x8c + 0x20;
          }
          else {
            temp_v2 = FUN_00291e14();
            if (temp_v2 == 0) {
              temp_v5 = 0;
            }
            else {
              temp_v5 = 0xa3;
            }
            temp_v2 = param_1 + temp_v9 * 0x8c + 0x20;
          }
          FUN_00184b80(temp_v2,temp_v5);
        }
        FUN_00163aa4(param_1 + temp_v9 * 0x8c + 0x1600);
      }
      temp_v0 = *(short *)(temp_v1 + 0x24a0) + 1;
      *(short *)(temp_v1 + 0x24a0) = temp_v0;
      if (temp_v0 >= 0x20) {
        *(unsigned short *)(temp_v1 + 0x24a0) = 0;
      }
    }
    temp_v9 = temp_v9 + 1;
    if (temp_v9 >= 10) {
      *piVar12 = *piVar12 + 1;
      return;
    }
  } while( 1 );
}

} /* extern "C" */
