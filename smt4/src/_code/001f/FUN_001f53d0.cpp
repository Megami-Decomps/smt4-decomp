/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f53d0` (_code @ 0x1f53d0, 0xac8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "util/pairSetFirstResetSecond.h"

extern "C" {

int spriteStartAnimationByIndex(...);
int FUN_002bf818(...);
int SBORROW4(unsigned int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: spriteStartAnimationByIndex. */
/* Supplied declaration required: FUN_002bf818. */


void FUN_001f53d0(int param_1)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar6;
  unsigned int temp_v5;
  unsigned int temp_v6;
  short temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  
  temp_v0 = 0;
  temp_v9 = 0;
  temp_v13 = 0.049087387f;
  temp_v12 = 0.0f;
  do {
    temp_v3 = param_1 + temp_v9 * 2;
    if ((-1 < *(short *)(temp_v3 + 0x2194)) && (*(short *)(temp_v3 + 0x21a8) == 1)) {
      FUN_002bf818(param_1 + *(short *)(temp_v3 + 0x2194) * 0x8c + 0x20);
      temp_v4 = param_1 + temp_v9 * 4;
      temp_v11 = *(float *)(temp_v4 + 0x21bc);
      if (*(int *)(param_1 + 0x2184) != 0) {
        temp_v11 = temp_v11 - temp_v13;
      }
      else {
        temp_v11 = temp_v11 + temp_v13;
      }
      *(float *)(temp_v4 + 0x21bc) = temp_v11;
      if (*(char *)(param_1 + *(short *)(temp_v3 + 0x2194) * 0x8c + 0xaa) != '\0') {
        *(unsigned short *)(temp_v3 + 0x2194) = 0xffff;
        *(unsigned short *)(temp_v3 + 0x21a8) = 0;
        *(float *)(param_1 + temp_v9 * 4 + 0x21bc) = temp_v12;
      }
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 10);
  switch(*(unsigned int *)(param_1 + 0x2180)) {
  case 1:
    temp_v9 = 0;
    if (0 < *(short *)(param_1 + 0x218c)) {
      do {
        temp_v3 = param_1 + temp_v9 * 0x8c;
        FUN_002bf818(temp_v3 + 0x20);
        FUN_002bf818(temp_v3 + 0x598);
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x218c));
    }
    if (0 < *(short *)(param_1 + 0x218e)) {
      temp_v9 = 0;
      do {
        FUN_002bf818(param_1 + ((*(short *)(param_1 + 0x218c) - temp_v9) - 1) * 0x8c + 0xb10);
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x218e));
      temp_v13 = *(float *)(param_1 + 0x2188) + 0.1f;
      *(float *)(param_1 + 0x2188) = temp_v13;
      if ((int)temp_v13 >= 0x40c8f5c3) {
        *(float *)(param_1 + 0x2188) = temp_v13 - 6.28f;
      }
    }
    break;
  case 2:
    if (0 < *(short *)(param_1 + 0x218c)) {
      temp_v9 = 0;
      do {
        if (temp_v9 * 2 <= *(int *)(param_1 + 0x217c)) {
          temp_v3 = param_1 + temp_v9 * 0x8c;
          FUN_002bf818(temp_v3 + 0x20);
          if (((temp_v9 * 2 + 2 <= *(int *)(param_1 + 0x217c)) &&
              (FUN_002bf818(temp_v3 + 0xb10), *(short *)(param_1 + 0x218c) - 1 <= temp_v9)) &&
             (*(char *)(temp_v3 + 0xb9a) != '\0')) {
            temp_v0 = 1;
          }
          if (temp_v9 * 2 + 4 <= *(int *)(param_1 + 0x217c)) {
            FUN_002bf818();
            FUN_002bf818();
            if ((*(char *)(temp_v3 + 0x1112) != '\0') && (*(int *)(temp_v3 + 0x59c) == 6)) {
              spriteStartAnimationByIndex(temp_v3 + 0x598,0);
            }
          }
        }
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x218c));
      if (!temp_v0) break;
    }
    temp_v9 = 0;
    if (0 < *(short *)(param_1 + 0x218c)) {
      do {
        temp_v3 = param_1 + temp_v9 * 0x8c;
        spriteStartAnimationByIndex(temp_v3 + 0xb10,6);
        spriteStartAnimationByIndex(temp_v3 + 0x1088,4);
        spriteStartAnimationByIndex(temp_v3 + 0x598,0);
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x218c));
    }
    if (0 < *(short *)(param_1 + 0x218e)) {
      temp_v9 = 0;
      do {
        temp_v6 = (*(short *)(param_1 + 0x218c) - temp_v9) - 1;
        temp_v3 = param_1 + temp_v6 * 0x8c;
        pairSetFirstResetSecond((void *)(temp_v3 + 0x598),6);
        spriteStartAnimationByIndex(temp_v3 + 0x598,1);
        spriteStartAnimationByIndex(temp_v3 + 0xb10,6);
        spriteStartAnimationByIndex(temp_v3 + 0x1088,4);
        if ((temp_v6 < 10) && (temp_v3 = param_1 + temp_v6 * 2, *(short *)(temp_v3 + 0x21e4) < 0)) {
          *(unsigned short *)(temp_v3 + 0x21e4) = 0;
        }
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x218e));
    }
    *(unsigned int *)(param_1 + 0x2180) = 1;
    *(unsigned int *)(param_1 + 0x217c) = 0;
    break;
  case 3:
    temp_v0 = 1;
    if (0 < *(short *)(param_1 + 0x2192)) {
      temp_v9 = (int)*(short *)(param_1 + 0x218c);
      if (0 < *(short *)(param_1 + 0x2190)) {
        temp_v9 = temp_v9 + *(short *)(param_1 + 0x2190);
      }
      temp_v3 = (int)*(short *)(param_1 + 0x218e) + (int)*(short *)(param_1 + 0x2192);
      if ((0 < temp_v3) && (*(int *)(param_1 + 0x217c) == 0xe)) {
        temp_v4 = 0;
        psVar6 = (short *)(param_1 + temp_v9 * 2 + 0x21e2);
        do {
          if (((temp_v9 - temp_v4) - 1U < 10) && (*psVar6 < 0)) {
            *psVar6 = 0;
          }
          temp_v3 = temp_v3 - 1;
          psVar6 = psVar6 + -1;
          temp_v4 = temp_v4 + 1;
        } while (temp_v3 != 0);
      }
      temp_v3 = 0;
      if (temp_v3 < *(short *)(param_1 + 0x2192)) {
        do {
          temp_v4 = (temp_v9 - *(short *)(param_1 + 0x218e)) - temp_v3;
          temp_v2 = (short)temp_v4 + 0x31;
          *(short *)(param_1 + (temp_v4 - 1) * 2 + 0x2194) = temp_v2;
          FUN_002bf818(param_1 + temp_v2 * 0x8c + 0x20);
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < *(short *)(param_1 + 0x2192));
      }
      temp_v3 = (int)*(short *)(param_1 + 0x2192);
      if (*(int *)(param_1 + 0x217c) < 9) {
        if (0 < temp_v3) {
          temp_v4 = 0;
          do {
            temp_v8 = (temp_v9 - *(short *)(param_1 + 0x218e)) - temp_v4;
            temp_v4 = temp_v4 + 1;
            temp_v8 = param_1 + temp_v8 * 4;
            temp_v13 = *(float *)(temp_v8 + 0x21b8);
            if (*(int *)(param_1 + 0x2184) == 0) {
              temp_v13 = temp_v13 + 0.19634955f;
            }
            else {
              temp_v13 = temp_v13 - 0.19634955f;
            }
            temp_v3 = temp_v3 - 1;
            *(float *)(temp_v8 + 0x21b8) = temp_v13;
          } while (temp_v3 != 0);
        }
      }
      else if (0 < temp_v3) {
        temp_v4 = 0;
        do {
          temp_v8 = (temp_v9 - *(short *)(param_1 + 0x218e)) - temp_v4;
          temp_v4 = temp_v4 + 1;
          temp_v8 = param_1 + temp_v8 * 4;
          temp_v11 = *(float *)(temp_v8 + 0x21b8);
          if (*(int *)(param_1 + 0x2184) == 0) {
            temp_v11 = temp_v11 + temp_v13;
          }
          else {
            temp_v11 = temp_v11 - temp_v13;
          }
          temp_v3 = temp_v3 - 1;
          *(float *)(temp_v8 + 0x21b8) = temp_v11;
        } while (temp_v3 != 0);
      }
      temp_v5 = *(unsigned int *)(param_1 + 0x217c);
      temp_v10 = temp_v5 == 0xf;
      temp_v6 = temp_v5;
      if ((int)temp_v5 >= 0xf) {
        temp_v6 = (unsigned int)*(short *)(param_1 + 0x2192);
      }
      temp_v0 = (int)temp_v5 >= 0xf;
      temp_v1 = temp_v5 - 0xf;
      if ((int)temp_v5 >= 0xf) {
        temp_v10 = temp_v6 == 0;
        temp_v1 = temp_v6;
      }
      if (!temp_v10 && (int)temp_v1 < 0 == ((int)temp_v5 < 0xf && SBORROW4(temp_v5,0xf))) {
        temp_v6 = temp_v6 & 1;
        if (temp_v6 == 1) {
          *(unsigned short *)(param_1 + (temp_v9 - *(short *)(param_1 + 0x218e)) * 2 + 0x21a6) = 1;
        }
        temp_v5 = (unsigned int)(temp_v6 == 1);
        if ((int)temp_v6 < (int)*(short *)(param_1 + 0x2192)) {
          do {
            temp_v6 = temp_v6 + 2;
            temp_v3 = temp_v5 + 1;
            *(unsigned short *)
             (param_1 + ((temp_v9 - *(short *)(param_1 + 0x218e)) - temp_v5) * 2 + 0x21a6) = 1;
            temp_v5 = temp_v5 + 2;
            *(unsigned short *)
             (param_1 + ((temp_v9 - *(short *)(param_1 + 0x218e)) - temp_v3) * 2 + 0x21a6) = 1;
          } while ((int)temp_v6 < (int)*(short *)(param_1 + 0x2192));
        }
      }
    }
    if (0 < *(short *)(param_1 + 0x2190)) {
      temp_v9 = 0;
      if (0 < (int)*(short *)(param_1 + 0x2190) + (int)*(short *)(param_1 + 0x218c)) {
        do {
          temp_v3 = param_1 + temp_v9 * 0x8c;
          FUN_002bf818(temp_v3 + 0x20);
          FUN_002bf818(temp_v3 + 0x598);
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < (int)*(short *)(param_1 + 0x218c) + (int)*(short *)(param_1 + 0x2190));
      }
      if (*(char *)(param_1 + ((int)*(short *)(param_1 + 0x218c) + (int)*(short *)(param_1 + 0x2190)
                              ) * 0x8c + 0x1c) == '\0') {
        temp_v0 = 0;
      }
    }
    if (*(short *)(param_1 + 0x2190) < 0) {
      temp_v9 = 0;
      if (temp_v9 < *(short *)(param_1 + 0x218c)) {
        do {
          temp_v4 = param_1 + temp_v9 * 0x8c;
          temp_v3 = FUN_002bf818(temp_v4 + 0x20);
          if (temp_v3 == 0) {
            FUN_002bf818(temp_v4 + 0x598);
            FUN_002bf818(temp_v4 + 0xb10);
            FUN_002bf818(temp_v4 + 0x1088);
            *(unsigned short *)(param_1 + temp_v9 * 2 + 0x21e4) = 0xffff;
          }
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < *(short *)(param_1 + 0x218c));
      }
      if (*(char *)(param_1 + *(short *)(param_1 + 0x218c) * 0x8c + 0x1c) == '\0' || !temp_v0) break;
      temp_v9 = 0;
      if (0 < *(short *)(param_1 + 0x218c)) {
        do {
          temp_v3 = param_1 + temp_v9 * 0x8c;
          *(unsigned char *)(temp_v3 + 0xb95) = 0;
          *(unsigned char *)(temp_v3 + 0x110d) = 0;
          temp_v9 = temp_v9 + 1;
        } while (temp_v9 < *(short *)(param_1 + 0x218c));
        goto LAB_001f5adc;
      }
    }
    else {
LAB_001f5adc:
      if (!temp_v0) break;
    }
    temp_v2 = *(short *)(param_1 + 0x218c) + *(short *)(param_1 + 0x2190);
    temp_v9 = 0;
    temp_v7 = *(short *)(param_1 + 0x218e) + *(short *)(param_1 + 0x2192);
    *(short *)(param_1 + 0x218c) = temp_v2;
    *(short *)(param_1 + 0x218e) = temp_v7;
    if (temp_v7 < 0) {
      *(unsigned short *)(param_1 + 0x218e) = 0;
    }
    temp_v7 = *(short *)(param_1 + 0x218e);
    if (temp_v2 < *(short *)(param_1 + 0x218e)) {
      temp_v7 = temp_v2;
    }
    *(short *)(param_1 + 0x218e) = temp_v7;
    *(unsigned short *)(param_1 + 0x2190) = 0;
    *(unsigned short *)(param_1 + 0x2192) = 0;
    if (0 < temp_v2) {
      do {
        temp_v3 = param_1 + temp_v9 * 0x8c;
        spriteStartAnimationByIndex(temp_v3 + 0xb10,6);
        spriteStartAnimationByIndex(temp_v3 + 0x1088,4);
        spriteStartAnimationByIndex(temp_v3 + 0x598,0);
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x218c));
    }
    if (0 < *(short *)(param_1 + 0x218e)) {
      temp_v9 = 0;
      do {
        temp_v3 = param_1 + ((*(short *)(param_1 + 0x218c) - temp_v9) - 1) * 0x8c;
        pairSetFirstResetSecond((void *)(temp_v3 + 0x598),6);
        spriteStartAnimationByIndex(temp_v3 + 0x598,1);
        spriteStartAnimationByIndex(temp_v3 + 0xb10,6);
        spriteStartAnimationByIndex(temp_v3 + 0x1088,4);
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x218e));
    }
    *(unsigned int *)(param_1 + 0x2180) = 1;
    *(unsigned int *)(param_1 + 0x217c) = 0;
    break;
  case 4:
    if (0 < *(short *)(param_1 + 0x218c)) {
      temp_v9 = 0;
      do {
        if (temp_v9 * 2 <= *(int *)(param_1 + 0x217c)) {
          FUN_002bf818((param_1 + (*(short *)(param_1 + 0x218c) - temp_v9) * 0x8c) - 0x6c);
          FUN_002bf818(param_1 + (*(short *)(param_1 + 0x218c) - temp_v9) * 0x8c + 0x50c);
          if (*(short *)(param_1 + 0x218c) - 1 <= temp_v9) {
            temp_v0 = 1;
          }
        }
        temp_v9 = temp_v9 + 1;
      } while (temp_v9 < *(short *)(param_1 + 0x218c));
      if (!temp_v0) break;
    }
    temp_v9 = 0;
    do {
      *(unsigned char *)(param_1 + temp_v9 * 0x8c + 0xa5) = 0;
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 0x3d);
    *(float *)(param_1 + 0x2188) = temp_v12;
    *(unsigned short *)(param_1 + 0x218c) = 0;
    *(unsigned short *)(param_1 + 0x218e) = 0;
    *(unsigned int *)(param_1 + 0x2180) = 0;
    *(unsigned int *)(param_1 + 0x217c) = 0;
    break;
  case 5:
    temp_v9 = FUN_002bf818(param_1 + 0x20f0);
    if (temp_v9 == 0) break;
    *(unsigned int *)(param_1 + 0x2180) = 1;
    *(unsigned int *)(param_1 + 0x217c) = 0;
    break;
  case 6:
    temp_v9 = FUN_002bf818(param_1 + 0x20f0);
    if (temp_v9 != 0) {
      *(unsigned int *)(param_1 + 0x2180) = 0;
      *(unsigned int *)(param_1 + 0x217c) = 0;
    }
  }
  temp_v9 = 0;
  do {
    temp_v3 = param_1 + temp_v9 * 0x8c;
    if (*(float *)(temp_v3 + 0x44) <= temp_v12) {
      *(unsigned char *)(temp_v3 + 0xa5) = 0;
    }
    if (*(float *)(temp_v3 + 0x40) <= temp_v12) {
      *(unsigned char *)(temp_v3 + 0xa5) = 0;
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 0x3d);
  temp_v9 = 0;
  do {
    temp_v3 = param_1 + temp_v9 * 2;
    temp_v2 = *(short *)(temp_v3 + 0x21e4);
    if (temp_v2 < 0) {
      temp_v3 = param_1 + temp_v9 * 0x8c;
      if (*(char *)(temp_v3 + 0x168a) == '\0') {
        FUN_002bf818(temp_v3 + 0x1600);
      }
    }
    else {
      if (!(*(int *)(param_1 + 0x2180) == 1 || *(int *)(param_1 + 0x2180) == 3)) {
        *(unsigned short *)(temp_v3 + 0x21e4) = 0xffff;
      }
      else {
        if (temp_v2 < 0xf) {
          if (temp_v2 == 1) {
            spriteStartAnimationByIndex(param_1 + temp_v9 * 0x8c + 0x1600,0xb);
          }
          if (*(short *)(temp_v3 + 0x21e4) == 0) {
            temp_v6 = 0xfa1;
            if (*(int *)(param_1 + 0x2184) == 0) {
              temp_v6 = 4000;
            }
            pairSetFirstResetSecond((void *)(param_1 + temp_v9 * 0x8c + 0x20),temp_v6);
          }
        }
        else if (temp_v2 == 0xf) {
          temp_v6 = (unsigned int)(*(int *)(param_1 + 0x2184) != 0);
          pairSetFirstResetSecond((void *)(param_1 + temp_v9 * 0x8c + 0x20),temp_v6);
        }
        FUN_002bf818(param_1 + temp_v9 * 0x8c + 0x1600);
      }
      temp_v2 = *(short *)(temp_v3 + 0x21e4) + 1;
      *(short *)(temp_v3 + 0x21e4) = temp_v2;
      if (temp_v2 >= 0x20) {
        *(unsigned short *)(temp_v3 + 0x21e4) = 0;
      }
    }
    temp_v9 = temp_v9 + 1;
    if (temp_v9 >= 10) {
      *(int *)(param_1 + 0x217c) = *(int *)(param_1 + 0x217c) + 1;
      return;
    }
  } while( 1 );
}

} /* extern "C" */
