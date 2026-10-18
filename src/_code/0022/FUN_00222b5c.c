/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00222b5c` (_code @ 0x222b5c, 0x4a0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
} param_3_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0024db9c. */
/* Supplied declaration required: FUN_002a8740. */
extern int FUN_002a8764(void);


int FUN_00222b5c(unsigned int *param_1,unsigned int *param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  short *psVar8;
  unsigned int temp_v7;
  int *piVar10;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned char temp_v12;
  unsigned long long temp_v13;
  long long temp_v14;
  long long temp_v15;
  unsigned int *puVar19;
  
  temp_v1 = DAT_0043dcf0;
  if (DAT_0043dcf0 == 0) {
    return 0;
  }
  if (*(char *)(DAT_0043dcf0 + 0x34) == '\0') {
    return (int)*(char *)(temp_v1 + 0x34);
  }
  *param_1 = 0;
  param_1[1] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  puVar19 = param_1;
  temp_v2 = FUN_002a8764();
  if (*(char *)(temp_v1 + 0x35) != '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    temp_v0 = *(char *)(temp_v1 + 0x66c);
    if ((temp_v0 != '\x02') && (!(temp_v0 == '\x03' || temp_v0 == '\x04'))) {
      if (temp_v0 == '\n') {
        temp_v8 = 0;
        do {
          temp_v9 = 0;
          temp_v0 = *(char *)(temp_v1 + temp_v8 + 0xb40);
          if (temp_v0 == '\0') {
            temp_v5 = 0;
            do {
              if ((-1 < *(char *)(temp_v2 + temp_v5 + 0x9108)) &&
                 (temp_v3 = FUN_002a8740(), temp_v10 = temp_v5,
                 (unsigned int)*(unsigned short *)(temp_v3 + 0x46) == *(unsigned int *)(temp_v1 + temp_v8 * 4 + 0xb34))) break;
              temp_v5 = temp_v5 + 1;
              temp_v10 = temp_v9;
            } while (temp_v5 < 0x18);
          }
          else {
            temp_v10 = temp_v9;
            if (temp_v0 == '\x01') {
              temp_v5 = 0;
              do {
                if ((-1 < *(char *)(temp_v2 + temp_v5 + 0x90f0)) &&
                   (temp_v3 = FUN_002a8740(), temp_v10 = temp_v5,
                   (unsigned int)*(unsigned short *)(temp_v3 + 0x46) == *(unsigned int *)(temp_v1 + temp_v8 * 4 + 0xb34))) break;
                temp_v5 = temp_v5 + 1;
                temp_v10 = temp_v9;
              } while (temp_v5 < 0x18);
            }
          }
          temp_v15 = *(long long *)param_1;
          temp_v14 = FUN_0024db9c(1,0,temp_v10 + 1);
          temp_v8 = temp_v8 + 1;
          *(long long *)param_1 = temp_v14 + temp_v15;
        } while (temp_v8 < 2);
        *param_2 = (*(unsigned int *)(temp_v1 + 0xb4c) & 0x1ffff) >> 2;
        param_2[1] = 0;
      }
      else if (temp_v0 != '\v') {
        if (temp_v0 != '\x05' && temp_v0 != '\b') {
          return (int)*(char *)(temp_v1 + 0x34);
        }
        temp_v8 = *(int *)(temp_v1 + 0x670);
        temp_v4 = 9999;
        if (temp_v8 == 9999) {
          param_3 = *(int *)(temp_v1 + 0x674);
        }
        if (!(temp_v8 != 9999 || param_3 != 9999)) {
          if (*(char *)(temp_v1 + 0x678) != '\0') {
            *param_1 = 1;
            param_1[1] = 0;
          }
          if ((*(char *)(temp_v1 + 0x679) != '\0') && (0 < *(char *)(temp_v2 + 0x9108) + 1)) {
            temp_v6 = *param_1;
            temp_v7 = param_1[1];
            temp_v15 = *(long long *)param_1;
            temp_v14 = FUN_0024db9c(1,0);
            if ((temp_v6 & (unsigned int)temp_v14) == 0 && (temp_v7 & (unsigned int)((unsigned long long)temp_v14 >> 0x20)) == 0) {
              *(long long *)param_1 = temp_v14 + temp_v15;
            }
          }
          if ((*(char *)(temp_v1 + 0x67a) != '\0') && (0 < *(char *)(temp_v2 + 0x9109) + 1)) {
            temp_v6 = *param_1;
            temp_v7 = param_1[1];
            temp_v15 = *(long long *)param_1;
            temp_v14 = FUN_0024db9c(1,0);
            if ((temp_v6 & (unsigned int)temp_v14) == 0 && (temp_v7 & (unsigned int)((unsigned long long)temp_v14 >> 0x20)) == 0) {
              *(long long *)param_1 = temp_v14 + temp_v15;
            }
          }
          if ((*(char *)(temp_v1 + 0x67b) != '\0') && (0 < *(char *)(temp_v2 + 0x910a) + 1)) {
            temp_v6 = *param_1;
            temp_v7 = param_1[1];
            temp_v15 = *(long long *)param_1;
            temp_v14 = FUN_0024db9c(1,0);
            if ((temp_v6 & (unsigned int)temp_v14) == 0 && (temp_v7 & (unsigned int)((unsigned long long)temp_v14 >> 0x20)) == 0) {
              *(long long *)param_1 = temp_v14 + temp_v15;
            }
          }
          temp_v2 = 0x18;
          psVar8 = (short *)(temp_v1 + 0x73c);
          piVar10 = (int *)(temp_v1 + 0x738);
          do {
            if ((*psVar8 != 0) && (0 < *piVar10 + 1)) {
              temp_v6 = *param_1;
              temp_v7 = param_1[1];
              temp_v15 = *(long long *)param_1;
              temp_v14 = FUN_0024db9c(1,0);
              if ((temp_v6 & (unsigned int)temp_v14) == 0 && (temp_v7 & (unsigned int)((unsigned long long)temp_v14 >> 0x20)) == 0) {
                *(long long *)param_1 = temp_v14 + temp_v15;
              }
            }
            temp_v2 = temp_v2 - 1;
            psVar8 = psVar8 + 4;
            piVar10 = piVar10 + 2;
          } while (temp_v2 != 0);
        }
        else {
          if (temp_v8 != 9999) {
            param_3 = *(int *)(temp_v1 + 0x674);
          }
          if (temp_v8 != 9999 && param_3 != 9999) {
            temp_v11 = temp_v8 < 0;
            temp_v12 = temp_v8 == 0;
            if (temp_v12) {
              temp_v8 = 1;
              temp_v4 = 0;
            }
            temp_v15 = romwright_piece_4_4(temp_v4,temp_v8);
            if (!temp_v11) {
              if (!temp_v12) {
                temp_v15 = FUN_0024db9c(1,0,*(char *)(temp_v8 + temp_v2 + 0x9107) + 1,1,puVar19);
                *(long long *)param_1 = temp_v15;
              }
              else {
                *(long long *)param_1 = temp_v15;
              }
            }
            else if (-1 < param_3) {
              temp_v15 = FUN_0024db9c(1,0,*(int *)(temp_v1 + param_3 * 8 + 0x738) + 1);
              *(long long *)param_1 = temp_v15;
            }
          }
        }
        *param_2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x36);
        param_2[1] = 0;
      }
      else {
        if (-1 < (int)*(unsigned int *)(temp_v1 + 0x670)) {
          temp_v6 = 1 << (*(unsigned int *)(temp_v1 + 0x670) & 0xff);
          *param_1 = temp_v6;
          param_1[1] = (int)temp_v6 >> 0x1f;
        }
        temp_v2 = 0;
        do {
          temp_v8 = FUN_002a8764();
          if (-1 < *(char *)(temp_v8 + temp_v2 + 0x90f0)) {
            temp_v8 = FUN_002a8764();
            temp_v8 = FUN_002a8740((int)*(char *)(temp_v8 + temp_v2 + 0x90f0));
            if (*(short *)(temp_v8 + 0x46) == *(short *)(temp_v1 + 0xb96)) {
              temp_v13 = FUN_0024db9c(1,0,temp_v2 + 1);
              *(unsigned long long *)param_2 = temp_v13;
              break;
            }
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x18);
      }
    }
    else {
      temp_v2 = 0;
      temp_v6 = 1 << (*(unsigned int *)(temp_v1 + 0x670) & 0xff);
      *param_1 = temp_v6;
      param_1[1] = (int)temp_v6 >> 0x1f;
      do {
        temp_v8 = FUN_002a8764();
        if ((int)*(char *)(temp_v8 + temp_v2 + 0x90f0) ==
            *(int *)(temp_v1 + *(int *)(temp_v1 + 0x674) * 8 + 0x738)) {
          temp_v13 = FUN_0024db9c(1,0,temp_v2 + 1);
          *(unsigned long long *)param_2 = temp_v13;
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x18);
    }
  }
  return (int)*(char *)(temp_v1 + 0x34);
}
