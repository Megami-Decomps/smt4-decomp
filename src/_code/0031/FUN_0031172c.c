/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031172c` (_code @ 0x31172c, 0x510 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} void_stack;

extern int *DAT_0043dd68; /* 0x43dd68 */

/* Supplied declaration required: FUN_00248790. */
/* Supplied declaration required: FUN_002544fc. */
/* Supplied declaration required: FUN_00254514. */
/* Supplied declaration required: FUN_0025506c. */
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_00295904. */
extern int FUN_0029ba58(int, unsigned short, unsigned int *);
/* Supplied declaration required: FUN_0029fa74. */
/* Supplied declaration required: FUN_0029fcac. */
extern int FUN_002a0fac(void);
extern unsigned int FUN_002bd020(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd25c. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c4450. */
extern int FUN_002cd9f4(unsigned short);
/* Supplied declaration required: FUN_002d9150. */
/* Supplied declaration required: FUN_00324154. */
/* Supplied declaration required: FUN_003c8d38. */


unsigned int FUN_0031172c(void)

{
/* irregular: 14 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int *piVar3;
  char temp_v2;
  unsigned short *puVar5;
  unsigned char *pbVar6;
  unsigned short *puVar7;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar12;
  unsigned int temp_v7;
  int temp_v8;
  int *piVar15;
  unsigned int unaff_r11;
  int temp_v9;
  unsigned int temp_v10 [33];
  
  piVar3 = DAT_0043dd68;
  piVar15 = DAT_0043dd68 + 0x255c;
  temp_v9 = *piVar15;
  piVar12 = DAT_0043dd68 + 0x24f7;
  if (temp_v9 == 10) {
    DAT_0043dd68[0x250b] = 0;
    FUN_002c4450(piVar12,0x50,0xffffffff);
    temp_v5 = *piVar3;
    FUN_0029fcac(temp_v5,piVar3 + 0x24cf);
    temp_v8 = 0;
    *(short *)(piVar3 + 0x24ce) = (short)temp_v5;
    temp_v9 = 0;
    if (0 < temp_v5) {
      do {
        temp_v3 = (unsigned int)*(unsigned short *)((int)piVar3 + temp_v8 * 2 + 0x933c);
        FUN_0029fa74();
        temp_v5 = temp_v9;
        if (((temp_v3 != 0) &&
            (temp_v6 = FUN_002cd9f4(*(unsigned short *)((int)piVar3 + temp_v8 * 2 + 0x933c)), temp_v6 == 0)
            ) && (temp_v6 = FUN_0029ba58(*piVar3,*(unsigned short *)((int)piVar3 + temp_v8 * 2 + 0x933c),
                                        temp_v10), temp_v6 != 0)) {
          temp_v5 = temp_v9 + 1;
          *(char *)((int)piVar3 + temp_v9 + 0x93dc) =
               (char)*(unsigned short *)((int)piVar3 + temp_v8 * 2 + 0x933c);
          FUN_002d9150(*(unsigned short *)((int)piVar3 + temp_v8 * 2 + 0x933c));
        }
        temp_v8 = temp_v8 + 1;
        temp_v9 = temp_v5;
      } while (temp_v8 < (int)(unsigned int)*(unsigned short *)(piVar3 + 0x24ce));
      if (0 < temp_v5) {
        temp_v9 = *piVar15 + 1;
        *piVar15 = temp_v9;
        return 0;
      }
    }
    *piVar15 = 100;
    return 0;
  }
  if (temp_v9 >= 10) {
    if (temp_v9 != 0xb) {
      if (temp_v9 == 0xc) {
        temp_v3 = (int)*(char *)(DAT_0043dd68[0x250b] + (int)piVar12) & 0xffff;
        FUN_0029fa74();
        temp_v7 = (unsigned int)*(unsigned short *)(temp_v3 + 0x1a);
        FUN_002bd25c(temp_v7);
        FUN_002bf86c(temp_v10,temp_v7);
        FUN_00295904(8,temp_v10);
        temp_v4 = FUN_002bd020(*(unsigned short *)(temp_v3 + 0x1a),1);
        FUN_002bf86c(temp_v10,temp_v4);
        FUN_00295904(0x10,temp_v10);
        *piVar15 = *piVar15 + 1;
        return 0;
      }
      if (temp_v9 != 0xd) {
        if (temp_v9 == 100) {
          *(unsigned char *)(DAT_0043dd68 + 0x255b) = 0;
          return 1;
        }
        return 0;
      }
      temp_v4 = FUN_002544fc(1);
      temp_v10[0] = 0;
      temp_v9 = piVar3[0x109];
      FUN_0025506c(temp_v9,4,temp_v4,7);
      temp_v5 = FUN_002544fc(1);
      FUN_00254514(1,temp_v5 + 1);
      if (temp_v9 != 1) {
        return 0;
      }
      FUN_00254514(1,0);
      temp_v9 = piVar3[0x250b];
      temp_v5 = temp_v9 + 1;
      piVar3[0x250b] = temp_v5;
      if ((temp_v5 >= 0x50) || (*(char *)((int)piVar3 + temp_v9 + 0x93dd) < '\0')) {
        *piVar15 = 100;
        return 0;
      }
      temp_v9 = 0xc;
    }
    else {
      temp_v4 = FUN_002544fc(1);
      temp_v10[0] = 0;
      temp_v9 = piVar3[0x109];
      FUN_0025506c(temp_v9,3,temp_v4,5);
      temp_v5 = FUN_002544fc(1);
      FUN_00254514(1,temp_v5 + 1);
      if (temp_v9 != 1) {
        return 0;
      }
      FUN_00254514(1,0);
      temp_v9 = *piVar15 + 1;
    }
    *piVar15 = temp_v9;
    return 0;
  }
  piVar12 = DAT_0043dd68 + 0x255d;
  if (temp_v9 != 0) {
    if (temp_v9 != 1) {
      if (temp_v9 != 2) {
        if (temp_v9 != 3) {
          return 0;
        }
        temp_v4 = FUN_002544fc(1);
        temp_v10[0] = 0;
        temp_v9 = piVar3[0x109];
        FUN_0025506c(temp_v9,2,temp_v4,7);
        temp_v5 = FUN_002544fc(1);
        FUN_00254514(1,temp_v5 + 1);
        if (temp_v9 != 1) {
          return 0;
        }
        FUN_00254514(1,0);
        temp_v2 = (char)piVar3[0x2571] + '\x01';
        *(char *)(piVar3 + 0x2571) = temp_v2;
        if ((temp_v2 < 0x50) && (-1 < *(char *)((int)piVar3 + temp_v2 + 0x9574))) {
          temp_v9 = 2;
          *piVar15 = temp_v9;
          return 0;
        }
        *piVar15 = 10;
        return 0;
      }
      puVar7 = (unsigned short *)
               FUN_00248790((short)*(char *)((int)(char)DAT_0043dd68[0x2571] + (int)piVar12));
      temp_v3 = (unsigned int)*puVar7;
      FUN_002bd25c(temp_v3);
      FUN_002bf86c(temp_v10,temp_v3);
      FUN_00295904(8,temp_v10);
      temp_v4 = FUN_002bd020(*puVar7,1);
      FUN_002bf86c(temp_v10,temp_v4);
      FUN_00295904(0x10,temp_v10);
    }
    else {
      temp_v4 = FUN_002544fc(1);
      temp_v10[0] = 0;
      temp_v9 = piVar3[0x109];
      FUN_0025506c(temp_v9,1,temp_v4,5);
      temp_v5 = FUN_002544fc(1);
      FUN_00254514(1,temp_v5 + 1);
      if (temp_v9 != 1) {
        return 0;
      }
      FUN_00254514(1,0);
    }
    *piVar15 = *piVar15 + 1;
    return 0;
  }
  *(unsigned char *)(DAT_0043dd68 + 0x255b) = 1;
  *(unsigned char *)(piVar3 + 0x2571) = 0;
  temp_v3 = FUN_002c4450(piVar12,0x50,0xffffffff);
  temp_v9 = 0;
  FUN_00324154();
  if (temp_v3 != 0) {
    unaff_r11 = 0x45a;
  }
  temp_v7 = 0;
  if (temp_v3 != 0) {
    do {
      puVar5 = (unsigned short *)FUN_00248790(temp_v7 & 0xffff);
      if (puVar5 != (unsigned short *)0x0) {
        temp_v5 = *piVar3;
        FUN_003c8d38(temp_v5,*puVar5);
        if (temp_v5 != 0) {
          temp_v5 = FUN_002a0fac();
          pbVar6 = (unsigned char *)(temp_v5 + ((int)(temp_v7 + ((unsigned int)((int)temp_v7 >> 0x1f) >> 0x1d)) >> 3) +
                           0x35);
          temp_v1 = *pbVar6;
          temp_v0 = 1 << (((int)temp_v7 % 8) & 0xffU);
          if ((temp_v1 & temp_v0) == 0) {
            *pbVar6 = temp_v1 | (unsigned char)temp_v0;
            *(char *)((int)piVar3 + temp_v9 + 0x9574) = (char)temp_v7;
            temp_v9 = temp_v9 + 1;
            FUN_002899c4(unaff_r11,1);
          }
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v3);
    if (0 < temp_v9) {
      *piVar15 = *piVar15 + 1;
      return 0;
    }
  }
  *piVar15 = 10;
  return 0;
}
