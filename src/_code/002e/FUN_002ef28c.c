/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef28c` (_code @ 0x2ef28c, 0x3d0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1420; /* 0x1420: local_1420 */
} void_stack;

extern int DAT_0044cfa0; /* 0x44cfa0 */

/* Supplied declaration required: FUN_00247d64. */
/* Supplied declaration required: FUN_002523d0. */
/* Supplied declaration required: FUN_002544fc. */
/* Supplied declaration required: FUN_00254514. */
/* Supplied declaration required: FUN_0025506c. */
/* Supplied declaration required: FUN_0028949c. */
/* Supplied declaration required: FUN_00289628. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_00295904. */
extern int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_0029c468. */
extern unsigned int FUN_0029c49c(void);
extern int FUN_002b49d8(unsigned int);
/* Supplied declaration required: FUN_002b9364. */
extern unsigned int FUN_002bd020(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002bd25c. */
extern int FUN_002bf41c(void);
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c0110. */
extern int FUN_002c0ac8(unsigned int);
extern int FUN_002c0bcc(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c583c. */


unsigned int FUN_002ef28c(void)

{
/* irregular: 16 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7 [2];
  unsigned char temp_v8 [128];
  unsigned char temp_v9 [4984];
  
  temp_v1 = FUN_00289640();
  if (temp_v1 == 0) {
    FUN_002c583c(0);
    FUN_00254514(0);
    FUN_00254514(1,0);
    DAT_0044cfa0 = 0;
  }
  temp_v2 = FUN_002544fc(0);
  switch(temp_v2) {
  case 0:
    temp_v1 = FUN_00296f60(0);
    temp_v3 = FUN_00296f60(1);
    temp_v6 = 0;
    temp_v5 = 1;
    do {
      temp_v4 = temp_v5;
      temp_v7[temp_v5] = 0;
      FUN_002b9364();
      if ((((temp_v4 != 0) && ((*(unsigned short *)(temp_v4 + 6) & 1) != 0)) &&
          (temp_v1 <= (int)(unsigned int)*(unsigned char *)(temp_v4 + 3))) && ((int)(unsigned int)*(unsigned char *)(temp_v4 + 3) <= temp_v3))
      {
        temp_v7[temp_v6] = temp_v5;
        temp_v6 = temp_v6 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while ((int)temp_v5 < 0x500);
    if (temp_v6 < 1) {
      return 1;
    }
    temp_v1 = FUN_002c0bcc((temp_v6 - 1U) & 0xffff);
    temp_v5 = temp_v7[temp_v1];
    temp_v2 = FUN_0029c49c();
    FUN_0029c468(temp_v2,temp_v5 & 0xffff,0);
    FUN_00254514(0,1);
    DAT_0044cfa0 = 0;
    FUN_00254514(1,temp_v5 & 0xffff);
    break;
  case 1:
    temp_v2 = FUN_002544fc(1);
    FUN_002523d0(temp_v2,0);
    FUN_00289628();
    FUN_0028949c(temp_v2);
    FUN_00254514(2,temp_v2);
    FUN_00247d64(temp_v2,0,1);
    FUN_00254514(0,2);
    DAT_0044cfa0 = 0;
    break;
  case 2:
    temp_v2 = FUN_002544fc(2);
    FUN_00247d64(temp_v2,0xf,0);
    FUN_00254514(0,3);
    DAT_0044cfa0 = 0;
    break;
  case 3:
    DAT_0044cfa0 = DAT_0044cfa0 + 1;
    if (DAT_0044cfa0 >= 0xf) {
      FUN_00254514(0,4);
      DAT_0044cfa0 = 0;
    }
    break;
  case 4:
    temp_v0 = FUN_002544fc(1);
    FUN_002b9364(temp_v0);
    FUN_002c4b30(temp_v8,0x80);
    FUN_002c4b30(temp_v9,0x80);
    temp_v5 = FUN_002544fc(1);
    temp_v5 = temp_v5 & 0xffff;
    FUN_002bd25c(temp_v5);
    FUN_002bf86c(temp_v8,temp_v5);
    temp_v0 = FUN_002544fc(1);
    temp_v2 = FUN_002bd020(temp_v0,1);
    FUN_002bf86c(temp_v9,temp_v2);
    FUN_00295904(8,temp_v8);
    FUN_00295904(9,temp_v9);
    temp_v1 = FUN_002b49d8(0x1e);
    FUN_002c0110(0x14);
    temp_v7[0] = 0;
    FUN_0025506c(temp_v1,0x38,DAT_0044cfa0,6);
    DAT_0044cfa0 = DAT_0044cfa0 + 1;
    if (temp_v1 == 1) {
      FUN_00254514(0,10);
      DAT_0044cfa0 = 0;
    }
    break;
  case 10:
    temp_v2 = FUN_002544fc(2);
    FUN_00247d64(temp_v2,10,1);
    FUN_00254514(0,0xb);
    DAT_0044cfa0 = 0;
    break;
  case 0xb:
    DAT_0044cfa0 = DAT_0044cfa0 + 1;
    if (DAT_0044cfa0 >= 10) {
      FUN_00254514(0,0xc);
      DAT_0044cfa0 = 0;
    }
    break;
  case 0xc:
    temp_v2 = FUN_002544fc(2);
    temp_v1 = FUN_002bf41c();
    if (temp_v1 != 0) {
      temp_v1 = FUN_002c0ac8(temp_v2);
      if (*(int *)(temp_v1 + 0xc) != 1) {
        *(unsigned int *)(temp_v1 + 0x28) = 0xbe800000;
        *(unsigned char *)(temp_v1 + 0x30) = 1;
      }
      else {
        FUN_002c45b8(temp_v2,0);
      }
    }
    FUN_00254514(0,0xd);
    DAT_0044cfa0 = 0;
    break;
  case 0xd:
    return 1;
  }
  return 0;
}
