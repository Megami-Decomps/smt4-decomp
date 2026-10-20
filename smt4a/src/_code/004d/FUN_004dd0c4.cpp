/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dd0c4` (_code @ 0x4dd0c4, 0x72c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int FUN_001aba54(void);
int FUN_001b4a90(unsigned int *, int, unsigned int);
int FUN_002e6354(unsigned int *, int);
int FUN_002e6dd4(int, int);
int FUN_003f0e20(unsigned int *, int);
int FUN_004aa798(unsigned int, int, int);
int FUN_004aaebc(unsigned int, int, int, int, int, int, int);

/* stack frame of param_2: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_2_stack;

extern unsigned int DAT_00571138; /* 0x571138 */
extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571150; /* 0x571150 */
extern unsigned int DAT_00571154; /* 0x571154 */
extern unsigned int DAT_00571160; /* 0x571160 */
extern unsigned int DAT_00571164; /* 0x571164 */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern unsigned int DAT_00571188; /* 0x571188 */
extern unsigned int DAT_0057118c; /* 0x57118c */
extern unsigned int DAT_00571218; /* 0x571218 */
extern unsigned int DAT_0057121c; /* 0x57121c */
extern unsigned int DAT_00571228; /* 0x571228 */
extern unsigned int DAT_0057122c; /* 0x57122c */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004aa798. */
/* Supplied declaration required: FUN_004aaebc. */


void FUN_004dd0c4(int *param_1,unsigned int *param_2)

{
/* irregular: 3 goto(s); 8 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  short temp_v2;
  unsigned char temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int *puVar15;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned int *puVar20;
  unsigned int temp_v18;
  unsigned int temp_v19;
  int temp_v20;
  int temp_v21;
  
  temp_v11 = *(unsigned int *)(*param_1 + 0x45a0);
  temp_v16 = *(unsigned int *)(*param_1 + 0x45a4);
  if (!((DAT_0057121c & temp_v16) == 0 && (DAT_00571218 & temp_v11) == 0)) {
    temp_v11 = *param_2 | 0x80;
    *param_2 = temp_v11;
  }
  else if ((temp_v16 & DAT_0057122c) != 0 || (DAT_00571228 & temp_v11) != 0) {
    temp_v11 = *param_2 | 0x1000;
    *param_2 = temp_v11;
  }
  temp_v3 = 1;
  temp_v21 = (int)*(short *)(param_2[10] + 0x1c0);
  temp_v2 = *(short *)(param_2[10] + 0x1be);
  temp_v11 = *(unsigned int *)(*(int *)(*param_1 + 0x1ffc) + (unsigned int)(unsigned short)param_2[0xb] * 0x408);
  temp_v12 = temp_v21;
  FUN_001aba54();
  FUN_00192550();
  if (temp_v2 != 2) {
    if (temp_v2 == 8) {
      temp_v16 = 0;
      if (temp_v21 != 0) {
        temp_v16 = (unsigned int)*(unsigned short *)(temp_v21 + 0x32);
      }
      if ((!(temp_v21 == 0 || temp_v16 == 0)) &&
         ((FUN_001aba54(), temp_v16 == 0 ||
          (temp_v16 = (*(unsigned int *)(temp_v16 + 0x28) & 0x1ff) >> 5,
          !((temp_v16 != 2 && temp_v16 != 3) && temp_v16 != 4))))) {
        temp_v3 = 0;
      }
    }
  }
  else if ((temp_v12 != 0) &&
          (temp_v16 = (*(unsigned int *)(temp_v12 + 0x28) & 0x1ff) >> 5,
          !((temp_v16 != 2 && temp_v16 != 3) && temp_v16 != 4))) {
    temp_v3 = 0;
  }
  temp_v21 = 0x6d;
  temp_v12 = 0;
  do {
    temp_v21 = temp_v21 - 1;
    temp_v17 = temp_v12 * 0x1d0 + 0x50;
    temp_v16 = *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v17);
    *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v17) = temp_v16 & 0xfffffffb;
    *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v17) = temp_v16 & 0xfffffff3;
    temp_v12 = temp_v12 + 1;
  } while (temp_v21 != 0);
  param_2[0x16b] = 0xffffffff;
  temp_v10 = DAT_0057117c;
  temp_v15 = DAT_00571178;
  temp_v13 = DAT_0057116c;
  temp_v9 = DAT_00571168;
  temp_v8 = DAT_00571164;
  temp_v7 = DAT_00571160;
  temp_v6 = DAT_00571154;
  temp_v5 = DAT_00571150;
  temp_v4 = DAT_0057114c;
  temp_v16 = DAT_00571148;
  temp_v12 = 0;
  do {
    temp_v19 = (unsigned int)*(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v12 * 0x1d0 + 0x68);
    if (-1 < (int)temp_v19) {
      puVar20 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v19 * 0x408);
      temp_v14 = *puVar20;
      temp_v18 = puVar20[1];
      if (((temp_v14 & temp_v16) != 0 || (temp_v4 & temp_v18) != 0) &&
         ((temp_v14 & temp_v15) == 0 && (temp_v18 & temp_v10) == 0)) {
        if (temp_v3) {
          if (((temp_v11 & temp_v5) != 0) || ((temp_v11 & temp_v7) != 0)) {
            if ((temp_v14 & temp_v9) != 0 || (temp_v18 & temp_v13) != 0) goto LAB_004dd43c;
          }
          else if (((temp_v11 & temp_v9) == 0) || ((temp_v14 & temp_v9) == 0 && (temp_v18 & temp_v13) == 0)) {
LAB_004dd43c:
            if ((int)param_2[0x16b] < 0) {
              param_2[0x16b] = temp_v19;
            }
            temp_v21 = temp_v12 * 0x1d0 + 0x50;
            *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v21) =
                 *(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v21) | 4;
          }
        }
        else if (((temp_v11 & temp_v5) != 0) || ((temp_v11 & temp_v7) != 0)) {
          if (((temp_v5 & temp_v14) != 0 || (temp_v6 & temp_v18) != 0) ||
             ((temp_v14 & temp_v7) != 0 || (temp_v18 & temp_v8) != 0)) goto LAB_004dd43c;
        }
        else if (((temp_v11 & temp_v9) == 0) ||
                (((temp_v5 & temp_v14) == 0 && (temp_v6 & temp_v18) == 0 &&
                 ((temp_v14 & temp_v7) == 0 && (temp_v18 & temp_v8) == 0)))) goto LAB_004dd43c;
      }
    }
    temp_v12 = temp_v12 + 1;
    if (temp_v12 >= 0x6d) {
      FUN_001b4a90(param_2 + 0x51,0x214,0xffffffff);
      FUN_001b4a90(param_2 + 0xd6,0x214,0xffffffff);
      temp_v21 = 0;
      temp_v12 = 0;
      do {
        puVar20 = (unsigned int *)*param_1;
        temp_v20 = puVar20[0x7b5] + temp_v21 * 0x1d0;
        temp_v17 = temp_v12;
        if ((*(unsigned int *)(temp_v20 + 0x50) & 4) != 0 && (*(unsigned int *)(temp_v20 + 0x50) & 0x400) != 0) {
          FUN_003f0e20(puVar20,(int)*(short *)(temp_v20 + 0x6a));
          if (((DAT_00571168 & *puVar20) != 0 || (DAT_0057116c & puVar20[1]) != 0) &&
             (((puVar20[1] & DAT_0057118c) == 0 && (DAT_00571188 & *puVar20) == 0 ||
              ((short)puVar20[2] == *(short *)(temp_v20 + 0x6a))))) {
            temp_v11 = DAT_0057a9c8;
            FUN_004aaebc(DAT_0057a9c8,*(unsigned short *)((int)puVar20 + 0x166),
                         (int)*(char *)(temp_v20 + 0x3c),(int)(short)puVar20[0x97],
                         (int)(short)puVar20[0x99],(short)puVar20[0x9d],0);
            temp_v17 = temp_v12 + 1;
            param_2[temp_v12 + 0x51] = temp_v11;
            param_2[temp_v12 + 0xd6] = (int)*(short *)((int)puVar20 + 0x6e);
          }
        }
        temp_v21 = temp_v21 + 1;
        temp_v12 = temp_v17;
      } while (temp_v21 < 0x85);
      FUN_004aa798(DAT_0057a9c8,*param_1 + 0x1ec8,5);
      FUN_002e6354(param_2 + 0xe,0x85);
      FUN_002e6dd4((int)param_2 + 0xbd,0x85);
      DAT_00571138 = 0xffffffff;
      temp_v12 = 0;
      do {
        if ((*(unsigned int *)(*(int *)(*param_1 + 0x1ed4) + temp_v12 * 0x1d0 + 0x50) & 4) != 0) {
          temp_v2 = *(short *)(*(int *)(*param_1 + 0x1ed4) + temp_v12 * 0x1d0 + 0x68);
          if (-1 < temp_v2) {
            *(char *)((int)param_2 + temp_v2 + 0xbd) = (char)temp_v2;
          }
        }
        temp_v9 = DAT_0057118c;
        temp_v8 = DAT_00571188;
        temp_v7 = DAT_0057117c;
        temp_v6 = DAT_00571178;
        temp_v5 = DAT_0057116c;
        temp_v4 = DAT_00571168;
        temp_v16 = DAT_0057114c;
        temp_v11 = DAT_00571148;
        temp_v12 = temp_v12 + 1;
      } while (temp_v12 < 0x85);
      temp_v21 = 0;
      temp_v12 = 0x6c;
      while( 1 ) {
        do {
          temp_v0 = *(unsigned char *)((int)param_2 + temp_v12 + 0xbc);
          temp_v17 = *(int *)(*param_1 + 0x1ffc);
          puVar20 = (unsigned int *)(temp_v17 + (unsigned int)temp_v0 * 0x408);
          temp_v13 = *puVar20;
          temp_v15 = puVar20[1];
          if (((((temp_v15 & temp_v16) != 0 || (temp_v13 & temp_v11) != 0) &&
               ((temp_v13 & temp_v6) == 0 && (temp_v15 & temp_v7) == 0)) &&
              ((temp_v13 & temp_v4) != 0 || (temp_v15 & temp_v5) != 0)) &&
             ((temp_v13 & temp_v8) == 0 && (temp_v15 & temp_v9) == 0)) {
            temp_v1 = *(unsigned char *)((int)param_2 + temp_v12 + 0xbd);
            puVar15 = (unsigned int *)(temp_v17 + (unsigned int)temp_v1 * 0x408);
            temp_v13 = *puVar15;
            temp_v15 = puVar15[1];
            if ((((temp_v13 & temp_v11) != 0 || (temp_v15 & temp_v16) != 0) &&
                ((temp_v6 & temp_v13) == 0 && (temp_v15 & temp_v7) == 0)) &&
               (((temp_v13 & temp_v4) != 0 || (temp_v15 & temp_v5) != 0 &&
                (((temp_v13 & temp_v8) == 0 && (temp_v15 & temp_v9) == 0 &&
                 (temp_v17 = *(int *)(*param_1 + 0x1ed4),
                 *(float *)(temp_v17 + (short)puVar15[2] * 0x1d0 + 0xc) <
                 *(float *)(temp_v17 + (short)puVar20[2] * 0x1d0 + 0xc))))))) {
              *(unsigned char *)((int)param_2 + temp_v12 + 0xbd) = temp_v0;
              *(unsigned char *)((int)param_2 + temp_v12 + 0xbc) = temp_v1;
            }
          }
          temp_v12 = temp_v12 - 1;
        } while (temp_v21 < temp_v12);
        temp_v21 = temp_v21 + 1;
        if (temp_v21 >= 0x6c) break;
        temp_v12 = 0x6c;
      }
      temp_v12 = 0;
      do {
        if (*(char *)((int)param_2 + temp_v12 + 0xbd) != '\0') {
          param_2[0x16b] = (unsigned int)*(unsigned char *)((int)param_2 + temp_v12 + 0xbd);
          return;
        }
        temp_v12 = temp_v12 + 1;
      } while (temp_v12 < 0x6d);
      return;
    }
  } while( 1 );
}

} /* extern "C" */
