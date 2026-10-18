/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e245c` (_code @ 0x3e245c, 0x40c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 40 slot(s), 160 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp120; /* 0x120: local_120 */
} param_4_stack;

extern unsigned char DAT_004149d8; /* 0x4149d8 */

/* Supplied declaration required: FUN_00225fa8. */
/* Supplied declaration required: FUN_002bcd68. */


void FUN_003e245c(int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned short *puVar9;
  unsigned char uStack00000000;
  unsigned int temp_v8;
  unsigned int uStack_11c;
  unsigned int temp_v9;
  unsigned int uStack_114;
  unsigned int temp_v10;
  unsigned int uStack_10c;
  unsigned int temp_v11;
  unsigned int uStack_104;
  unsigned int temp_v12 [7];
  int temp_v13;
  unsigned int temp_v14 [2];
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  int temp_v32;
  int temp_v33;
  unsigned int temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  unsigned int temp_v39;
  unsigned int temp_v40;
  int iStack_34;
  unsigned int temp_v41;
  int iStack_2c;
  int iStack_28;
  
  temp_v7 = 0x10;
  temp_v31 = 0x1030703;
  temp_v28 = (param_4 >> 0x1f) + 1;
  temp_v36 = param_1 + param_3 * 4;
  temp_v2 = 0;
  temp_v4 = (unsigned int)*(unsigned short *)(*(int *)(temp_v36 + 8) + 0x12);
  temp_v0 = 0;
  do {
    if ((temp_v4 & (1 << (temp_v0 & 0xff))) != 0) {
      temp_v2 = temp_v2 + 1;
    }
    temp_v7 = temp_v7 - 1;
    temp_v0 = temp_v0 + 1;
  } while (temp_v7 != 0);
  if (&uStack00000000 != (unsigned char *)0x58) {
    temp_v33 = temp_v2;
  }
  temp_v35 = param_1 + param_4 * 4;
  if (&uStack00000000 != (unsigned char *)0x54) {
    temp_v34 = temp_v4;
  }
  temp_v0 = temp_v35;
  if (param_4 < 0) {
    temp_v0 = temp_v36;
  }
  temp_v2 = 0;
  temp_v7 = 0x10;
  temp_v4 = (unsigned int)*(unsigned short *)(*(int *)(temp_v0 + 8) + 0x12);
  temp_v0 = 0;
  do {
    if ((temp_v4 & (1 << (temp_v0 & 0xff))) != 0) {
      temp_v2 = temp_v2 + 1;
    }
    temp_v7 = temp_v7 - 1;
    temp_v0 = temp_v0 + 1;
  } while (temp_v7 != 0);
  if (&uStack00000000 != (unsigned char *)0x5c) {
    temp_v32 = temp_v2;
  }
  if (&uStack00000000 != (unsigned char *)0x68) {
    temp_v29 = temp_v4;
  }
  temp_v0 = temp_v35;
  if (param_4 < 0) {
    temp_v0 = temp_v36;
  }
  temp_v4 = 0;
  temp_v7 = *(int *)(temp_v0 + 8);
  temp_v2 = *(int *)(temp_v7 + 0x28);
  do {
    temp_v6 = 0;
    temp_v12[temp_v4] = 0x1f1f1f1f;
    if (0 < *(int *)(temp_v7 + 0x2c)) {
      do {
        puVar9 = (unsigned short *)(temp_v2 + temp_v7 + temp_v6 * 8);
        temp_v0 = 0;
        for (temp_v3 = 0; ((unsigned short)puVar9[1] == temp_v4 && ((int)temp_v3 < 4)); temp_v3 = temp_v3 + 1) {
          temp_v1 = temp_v0;
          if (((unsigned int)(unsigned short)puVar9[2] & (1 << (temp_v3 & 0xff))) != 0) {
            temp_v5 = 0x1f;
            switch(*puVar9) {
            case 0:
              temp_v1 = temp_v0 + 1;
              temp_v5 = temp_v0;
              break;
            case 1:
              temp_v5 = temp_v0 + 4;
              temp_v1 = temp_v0 + 1;
              break;
            case 2:
              temp_v5 = temp_v0 + 8;
              temp_v1 = temp_v0 + 1;
              break;
            case 3:
              if (temp_v0 < 2) {
                temp_v5 = temp_v0 + 0xc;
                temp_v1 = temp_v0 + 1;
              }
              break;
            case 4:
              temp_v5 = 0x10;
              break;
            case 5:
              if (temp_v0 < 2) {
                temp_v5 = temp_v0 + 0xe;
                temp_v1 = temp_v0 + 1;
              }
              break;
            case 6:
              if (temp_v0 < 2) {
                temp_v5 = temp_v0 + 0x16;
                temp_v1 = temp_v0 + 1;
              }
              break;
            case 8:
              if (temp_v0 < 3) {
                temp_v5 = temp_v0 + 0x12;
                temp_v1 = temp_v0 + 1;
              }
            }
            temp_v12[temp_v4] =
                 (temp_v5 << ((temp_v3 << 3) & 0xff)) |
                 (temp_v12[temp_v4] & ~(0xff << ((temp_v3 << 3) & 0xff)));
          }
          temp_v0 = temp_v1;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < *(int *)(temp_v7 + 0x2c));
    }
    temp_v4 = temp_v4 + 1;
    if ((int)temp_v4 >= 7) {
      temp_v8 = 0;
      uStack_11c = 0xf0252;
      temp_v9 = 0;
      uStack_114 = 0x10254;
      temp_v0 = *(unsigned int *)(*(int *)(temp_v36 + 8) + 8);
      temp_v10 = 0;
      uStack_10c = 0x80229;
      temp_v11 = 0;
      uStack_104 = 0x20289;
      if (temp_v28 != 0) {
        temp_v13 = temp_v33;
        temp_v30 = *(unsigned int *)(*(int *)(temp_v35 + 8) + 8);
        temp_v4 = (unsigned int)*(unsigned char *)(*(int *)(temp_v35 + 8) + 0x14);
        temp_v8 = temp_v4 & 3;
        if (temp_v4 != 0) {
          if (temp_v4 != 1) {
            if (temp_v4 == 2) {
              temp_v8 = ((unsigned int)*(unsigned char *)(*(int *)(temp_v35 + 8) + 0x17) * 0x100 - 0x100) | 2 |
                          (temp_v33 * 0x1000 - 0x1000U) |
                          ((unsigned int)*(unsigned char *)(*(int *)(temp_v35 + 8) + 0x15) << 0x10) | 0x1000000;
              temp_v11 = 0x100;
            }
          }
          else {
            temp_v10 = 0x80000000;
            temp_v9 = (unsigned int)*(unsigned char *)(*(int *)(temp_v35 + 8) + 0x16);
            temp_v11 = 0x100;
          }
        }
      }
      iStack_34 = param_1;
      temp_v41 = param_2;
      iStack_2c = param_3;
      iStack_28 = param_4;
      FUN_002bcd68(temp_v14,&DAT_004149d8,0x60);
      temp_v27 = temp_v0 | 0x7fff0000;
      temp_v14[0] = temp_v34;
      temp_v15 = temp_v33 - 1;
      temp_v17 = temp_v32 - 1;
      temp_v18 = temp_v32;
      temp_v19 = temp_v12[0];
      temp_v20 = temp_v12[1];
      temp_v21 = temp_v12[2];
      temp_v22 = temp_v12[3];
      temp_v23 = temp_v12[4];
      temp_v24 = temp_v12[5];
      temp_v25 = temp_v12[6];
      temp_v26 = temp_v31;
      if (temp_v28 == 0) {
        temp_v2 = 2;
      }
      else {
        temp_v2 = 0;
      }
      temp_v16 = temp_v15;
      FUN_00225fa8(temp_v41,&temp_v8,temp_v2 * -4 + 0x20);
      FUN_00225fa8(temp_v41,temp_v14,0x60);
      if (temp_v28 != 0) {
        temp_v36 = 0xf028d;
        temp_v38 = 0x90289;
        temp_v40 = 0xf028a;
        temp_v39 = temp_v30 | 0x7fff0000;
        temp_v37 = (temp_v13 - 1U) | 0x8000000;
        temp_v35 = temp_v29;
        FUN_00225fa8(temp_v41,&temp_v35,0x18);
      }
      return;
    }
  } while( 1 );
}
