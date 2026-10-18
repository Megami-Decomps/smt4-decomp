/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c7b4` (_code @ 0x10c7b4, 0x8b0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp130; /* 0x130: local_130 */
} param_6_stack;

extern unsigned char LAB_0010cbc8; /* 0x10cbc8 */
extern unsigned char LAB_0010cbdc; /* 0x10cbdc */
extern unsigned char LAB_0010d064; /* 0x10d064 */

#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
extern int FUN_00118e3c(short);
extern int FUN_0011913c(short);
/* Supplied declaration required: FUN_00119ac8. */
/* Supplied declaration required: FUN_00119ff4. */
extern unsigned int FUN_0011b374(void);
/* Supplied declaration required: FUN_002bcf58. */
extern unsigned int FUN_002bcfcc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bcff0. */
extern unsigned int FUN_002bd020(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd100. */
/* Supplied declaration required: FUN_002bd114. */
extern unsigned int FUN_002bd13c(unsigned short);
/* Supplied declaration required: FUN_002bd1b0. */
/* Supplied declaration required: FUN_002bd25c. */
/* Supplied declaration required: FUN_002bd2e8. */
/* Supplied declaration required: FUN_002bd348. */
extern unsigned int FUN_002bd3ec(void);
/* Supplied declaration required: FUN_002be7fc. */
extern unsigned int FUN_002be828(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c0110. */
/* Supplied declaration required: FUN_002c0128. */
/* Supplied declaration required: FUN_002c4b30. */


unsigned int
FUN_0010c7b4(int param_1,int param_2,unsigned int param_3,int *param_4,unsigned int param_5,
            unsigned int param_6)

{
/* irregular: 15 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned char temp_v11 [128];
  unsigned char temp_v12 [132];
  
  FUN_002c4b30(temp_v11,0x80);
  if (param_1 != 0xf874) {
    if (param_1 < 0xf874) {
      if (param_1 == 0xf844) {
        return 1;
      }
      if (param_1 >= 0xf844) {
        if (param_1 == 0xf870) {
          temp_v6 = FUN_002bd13c(*(unsigned short *)(param_2 + *param_4 * 2 + 2));
          FUN_002bd1b0(temp_v6,temp_v11);
          *param_4 = *param_4 + 1;
          FUN_002bd114(param_3,param_5,0x12f8,param_6);
          temp_v9 = 0;
          do {
            temp_v8 = temp_v9 * 2;
            temp_v9 = temp_v9 + 1;
            temp_v5 = temp_v11[temp_v8 + 1];
            temp_v0 = temp_v11[temp_v8];
            FUN_002bd114(param_3,param_5,romwright_piece_1_1(temp_v5,temp_v0),param_6);
          } while (romwright_piece_1_1(temp_v5,temp_v0) != 0);
          return 1;
        }
        if (param_1 == 0xf871) {
          temp_v6 = FUN_002bd100(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 7);
          FUN_002bf86c(temp_v11,temp_v6);
          *param_4 = *param_4 + 1;
          FUN_002bd114(param_3,param_5,0x12f8,param_6);
          temp_v9 = 0;
          do {
            temp_v8 = temp_v9 * 2;
            temp_v9 = temp_v9 + 1;
            temp_v5 = temp_v11[temp_v8 + 1];
            temp_v0 = temp_v11[temp_v8];
            FUN_002bd114(param_3,param_5,romwright_piece_1_1(temp_v5,temp_v0),param_6);
          } while (romwright_piece_1_1(temp_v5,temp_v0) != 0);
          return 1;
        }
        if (param_1 != 0xf872) {
          if (param_1 != 0xf873) {
            return 0;
          }
          temp_v6 = FUN_002bd100(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 7);
          FUN_002bd2e8(param_3,param_5,temp_v6,param_6);
        }
        else {
          temp_v6 = FUN_002bd100(*(unsigned short *)(param_2 + *param_4 * 2 + 2) - 1);
          FUN_002bf86c(temp_v11,temp_v6);
          FUN_002bd348(temp_v11,temp_v12);
          FUN_002bd2e8(param_3,param_5,temp_v12,param_6);
        }
        *param_4 = *param_4 + 1;
        return 1;
      }
      if (param_1 == 0xf840) {
        return 1;
      }
      if (param_1 == 0xf841) {
        temp_v6 = FUN_002be828(*(unsigned short *)(param_2 + *param_4 * 2 + 2),1);
        FUN_002bf86c(temp_v11,temp_v6);
        FUN_002bd348(temp_v11,temp_v12);
        FUN_002bd2e8(param_3,param_5,temp_v12,param_6);
        *param_4 = *param_4 + 1;
        return 1;
      }
      if (param_1 != 0xf842) {
        if (param_1 != 0xf843) {
          return 0;
        }
        temp_v1 = *(short *)(param_2 + *param_4 * 2 + 2);
        if (temp_v1 != 0) {
          if (temp_v1 != 1) {
            if (temp_v1 != 2) {
              *param_4 = *param_4 + 1;
              return 1;
            }
            FUN_002be7fc(temp_v11,&LAB_0010cbdc);
          }
          else {
            FUN_002be7fc(temp_v11,&LAB_0010cbc8);
          }
        }
        else {
          temp_v6 = FUN_002bd3ec();
          FUN_002bf86c(temp_v11,temp_v6);
        }
      }
      else {
        FUN_002bd25c(*(unsigned short *)(param_2 + *param_4 * 2 + 2));
        FUN_002bd1b0();
      }
      FUN_002bd2e8(param_3,param_5,temp_v11,param_6);
      *param_4 = *param_4 + 1;
      return 1;
    }
    switch(param_1) {
    default:
      return 0;
    case 0xf875:
      temp_v6 = FUN_002bd100(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 0xf);
      FUN_002bf86c(temp_v11,temp_v6);
      FUN_002bd348(temp_v11,temp_v12);
      FUN_002bd2e8(param_3,param_5,temp_v12,param_6);
      break;
    case 0xf876:
      FUN_002bcff0(*(unsigned short *)(param_2 + *param_4 * 2 + 2));
      FUN_002bd1b0();
      FUN_002bd2e8(param_3,param_5,temp_v11,param_6);
      break;
    case 0xf877:
      temp_v6 = FUN_002bd100(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 0x13);
      FUN_002bd2e8(param_3,param_5,temp_v6,param_6);
      break;
    case 0xf878:
      temp_v6 = FUN_002bd100(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 0x17);
      FUN_002bd2e8(param_3,param_5,temp_v6,param_6);
      break;
    case 0xf879:
      temp_v6 = FUN_002bd100(*(unsigned short *)(param_2 + *param_4 * 2 + 2) + 0x1f);
      FUN_002bd2e8(param_3,param_5,temp_v6,param_6);
      break;
    case 0xf87a:
      FUN_002bd114(param_3,param_5,*(unsigned short *)(param_2 + *param_4 * 2),param_6);
      temp_v9 = *param_4;
      *param_4 = temp_v9 + 1;
      temp_v1 = *(short *)(param_2 + (temp_v9 + 1) * 2);
      FUN_002bd114(param_3,param_5,temp_v1,param_6);
      if (temp_v1 == 0) {
        FUN_002c0128();
        return 1;
      }
      temp_v9 = FUN_0011913c(temp_v1);
      if (temp_v9 != 0) {
        return 1;
      }
      temp_v9 = FUN_00118e3c(temp_v1);
      if (temp_v9 != 0) {
        return 1;
      }
      FUN_002c0110(2);
      return 1;
    case 0xf87b:
      FUN_002bd114(param_3,param_5,*(unsigned short *)(param_2 + *param_4 * 2),param_6);
      temp_v9 = *param_4;
      *param_4 = temp_v9 + 1;
      temp_v10 = (unsigned int)*(unsigned short *)(param_2 + (temp_v9 + 1) * 2);
      FUN_002bd114(param_3,param_5,temp_v10,param_6);
      temp_v9 = *param_4;
      *param_4 = temp_v9 + 1;
      temp_v4 = *(unsigned short *)(param_2 + (temp_v9 + 1) * 2);
      FUN_002bd114(param_3,param_5,temp_v4,param_6);
      temp_v9 = *param_4;
      *param_4 = temp_v9 + 1;
      temp_v2 = *(unsigned short *)(param_2 + (temp_v9 + 1) * 2);
      FUN_002bd114(param_3,param_5,temp_v2,param_6);
      temp_v9 = *param_4;
      *param_4 = temp_v9 + 1;
      temp_v3 = *(unsigned short *)(param_2 + (temp_v9 + 1) * 2);
      FUN_002bd114(param_3,param_5,temp_v3,param_6);
      temp_v7 = temp_v10;
      FUN_00119ff4(temp_v10,temp_v4,temp_v2,temp_v3,0xffffffff);
      if (temp_v7 != 0) {
        return 1;
      }
      FUN_00119ac8(temp_v10,temp_v4,1);
      return 1;
    case 0xf87c:
      temp_v9 = *param_4 + 1;
      temp_v8 = *param_4 + 2;
      *param_4 = temp_v9;
      temp_v4 = *(unsigned short *)(param_2 + temp_v9 * 2);
      *param_4 = temp_v8;
      if (*(short *)(param_2 + temp_v8 * 2) != 0) {
        temp_v6 = FUN_0011b374();
        FUN_002bd1b0(temp_v6,temp_v11);
        FUN_002bd2e8(param_3,param_5,temp_v11,param_6);
        return 1;
      }
      temp_v6 = FUN_002bcfcc(temp_v4,1);
      FUN_002bf86c(temp_v11,temp_v6);
      FUN_002bd348(temp_v11,temp_v12);
      FUN_002bd2e8(param_3,param_5,temp_v12,param_6);
      return 1;
    case 0xf87d:
      switch(*(unsigned short *)(param_2 + *param_4 * 2 + 2)) {
      case 0:
      case 2:
      case 7:
      case 0xe:
        temp_v6 = FUN_002bd100(0x24);
        FUN_002bf86c(temp_v11,temp_v6);
        break;
      case 1:
      case 3:
      case 8:
      case 0xf:
        temp_v6 = FUN_002bd100(0x25);
        FUN_002bf86c(temp_v11,temp_v6);
        break;
      case 4:
      case 9:
        temp_v6 = FUN_002bd100(0x26);
        FUN_002bf86c(temp_v11,temp_v6);
        break;
      case 5:
      case 10:
        temp_v6 = FUN_002bd100(0x27);
        FUN_002bf86c(temp_v11,temp_v6);
        break;
      case 6:
      case 0xb:
        temp_v6 = FUN_002bd100(0x28);
        FUN_002bf86c(temp_v11,temp_v6);
        break;
      case 0xc:
      case 0x10:
        temp_v6 = FUN_002bd100(0x29);
        FUN_002bf86c(temp_v11,temp_v6);
        break;
      case 0xd:
        temp_v6 = FUN_002bd100(0x2a);
        FUN_002bf86c(temp_v11,temp_v6);
        break;
      default:
        FUN_002bcf58(temp_v11,&LAB_0010d064,0xb);
      }
      FUN_002bd2e8(param_3,param_5,temp_v11,param_6);
    }
  }
  else {
    temp_v6 = FUN_002bd020(*(unsigned short *)(param_2 + *param_4 * 2 + 2),1);
    FUN_002bf86c(temp_v11,temp_v6);
    FUN_002bd348(temp_v11,temp_v12);
    FUN_002bd2e8(param_3,param_5,temp_v12,param_6);
  }
  *param_4 = *param_4 + 1;
  return 1;
}
