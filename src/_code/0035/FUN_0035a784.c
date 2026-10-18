/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a784` (_code @ 0x35a784, 0x390 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 8 slot(s), 26 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned char sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_5_stack;

extern int FUN_0035a63c(unsigned short, unsigned short);
extern int FUN_0035a664(char *, unsigned int, int, int);
/* Supplied declaration required: FUN_0035a6f8. */


unsigned int FUN_0035a784(char *param_1,int *param_2,unsigned short *param_3,int *param_4,int param_5)

{
/* irregular: 3 goto(s); 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  char temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  char *pcVar9;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  char temp_v12 [4];
  char temp_v13 [4];
  int temp_v14;
  int temp_v15 [2];
  
  temp_v15[0] = -1;
  temp_v12[0] = '\x01';
  temp_v13[0] = '\x01';
  temp_v14 = -1;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v11 = (unsigned int)(param_1 != (char *)0x0);
  FUN_0035a6f8(temp_v11,param_2,temp_v15,temp_v12,param_3 != (unsigned short *)0x0,param_4,&temp_v14,temp_v13)
  ;
  if ((int)temp_v11 < 0) {
    return temp_v11;
  }
  if ((0 < temp_v14) || (temp_v13[0] == '\0')) {
    temp_v4 = (unsigned int)*param_3;
    temp_v6 = 0;
    if (temp_v4 != 0xfffe) {
      temp_v6 = temp_v4 - 0xfe00;
    }
    if (temp_v4 == 0xfffe || temp_v6 == 0xff) {
      if (param_2 != (int *)0x0) {
        *param_2 = 0;
      }
      *param_4 = 0;
      return 0xd8e14403;
    }
  }
  while( 1 ) {
    temp_v0 = *param_3;
    if ((temp_v0 == 0) || ((temp_v14 <= temp_v8 && (temp_v13[0] != '\0')))) goto LAB_0035aaf8;
    if ((temp_v15[0] <= temp_v9) && (temp_v12[0] != '\0')) break;
    if (param_5 != 0) {
      if ((temp_v14 - temp_v8 < 2) && (temp_v13[0] != '\0')) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = param_3[1];
      }
      temp_v6 = FUN_0035a63c(temp_v0,temp_v3);
      if (temp_v6 < 1) goto LAB_0035a900;
      temp_v1 = FUN_0035a664(param_1,1,param_5,(int)temp_v12[0]);
      if ((temp_v15[0] - temp_v9 < temp_v1) && (temp_v12[0] != '\0')) break;
      temp_v9 = temp_v9 + temp_v1;
      param_3 = param_3 + temp_v6;
      temp_v8 = temp_v8 + temp_v6;
      if (temp_v12[0] != '\0') {
        param_1 = param_1 + temp_v1;
      }
    }
    else {
LAB_0035a900:
      if (temp_v0 < 0x80) {
        temp_v9 = temp_v9 + 1;
        param_3 = param_3 + 1;
        temp_v8 = temp_v8 + 1;
        if (temp_v12[0] != '\0') {
          *param_1 = (char)temp_v0;
          param_1 = param_1 + 1;
        }
      }
      else {
        if (temp_v0 < 0x800) {
          temp_v6 = 1;
          temp_v4 = 2;
        }
        else if ((temp_v0 & 0xf800) != 0xd800) {
          temp_v6 = 1;
          temp_v4 = 3;
        }
        else {
          temp_v6 = 2;
          temp_v4 = 4;
        }
        if ((temp_v14 - temp_v8 < temp_v6) && (temp_v13[0] != '\0')) goto LAB_0035aaf8;
        if (temp_v12[0] != '\0') {
          if (temp_v15[0] - temp_v9 < (int)temp_v4) break;
          if (temp_v6 == 1) {
            temp_v10 = (unsigned int)*param_3;
          }
          else if (temp_v6 != 2) {
            temp_v10 = 0;
          }
          else {
            temp_v10 = (param_3[1] & 0xffff03ef) + ((unsigned int)*param_3 * 0x400 - 0x35f0000);
          }
          if (temp_v4 == 1) {
            *param_1 = (char)temp_v10;
          }
          else {
            if (temp_v4 != 2) {
              if (temp_v4 == 3) {
                temp_v2 = (char)(temp_v10 >> 0xc) - ' ';
              }
              else {
                if (temp_v4 != 4) {
                  param_1 = param_1 + temp_v4;
                  param_3 = param_3 + temp_v6;
                  temp_v8 = temp_v8 + temp_v6;
                  temp_v9 = temp_v9 + temp_v4;
                  continue;
                }
                temp_v2 = (char)(temp_v10 >> 0x12) - '\x10';
              }
              *param_1 = temp_v2;
            }
            else {
              *param_1 = (char)(temp_v10 >> 6) - '@';
            }
            if (0 < (int)(temp_v4 - 1)) {
              temp_v1 = 1;
              pcVar9 = param_1;
              if ((temp_v4 & 1) == 0) {
                pcVar9 = param_1 + 1;
                temp_v1 = 2;
                param_1[1] = ((unsigned char)(temp_v10 >> (((temp_v4 - 2) * 6) & 0xff)) & 0x3f) + 0x80;
              }
              for (temp_v5 = (int)(temp_v4 - 1) >> 1; temp_v5 != 0; temp_v5 = temp_v5 - 1) {
                temp_v7 = temp_v1 + 1;
                pcVar9[1] = ((unsigned char)(temp_v10 >> ((((temp_v4 - temp_v1) - 1) * 6) & 0xff)) & 0x3f) + 0x80;
                temp_v1 = temp_v1 + 2;
                pcVar9 = pcVar9 + 2;
                *pcVar9 = ((unsigned char)(temp_v10 >> ((((temp_v4 - temp_v7) - 1) * 6) & 0xff)) & 0x3f) + 0x80;
              }
            }
          }
          param_1 = param_1 + temp_v4;
        }
        param_3 = param_3 + temp_v6;
        temp_v8 = temp_v8 + temp_v6;
        temp_v9 = temp_v9 + temp_v4;
      }
    }
  }
  temp_v11 = 0xd9014401;
LAB_0035aaf8:
  if (param_4 != (int *)0x0) {
    *param_4 = temp_v8;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = temp_v9;
  }
  return temp_v11;
}
