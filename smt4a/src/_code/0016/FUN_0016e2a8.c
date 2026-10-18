/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016e2a8` (_code @ 0x16e2a8, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 30 slot(s), 85 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp1D; /* 0x1d: local_1d */
    unsigned char sp1E; /* 0x1e: local_1e */
    unsigned short sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned short sp3A; /* 0x3a: local_3a */
    unsigned short sp66; /* 0x66: local_66 */
    unsigned short sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned short sp6E; /* 0x6e: local_6e */
    unsigned char sp6F; /* 0x6f: local_6f */
    unsigned char sp70; /* 0x70: local_70 */
    unsigned char sp71; /* 0x71: local_71 */
    unsigned char sp73; /* 0x73: local_73 */
    unsigned char sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA8; /* 0xa8: local_a8 */
} void_stack;

extern unsigned char DAT_00558024; /* 0x558024 */
extern unsigned int DAT_005c0ae0; /* 0x5c0ae0 */

/* Supplied declaration required: FUN_00158844. */
/* Supplied declaration required: FUN_0016e1a8. */
/* Supplied declaration required: FUN_0016e7c0. */
/* Supplied declaration required: FUN_001884b0. */
/* Supplied declaration required: FUN_001886bc. */
/* Supplied declaration required: FUN_00188e0c. */
/* Supplied declaration required: FUN_00188e28. */
/* Supplied declaration required: FUN_00188e44. */
/* Supplied declaration required: FUN_00189cbc. */
/* Supplied declaration required: FUN_00193038. */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_0030fc80. */


void FUN_0016e2a8(void)

{
/* irregular: 13 native warning(s); review required */
  unsigned int *puVar1;
  unsigned short *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_a4;
  unsigned char *temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  unsigned short temp_v17 [21];
  unsigned short temp_v18;
  int temp_v19;
  unsigned int uStack_34;
  int temp_v20;
  unsigned short temp_v21;
  unsigned short temp_v22;
  unsigned int *temp_v23;
  int temp_v24;
  unsigned short temp_v25;
  unsigned char temp_v26;
  unsigned char temp_v27;
  int temp_v28;
  unsigned int uStack_14;
  
  temp_v1 = DAT_005c0ae0;
  FUN_001886bc();
  FUN_00158844(temp_v1,temp_v0,0x14,0);
  if ((int)temp_v1 >= 0) {
    FUN_0030fc80(&temp_v4);
    temp_v28 = temp_v4;
    uStack_14 = uStack_a4;
    FUN_00193038(&temp_v15,&temp_v28);
    temp_v12 = temp_v15;
    puVar1 = (unsigned int *)&temp_v19;
    temp_v13 = temp_v16 & 0xffffff;
    temp_v14 = 0;
    FUN_00189cbc(puVar1,&temp_v12);
    FUN_00188e28();
    temp_v22 = 0;
    temp_v23 = puVar1;
    FUN_00188e0c(&temp_v16,0x18,temp_v19,uStack_34);
    temp_v1 = temp_v16 & 0xffff;
    temp_v2 = 0;
    temp_v3 = 0xb;
    puVar2 = (unsigned short *)&temp_v16;
    do {
      temp_v1 = temp_v1 + (*(unsigned short *)((unsigned char *)&temp_v16 + 2));
      (*(unsigned short *)((unsigned char *)&temp_v16 + 2)) = puVar2[3];
      temp_v3 = temp_v3 - 1;
      temp_v2 = temp_v2 + (unsigned int)puVar2[2];
      puVar2 = puVar2 + 2;
    } while (temp_v3 != 0);
    temp_v24 = temp_v1 + temp_v2 + (unsigned int)temp_v18;
    temp_v25 = (unsigned short)temp_v12;
    temp_v26 = (unsigned char)temp_v13;
    temp_v27 = (*(unsigned char *)((unsigned char *)&temp_v13 + 1));
    temp_v20 = 0x4f00;
    temp_v21 = 0;
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v10 = 0;
    temp_v11 = 0;
    temp_v5 = &DAT_00558024;
    temp_v6 = 0x55809c;
    FUN_00188e44(&temp_v5);
    FUN_0016e1a8(&temp_v5,&temp_v20);
    if ((temp_v7 & 0xfffffffe) != 0) {
      if ((temp_v7 & 1) != 0) {
        FUN_00195fc8();
      }
      FUN_001884b0(temp_v7 & 0xfffffffe);
    }
  }
  else if (((((temp_v1 & 0x3fc00) != 0x4400) || ((temp_v1 & 0x3ff) < 0xb4)) || ((temp_v1 & 0x3ff) >= 200))
          && ((int)temp_v1 < 0)) {
    FUN_0016e7c0();
    return;
  }
  return;
}
