/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334228` (_code @ 0x334228, 0x60c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00240520(int, int);
int FUN_002408ac(unsigned int *, int);
int btlFindNthActiveSpecialEntry(int, int);
int FUN_002881bc(void);
int dataTable00FindById(void);
int FUN_002b7bca(int *, int, int, unsigned char *);
int FUN_002fe394(int, int, unsigned int, int);
int FUN_00337f98(int, int);
int __aeabi_memcpy4(...);

/* stack frame of param_2: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp200; /* 0x200: local_200 */
    unsigned int sp208; /* 0x208: local_208 */
    unsigned int sp20C; /* 0x20c: local_20c */
    unsigned int sp210; /* 0x210: local_210 */
    unsigned int sp214; /* 0x214: local_214 */
    unsigned int sp220; /* 0x220: local_220 */
    unsigned int sp224; /* 0x224: local_224 */
    unsigned int sp22C; /* 0x22c: local_22c */
    unsigned int sp234; /* 0x234: local_234 */
    unsigned int sp238; /* 0x238: local_238 */
} param_2_stack;

extern unsigned char FUN_001921c8; /* 0x1921c8 */
extern unsigned int DAT_00439cf8; /* 0x439cf8 */

/* Supplied declaration required: FUN_00240520. */
/* Supplied declaration required: FUN_002408ac. */
extern int FUN_0027dab0(int, int);
/* Supplied declaration required: btlFindNthActiveSpecialEntry. */
/* Supplied declaration required: FUN_002881bc. */
/* Supplied declaration required: dataTable00FindById. */
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: FUN_002fe394. */
/* Supplied declaration required: FUN_00337f98. */
/* Supplied declaration required: __aeabi_memcpy4. */


void FUN_00334228(unsigned int *param_1,int param_2)

{
/* irregular: 1 goto(s); 9 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  short temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar9;
  int *piVar10;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int *puVar16;
  int temp_v13;
  float temp_v14;
  int temp_v15;
  unsigned int *temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  int temp_v23;
  int temp_v24;
  int temp_v25;
  unsigned char temp_v26 [288];
  int temp_v27;
  unsigned int *temp_v28;
  int temp_v29;
  
  temp_v15 = param_1[2];
  temp_v4 = param_2 + 0x3f4;
  temp_v28 = param_1;
  temp_v29 = param_2;
  FUN_002fe394(temp_v4,0x32,*(unsigned int *)(param_2 + 0x1e88),param_2 + 0x1074);
  temp_v7 = temp_v29;
  temp_v15 = temp_v4;
  btlFindNthActiveSpecialEntry(temp_v29,1);
  piVar10 = (int *)(temp_v29 + 0x1fc0);
  temp_v5 = (unsigned int)*(unsigned short *)(*piVar10 + temp_v7 * 0x288 + 0xce);
  temp_v17 = temp_v7;
  dataTable00FindById();
  temp_v0 = *(unsigned char *)(temp_v5 + 0x9e);
  temp_v14 = 0.0f;
  if (temp_v0 == 0) {
    temp_v14 = 15.0f;
  }
  if ((temp_v0 >= 2) && (temp_v0 == 2)) {
    temp_v14 = -20.0f;
  }
  FUN_002881bc();
  if (0 < temp_v15) {
    temp_v4 = 0;
    temp_v7 = temp_v15;
    do {
      temp_v7 = temp_v7 - 1;
      temp_v6 = temp_v29 + temp_v4 * 0x20;
      temp_v4 = temp_v4 + 1;
      *(float *)(temp_v6 + 0x40c) = *(float *)(temp_v6 + 0x40c) + temp_v14;
      *(unsigned int *)(temp_v6 + 0xa34) = *(unsigned int *)(temp_v6 + 0x3f4);
      *(unsigned int *)(temp_v6 + 0xa38) = *(unsigned int *)(temp_v6 + 0x3f8);
      *(unsigned int *)(temp_v6 + 0xa3c) = *(unsigned int *)(temp_v6 + 0x3fc);
      *(unsigned int *)(temp_v6 + 0xa40) = *(unsigned int *)(temp_v6 + 0x400);
      *(unsigned int *)(temp_v6 + 0xa44) = *(unsigned int *)(temp_v6 + 0x404);
      *(unsigned int *)(temp_v6 + 0xa48) = *(unsigned int *)(temp_v6 + 0x408);
      *(unsigned int *)(temp_v6 + 0xa4c) = *(unsigned int *)(temp_v6 + 0x40c);
      *(unsigned int *)(temp_v6 + 0xa50) = *(unsigned int *)(temp_v6 + 0x410);
    } while (temp_v7 != 0);
  }
  FUN_00240520(temp_v29 + 0x3f4,temp_v15);
  FUN_00240520(temp_v29 + 0xa34,temp_v15);
  temp_v4 = -1;
  temp_v23 = temp_v29 + 0x1e00;
  *(short *)(temp_v29 + 0x1e84) = (short)temp_v15;
  temp_v27 = 0xff;
  temp_v25 = 4;
  temp_v7 = 0;
  piVar9 = (int *)(temp_v29 + 0x1e98);
  do {
    temp_v12 = *piVar9;
    temp_v15 = temp_v25 * 0x45;
    temp_v6 = temp_v25 * 0x114 + 0x60;
    if (*(short *)(temp_v12 + temp_v6) >= 0) {
      if ((*(unsigned int *)(*piVar10 + *(short *)(temp_v12 + temp_v6) * 0x288) & 0x100) != 0) {
LAB_003343b0:
        *(unsigned int *)(temp_v12 + temp_v25 * 0x114 + 0x50) = 0x491;
        temp_v12 = temp_v29 + temp_v7 * 0x20;
        *(short *)(*piVar9 + temp_v6) = (short)temp_v17;
        temp_v9 = *(unsigned int *)(temp_v12 + 0x408);
        temp_v11 = *(unsigned int *)(temp_v12 + 0x40c);
        puVar16 = (unsigned int *)(*piVar9 + temp_v25 * 0x114 + 0xc);
        *puVar16 = *(unsigned int *)(temp_v12 + 0x404);
        puVar16[1] = temp_v9;
        puVar16[2] = temp_v11;
        temp_v16 = (unsigned int *)(temp_v12 + 0x400);
        temp_v18 = temp_v25 * 0x114 + 100;
        *(unsigned short *)(*piVar9 + temp_v25 * 0x114 + 0x5a) = *(unsigned short *)(temp_v12 + 0x3f8);
        *(unsigned int *)(*piVar9 + temp_v18) = *(unsigned int *)(temp_v12 + 0x3fc);
        temp_v24 = temp_v25 * 0x114 + 0xfc;
        *(unsigned int *)(*piVar9 + temp_v25 * 0x114 + 0x40) = *temp_v16;
        *(unsigned int *)(*piVar9 + temp_v25 * 0x114 + 0xf0) = 0;
        *(unsigned int *)(*piVar9 + temp_v24) = (unsigned int)*(unsigned short *)(temp_v12 + 0x410);
        temp_v20 = *piVar9;
        temp_v22 = DAT_00439cf8 >> 0x18;
        temp_v19 = (DAT_00439cf8 & 0xff00) >> 8;
        temp_v5 = *(unsigned int *)(temp_v20 + temp_v18);
        temp_v21 = (temp_v5 & 0xff00) >> 8;
        temp_v4 = ((temp_v22 + (temp_v5 >> 0x18)) >> 1) * 0x1000000 +
                ((((temp_v5 & 0xff0000) >> 0x10) + ((DAT_00439cf8 & 0xff0000) >> 0x10)) >> 1) *
                0x10000 + ((temp_v21 + temp_v19) >> 1) * 0x100 + 0xff;
        *(int *)(temp_v20 + temp_v18) = temp_v4;
        *(int *)(*piVar9 + temp_v25 * 0x114 + 0x68) = temp_v4;
        *(unsigned int *)(*piVar9 + temp_v25 * 0x114 + 0x6c) = *(unsigned int *)(*piVar9 + temp_v18);
        *(unsigned int *)(*piVar9 + temp_v25 * 0x114 + 0x8c) = *(unsigned int *)(*piVar9 + temp_v18);
        *(unsigned int *)(*piVar9 + temp_v25 * 0x114 + 0x90) = *(unsigned int *)(*piVar9 + temp_v18);
        if (*(int *)(*piVar9 + temp_v24) < temp_v27) {
          temp_v27 = *(int *)(*piVar9 + temp_v24);
        }
        temp_v13 = 0;
        temp_v10 = temp_v25 * 0x114 + 0x62;
        do {
          temp_v8 = *piVar10 + *(short *)(*piVar9 + temp_v6) * 0x288;
          temp_v4 = (int)*(short *)(temp_v8 + 0x6e);
          *(unsigned int *)(temp_v8 + temp_v7 * 4 + 0xd8) = *(unsigned int *)(temp_v12 + 0x3f4);
          temp_v3 = *(short *)(temp_v8 + temp_v13 * 2 + 8);
          if (*(short *)(*piVar9 + temp_v10) == temp_v3) break;
          if (temp_v3 < 0) {
            *(unsigned short *)(temp_v8 + temp_v13 * 2 + 8) = *(unsigned short *)(*piVar9 + temp_v10);
            break;
          }
          temp_v13 = temp_v13 + 1;
        } while (temp_v13 < 0x32);
        temp_v7 = temp_v7 + 1;
        if (*(short *)(temp_v29 + 0x1e84) - 1 < temp_v7) break;
      }
    }
    else {
      temp_v5 = *(unsigned int *)(temp_v12 + temp_v25 * 0x114 + 0x50);
      if ((temp_v5 & 1) == 0 && (temp_v5 & 0x80) == 0) goto LAB_003343b0;
    }
    temp_v25 = temp_v25 + 1;
  } while (temp_v25 < 0x36);
  if (temp_v4 != -1) {
    temp_v7 = 0;
    temp_v4 = *piVar10 + temp_v4 * 0x288;
    do {
      temp_v6 = (int)*(short *)(temp_v4 + temp_v7 * 2 + 8);
      if (-1 < temp_v6) {
        temp_v6 = *piVar9 + temp_v6 * 0x114;
        if ((((*(unsigned int *)(temp_v6 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v6 + 0x50) & 0x80) != 0) &&
            (*(int *)(temp_v6 + 0xfc) == temp_v27)) &&
           ((temp_v12 = *piVar9 + *(short *)(temp_v4 + 8) * 0x114, *(int *)(temp_v12 + 0xfc) != temp_v27
            || (*(float *)(temp_v6 + 0xc) * *(float *)(temp_v6 + 0xc) <
                *(float *)(temp_v12 + 0xc) * *(float *)(temp_v12 + 0xc))))) {
          temp_v10 = FUN_0027dab0(temp_v29,temp_v12);
          temp_v13 = FUN_0027dab0(temp_v29,temp_v6);
          temp_v13 = temp_v4 + 0xcc + temp_v13 * 4;
          temp_v10 = temp_v4 + 0xcc + temp_v10 * 4;
          temp_v9 = *(unsigned int *)(temp_v10 + 0xc);
          *(unsigned int *)(temp_v10 + 0xc) = *(unsigned int *)(temp_v13 + 0xc);
          *(unsigned int *)(temp_v13 + 0xc) = temp_v9;
          temp_v1 = *(unsigned short *)(temp_v12 + 0x62);
          temp_v2 = *(unsigned short *)(temp_v6 + 0x62);
          __aeabi_memcpy4(temp_v26,temp_v12,0x114);
          __aeabi_memcpy4(temp_v12,temp_v6,0x114);
          __aeabi_memcpy4(temp_v6,temp_v26,0x114);
          *(unsigned short *)(temp_v12 + 0x62) = temp_v1;
          *(unsigned short *)(temp_v6 + 0x62) = temp_v2;
        }
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 0x32);
    temp_v6 = 0;
    temp_v7 = 0;
    do {
      temp_v12 = (int)*(short *)(temp_v4 + temp_v7 * 2 + 8);
      if (-1 < temp_v12) {
        (&temp_v15)[temp_v6] = *piVar9 + temp_v12 * 0x114;
        temp_v6 = temp_v6 + 1;
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < 0x32);
    FUN_00337f98(temp_v29,temp_v4 + 0xcc);
    FUN_002b7bca(&temp_v15,temp_v6,4,&FUN_001921c8);
    temp_v7 = 0;
    if (temp_v7 < temp_v6) {
      do {
        *(int *)((&temp_v15)[temp_v7] + 0xf4) = temp_v7;
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < temp_v6);
    }
  }
  *temp_v28 = 7;
  FUN_002408ac(temp_v28,temp_v29);
  return;
}

} /* extern "C" */
