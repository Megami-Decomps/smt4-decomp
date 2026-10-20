/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e0510` (_code @ 0x3e0510, 0x6a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010063a(int [4], unsigned int, int, unsigned char *);
int FUN_0019cac4(void);
int FUN_00239404(int, int);
int FUN_0038a7dc(int, int, unsigned int, int);
int FUN_003e3188(unsigned int *, int);
int FUN_003eba0c(int, int);
int FUN_003edaf0(int, int);
int FUN_003eebf4(int, int);
int FUN_0050dda4(void);
int rt_memcpy_w(...);

/* stack frame of param_2: 18 slot(s), 72 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp2B0; /* 0x2b0: local_2b0 */
    unsigned int sp2B8; /* 0x2b8: local_2b8 */
    unsigned int sp2C0; /* 0x2c0: local_2c0 */
    unsigned int sp2C4; /* 0x2c4: local_2c4 */
    unsigned int sp2C8; /* 0x2c8: local_2c8 */
    unsigned int sp2CC; /* 0x2cc: local_2cc */
    unsigned int sp2D4; /* 0x2d4: local_2d4 */
    unsigned int sp2D8; /* 0x2d8: local_2d8 */
    unsigned int sp2DC; /* 0x2dc: local_2dc */
    unsigned int sp2E0; /* 0x2e0: local_2e0 */
    unsigned int sp2E4; /* 0x2e4: local_2e4 */
    unsigned int sp2EC; /* 0x2ec: local_2ec */
    unsigned int sp2F0; /* 0x2f0: local_2f0 */
} param_2_stack;

extern unsigned char LAB_0020e93c; /* 0x20e93c */
extern unsigned int DAT_00573848; /* 0x573848 */
extern unsigned int DAT_0057384c; /* 0x57384c */
extern unsigned int DAT_0057aa1c; /* 0x57aa1c */

/* Supplied declaration required: FUN_0010063a. */
/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_00239404. */
/* Supplied declaration required: FUN_0038a7dc. */
/* Supplied declaration required: FUN_003e3188. */
/* Supplied declaration required: FUN_003eba0c. */
/* Supplied declaration required: FUN_003edaf0. */
/* Supplied declaration required: FUN_003eebf4. */
extern int FUN_003ef9e0(int, int);
/* Supplied declaration required: FUN_0050dda4. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003e0510(unsigned int *param_1,int param_2)

{
/* irregular: 2 goto(s); irregular input(s): in_s1, in_s2; 10 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar11;
  int *piVar12;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int *puVar15;
  unsigned int temp_v12;
  int temp_v13;
  unsigned int *puVar18;
  unsigned int temp_v14;
  int temp_v15;
  float temp_v16;
  float in_s1;
  unsigned int in_s2;
  float temp_v17;
  int temp_v18 [4];
  unsigned int temp_v19;
  unsigned int temp_v20;
  int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  int temp_v27;
  int temp_v28;
  unsigned char temp_v29 [492];
  unsigned int temp_v30;
  int temp_v31;
  unsigned int *temp_v32;
  int temp_v33;
  
  temp_v18[0] = param_1[2];
  temp_v3 = param_2 + 0x430;
  temp_v32 = param_1;
  temp_v33 = param_2;
  FUN_0038a7dc(temp_v3,0x32,*(unsigned int *)(param_2 + 0x1ec4),param_2 + 0x10b0);
  temp_v9 = temp_v33;
  FUN_003eebf4(temp_v33,1);
  piVar12 = (int *)(temp_v33 + 0x1ffc);
  temp_v4 = (unsigned int)*(unsigned short *)(*piVar12 + temp_v9 * 0x408 + 0x166);
  temp_v18[3] = temp_v9;
  FUN_0019cac4();
  temp_v0 = *(unsigned char *)(temp_v4 + 0xa2);
  temp_v17 = 0.0f;
  if (temp_v0 == 0) {
    temp_v17 = 15.0f;
  }
  if ((temp_v0 >= 2) && (temp_v0 == 2)) {
    temp_v17 = -20.0f;
  }
  temp_v16 = 0.30543265f;
  FUN_0050dda4();
  if (0 < temp_v3) {
    temp_v8 = 0;
    temp_v9 = temp_v3;
    do {
      temp_v9 = temp_v9 - 1;
      temp_v7 = temp_v33 + temp_v8 * 0x20;
      temp_v16 = *(float *)(temp_v7 + 0x448) + temp_v17;
      temp_v8 = temp_v8 + 1;
      *(float *)(temp_v7 + 0x448) = temp_v16;
      *(unsigned int *)(temp_v7 + 0xa8c) = *(unsigned int *)(temp_v7 + 0x44c);
      *(unsigned int *)(temp_v7 + 0xa70) = *(unsigned int *)(temp_v7 + 0x430);
      *(unsigned int *)(temp_v7 + 0xa74) = *(unsigned int *)(temp_v7 + 0x434);
      *(unsigned int *)(temp_v7 + 0xa78) = *(unsigned int *)(temp_v7 + 0x438);
      *(unsigned int *)(temp_v7 + 0xa7c) = *(unsigned int *)(temp_v7 + 0x43c);
      *(unsigned int *)(temp_v7 + 0xa80) = *(unsigned int *)(temp_v7 + 0x440);
      *(unsigned int *)(temp_v7 + 0xa84) = *(unsigned int *)(temp_v7 + 0x444);
      *(float *)(temp_v7 + 0xa88) = temp_v16;
    } while (temp_v9 != 0);
  }
  FUN_00239404(temp_v33 + 0x430,temp_v3);
  FUN_00239404(temp_v33 + 0xa70,temp_v3);
  temp_v9 = 0;
  temp_v8 = -1;
  temp_v27 = temp_v33 + 0x1e00;
  *(short *)(temp_v33 + 0x1ec0) = (short)temp_v3;
  temp_v6 = DAT_0057384c;
  temp_v4 = DAT_00573848;
  temp_v31 = 0xff;
  temp_v3 = 4;
  temp_v22 = DAT_0057384c;
  temp_v19 = DAT_00573848;
  piVar11 = (int *)(temp_v33 + 0x1ed4);
  do {
    temp_v7 = *piVar11;
    temp_v15 = temp_v3 * 0x1d0 + 0x68;
    if (*(short *)(temp_v7 + temp_v15) >= 0) {
      puVar18 = (unsigned int *)(*piVar12 + *(short *)(temp_v7 + temp_v15) * 0x408);
      if ((puVar18[1] & temp_v6) != 0 || (*puVar18 & temp_v4) != 0) {
LAB_003e06c8:
        *(unsigned int *)(temp_v7 + temp_v3 * 0x1d0 + 0x50) = 0x491;
        temp_v7 = temp_v33 + temp_v9 * 0x20;
        *(short *)(*piVar11 + temp_v15) = (short)temp_v18[3];
        temp_v14 = *(unsigned int *)(temp_v7 + 0x444);
        puVar15 = (unsigned int *)(*piVar11 + temp_v3 * 0x1d0 + 0xc);
        temp_v12 = *(unsigned int *)(temp_v7 + 0x448);
        *puVar15 = *(unsigned int *)(temp_v7 + 0x440);
        puVar15[1] = temp_v14;
        temp_v18[1] = temp_v3 * 0x1d0 + 0x6c;
        puVar15[2] = temp_v12;
        *(unsigned short *)(*piVar11 + temp_v3 * 0x1d0 + 0x62) = *(unsigned short *)(temp_v7 + 0x434);
        *(unsigned int *)(*piVar11 + temp_v18[1]) = *(unsigned int *)(temp_v7 + 0x438);
        temp_v16 = *(float *)(temp_v7 + 0x43c);
        temp_v28 = temp_v3 * 0x1d0 + 0x110;
        *(float *)(*piVar11 + temp_v3 * 0x1d0 + 0x40) = temp_v16;
        *(unsigned int *)(*piVar11 + temp_v3 * 0x1d0 + 0x104) = 0;
        *(unsigned int *)(*piVar11 + temp_v28) = (unsigned int)*(unsigned short *)(temp_v7 + 0x44c);
        temp_v21 = *piVar11;
        temp_v24 = DAT_0057aa1c >> 0x18;
        temp_v25 = (DAT_0057aa1c & 0xff0000) >> 0x10;
        temp_v26 = (DAT_0057aa1c & 0xff00) >> 8;
        temp_v10 = *(unsigned int *)(temp_v21 + temp_v18[1]);
        temp_v23 = (temp_v10 & 0xff0000) >> 0x10;
        temp_v20 = (temp_v10 & 0xff00) >> 8;
        temp_v8 = ((temp_v24 + (temp_v10 >> 0x18)) >> 1) * 0x1000000 +
                ((temp_v23 + temp_v25) >> 1) * 0x10000 + ((temp_v26 + temp_v20) >> 1) * 0x100 +
                0xff;
        *(int *)(temp_v21 + temp_v18[1]) = temp_v8;
        *(int *)(*piVar11 + temp_v3 * 0x1d0 + 0x70) = temp_v8;
        *(unsigned int *)(*piVar11 + temp_v3 * 0x1d0 + 0x74) = *(unsigned int *)(*piVar11 + temp_v18[1]);
        *(unsigned int *)(*piVar11 + temp_v3 * 0x1d0 + 0x94) = *(unsigned int *)(*piVar11 + temp_v18[1]);
        *(unsigned int *)(*piVar11 + temp_v3 * 0x1d0 + 0x98) = *(unsigned int *)(*piVar11 + temp_v18[1]);
        if (*(int *)(*piVar11 + temp_v28) < temp_v31) {
          temp_v31 = *(int *)(*piVar11 + temp_v28);
        }
        temp_v11 = 0;
        temp_v13 = temp_v3 * 0x1d0 + 0x6a;
        do {
          temp_v5 = *piVar12 + *(short *)(*piVar11 + temp_v15) * 0x408;
          temp_v8 = (int)*(short *)(temp_v5 + 0x6e);
          *(unsigned int *)(temp_v5 + temp_v9 * 4 + 0x170) = *(unsigned int *)(temp_v7 + 0x430);
          temp_v2 = *(short *)(temp_v5 + temp_v11 * 2 + 8);
          if (*(short *)(*piVar11 + temp_v13) == temp_v2) break;
          if (temp_v2 < 0) {
            *(unsigned short *)(temp_v5 + temp_v11 * 2 + 8) = *(unsigned short *)(*piVar11 + temp_v13);
            break;
          }
          temp_v11 = temp_v11 + 1;
        } while (temp_v11 < 0x32);
        temp_v9 = temp_v9 + 1;
        if (*(short *)(temp_v33 + 0x1ec0) - 1 < temp_v9) break;
      }
    }
    else {
      temp_v10 = *(unsigned int *)(temp_v7 + temp_v3 * 0x1d0 + 0x50);
      if ((temp_v10 & 1) == 0 && (temp_v10 & 0x80) == 0) goto LAB_003e06c8;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x36);
  if (temp_v8 != -1) {
    temp_v9 = 0;
    temp_v3 = *piVar12 + temp_v8 * 0x408;
    do {
      temp_v8 = (int)*(short *)(temp_v3 + temp_v9 * 2 + 8);
      if (-1 < temp_v8) {
        temp_v8 = *piVar11 + temp_v8 * 0x1d0;
        if (((*(unsigned int *)(temp_v8 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v8 + 0x50) & 0x80) != 0) &&
           (*(int *)(temp_v8 + 0x110) == temp_v31)) {
          temp_v7 = *piVar11 + *(short *)(temp_v3 + 8) * 0x1d0;
          if (*(int *)(temp_v7 + 0x110) == temp_v31) {
            in_s1 = *(float *)(temp_v7 + 0xc) * *(float *)(temp_v7 + 0xc);
            temp_v16 = *(float *)(temp_v8 + 0xc) * *(float *)(temp_v8 + 0xc);
            if (in_s1 <= temp_v16) goto LAB_003e0a8c;
          }
          temp_v15 = FUN_003ef9e0(temp_v33,temp_v7);
          temp_v11 = FUN_003ef9e0(temp_v33,temp_v8);
          temp_v11 = temp_v3 + 0x164 + temp_v11 * 4;
          temp_v15 = temp_v3 + 0x164 + temp_v15 * 4;
          temp_v12 = *(unsigned int *)(temp_v15 + 0xc);
          *(unsigned int *)(temp_v15 + 0xc) = *(unsigned int *)(temp_v11 + 0xc);
          *(unsigned int *)(temp_v11 + 0xc) = temp_v12;
          temp_v30 = (unsigned int)*(unsigned short *)(temp_v8 + 0x6a);
          temp_v1 = *(unsigned short *)(temp_v7 + 0x6a);
          rt_memcpy_w(temp_v29,temp_v7,0x1d0);
          rt_memcpy_w(temp_v7,temp_v8,0x1d0);
          rt_memcpy_w(temp_v8,temp_v29,0x1d0);
          *(unsigned short *)(temp_v7 + 0x6a) = temp_v1;
          *(short *)(temp_v8 + 0x6a) = (short)temp_v30;
        }
      }
LAB_003e0a8c:
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 0x32);
    temp_v4 = 0;
    temp_v9 = 0;
    do {
      temp_v8 = (int)*(short *)(temp_v3 + temp_v9 * 2 + 8);
      if (-1 < temp_v8) {
        temp_v18[temp_v4] = *piVar11 + temp_v8 * 0x1d0;
        temp_v4 = temp_v4 + 1;
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < 0x32);
    FUN_003eba0c(temp_v33,temp_v3 + 0x164);
    FUN_0010063a(temp_v18,temp_v4,4,&LAB_0020e93c);
    if ((int)temp_v4 < 1) {
      temp_v6 = 0;
    }
    else {
      temp_v6 = temp_v4 & 1;
      if (temp_v6 == 1) {
        *(unsigned int *)(temp_v18[0] + 0x108) = 0;
      }
    }
    for (; (int)temp_v6 < (int)temp_v4; temp_v6 = temp_v6 + 2) {
      *(unsigned int *)(temp_v18[temp_v6] + 0x108) = temp_v6;
      *(unsigned int *)(temp_v18[temp_v6 + 1] + 0x108) = temp_v6 + 1;
    }
    FUN_003edaf0(temp_v33,*(unsigned short *)(temp_v3 + 0x166));
    temp_v9 = *piVar11 + *(short *)(temp_v3 + 8) * 0x1d0;
    *(float *)(temp_v9 + 0x1b0) = temp_v16;
    *(float *)(temp_v9 + 0x1b4) = in_s1;
    *(unsigned int *)(temp_v9 + 0x1b8) = in_s2;
  }
  temp_v32[4] = 0;
  temp_v32[3] = 0;
  *temp_v32 = 0x11;
  FUN_003e3188(temp_v32,temp_v33);
  return;
}

} /* extern "C" */
