/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035ab1c` (_code @ 0x35ab1c, 0x318 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 8 slot(s), 26 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned char sp50; /* 0x50: local_50 */
    unsigned char sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
} param_5_stack;

extern int FUN_0035a63c(unsigned char, unsigned char);
extern int FUN_0035a664(unsigned short *, unsigned int, int, int);
/* Supplied declaration required: FUN_0035a6f8. */


void FUN_0035ab1c(unsigned short *param_1,int *param_2,unsigned char *param_3,int *param_4,int param_5)

{
/* irregular: 3 goto(s); 1 native warning(s); review required */
  unsigned char *pbVar1;
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  char temp_v9 [4];
  char temp_v10 [4];
  int temp_v11 [6];
  unsigned short *puStack_34;
  int *temp_v12;
  unsigned char *pbStack_2c;
  int *piStack_28;
  
  temp_v11[0] = -1;
  temp_v8 = -1;
  temp_v9[0] = '\x01';
  temp_v10[0] = '\x01';
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v5 = (unsigned int)(param_1 != (unsigned short *)0x0);
  puStack_34 = param_1;
  temp_v12 = param_2;
  pbStack_2c = param_3;
  piStack_28 = param_4;
  FUN_0035a6f8(temp_v5,param_2,&temp_v8,temp_v9,param_3 != (unsigned char *)0x0,param_4,temp_v11,temp_v10);
  if (-1 < (int)temp_v5) {
    if (((temp_v11[0] >= 3) || (temp_v10[0] == '\0')) && (*param_3 == 0xef)) {
      if ((param_3[1] != 0xbb) || (param_3[2] != 0xbf)) goto LAB_0035adfc;
      temp_v6 = 3;
      param_3 = param_3 + 3;
    }
    while (*param_3 != 0) {
LAB_0035adfc:
      if (((temp_v11[0] <= temp_v6) && (temp_v10[0] != '\0')) ||
         ((temp_v0 = *param_3, temp_v8 <= temp_v7 && (temp_v9[0] != '\0')))) break;
      if (param_5 != 0) {
        if ((temp_v11[0] - temp_v6 < 2) && (temp_v10[0] != '\0')) {
          temp_v4 = 0;
        }
        else {
          temp_v4 = param_3[1];
        }
        temp_v1 = FUN_0035a63c(temp_v0,temp_v4);
        if (temp_v1 < 1) goto LAB_0035ac98;
        temp_v2 = FUN_0035a664(param_1,2,param_5,(int)temp_v9[0]);
        if ((temp_v8 - temp_v7 < temp_v2) && (temp_v9[0] != '\0')) break;
        temp_v7 = temp_v7 + temp_v2;
        param_3 = param_3 + temp_v1;
        temp_v6 = temp_v6 + temp_v1;
        if (temp_v9[0] != '\0') {
          param_1 = param_1 + temp_v2;
        }
      }
      else {
LAB_0035ac98:
        if (temp_v0 < 0x80) {
          temp_v7 = temp_v7 + 1;
          param_3 = param_3 + 1;
          temp_v6 = temp_v6 + 1;
          if (temp_v9[0] != '\0') {
            *param_1 = (unsigned short)temp_v0;
            param_1 = param_1 + 1;
          }
        }
        else {
          if ((temp_v0 & 0xe0) == 0xc0) {
            temp_v5 = 2;
            temp_v1 = 1;
          }
          else if ((temp_v0 & 0xf0) == 0xe0) {
            temp_v5 = 3;
            temp_v1 = 1;
          }
          else {
            if ((temp_v0 & 0xf8) != 0xf0) break;
            temp_v5 = 4;
            temp_v1 = 2;
          }
          if ((temp_v11[0] - temp_v6 < (int)temp_v5) && (temp_v10[0] != '\0')) break;
          if (temp_v5 == 1) {
            temp_v3 = (unsigned int)*param_3;
          }
          else {
            if (temp_v5 == 2) {
              temp_v3 = *param_3 & 0x1f;
            }
            else if (temp_v5 == 3) {
              temp_v3 = *param_3 & 0xf;
            }
            else {
              if (temp_v5 != 4) break;
              temp_v3 = *param_3 & 7;
            }
            temp_v2 = 1;
            if (temp_v2 < (int)temp_v5) {
              do {
                pbVar1 = param_3 + temp_v2;
                if ((*pbVar1 & 0xc0) != 0x80) goto LAB_0035ae14;
                temp_v2 = temp_v2 + 1;
                temp_v3 = (*pbVar1 & 0x3f) + temp_v3 * 0x40;
              } while (temp_v2 < (int)temp_v5);
            }
          }
          if (temp_v3 == 0) break;
          if (temp_v9[0] != '\0') {
            if (temp_v8 - temp_v7 < temp_v1) break;
            if (temp_v1 == 1) {
              *param_1 = (unsigned short)temp_v3;
            }
            else if (temp_v1 == 2) {
              *param_1 = (short)(temp_v3 >> 10) + 0xd7c0;
              param_1[1] = ((unsigned short)temp_v3 & 0x3ff) + 0xdc00;
            }
            param_1 = param_1 + temp_v1;
          }
          temp_v7 = temp_v7 + temp_v1;
          param_3 = param_3 + temp_v5;
          temp_v6 = temp_v6 + temp_v5;
        }
      }
    }
LAB_0035ae14:
    if (param_4 != (int *)0x0) {
      *param_4 = temp_v6;
    }
    if (temp_v12 != (int *)0x0) {
      *temp_v12 = temp_v7;
    }
  }
  return;
}
