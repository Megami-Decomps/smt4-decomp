/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ddd10` (_code @ 0x4ddd10, 0x658 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 6 byte(s) */
typedef struct {
    unsigned char sp26; /* 0x26: local_26 */
    unsigned char sp30; /* 0x30: local_30 */
    unsigned short sp42; /* 0x42: local_42 */
    unsigned short sp54; /* 0x54: local_54 */
} param_2_stack;

extern int DAT_0057113c; /* 0x57113c */
extern unsigned int DAT_00571150; /* 0x571150 */
extern unsigned int DAT_00571154; /* 0x571154 */
extern unsigned int DAT_00571160; /* 0x571160 */
extern unsigned int DAT_00571164; /* 0x571164 */
extern unsigned int DAT_00571210; /* 0x571210 */
extern unsigned int DAT_00571214; /* 0x571214 */
extern unsigned int DAT_00571218; /* 0x571218 */
extern unsigned int DAT_0057121c; /* 0x57121c */
extern unsigned int DAT_00571228; /* 0x571228 */
extern unsigned int DAT_0057122c; /* 0x57122c */
extern unsigned int DAT_005712b8; /* 0x5712b8 */
extern unsigned int DAT_005712bc; /* 0x5712bc */
extern unsigned int DAT_005712c0; /* 0x5712c0 */
extern unsigned int DAT_005712c4; /* 0x5712c4 */
extern unsigned int DAT_005712f0; /* 0x5712f0 */
extern int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_001aba54. */
extern int FUN_003e7adc(int);
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f2230. */
extern int FUN_003f298c(int, unsigned int);
/* Supplied declaration required: FUN_003f2aac. */
extern int FUN_0040de1c(unsigned int, unsigned int *);
extern int FUN_004ab8bc(unsigned int);
/* Supplied declaration required: FUN_004ab8e4. */
/* Supplied declaration required: FUN_004c3c84. */
/* Supplied declaration required: FUN_004c571c. */
/* Supplied declaration required: FUN_004c6b8c. */
/* Supplied declaration required: FUN_004f64f4. */
extern int FUN_004f8264(void);
extern int FUN_004f90e0(int, unsigned int);
/* Supplied declaration required: FUN_004f95cc. */
/* Supplied declaration required: FUN_004f99fc. */


unsigned int FUN_004ddd10(int *param_1,unsigned int *param_2)

{
/* irregular: 11 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7 [4];
  unsigned short temp_v8;
  short temp_v9;
  char temp_v10;
  char temp_v11;
  
  temp_v4 = param_2[2];
  switch(temp_v4) {
  case 0:
    temp_v2 = FUN_003f298c(*param_1,0);
    if (temp_v2 != 0) {
      FUN_003f2230(*param_1,0,0x1e);
    }
    param_2[2] = 1;
  case 1:
    temp_v2 = DAT_00573808;
    FUN_004f95cc();
    if (temp_v2 != 0) {
      FUN_004f64f4(DAT_00573808);
      temp_v4 = 2;
      param_2[2] = temp_v4;
    }
    break;
  case 2:
    temp_v2 = FUN_004f8264();
    if (temp_v2 == 0) {
      return 0;
    }
    temp_v4 = *(unsigned int *)(*param_1 + 0x45a0);
    temp_v3 = *(unsigned int *)(*param_1 + 0x45a4);
    if (((DAT_005712b8 & temp_v4) == 0 && (DAT_005712bc & temp_v3) == 0) &&
       ((temp_v3 & DAT_005712c4) == 0 && (DAT_005712c0 & temp_v4) == 0)) {
      param_2[2] = 5;
    }
    else {
      param_2[2] = 3;
    }
    temp_v4 = *(unsigned int *)(*param_1 + 0x45a0);
    temp_v3 = *(unsigned int *)(*param_1 + 0x45a4);
    if (((DAT_00571210 & temp_v4) == 0 && (DAT_00571214 & temp_v3) == 0) ||
       ((temp_v4 & DAT_005712c0) != 0 || (temp_v3 & DAT_005712c4) != 0)) {
      FUN_004f99fc(DAT_00573808,param_2[0x165]);
    }
  case 3:
    param_2[2] = 4;
    break;
  case 4:
    temp_v2 = FUN_004f90e0(DAT_00573808,param_2[0x165]);
    if (temp_v2 == 0) {
      return 0;
    }
    FUN_003e8bb0(temp_v7,*param_1,param_2[8]);
    if (temp_v11 == '\0') {
      param_2[2] = 5;
      break;
    }
    FUN_004ab8e4(DAT_0057a9c8);
    temp_v4 = 6;
    param_2[2] = temp_v4;
    break;
  case 5:
    temp_v3 = param_2[0x15b];
    temp_v6 = temp_v3 == 0;
    if (!temp_v6) {
      temp_v4 = (unsigned int)*(unsigned short *)((int)param_2 + 6);
    }
    if ((temp_v6 || temp_v4 <= temp_v3) && (!temp_v6 && temp_v3 != temp_v4)) {
      return 0;
    }
    temp_v6 = 0;
    switch(*(unsigned short *)(param_2[10] + 0x1be)) {
    case 1:
    case 2:
    case 3:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      if ((((((DAT_00571154 | DAT_00571164) & ((unsigned int *)param_2[8])[1]) == 0 &&
             ((DAT_00571150 | DAT_00571160) & *(unsigned int *)param_2[8]) == 0) ||
           (temp_v2 = FUN_003e7adc(*param_1), temp_v2 != 0)) || ((*param_2 & 0x100000) != 0)) ||
         (*(short *)(param_2[10] + 0x1be) != 9 && *(short *)(param_2[10] + 0x1be) != 10)) {
        if (*(short *)(param_2[10] + 0x1be) == 2) {
          temp_v5 = (int)*(short *)(param_2[10] + 0x1c0);
          temp_v2 = temp_v5;
          FUN_001aba54();
          temp_v0 = '\0';
          if (temp_v2 != 0) {
            temp_v0 = *(char *)(temp_v2 + 0x4d);
          }
          if (temp_v2 != 0 && temp_v0 != '\0') {
            temp_v4 = *(unsigned int *)(*param_1 + 0x45a0);
            temp_v3 = *(unsigned int *)(*param_1 + 0x45a4);
            if (!((DAT_0057121c & temp_v3) == 0 && (DAT_00571218 & temp_v4) == 0)) {
              temp_v4 = *param_2 | 0x80;
              *param_2 = temp_v4;
            }
            else if (!((temp_v4 & DAT_00571228) == 0 && (temp_v3 & DAT_0057122c) == 0)) {
              temp_v4 = *param_2 | 0x1000;
              *param_2 = temp_v4;
            }
          }
          FUN_004c6b8c(param_2[8],temp_v5);
          if (((*(unsigned short *)(param_2[10] + 0x110) & 0x2000) != 0) &&
             ((*(unsigned short *)(temp_v2 + 0x3a) & 0x2000) == 0)) {
            temp_v6 = 1;
          }
        }
        if ((*(unsigned short *)(param_2[10] + 0x110) & 0x10) != 0) {
          FUN_003e8bb0(temp_v7,*param_1,param_2[8]);
          if ((temp_v10 == '\0') || (temp_v2 = FUN_004c6b8c(param_2[8],(int)temp_v9), temp_v2 != 0)) {
            FUN_004c3c84((int)*(short *)(param_2[9] + 0x6a),0x12,0);
          }
          else {
            FUN_004c571c((int)*(short *)(param_2[9] + 0x6a),0x12,1,0);
          }
        }
        if (temp_v6) {
          *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x12;
        }
        else {
          *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0xc;
        }
      }
      else {
        *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x13;
        *param_2 = *param_2 | 0x200000;
      }
      break;
    case 4:
      *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x14;
      break;
    case 5:
    case 6:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x13:
    case 0x14:
      *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x13;
      break;
    case 7:
      *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0xd;
      break;
    case 0xd:
      if (((((unsigned int *)param_2[8])[1] & DAT_00571154) == 0 &&
           (DAT_00571150 & *(unsigned int *)param_2[8]) == 0) ||
         (temp_v2 = FUN_003e7adc(*param_1), temp_v2 != 0)) {
        *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 9;
      }
      else {
        *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x13;
        *param_2 = *param_2 | 0x200000;
      }
      break;
    case 0xe:
      *(unsigned char *)(DAT_0057113c + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x17;
    }
    if ((*(unsigned short *)(param_2[10] + 0x110) & 0x10) == 0) {
      return 1;
    }
    FUN_003e8bb0(temp_v7,*param_1,param_2[8]);
    temp_v1 = *(short *)(param_2[10] + 0x1be);
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if (temp_v1 != 8) {
          return 1;
        }
      }
      else {
        temp_v5 = (int)*(short *)(param_2[10] + 0x1c0);
        temp_v2 = temp_v5;
        FUN_001aba54();
        if ((*(short *)(temp_v2 + 0x86) != 0) && (temp_v2 = FUN_004c6b8c(param_2[8],temp_v5), temp_v2 == 0))
        {
          FUN_003f2aac(*param_1,(int)*(short *)(param_2[9] + 0x6a),0);
          return 1;
        }
      }
      if (temp_v8 >= 2) {
        return 1;
      }
    }
    FUN_003f2aac(*param_1,(int)*(short *)(param_2[9] + 0x6a),0);
    return 1;
  case 6:
    temp_v2 = FUN_0040de1c(DAT_005712f0,param_2);
    if (0 < temp_v2) {
      return 0;
    }
    temp_v2 = FUN_004ab8bc(DAT_0057a9c8);
    if (temp_v2 == 0) {
      return 0;
    }
    param_2[2] = 5;
  default:
    break;
  }
  return 0;
}
