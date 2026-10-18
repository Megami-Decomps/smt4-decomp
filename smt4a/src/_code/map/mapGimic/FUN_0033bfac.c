/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033bfac` (_code @ 0x33bfac, 0xa14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0033c4c0; /* 0x33c4c0 */
extern unsigned char LAB_0033c4d8; /* 0x33c4d8 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern unsigned int DAT_00580ca0; /* 0x580ca0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: FUN_001cd3ec. */
/* Supplied declaration required: FUN_003563fc. */
extern int FUN_003a3238(void);
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fda08. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: FUN_0040aa90. */
/* Supplied declaration required: FUN_0040aad4. */
extern int FUN_0040ab8c(unsigned int);
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */


unsigned int FUN_0033bfac(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  char *pcVar8;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  unsigned char temp_v9 [140];
  
  temp_v1 = FUN_00162e8c();
  temp_v0 = *(short *)(DAT_00580ca0 + 10);
  if (temp_v0 == 0) {
    pcVar8 = (char *)(int)*(short *)(DAT_00580ca0 + 0xc);
    temp_v1 = FUN_003a3238();
    if ((int)pcVar8 < temp_v1) {
      do {
        pcVar3 = pcVar8;
        FUN_003563fc();
        temp_v5 = DAT_00580ca0;
        if ((((-1 < *pcVar3) && (*(short *)(pcVar3 + 2) != 0x4e)) &&
            ((int)*pcVar3 == (int)*(short *)(DAT_00580ca0 + 6))) &&
           ((int)pcVar3[1] == (int)*(short *)(DAT_00580ca0 + 8))) {
          if (*(short *)(pcVar3 + 2) == 0x4d) {
            temp_v1 = 0;
            *(short *)(DAT_00580ca0 + 0xc) = (short)pcVar8;
            goto LAB_0033c0d0;
          }
          temp_v0 = *(short *)(pcVar3 + 0xe);
          if (((*(short *)(pcVar3 + 0xc) == 0) || (temp_v1 = FUN_0018719c(), temp_v1 != 0)) &&
             ((temp_v0 == 0 || (temp_v1 = FUN_0018719c((int)temp_v0), temp_v1 == 0)))) {
            temp_v5 = DAT_00580ca0;
            temp_v1 = 0;
            *(short *)(DAT_00580ca0 + 0xc) = (short)pcVar8;
            goto LAB_0033c128;
          }
        }
        pcVar8 = pcVar8 + 1;
        temp_v1 = FUN_003a3238();
      } while ((int)pcVar8 < temp_v1);
    }
    *(unsigned short *)(DAT_00580ca0 + 10) = 99;
    return 1;
  }
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      if (temp_v0 != 99) {
        return 0;
      }
      return 1;
    }
    temp_v2 = (int)*(short *)(DAT_00580ca0 + 0xc);
    FUN_003563fc();
    temp_v3 = DAT_00580ca0 + *(short *)(DAT_00580ca0 + 0xe) * 0x3c;
    if ((*(char *)(temp_v3 + 0xb4) == '\0') &&
       (temp_v4 = FUN_0040ab8c(*(unsigned int *)(temp_v3 + 0xa8)), temp_v4 == 0)) {
      return 0;
    }
    temp_v5 = DAT_00580ca0;
    if (*(short *)(temp_v3 + 0xa6) == 0xe) {
      *(unsigned char *)(DAT_00580ca0 + 0x14) = 1;
      *(int *)(temp_v5 + 0x18) = (int)*(short *)(temp_v5 + 0xe);
    }
    if (*(int *)(*(int *)(temp_v3 + 0xa8) + 4) == 0) {
      FUN_0040aad4(*(int *)(temp_v3 + 0xa8),0);
    }
    temp_v8 = 0;
    temp_v6 = *(unsigned int *)(*(int *)(temp_v3 + 0xa8) + 4);
    FUN_003fe86c(temp_v6,0,2);
    FUN_0040ace8(DAT_0056fcc0,temp_v6);
    if (*(short *)(temp_v3 + 0xa6) == 0x26) {
      *(unsigned char *)(DAT_00580ca0 + 0x68) = 0;
      temp_v4 = *(int *)(*(int *)(temp_v3 + 0xa8) + 4);
      *(unsigned int *)(temp_v4 + 4) = *(unsigned int *)(temp_v4 + 4) | 3;
    }
    *(unsigned char *)(temp_v3 + 0x90) = 1;
    *(unsigned char *)(temp_v3 + 0x91) = 1;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0x94) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0x98) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0x9c) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0xb8) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0xbc) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0xc0) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0xc4) = temp_v6;
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v2 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v3 + 0xa0) = temp_v6;
    *(unsigned short *)(temp_v3 + 0xa4) = 0;
    temp_v5 = DAT_00580ca0;
    *(int *)(temp_v3 + 0xac) = *(short *)(DAT_00580ca0 + 0xc) + 0x2000;
    *(unsigned short *)(temp_v3 + 0xb0) = *(unsigned short *)(temp_v2 + 0xc);
    *(unsigned short *)(temp_v3 + 0xb2) = *(unsigned short *)(temp_v2 + 0xe);
    *(int *)(temp_v5 + 0x10) = *(int *)(temp_v5 + 0x10) + 1;
    temp_v7 = *(short *)(temp_v3 + 0xa6) == 0x2a;
    if (temp_v7) {
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v5 + 6);
    }
    if (temp_v7 && temp_v5 == 1) {
      *(unsigned short *)(temp_v3 + 0xa4) = 1;
      FUN_003fda08(*(unsigned int *)(*(int *)(temp_v3 + 0xa8) + 4),1,2);
    }
    temp_v0 = *(short *)(temp_v3 + 0xa6);
    if (temp_v0 == 0x27) {
      *(unsigned int *)(temp_v3 + 0x94) = temp_v8;
      *(unsigned int *)(temp_v3 + 0x98) = temp_v8;
      *(unsigned int *)(temp_v3 + 0x9c) = temp_v8;
      *(unsigned int *)(temp_v3 + 0xa0) = temp_v8;
      if (*(char *)(temp_v1 + 0x1525) != '\0') {
        *(unsigned short *)(temp_v3 + 0xa4) = 2;
      }
    }
    if (temp_v0 == 0x28) {
      *(unsigned int *)(temp_v3 + 0x94) = temp_v8;
      *(unsigned int *)(temp_v3 + 0x98) = temp_v8;
      *(unsigned int *)(temp_v3 + 0x9c) = temp_v8;
      *(unsigned int *)(temp_v3 + 0xa0) = temp_v8;
      if (*(char *)(temp_v1 + 0x1524) != '\0') {
        *(unsigned short *)(temp_v3 + 0xa4) = 2;
      }
    }
    if (temp_v0 == 0x29) {
      *(unsigned int *)(temp_v3 + 0x94) = temp_v8;
      *(unsigned int *)(temp_v3 + 0x98) = temp_v8;
      *(unsigned int *)(temp_v3 + 0x9c) = temp_v8;
      *(unsigned int *)(temp_v3 + 0xa0) = temp_v8;
      if (*(char *)(temp_v1 + 0x1526) != '\0') {
        *(unsigned short *)(temp_v3 + 0xa4) = 2;
      }
    }
    if ((temp_v0 == 0x55) && (temp_v1 = FUN_0018719c(0x1120), temp_v1 != 0)) {
      *(unsigned short *)(temp_v3 + 0xa4) = 2;
    }
    if ((*(short *)(temp_v3 + 0xa6) == 0x56) && (temp_v1 = FUN_0018719c(0x1122), temp_v1 != 0)) {
      *(unsigned short *)(temp_v3 + 0xa4) = 2;
    }
    if ((*(short *)(temp_v3 + 0xa6) == 0x57) && (temp_v1 = FUN_0018719c(0x1121), temp_v1 != 0)) {
      *(unsigned short *)(temp_v3 + 0xa4) = 2;
    }
    if (*(short *)(temp_v3 + 0xa6) == 0x50) {
      if (*(int *)(temp_v3 + 200) == 1) {
        temp_v1 = FUN_0018719c(0x197);
        if ((temp_v1 != 0) || (temp_v1 = FUN_0018719c(0x1b2), temp_v1 != 0)) {
          *(unsigned short *)(temp_v3 + 0xa4) = 2;
          FUN_003fd7c0(*(unsigned int *)(*(int *)(temp_v3 + 0xa8) + 4),2);
        }
        if (*(short *)(temp_v3 + 0xa6) != 0x50) {
          temp_v5 = DAT_00580ca0;
          *(short *)(DAT_00580ca0 + 0xc) = *(short *)(DAT_00580ca0 + 0xc) + 1;
          *(unsigned short *)(temp_v5 + 10) = 0;
          return 0;
        }
      }
      if (*(int *)(temp_v3 + 200) == 2) {
        temp_v1 = FUN_0018719c(0x198);
        if ((temp_v1 != 0) || (temp_v1 = FUN_0018719c(0x1b3), temp_v1 != 0)) {
          *(unsigned short *)(temp_v3 + 0xa4) = 2;
          FUN_003fd7c0(*(unsigned int *)(*(int *)(temp_v3 + 0xa8) + 4),2);
        }
        if (*(short *)(temp_v3 + 0xa6) != 0x50) {
          temp_v5 = DAT_00580ca0;
          *(short *)(DAT_00580ca0 + 0xc) = *(short *)(DAT_00580ca0 + 0xc) + 1;
          *(unsigned short *)(temp_v5 + 10) = 0;
          return 0;
        }
      }
      if ((*(int *)(temp_v3 + 200) == 3) &&
         ((temp_v1 = FUN_0018719c(0x199), temp_v1 != 0 || (temp_v1 = FUN_0018719c(0x1b4), temp_v1 != 0)))) {
        *(unsigned short *)(temp_v3 + 0xa4) = 2;
        FUN_003fd7c0(*(unsigned int *)(*(int *)(temp_v3 + 0xa8) + 4),2);
      }
    }
    temp_v5 = DAT_00580ca0;
    *(short *)(DAT_00580ca0 + 0xc) = *(short *)(DAT_00580ca0 + 0xc) + 1;
    *(unsigned short *)(temp_v5 + 10) = 0;
    return 0;
  }
  temp_v1 = (int)*(short *)(DAT_00580ca0 + 0xc);
  FUN_003563fc();
  temp_v2 = DAT_00580ca0 + *(short *)(DAT_00580ca0 + 0xe) * 0x3c;
  *(unsigned short *)(temp_v2 + 0xa6) = *(unsigned short *)(temp_v1 + 2);
  FUN_00100388(temp_v9,&LAB_0033c4c0);
  temp_v1 = (int)*(short *)(temp_v2 + 0xa6);
  if (temp_v1 != 0x2e) {
    if (temp_v1 != 0x36) {
      if (temp_v1 != 0x60) {
        if (temp_v1 != 0x2a) {
          if (temp_v1 != 0x50) {
            if (((temp_v1 == 0x34 || temp_v1 == 0x35) || (temp_v1 == 0x37 || temp_v1 == 0x38)) ||
               ((temp_v1 == 0x39 || temp_v1 == 0x3a) || temp_v1 == 0x3b)) {
              if (*(char *)(DAT_00580ca0 + temp_v1) != '\0') {
                temp_v1 = 0x20;
                FUN_00178b04(0x20,&LAB_0033c4d8,0x214);
                temp_v6 = 0;
                if (temp_v1 != 0) {
                  temp_v6 = FUN_0040ac08();
                }
                *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
                FUN_0040aa90();
                *(unsigned char *)(temp_v2 + 0xb4) = 1;
                temp_v5 = DAT_00580ca0;
                *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
                return 0;
              }
              temp_v1 = 0x20;
              FUN_00178b04(0x20,&LAB_0033c4d8,0x20d);
              temp_v6 = 0;
              if (temp_v1 != 0) {
                temp_v6 = FUN_0040ac08();
              }
              *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
              FUN_001cd3ec();
              temp_v5 = DAT_00580ca0;
              *(int *)((DAT_00580ca0 + *(short *)(temp_v2 + 0xa6) * 4) - 0x90) =
                   (int)*(short *)(DAT_00580ca0 + 0xe);
              *(unsigned char *)(temp_v5 + (int)*(short *)(temp_v2 + 0xa6)) = 1;
              *(unsigned char *)(temp_v2 + 0xb4) = 0;
              temp_v5 = DAT_00580ca0;
              *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
              return 0;
            }
            temp_v1 = 0x20;
            FUN_00178b04(0x20,&LAB_0033c4d8,0x21d);
          }
          else {
            temp_v1 = *(int *)(DAT_00580ca0 + 0x80) + 1;
            *(int *)(DAT_00580ca0 + 0x80) = temp_v1;
            *(int *)(temp_v2 + 200) = temp_v1;
            temp_v1 = 0x20;
            FUN_00178b04(0x20,&LAB_0033c4d8,0x1fc);
          }
          temp_v6 = 0;
          if (temp_v1 != 0) {
            temp_v6 = FUN_0040ac08();
          }
          *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
          FUN_001cd3ec();
        }
        else {
          temp_v1 = 0x20;
          FUN_00178b04(0x20,&LAB_0033c4d8,0x1f2);
          temp_v6 = 0;
          if (temp_v1 != 0) {
            temp_v6 = FUN_0040ac08();
          }
          *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
          FUN_001cd3ec();
          FUN_0040a908(*(unsigned int *)(temp_v2 + 0xa8),0x10000);
          FUN_0040a918(*(unsigned int *)(temp_v2 + 0xa8),0x20000);
        }
      }
      else {
        if (*(char *)(DAT_00580ca0 + 0x2c) != '\0') {
          temp_v1 = 0x20;
          FUN_00178b04(0x20,&LAB_0033c4d8,0x1e5);
          temp_v6 = 0;
          if (temp_v1 != 0) {
            temp_v6 = FUN_0040ac08();
          }
          *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
          FUN_0040a908();
          FUN_0040a918(*(unsigned int *)(temp_v2 + 0xa8),0x30000);
          FUN_0040aa90(*(unsigned int *)(temp_v2 + 0xa8),
                       *(unsigned int *)(DAT_00580ca0 + *(int *)(DAT_00580ca0 + 0x30) * 0x3c + 0xa8),0
                      );
          *(unsigned char *)(temp_v2 + 0xb4) = 1;
          temp_v5 = DAT_00580ca0;
          *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
          return 0;
        }
        temp_v1 = 0x20;
        FUN_00178b04(0x20,&LAB_0033c4d8,0x1dc);
        temp_v6 = 0;
        if (temp_v1 != 0) {
          temp_v6 = FUN_0040ac08();
        }
        *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
        FUN_0040a908();
        FUN_0040a918(*(unsigned int *)(temp_v2 + 0xa8),0x30000);
        FUN_001cd3ec(*(unsigned int *)(temp_v2 + 0xa8),temp_v9);
        temp_v5 = DAT_00580ca0;
        *(int *)(DAT_00580ca0 + 0x30) = (int)*(short *)(DAT_00580ca0 + 0xe);
        *(unsigned char *)(temp_v5 + 0x2c) = 1;
      }
    }
    else {
      if (*(char *)(DAT_00580ca0 + 0x24) != '\0') {
        temp_v1 = 0x20;
        FUN_00178b04(0x20,&LAB_0033c4d8,0x1cc);
        temp_v6 = 0;
        if (temp_v1 != 0) {
          temp_v6 = FUN_0040ac08();
        }
        *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
        FUN_0040a908();
        FUN_0040a918(*(unsigned int *)(temp_v2 + 0xa8),0x30000);
        FUN_0040aa90(*(unsigned int *)(temp_v2 + 0xa8),
                     *(unsigned int *)(DAT_00580ca0 + *(int *)(DAT_00580ca0 + 0x28) * 0x3c + 0xa8),0);
        *(unsigned char *)(temp_v2 + 0xb4) = 1;
        temp_v5 = DAT_00580ca0;
        *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
        return 0;
      }
      temp_v1 = 0x20;
      FUN_00178b04(0x20,&LAB_0033c4d8,0x1c3);
      temp_v6 = 0;
      if (temp_v1 != 0) {
        temp_v6 = FUN_0040ac08();
      }
      *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
      FUN_0040a908();
      FUN_0040a918(*(unsigned int *)(temp_v2 + 0xa8),0x30000);
      FUN_001cd3ec(*(unsigned int *)(temp_v2 + 0xa8),temp_v9);
      temp_v5 = DAT_00580ca0;
      *(int *)(DAT_00580ca0 + 0x28) = (int)*(short *)(DAT_00580ca0 + 0xe);
      *(unsigned char *)(temp_v5 + 0x24) = 1;
    }
  }
  else {
    if (*(char *)(DAT_00580ca0 + 0x1c) != '\0') {
      temp_v1 = 0x20;
      FUN_00178b04(0x20,&LAB_0033c4d8,0x1b3);
      temp_v6 = 0;
      if (temp_v1 != 0) {
        temp_v6 = FUN_0040ac08();
      }
      *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
      FUN_0040a908();
      FUN_0040a918(*(unsigned int *)(temp_v2 + 0xa8),0x30000);
      FUN_0040aa90(*(unsigned int *)(temp_v2 + 0xa8),
                   *(unsigned int *)(DAT_00580ca0 + *(int *)(DAT_00580ca0 + 0x20) * 0x3c + 0xa8),0);
      *(unsigned char *)(temp_v2 + 0xb4) = 1;
      temp_v5 = DAT_00580ca0;
      *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
      return 0;
    }
    temp_v1 = 0x20;
    FUN_00178b04(0x20,&LAB_0033c4d8,0x1aa);
    temp_v6 = 0;
    if (temp_v1 != 0) {
      temp_v6 = FUN_0040ac08();
    }
    *(unsigned int *)(temp_v2 + 0xa8) = temp_v6;
    FUN_0040a908();
    FUN_0040a918(*(unsigned int *)(temp_v2 + 0xa8),0x30000);
    FUN_001cd3ec(*(unsigned int *)(temp_v2 + 0xa8),temp_v9);
    temp_v5 = DAT_00580ca0;
    *(int *)(DAT_00580ca0 + 0x20) = (int)*(short *)(DAT_00580ca0 + 0xe);
    *(unsigned char *)(temp_v5 + 0x1c) = 1;
  }
  *(unsigned char *)(temp_v2 + 0xb4) = 0;
  temp_v5 = DAT_00580ca0;
  *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
  return 0;
  while (temp_v1 = temp_v1 + 1, temp_v2 = -1, temp_v1 < 0x23) {
LAB_0033c0d0:
    temp_v2 = temp_v1;
    if (*(char *)(temp_v5 + temp_v1 * 0x3c + 0x90) == '\0') break;
  }
  *(short *)(temp_v5 + 0xe) = (short)temp_v2;
  if ((short)temp_v2 == -1) {
    *(unsigned short *)(temp_v5 + 10) = 99;
    return 1;
  }
  *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
  return 0;
  while (temp_v1 = temp_v1 + 1, temp_v2 = -1, temp_v1 < 0x23) {
LAB_0033c128:
    temp_v2 = temp_v1;
    if (*(char *)(temp_v5 + temp_v1 * 0x3c + 0x90) == '\0') break;
  }
  *(short *)(temp_v5 + 0xe) = (short)temp_v2;
  if ((short)temp_v2 == -1) {
    *(unsigned short *)(temp_v5 + 10) = 99;
    return 1;
  }
  *(short *)(temp_v5 + 10) = *(short *)(temp_v5 + 10) + 1;
  return 0;
}
