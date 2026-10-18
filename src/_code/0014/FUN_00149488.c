/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00149488` (_code @ 0x149488, 0x64c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

/* Supplied declaration required: FUN_002bc11c. */
/* Supplied declaration required: FUN_002c37a0. */


void FUN_00149488(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int *piVar6;
  unsigned char temp_v4;
  int temp_v5;
  unsigned int *puVar9;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar13;
  unsigned int temp_v9;
  unsigned int *puVar15;
  unsigned int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned char temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int *temp_v18;
  unsigned int temp_v19;
  int temp_v20;
  unsigned int *temp_v21;
  unsigned int *temp_v22;
  int temp_v23;
  int temp_v24;
  
  temp_v16 = 0;
  temp_v23 = param_1;
  temp_v24 = param_2;
  do {
    temp_v3 = temp_v23;
    temp_v4 = temp_v16;
    FUN_002c37a0(0x20000);
    temp_v1 = FUN_002bc11c();
    temp_v5 = temp_v3 + temp_v4 * 4;
    puVar15 = *(unsigned int **)(temp_v5 + 0xc);
    temp_v17 = *(unsigned int *)(temp_v3 + 0x34);
    *puVar15 = (temp_v17 - 1) | 0xa0000000;
    puVar15[4] = 0;
    puVar15[5] = 0x801f02bb;
    puVar15[6] = 0;
    puVar15[3] = 0x10242;
    puVar15[7] = 0;
    puVar15[8] = temp_v1 >> 3;
    temp_v10 = 0xc;
    puVar15[1] = 0xb02b9;
    puVar15[2] = temp_v17 - 1;
    temp_v11 = 0;
    puVar15[9] = (((temp_v17 * 3 + 2) & 0xff) << 0x14) | 0x800f0200;
    temp_v9 = 0;
    puVar15[10] = 0;
    puVar15[0xb] = temp_v17 * 0x10000000 + 0xf0000000;
    temp_v21 = puVar15 + 4;
    temp_v18 = puVar15 + 10;
    temp_v22 = puVar15 + 0xb;
    if (0 < *(int *)(temp_v3 + 0x34)) {
      temp_v19 = 1 - temp_v4;
      do {
        temp_v12 = temp_v3 + temp_v11 * 0x1c;
        if (*(char *)(temp_v12 + 0x41) != '\0') {
          temp_v8 = ((int)temp_v9 % 8) * 4;
          temp_v21[((int)temp_v9 / 8) * 2] =
               temp_v21[((int)temp_v9 / 8) * 2] |
               ((*(unsigned int *)(temp_v12 + 0x38) & 0xf) << (temp_v8 & 0xff));
          temp_v14 = *(int *)(temp_v12 + 0x3c);
          temp_v13 = (unsigned int)*(unsigned char *)(temp_v12 + 0x40);
          temp_v6 = 0;
          if ((temp_v14 != 0x1400) && (temp_v6 = (unsigned int)(temp_v14 == 0x1401), temp_v14 != 0x1401)) {
            if (temp_v14 == 0x1402) {
              temp_v6 = 2;
            }
            else if (temp_v14 == 0x1406) {
              temp_v6 = 3;
            }
          }
          temp_v18[(int)(temp_v9 + ((unsigned int)((int)temp_v9 >> 0x1f) >> 0x1d)) >> 3] =
               (((temp_v6 + temp_v13 * 4) - 4) << (temp_v8 & 0xff)) |
               temp_v18[(int)(temp_v9 + ((unsigned int)((int)temp_v9 >> 0x1f) >> 0x1d)) >> 3];
          if (*(char *)(temp_v12 + 0x41) == '\0') {
            temp_v7 = 0;
          }
          else {
            temp_v8 = temp_v4;
            if (*(char *)(temp_v3 + 0x30) != '\0') {
              temp_v8 = temp_v19 & 0xff;
            }
            temp_v7 = *(unsigned int *)(temp_v12 + temp_v8 * 4 + 0x44);
          }
          temp_v2 = FUN_002bc11c(temp_v7);
          puVar13 = puVar15 + temp_v10;
          temp_v15 = temp_v14 == 0x1400;
          *(unsigned int **)(temp_v12 + temp_v4 * 4 + 0x4c) = puVar13;
          if (!temp_v15) {
            puVar13 = (unsigned int *)(temp_v14 - 0x1400);
          }
          puVar15[temp_v10] = temp_v2 - temp_v1;
          if (!temp_v15) {
            puVar13 = (unsigned int *)((int)puVar13 - 1);
            temp_v15 = puVar13 == (unsigned int *)0x0;
          }
          puVar15[temp_v10 + 1] = temp_v9;
          temp_v12 = temp_v10 + 2;
          if (!temp_v15) {
            if (puVar13 == (unsigned int *)0x1) {
              temp_v13 = temp_v13 << 1;
            }
            else if (puVar13 != (unsigned int *)0x5) {
              temp_v13 = 0;
            }
            else {
              temp_v13 = temp_v13 << 2;
            }
          }
          temp_v9 = temp_v9 + 1;
          temp_v10 = temp_v10 + 3;
          puVar15[temp_v12] = temp_v13 * 0x10000 + 0x10000000;
        }
        temp_v11 = temp_v11 + 1;
      } while (temp_v11 < *(int *)(temp_v3 + 0x34));
    }
    temp_v11 = (temp_v17 - temp_v9) * 3;
    if (0 < temp_v11) {
      puVar9 = puVar15 + temp_v10;
      puVar13 = puVar9 + -1;
      if (((temp_v17 - temp_v9) & 1) != 0) {
        *puVar9 = 0;
        puVar13 = puVar9;
      }
      for (temp_v12 = temp_v11 >> 1; temp_v12 != 0; temp_v12 = temp_v12 - 1) {
        puVar13[1] = 0;
        puVar13 = puVar13 + 2;
        *puVar13 = 0;
      }
      temp_v10 = temp_v10 + temp_v11;
    }
    if ((temp_v10 & 1) != 0) {
      puVar15[temp_v10] = 0;
      temp_v10 = temp_v10 + 1;
    }
    temp_v11 = 0;
    temp_v1 = temp_v10;
    if (0 < *(int *)(temp_v3 + 0x34)) {
      do {
        temp_v12 = temp_v3 + temp_v11 * 0x1c;
        temp_v1 = temp_v10;
        if (*(char *)(temp_v12 + 0x41) == '\0') {
          temp_v21[((int)temp_v9 / 8) * 2] =
               temp_v21[((int)temp_v9 / 8) * 2] |
               ((*(unsigned int *)(temp_v12 + 0x38) & 0xf) << ((((int)temp_v9 % 8) * 4) & 0xffU));
          temp_v17 = 0;
          temp_v18 = (unsigned int *)0x0;
          temp_v19 = 0;
          temp_v20 = 0;
          temp_v0 = *(unsigned char *)(temp_v12 + 0x40);
          temp_v14 = 0;
          if (*(char *)(temp_v12 + 0x41) == '\0') {
            temp_v2 = *(int *)(temp_v12 + 0x44);
          }
          else {
            temp_v2 = 0;
          }
          if (temp_v0 != 0) {
            do {
              temp_v8 = *(unsigned int *)(temp_v2 + temp_v14 * 4);
              temp_v1 = 0;
              if ((temp_v8 & 0x80000000) != 0) {
                temp_v1 = 0x800000;
              }
              if ((temp_v8 & 0x7fffffff) == 0) {
                temp_v13 = 0;
                temp_v1 = temp_v1 | ((temp_v8 & 0x7fffff) >> 7) | ((temp_v13 & 0x7f) << 0x10);
              }
              else {
                temp_v13 = ((temp_v8 & 0x7fffffff) >> 0x17) - 0x40;
                if (-1 < (int)temp_v13) {
                  if ((int)temp_v13 >= 0x80) {
                    temp_v1 = 0x7f0000;
                  }
                  else {
                    temp_v1 = temp_v1 | ((temp_v8 & 0x7fffff) >> 7) | ((temp_v13 & 0x7f) << 0x10);
                  }
                }
              }
              (&temp_v17)[temp_v14] = temp_v1;
              temp_v14 = temp_v14 + 1;
            } while (temp_v14 < (int)(unsigned int)temp_v0);
          }
          temp_v8 = temp_v9 + 0x10;
          *(unsigned int **)(temp_v12 + temp_v4 * 4 + 0x4c) = puVar15 + temp_v10 + 2;
          puVar15[temp_v10] = temp_v9;
          puVar15[temp_v10 + 1] = 0x803f0232;
          temp_v9 = temp_v9 + 1;
          puVar15[temp_v10 + 2] = (temp_v20 << 8) | (temp_v19 >> 0x10);
          temp_v1 = temp_v10 + 6;
          puVar15[temp_v10 + 3] = (temp_v19 << 0x10) | ((unsigned int)temp_v18 >> 8);
          puVar15[temp_v10 + 4] = temp_v17 | ((int)temp_v18 << 0x18);
          puVar15[temp_v10 + 5] = 0;
          *temp_v22 = *temp_v22 | (1 << (temp_v8 & 0xff));
        }
        temp_v11 = temp_v11 + 1;
        temp_v10 = temp_v1;
      } while (temp_v11 < *(int *)(temp_v3 + 0x34));
    }
    puVar15[temp_v1] = 0x76543210;
    puVar15[temp_v1 + 1] = 0x801f028b;
    puVar15[temp_v1 + 2] = 0xfedcba98;
    puVar15[temp_v1 + 3] = 0;
    *(unsigned int *)(temp_v5 + 0x14) = (temp_v1 + 4) * 4;
    temp_v16 = temp_v16 + 1;
    if ((int)temp_v16 >= 2) {
      temp_v5 = 0;
      temp_v11 = 0;
      temp_v3 = *(int *)(temp_v23 + 0x34);
      temp_v12 = *(int *)(temp_v23 + 0x1c);
      if (0 < temp_v3) {
        temp_v14 = 0;
        do {
          if (*(char *)(temp_v23 + temp_v14 * 0x1c + 0x41) != '\0') {
            *(unsigned int *)(temp_v12 + temp_v11 * 4) = 0;
            *(unsigned int *)(temp_v12 + (temp_v11 + 1) * 4) = ((temp_v5 * 3 + 0x205U) & 0xffff) | 0xf0000;
            temp_v5 = temp_v5 + 1;
            temp_v11 = temp_v11 + 2;
          }
          temp_v3 = temp_v3 - 1;
          temp_v14 = temp_v14 + 1;
        } while (temp_v3 != 0);
      }
      if (0 < temp_v5) {
        temp_v14 = 0;
        piVar5 = (int *)(temp_v12 + temp_v11 * 4);
        temp_v3 = temp_v5;
        do {
          temp_v3 = temp_v3 - 1;
          piVar5[1] = -0x7fc0fdce;
          piVar5[2] = 0;
          piVar5[3] = 0;
          piVar5[4] = 0;
          piVar6 = piVar5 + 5;
          *piVar5 = temp_v14;
          temp_v14 = temp_v14 + 1;
          piVar5 = piVar5 + 6;
          *piVar6 = 0;
        } while (temp_v3 != 0);
        temp_v11 = temp_v11 + temp_v5 * 6;
      }
      *(int *)(temp_v23 + 0x20) = temp_v11 << 2;
      puVar15 = *(unsigned int **)(temp_v24 + 8);
      if ((puVar15 != (unsigned int *)0x0) && (temp_v11 = 0x40000001, (~*puVar15 & 0x40000001) != 0)) {
        puVar15 = (unsigned int *)0x0;
      }
      temp_v10 = puVar15[0x11];
      if (temp_v10 != 0) {
        piVar5 = (int *)((int)(puVar15 + 0x11) + temp_v10);
      }
      else {
        piVar5 = (int *)0x0;
      }
      puVar15 = *(unsigned int **)(temp_v23 + 0x24);
      temp_v3 = *piVar5;
      if (temp_v3 == -0x80000000) {
        temp_v11 = 0;
      }
      else if (temp_v3 == 0x10000000) {
        temp_v11 = 5;
      }
      else if (temp_v3 == 0x20000000) {
        temp_v11 = 3;
      }
      else if (temp_v3 == 0x40000000) {
        temp_v11 = 8;
      }
      puVar15[0xf] = 0x10245;
      puVar15[0x13] = 0x10245;
      puVar15[10] = 0x300;
      puVar15[0xb] = 0x2025e;
      puVar15[7] = 0x20229;
      puVar15[9] = 0x20253;
      puVar15[0xd] = 0xf025f;
      puVar15[0x11] = 0xf022f;
      puVar15[0x15] = 0xf0231;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[4] = 0;
      puVar15[5] = 0;
      puVar15[6] = 0;
      puVar15[8] = 0;
      puVar15[0xe] = 0;
      puVar15[0x16] = 0;
      puVar15[0xc] = 1;
      puVar15[0x10] = 1;
      puVar15[0x12] = 1;
      puVar15[0x14] = 1;
      *puVar15 = (temp_v11 << 1) | 0x7fff0000;
      puVar15[1] = 0x804f02b0;
      puVar15[0x18] = 0;
      puVar15[0x17] = 0x8025e;
      puVar15[0x19] = 0x8025e;
      puVar15[0x1a] = 1;
      puVar15[0x1d] = 0xf0110;
      puVar15[0x1b] = 0xf0111;
      puVar15[0x1c] = 1;
      *(unsigned int *)(temp_v23 + 0x28) = 0x78;
      return;
    }
  } while( 1 );
}
