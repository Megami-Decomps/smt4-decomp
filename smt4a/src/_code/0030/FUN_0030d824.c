/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030d824` (_code @ 0x30d824, 0x32e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 16 slot(s), 62 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned short sp92; /* 0x92: local_92 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
} param_6_stack;

extern unsigned char DAT_00546d1a; /* 0x546d1a */
extern unsigned char DAT_00546d58; /* 0x546d58 */
extern unsigned char DAT_00546f98; /* 0x546f98 */
extern unsigned char DAT_00546fd8; /* 0x546fd8 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif


unsigned int
FUN_0030d824(int param_1,int param_2,unsigned int param_3,int *param_4,unsigned int *param_5,unsigned char *param_6)

{
/* irregular: 1 goto(s) */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned short temp_v10;
  unsigned int temp_v11;
  unsigned char *temp_v12;
  unsigned int temp_v13;
  unsigned short temp_v14 [16];
  unsigned char *temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  int temp_v24;
  unsigned short temp_v25 [16];
  int temp_v26;
  int temp_v27;
  unsigned int uStack_1c;
  int *temp_v28;
  
  temp_v28 = param_4;
  uStack_1c = param_3;
  temp_v27 = param_2;
  temp_v26 = param_1;
  temp_v3 = 0;
  do {
    temp_v2 = temp_v3 + 1;
    temp_v25[temp_v3] = 0;
    temp_v3 = temp_v2;
  } while (temp_v2 < 0x10);
  for (temp_v3 = 0; temp_v3 < param_3; temp_v3 = temp_v3 + 1) {
    temp_v10 = *(unsigned short *)(temp_v27 + temp_v3 * 2);
    temp_v25[temp_v10] = temp_v25[temp_v10] + 1;
  }
  temp_v3 = 0xf;
  do {
    if (temp_v25[temp_v3] != 0) break;
    temp_v3 = temp_v3 - 1;
  } while (temp_v3 != 0);
  temp_v2 = *param_5;
  if (temp_v3 < *param_5) {
    temp_v2 = temp_v3;
  }
  if (temp_v3 == 0) {
    puVar6 = (unsigned int *)*temp_v28;
    *temp_v28 = (int)(puVar6 + 1);
    *puVar6 = 0x140;
    puVar6 = (unsigned int *)*temp_v28;
    *temp_v28 = (int)(puVar6 + 1);
    *puVar6 = 0x140;
    *param_5 = 1;
    return 0;
  }
  for (temp_v4 = 1; (temp_v4 < temp_v3 && (temp_v25[temp_v4] == 0)); temp_v4 = temp_v4 + 1) {
  }
  if (temp_v2 < temp_v4) {
    temp_v2 = temp_v4;
  }
  temp_v8 = 1;
  temp_v6 = 1;
  do {
    temp_v8 = temp_v8 * 2 - (unsigned int)temp_v25[temp_v6];
    if (temp_v8 < 0) {
      return 0xffffffff;
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 0x10);
  if ((0 < temp_v8) && ((temp_v26 == 0 || (temp_v3 != 1)))) {
    return 0xffffffff;
  }
  temp_v14[1] = 0;
  temp_v6 = 1;
  do {
    temp_v9 = temp_v6 + 1;
    temp_v14[temp_v6 + 1] = temp_v14[temp_v6] + temp_v25[temp_v6];
    temp_v6 = temp_v9;
  } while (temp_v9 < 0xf);
  for (temp_v6 = 0; temp_v6 < param_3; temp_v6 = temp_v6 + 1) {
    temp_v9 = (unsigned int)*(unsigned short *)(temp_v27 + temp_v6 * 2);
    if (temp_v9 != 0) {
      *(short *)(param_6 + (unsigned int)temp_v14[temp_v9] * 2) = (short)temp_v6;
      temp_v10 = *(unsigned short *)(temp_v27 + temp_v6 * 2);
      temp_v14[temp_v10] = temp_v14[temp_v10] + 1;
    }
  }
  if (temp_v26 != 0) {
    if (temp_v26 != 1) {
      temp_v12 = &DAT_00546f98;
      temp_v15 = &DAT_00546fd8;
      temp_v18 = -1;
    }
    else {
      temp_v18 = 0x100;
      temp_v15 = &DAT_00546d58;
      temp_v12 = &DAT_00546d1a;
    }
  }
  else {
    temp_v18 = 0x13;
    temp_v12 = param_6;
    temp_v15 = param_6;
  }
  temp_v5 = 0;
  temp_v20 = 0;
  temp_v23 = 0xffffffff;
  temp_v17 = *temp_v28;
  temp_v21 = 1 << (temp_v2 & 0xff);
  temp_v19 = temp_v21 - 1;
  temp_v6 = 0;
  temp_v9 = temp_v2;
  if (temp_v26 != 1) {
    if (temp_v26 == 2) {
      temp_v11 = 0x250;
      if (temp_v11 <= temp_v21) {
        return 1;
      }
    }
  }
  else {
    temp_v11 = 0x354;
    if (temp_v11 <= temp_v21) {
      return 1;
    }
  }
  do {
    temp_v0 = ((unsigned int)(temp_v4 - temp_v6) & 0xffffffU);
    temp_v10 = *(unsigned short *)(param_6 + temp_v20 * 2);
    temp_v11 = (unsigned int)temp_v10;
    if ((int)temp_v11 < temp_v18) {
      temp_v7 = 0;
      temp_v1 = romwright_piece_2_2(temp_v10,(short)romwright_piece_3_1(temp_v0,temp_v7));
    }
    else if ((int)temp_v11 > temp_v18) {
      temp_v1 = romwright_piece_2_2(*(unsigned short *)(temp_v12 + temp_v11 * 2),
                       (short)romwright_piece_3_1(temp_v0,(char)*(unsigned short *)(temp_v15 + temp_v11 * 2)));
    }
    else {
      temp_v7 = 0x60;
      temp_v10 = 0;
      temp_v1 = romwright_piece_2_2(temp_v10,(short)romwright_piece_3_1(temp_v0,temp_v7));
    }
    temp_v24 = 1 << ((temp_v4 - temp_v6) & 0xff);
    temp_v16 = 1 << (temp_v9 & 0xff);
    temp_v22 = temp_v5 >> (temp_v6 & 0xff);
    temp_v8 = temp_v16;
    do {
      temp_v8 = temp_v8 - temp_v24;
      *(unsigned int *)((temp_v22 + temp_v8) * 4 + temp_v17) = temp_v1;
    } while (temp_v8 != 0);
    for (temp_v11 = 1 << ((temp_v4 - 1) & 0xff); (temp_v5 & temp_v11) != 0; temp_v11 = temp_v11 >> 1) {
    }
    if (temp_v11 != 0) {
      temp_v5 = (temp_v5 & (temp_v11 - 1)) + temp_v11;
    }
    else {
      temp_v5 = 0;
    }
    temp_v20 = temp_v20 + 1;
    temp_v10 = temp_v25[temp_v4];
    temp_v25[temp_v4] = temp_v10 - 1;
    if ((unsigned short)(temp_v10 - 1) == 0) {
      if (temp_v4 == temp_v3) {
        (*(unsigned short *)((unsigned char *)&temp_v13 + 0)) = romwright_piece_1_1((char)temp_v4 - (char)temp_v6,0x40);
        temp_v13 = (unsigned int)(unsigned short)temp_v13;
        break;
      }
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v27 + (unsigned int)*(unsigned short *)(param_6 + temp_v20 * 2) * 2);
    }
    if (temp_v2 < temp_v4) {
      temp_v22 = temp_v5 & temp_v19;
      if (temp_v22 != temp_v23) {
        if (temp_v6 == 0) {
          temp_v6 = temp_v2;
        }
        temp_v17 = temp_v16 * 4 + temp_v17;
        temp_v9 = temp_v4 - temp_v6;
        for (temp_v8 = 1 << (temp_v9 & 0xff);
            (temp_v11 = temp_v9 + temp_v6, temp_v11 < temp_v3 &&
            (0 < (int)(temp_v8 - (unsigned int)temp_v25[temp_v11])));
            temp_v8 = (temp_v8 - (unsigned int)temp_v25[temp_v11]) * 2) {
          temp_v9 = temp_v9 + 1;
        }
        temp_v21 = (1 << (temp_v9 & 0xff)) + temp_v21;
        if (temp_v26 != 1) {
          if (temp_v26 == 2) {
            temp_v11 = 0x250;
            if (temp_v11 <= temp_v21) {
              return 1;
            }
          }
        }
        else {
          temp_v11 = 0x354;
          if (temp_v11 <= temp_v21) {
            return 1;
          }
        }
        temp_v23 = temp_v22;
        temp_v8 = temp_v22 * 4;
        *(char *)(*temp_v28 + temp_v8) = (char)temp_v9;
        *(char *)(*temp_v28 + temp_v8 + 1) = (char)temp_v2;
        *(short *)(*temp_v28 + temp_v8 + 2) = (short)(((temp_v17 - *temp_v28) & 0x3ffffU) >> 2);
      }
    }
  } while( 1 );
LAB_0030db36:
  if (temp_v5 == 0) {
    *temp_v28 = *temp_v28 + temp_v21 * 4;
    *param_5 = temp_v2;
    return 0;
  }
  if ((temp_v6 != 0) && ((temp_v5 & temp_v19) != temp_v23)) {
    temp_v6 = 0;
    temp_v17 = *temp_v28;
    (*(unsigned short *)((unsigned char *)&temp_v13 + 0)) = romwright_piece_1_1((char)temp_v2,(unsigned char)temp_v13);
    temp_v13 = (unsigned int)(unsigned short)temp_v13;
    temp_v4 = temp_v2;
  }
  *(unsigned int *)((temp_v5 >> (temp_v6 & 0xff)) * 4 + temp_v17) = temp_v13;
  for (temp_v3 = 1 << ((temp_v4 - 1) & 0xff); (temp_v5 & temp_v3) != 0; temp_v3 = temp_v3 >> 1) {
  }
  if (temp_v3 == 0) {
    *temp_v28 = *temp_v28 + temp_v21 * 4;
    *param_5 = temp_v2;
    return 0;
  }
  temp_v5 = (temp_v5 & (temp_v3 - 1)) + temp_v3;
  goto LAB_0030db36;
}
