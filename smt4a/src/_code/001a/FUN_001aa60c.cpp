/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aa60c` (_code @ 0x1aa60c, 0x7d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bc2ec(...);
int FUN_001c44b4(int);

/* stack frame of param_3: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
} param_3_stack;

extern int DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005b40e4; /* 0x5b40e4 */

/* Supplied declaration required: FUN_001bc2ec. */
/* Supplied declaration required: FUN_001c44b4. */


int FUN_001aa60c(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar8;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned char temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int temp_v19 [4];
  unsigned int *temp_v20;
  unsigned int *temp_v21;
  int temp_v22;
  int temp_v23;
  int iStack_28;
  
  temp_v1 = *(int *)(param_3 + 0x84);
  if (temp_v1 != 0) {
    temp_v1 = temp_v1 + param_3 + 0x84;
  }
  else {
    temp_v1 = 0;
  }
  temp_v8 = 0x10;
  temp_v2 = 0;
  temp_v5 = 0;
  do {
    if (((unsigned int)*(unsigned short *)
                (*(int *)(*(int *)(temp_v1 + 0x40) + *(int *)(param_3 + 0xc) * 4 + 8) + 0x10) &
        (1 << (temp_v5 & 0xff))) != 0) {
      temp_v2 = temp_v2 + 1;
    }
    temp_v8 = temp_v8 - 1;
    temp_v5 = temp_v5 + 1;
  } while (temp_v8 != 0);
  temp_v22 = param_1;
  temp_v23 = param_2;
  iStack_28 = param_3;
  FUN_001c44b4(0x20000);
  temp_v5 = FUN_001bc2ec();
  *(unsigned int *)(temp_v23 + 0x34) = temp_v5;
  temp_v1 = *(int *)(temp_v23 + 0x38);
  puVar8 = *(unsigned int **)(temp_v22 + 8);
  temp_v16 = puVar8 == (unsigned int *)0x0;
  if (temp_v16) {
    puVar8 = (unsigned int *)&DAT_005b40e0;
  }
  if (temp_v16) {
    puVar8 = (unsigned int *)*puVar8;
  }
  *puVar8 = (temp_v2 - 1) | 0xa0000000;
  puVar8[2] = temp_v2 - 1;
  puVar8[1] = 0xb02b9;
  puVar8[3] = 0x10242;
  puVar8[4] = 0;
  puVar8[5] = 0x801f02bb;
  puVar8[8] = temp_v5 >> 3;
  temp_v12 = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  temp_v13 = 0;
  puVar8[9] = 0x802f0200;
  puVar8[10] = 0;
  puVar8[0xb] = temp_v2 * 0x10000000 + 0xf0000000;
  temp_v19[3] = 0;
  temp_v17 = 0xc;
  temp_v20 = puVar8 + 10;
  temp_v18 = 0;
  temp_v21 = puVar8 + 0xb;
  if (0 < temp_v1) {
    do {
      temp_v8 = *(int *)(temp_v23 + 0x3c);
      if (temp_v8 != 0) {
        temp_v8 = temp_v23 + 0x3c + temp_v8;
      }
      else {
        temp_v8 = 0;
      }
      piVar4 = (int *)(temp_v8 + temp_v18 * 4);
      temp_v8 = *piVar4;
      if (temp_v8 != 0) {
        temp_v8 = temp_v8 + (int)piVar4;
      }
      if ((*(unsigned int *)(temp_v8 + 8) & 1) == 0) {
        if ((*(unsigned int *)(temp_v8 + 8) & 2) != 0) {
          temp_v3 = *(int *)(temp_v8 + 0x1c);
          if (temp_v3 == 0) {
            temp_v3 = *(int *)(temp_v8 + 0x18);
            if (temp_v3 != 0) {
              temp_v3 = temp_v3 + temp_v8 + 0x18;
            }
          }
          temp_v3 = FUN_001bc2ec(temp_v3);
          temp_v15 = *(int *)(temp_v8 + 0x28);
          puVar8[temp_v17] = temp_v3 - temp_v5;
          puVar8[temp_v17 + 2] = 0;
          puVar8[temp_v17 + 1] = ((temp_v19[3] * 3 + 0x203) & 0xffff) | 0x802f0000;
          puVar8[temp_v17 + 3] = (*(int *)(temp_v8 + 0x24) << 0x10) | (temp_v15 << 0x1c);
          temp_v6 = 0;
          if ((int)temp_v6 < temp_v15) {
            do {
              if (*(int *)(temp_v8 + 0x2c) != 0) {
                temp_v3 = temp_v8 + 0x2c + *(int *)(temp_v8 + 0x2c);
              }
              else {
                temp_v3 = 0;
              }
              piVar4 = (int *)(temp_v3 + temp_v6 * 4);
              temp_v3 = *piVar4;
              if (temp_v3 != 0) {
                temp_v3 = (int)piVar4 + temp_v3;
              }
              else {
                temp_v3 = 0;
              }
              temp_v7 = ((int)temp_v12 % 8) * 4;
              temp_v9 = (unsigned int)*(unsigned char *)(*(int *)(temp_v3 + 4) + param_3 + 0x4c);
              puVar8[((int)temp_v12 / 8) * 2 + 4] =
                   puVar8[((int)temp_v12 / 8) * 2 + 4] | ((temp_v9 & 0xf) << (temp_v7 & 0xff));
              temp_v14 = *(int *)(temp_v3 + 0x24);
              temp_v10 = 0;
              temp_v13 = temp_v13 | (1 << temp_v9);
              if ((temp_v14 != 0x1400) && (temp_v10 = (unsigned int)(temp_v14 == 0x1401), temp_v14 != 0x1401)) {
                if (temp_v14 == 0x1402) {
                  temp_v10 = 2;
                }
                else if (temp_v14 == 0x1406) {
                  temp_v10 = 3;
                }
              }
              temp_v20[(int)(temp_v12 + ((unsigned int)((int)temp_v12 >> 0x1f) >> 0x1d)) >> 3] =
                   temp_v20[(int)(temp_v12 + ((unsigned int)((int)temp_v12 >> 0x1f) >> 0x1d)) >> 3] |
                   (((temp_v10 + (unsigned int)*(unsigned char *)(temp_v3 + 0x28) * 4) - 4) << (temp_v7 & 0xff));
              if ((int)temp_v6 < 8) {
                puVar8[temp_v17 + 2] = puVar8[temp_v17 + 2] | (temp_v12 << ((temp_v6 & 0x3f) << 2));
              }
              else {
                puVar8[temp_v17 + 3] =
                     puVar8[temp_v17 + 3] | (temp_v12 << ((temp_v6 * 4 - 0x20) & 0xff));
              }
              temp_v6 = temp_v6 + 1;
              temp_v12 = temp_v12 + 1;
            } while ((int)temp_v6 < temp_v15);
          }
        }
        else {
          temp_v9 = (unsigned int)*(unsigned char *)(*(int *)(temp_v8 + 4) + param_3 + 0x4c);
          temp_v6 = ((int)temp_v12 % 8) * 4;
          puVar8[((int)temp_v12 / 8) * 2 + 4] =
               puVar8[((int)temp_v12 / 8) * 2 + 4] | ((temp_v9 & 0xf) << (temp_v6 & 0xff));
          temp_v3 = *(int *)(temp_v8 + 0x24);
          temp_v7 = (unsigned int)*(unsigned char *)(temp_v8 + 0x28);
          temp_v13 = temp_v13 | (1 << temp_v9);
          temp_v9 = 0;
          if ((temp_v3 != 0x1400) && (temp_v9 = (unsigned int)(temp_v3 == 0x1401), temp_v3 != 0x1401)) {
            if (temp_v3 == 0x1402) {
              temp_v9 = 2;
            }
            else if (temp_v3 == 0x1406) {
              temp_v9 = 3;
            }
          }
          temp_v20[(int)(temp_v12 + ((unsigned int)((int)temp_v12 >> 0x1f) >> 0x1d)) >> 3] =
               (((temp_v9 + temp_v7 * 4) - 4) << (temp_v6 & 0xff)) |
               temp_v20[(int)(temp_v12 + ((unsigned int)((int)temp_v12 >> 0x1f) >> 0x1d)) >> 3];
          temp_v15 = *(int *)(temp_v8 + 0x1c);
          if (temp_v15 == 0) {
            temp_v15 = *(int *)(temp_v8 + 0x18);
            if (temp_v15 != 0) {
              temp_v15 = temp_v15 + temp_v8 + 0x18;
            }
          }
          temp_v8 = FUN_001bc2ec(temp_v15);
          temp_v6 = ((temp_v19[3] * 3 + 0x203) & 0xffff) | 0x802f0000;
          temp_v16 = temp_v3 == 0x1400;
          puVar8[temp_v17] = temp_v8 - temp_v5;
          puVar8[temp_v17 + 1] = temp_v6;
          puVar8[temp_v17 + 2] = temp_v12;
          if (!temp_v16) {
            temp_v6 = temp_v3 - 0x1401;
            temp_v16 = temp_v6 == 0;
          }
          if (!temp_v16) {
            if (temp_v6 == 1) {
              temp_v7 = temp_v7 << 1;
            }
            else if (temp_v6 != 5) {
              temp_v7 = 0;
            }
            else {
              temp_v7 = temp_v7 << 2;
            }
          }
          temp_v12 = temp_v12 + 1;
          puVar8[temp_v17 + 3] = temp_v7 * 0x10000 + 0x10000000;
        }
        temp_v17 = temp_v17 + 4;
        temp_v19[3] = temp_v19[3] + 1;
      }
      temp_v18 = temp_v18 + 1;
    } while (temp_v18 < temp_v1);
  }
  temp_v8 = 0;
  if (0 < temp_v1) {
    temp_v3 = 0;
    do {
      temp_v14 = *(int *)(temp_v23 + 0x3c);
      temp_v15 = temp_v3;
      if (temp_v14 != 0) {
        temp_v15 = temp_v23 + 0x3c + temp_v14;
      }
      piVar4 = (int *)(temp_v15 + temp_v8 * 4);
      temp_v14 = *piVar4;
      temp_v15 = temp_v3;
      if (temp_v14 != 0) {
        temp_v15 = temp_v14 + (int)piVar4;
      }
      if ((*(unsigned int *)(temp_v15 + 8) & 1) != 0) {
        temp_v5 = (unsigned int)*(unsigned char *)(*(int *)(temp_v15 + 4) + param_3 + 0x4c);
        puVar8[((int)temp_v12 / 8) * 2 + 4] =
             puVar8[((int)temp_v12 / 8) * 2 + 4] |
             ((temp_v5 & 0xf) << ((((int)temp_v12 % 8) * 4) & 0xffU));
        temp_v19[0] = 0;
        temp_v19[1] = 0;
        temp_v19[2] = 0;
        temp_v19[3] = 0;
        temp_v11 = *(int *)(temp_v15 + 0x18);
        temp_v4 = *(int *)(temp_v15 + 0x1c);
        temp_v13 = temp_v13 | (1 << temp_v5);
        temp_v14 = temp_v3;
        if (temp_v4 != 0) {
          temp_v14 = temp_v4 + temp_v15 + 0x1c;
        }
        temp_v15 = 0;
        if (temp_v15 < temp_v11) {
          do {
            temp_v6 = *(unsigned int *)(temp_v14 + temp_v15 * 4);
            temp_v5 = 0;
            if ((temp_v6 & 0x80000000) != 0) {
              temp_v5 = 0x800000;
            }
            if ((temp_v6 & 0x7fffffff) == 0) {
              temp_v7 = 0;
              temp_v5 = temp_v5 | ((temp_v6 & 0x7fffff) >> 7) | ((temp_v7 & 0x7f) << 0x10);
            }
            else {
              temp_v7 = ((temp_v6 & 0x7fffffff) >> 0x17) - 0x40;
              if (-1 < (int)temp_v7) {
                if ((int)temp_v7 >= 0x80) {
                  temp_v5 = 0x7f0000;
                }
                else {
                  temp_v5 = temp_v5 | ((temp_v6 & 0x7fffff) >> 7) | ((temp_v7 & 0x7f) << 0x10);
                }
              }
            }
            temp_v19[temp_v15] = temp_v5;
            temp_v15 = temp_v15 + 1;
          } while (temp_v15 < temp_v11);
        }
        temp_v5 = temp_v12 + 0x10;
        puVar8[temp_v17] = temp_v12;
        temp_v12 = temp_v12 + 1;
        puVar8[temp_v17 + 1] = 0x803f0232;
        puVar8[temp_v17 + 2] = (temp_v19[3] << 8) | (temp_v19[2] >> 0x10);
        puVar8[temp_v17 + 3] = (temp_v19[2] << 0x10) | (temp_v19[1] >> 8);
        puVar8[temp_v17 + 4] = temp_v19[0] | (temp_v19[1] << 0x18);
        puVar8[temp_v17 + 5] = 0;
        *temp_v21 = *temp_v21 | (1 << (temp_v5 & 0xff));
        temp_v17 = temp_v17 + 6;
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < temp_v1);
  }
  if (temp_v12 < temp_v2) {
    do {
      temp_v0 = *(unsigned char *)(param_3 + temp_v2 + 0x4b);
      temp_v6 = (unsigned int)(char)temp_v0;
      temp_v5 = (unsigned int)temp_v0;
      while ((temp_v13 & (1 << temp_v5)) != 0) {
        temp_v6 = temp_v6 - 1;
        temp_v5 = temp_v6 & 0xff;
      }
      temp_v13 = temp_v13 | (1 << (temp_v6 & 0xff));
      puVar8[((int)temp_v12 / 8) * 2 + 4] =
           puVar8[((int)temp_v12 / 8) * 2 + 4] | ((temp_v6 & 0xf) << ((((int)temp_v12 % 8) * 4) & 0xffU));
      temp_v5 = temp_v12 + 0x10;
      temp_v12 = temp_v12 + 1;
      *temp_v21 = *temp_v21 | (1 << (temp_v5 & 0xff));
    } while (temp_v12 < temp_v2);
  }
  if (-1 < *(int *)(param_3 + 0x10)) {
    puVar8[temp_v17] = 0x76543210;
    puVar8[temp_v17 + 3] = 0xf028c;
    puVar8[temp_v17 + 1] = 0xf028b;
    puVar8[temp_v17 + 2] = 0xfedcba98;
    temp_v17 = temp_v17 + 4;
  }
  temp_v17 = temp_v17 * 4;
  temp_v1 = *(int *)(temp_v22 + 8);
  if (temp_v1 != 0) {
    if (*(unsigned int *)(temp_v22 + 4) < (unsigned int)(temp_v1 + temp_v17)) {
      return temp_v17;
    }
  }
  else if (DAT_005b40e4 < (unsigned int)(DAT_005b40e0 + temp_v17)) {
    return temp_v17;
  }
  if (temp_v1 != 0) {
    *(int *)(temp_v22 + 8) = temp_v1 + temp_v17;
  }
  else {
    DAT_005b40e0 = temp_v17 + DAT_005b40e0;
  }
  return temp_v17;
}

} /* extern "C" */
