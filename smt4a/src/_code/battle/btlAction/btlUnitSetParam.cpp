/* NON_MATCHING: romwright 0.5.0 decompilation of `btlUnitSetParam` (_code @ 0x4de8b8, 0x172c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int FUN_003e8bb0(unsigned int [112], int);
int FUN_004dffe4(int *);
int FUN_004e5a90(...);
int FUN_004e5b5c(...);
int FUN_004e6ed8(int *, int);
int FUN_004e6fb0(int *);
int FUN_004e7c04(int *, unsigned int);
int FUN_004e84fc(...);
int FUN_004e9168(int *, unsigned int, int, unsigned int [2], int *);
int FUN_004e9ae8(...);
int FUN_004e9f74(int *, unsigned int);
int btlUnitGet(...);
int SBORROW4(...);

/* stack frame of param_4: 9 slot(s), 34 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned short sp210; /* 0x210: local_210 */
    unsigned int sp214; /* 0x214: local_214 */
    unsigned int sp21C; /* 0x21c: local_21c */
    unsigned int sp220; /* 0x220: local_220 */
} param_4_stack;

extern unsigned int g_btlScriptUnit; /* 0x57113c */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */
extern unsigned int DAT_00571190; /* 0x571190 */
extern int DAT_00571194; /* 0x571194 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_001633a0(short);
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_004dffe4. */
/* Supplied declaration required: FUN_004e5a90. */
/* Supplied declaration required: FUN_004e5b5c. */
/* Supplied declaration required: FUN_004e6ed8. */
/* Supplied declaration required: FUN_004e6fb0. */
/* Supplied declaration required: FUN_004e7c04. */
/* Supplied declaration required: FUN_004e84fc. */
/* Supplied declaration required: FUN_004e9168. */
/* Supplied declaration required: FUN_004e9ae8. */
/* Supplied declaration required: FUN_004e9f74. */
/* Supplied declaration required: btlUnitGet. */
extern int __aeabi_idivmod(int, unsigned int);


/* WARNING: Type propagation algorithm not settling */

void btlUnitSetParam(int *param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 goto(s); 15 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int temp_v4;
  short *psVar9;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int *puVar14;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned int temp_v11 [2];
  int temp_v12;
  unsigned int temp_v13 [112];
  int *temp_v14;
  int temp_v15;
  int *temp_v16;
  int *piStack_34;
  int temp_v17;
  unsigned int uStack_2c;
  int temp_v18;
  
  temp_v11[0] = 0;
  temp_v12 = 0;
  piStack_34 = param_1;
  temp_v17 = param_2;
  uStack_2c = param_3;
  temp_v18 = param_4;
  temp_v2 = btlUnitGet(g_btlScriptUnit);
  if (temp_v18 != 0) {
    *(unsigned int *)(temp_v2 + 0x5a0) = 0;
    *(unsigned int *)(temp_v2 + 0x5a4) = 0;
  }
  switch(*(unsigned short *)(*(int *)(temp_v2 + 0x28) + 0x1be)) {
  case 1:
    temp_v11[0] = (unsigned int)((DAT_00571168 & **(unsigned int **)(temp_v2 + 0x20)) == 0 &&
                         (DAT_0057116c & (*(unsigned int **)(temp_v2 + 0x20))[1]) == 0);
    FUN_003e8bb0(temp_v13,*param_1);
    if ((short)temp_v13[0] == 0) {
      temp_v12 = 0;
    }
    else {
      temp_v12 = 1;
    }
    break;
  case 2:
  case 3:
    FUN_004e9168(param_1,*(unsigned int *)(temp_v2 + 0x20),
                 (int)*(short *)(*(int *)(temp_v2 + 0x28) + 0x1c0),temp_v11,&temp_v12);
    break;
  case 8:
    temp_v3 = (int)*(short *)(*(int *)(temp_v2 + 0x28) + 0x1c0);
    FUN_00192550();
    if (*(short *)(temp_v3 + 0x32) == 0) {
      temp_v11[0] = (unsigned int)((**(unsigned int **)(temp_v2 + 0x20) & DAT_00571168) != 0 ||
                           (DAT_0057116c & (*(unsigned int **)(temp_v2 + 0x20))[1]) != 0);
      if ((*(unsigned char *)(temp_v3 + 0x3a) & 0x80) == 0) {
        temp_v12 = 0;
        break;
      }
      temp_v12 = 1;
      break;
    }
    FUN_004e9168(param_1,*(unsigned int *)(temp_v2 + 0x20),*(short *)(temp_v3 + 0x32),temp_v11,&temp_v12
                );
    break;
  case 0xb:
    temp_v12 = 0;
    temp_v11[0] = (unsigned int)(((*(unsigned int **)(temp_v2 + 0x20))[1] & DAT_0057116c) != 0 ||
                         (DAT_00571168 & **(unsigned int **)(temp_v2 + 0x20)) != 0);
  }
  FUN_004e7c04(param_1,temp_v11[0]);
  temp_v6 = DAT_00571194;
  temp_v8 = DAT_00571190;
  if (temp_v12 == 1 || temp_v12 == 2) {
    FUN_004e9f74(param_1,temp_v11[0]);
    return;
  }
  temp_v10 = SBORROW4(temp_v17,0x26);
  temp_v14 = param_1;
  temp_v16 = param_1;
  switch(temp_v17) {
  case 1:
    FUN_004dffe4(param_1);
    break;
  case 2:
    FUN_004e5b5c(param_1);
    break;
  case 3:
    FUN_004e6fb0(param_1);
    break;
  case 4:
    FUN_004e6ed8(param_1,1);
    break;
  case 5:
    temp_v3 = 0;
    puVar7 = *(unsigned int **)(*param_1 + 0x1ffc);
    temp_v8 = 100000000;
    temp_v5 = 0x6d;
    puVar14 = puVar7 + 0x98;
    psVar9 = (short *)((int)puVar7 + 0x6e);
    do {
      temp_v9 = (*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0;
      temp_v4 = 0;
      temp_v6 = 0;
      if (temp_v9) {
        temp_v6 = *puVar14;
        temp_v10 = SBORROW4(temp_v8,temp_v6);
        temp_v4 = temp_v8 - temp_v6;
      }
      if ((temp_v9 && temp_v8 != temp_v6) && temp_v4 < 0 == temp_v10) {
        temp_v13[temp_v3 + 1] = (int)*psVar9;
        temp_v8 = *puVar14;
        temp_v3 = temp_v3 + 1;
      }
      temp_v10 = SBORROW4(temp_v5,1);
      temp_v5 = temp_v5 - 1;
      puVar7 = puVar7 + 0x102;
      puVar14 = puVar14 + 0x102;
      psVar9 = psVar9 + 0x204;
    } while (temp_v5 != 0);
    temp_v3 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v3,1);
    goto joined_r0x004deccc;
  case 6:
    temp_v3 = 0;
    puVar7 = *(unsigned int **)(*param_1 + 0x1ffc);
    temp_v8 = 0;
    temp_v5 = 0x6d;
    puVar14 = puVar7 + 0x98;
    psVar9 = (short *)((int)puVar7 + 0x6e);
    do {
      temp_v9 = (*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0;
      temp_v4 = 0;
      temp_v6 = 0;
      if (temp_v9) {
        temp_v6 = *puVar14;
        temp_v10 = SBORROW4(temp_v6,temp_v8);
        temp_v4 = temp_v6 - temp_v8;
      }
      if ((temp_v9 && temp_v6 != temp_v8) && temp_v4 < 0 == temp_v10) {
        temp_v13[temp_v3 + 1] = (int)*psVar9;
        temp_v8 = *puVar14;
        temp_v3 = temp_v3 + 1;
      }
      temp_v10 = SBORROW4(temp_v5,1);
      temp_v5 = temp_v5 - 1;
      puVar7 = puVar7 + 0x102;
      puVar14 = puVar14 + 0x102;
      psVar9 = psVar9 + 0x204;
    } while (temp_v5 != 0);
    temp_v3 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v3,1);
joined_r0x004deccc:
    if (temp_v3 != 0) {
      temp_v5 = btlUnitGet(param_1);
      temp_v8 = temp_v13[temp_v3];
      *(unsigned char *)(temp_v8 + temp_v5 + 0x38) = 1;
    }
    else {
      FUN_004e5b5c(param_1);
    }
    break;
  case 7:
    FUN_004e5a90(param_1,param_3);
    break;
  case 8:
    puVar7 = *(unsigned int **)(*param_1 + 0x1ffc);
    temp_v3 = 0;
    temp_v5 = 0x6d;
    puVar14 = puVar7 + 0x9d;
    psVar9 = (short *)((int)puVar7 + 0x6e);
    do {
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (((unsigned int)(unsigned short)*puVar14 & (1 << (param_3 & 0xff))) == 0)) {
        temp_v13[temp_v3 + 1] = (int)*psVar9;
        temp_v3 = temp_v3 + 1;
      }
      temp_v5 = temp_v5 - 1;
      puVar7 = puVar7 + 0x102;
      puVar14 = puVar14 + 0x102;
      psVar9 = psVar9 + 0x204;
    } while (temp_v5 != 0);
    temp_v1 = FUN_004e9ae8(temp_v14,temp_v13 + 1,temp_v3,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(temp_v14);
    *(unsigned char *)((temp_v13 + 1)[temp_v3] + temp_v5 + 0x38) = 1;
    break;
  case 9:
    puVar14 = *(unsigned int **)(*param_1 + 0x1ffc);
    temp_v3 = 0;
    temp_v5 = 0x6d;
    puVar6 = puVar14 + 0x9d;
    psVar9 = (short *)((int)puVar14 + 0x6e);
    puVar7 = temp_v13 + 1;
    do {
      if (((*puVar14 & DAT_00571190) != 0 || (puVar14[1] & DAT_00571194) != 0) &&
         (((unsigned int)(unsigned short)*puVar6 & (1 << (param_3 & 0xff))) != 0)) {
        puVar7[temp_v3] = (int)*psVar9;
        temp_v3 = temp_v3 + 1;
      }
      temp_v5 = temp_v5 - 1;
      puVar14 = puVar14 + 0x102;
      puVar6 = puVar6 + 0x102;
      psVar9 = psVar9 + 0x204;
    } while (temp_v5 != 0);
    temp_v1 = FUN_004e9ae8(temp_v14,puVar7,temp_v3,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(temp_v14);
    *(unsigned char *)(puVar7[temp_v3] + temp_v5 + 0x38) = 1;
    break;
  case 10:
    puVar7 = *(unsigned int **)(*param_1 + 0x1ffc);
    temp_v3 = 0;
    temp_v5 = 0x6d;
    puVar14 = puVar7 + 0x9d;
    psVar9 = (short *)((int)puVar7 + 0x6e);
    do {
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (((unsigned int)(unsigned short)*puVar14 & (1 << (param_3 & 0xff))) == 0)) {
        temp_v13[temp_v3 + 1] = (int)*psVar9;
        temp_v3 = temp_v3 + 1;
      }
      temp_v5 = temp_v5 - 1;
      puVar7 = puVar7 + 0x102;
      puVar14 = puVar14 + 0x102;
      psVar9 = psVar9 + 0x204;
    } while (temp_v5 != 0);
    temp_v1 = FUN_004e9ae8(temp_v14,temp_v13 + 1,temp_v3,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(temp_v14);
    *(unsigned char *)((temp_v13 + 1)[temp_v3] + temp_v5 + 0x38) = 1;
    break;
  case 0xb:
    temp_v5 = 0;
    puVar7 = *(unsigned int **)(*param_1 + 0x1ffc);
    temp_v3 = 0x6d;
    psVar9 = (short *)((int)puVar7 + 0x6e);
    do {
      if (((puVar7[1] & DAT_00571194) != 0 || (*puVar7 & DAT_00571190) != 0) &&
         ((puVar7[1] & DAT_00571174) != 0 || (*puVar7 & DAT_00571170) != 0)) {
        temp_v13[temp_v5 + 1] = (int)*psVar9;
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar7 = puVar7 + 0x102;
      psVar9 = psVar9 + 0x204;
    } while (temp_v3 != 0);
    temp_v1 = FUN_004e9ae8(temp_v16,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(temp_v16);
    temp_v8 = temp_v13[temp_v3 + 1];
    *(unsigned char *)(temp_v8 + temp_v5 + 0x38) = 1;
    break;
  case 0xc:
    temp_v5 = 0;
    puVar7 = *(unsigned int **)(*param_1 + 0x1ffc);
    temp_v3 = 0x6d;
    psVar9 = (short *)((int)puVar7 + 0x6e);
    do {
      if (((puVar7[1] & DAT_00571194) != 0 || (*puVar7 & DAT_00571190) != 0) &&
         ((puVar7[1] & DAT_00571174) == 0 && (*puVar7 & DAT_00571170) == 0)) {
        temp_v13[temp_v5 + 1] = (int)*psVar9;
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar7 = puVar7 + 0x102;
      psVar9 = psVar9 + 0x204;
    } while (temp_v3 != 0);
    temp_v1 = FUN_004e9ae8(temp_v16,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(temp_v16);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0xd:
    puVar7 = *(unsigned int **)(*param_1 + 0x1ffc);
    temp_v3 = 0;
    temp_v5 = 0x6d;
    puVar5 = (unsigned short *)((int)puVar7 + 0x166);
    psVar9 = (short *)((int)puVar7 + 0x6e);
    do {
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) && (*puVar5 == param_3)
         ) {
        temp_v13[temp_v3 + 1] = (int)*psVar9;
        temp_v3 = temp_v3 + 1;
      }
      temp_v5 = temp_v5 - 1;
      puVar7 = puVar7 + 0x102;
      puVar5 = puVar5 + 0x204;
      psVar9 = psVar9 + 0x204;
    } while (temp_v5 != 0);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v3,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)((temp_v13 + 1)[temp_v3] + temp_v5 + 0x38) = 1;
    break;
  case 0xe:
    puVar7 = *(unsigned int **)(*param_1 + 0x1ffc);
    temp_v3 = 0;
    temp_v5 = 0x6d;
    puVar5 = (unsigned short *)((int)puVar7 + 0x166);
    psVar9 = (short *)((int)puVar7 + 0x6e);
    do {
      temp_v10 = (*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0;
      temp_v8 = 0;
      if (temp_v10) {
        temp_v8 = (unsigned int)*puVar5;
      }
      if (temp_v10 && temp_v8 != param_3) {
        temp_v13[temp_v3 + 1] = (int)*psVar9;
        temp_v3 = temp_v3 + 1;
      }
      temp_v5 = temp_v5 - 1;
      puVar7 = puVar7 + 0x102;
      puVar5 = puVar5 + 0x204;
      psVar9 = psVar9 + 0x204;
    } while (temp_v5 != 0);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v3,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)((temp_v13 + 1)[temp_v3] + temp_v5 + 0x38) = 1;
    break;
  case 0xf:
    temp_v3 = btlUnitGet(param_1);
    temp_v8 = (unsigned int)*(unsigned short *)(temp_v3 + 0x2c);
    temp_v3 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v8 + temp_v3 + 0x38) = 1;
    break;
  case 0x10:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      puVar7 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v3 * 0x408);
      temp_v4 = temp_v3;
      if ((DAT_00571190 & *puVar7) != 0 || (puVar7[1] & DAT_00571194) != 0) {
        temp_v7 = btlUnitGet(param_1);
        temp_v8 = (unsigned int)*(short *)(*(int *)(*param_1 + 0x1ffc) + temp_v3 * 0x408 + 0x6e);
        if (*(unsigned short *)(temp_v7 + 0x2c) != temp_v8) {
          temp_v13[temp_v5] = temp_v8;
          temp_v5 = temp_v5 + 1;
        }
      }
      temp_v3 = temp_v4 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3] + temp_v5 + 0x38) = 1;
    break;
  case 0x11:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6) >> 10 == 3)) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x12:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6) >> 10 == 4)) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x13:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6) >> 10 == 1)) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x14:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6) >> 10 == 2)) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x15:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6) >> 10 != 3)) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x16:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6) >> 10 != 4)) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x17:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6) >> 10 != 1)) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x18:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6) >> 10 != 2)) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x19:
    puVar14 = *(unsigned int **)(*param_1 + 0x1ffc);
    temp_v3 = 0;
    temp_v5 = 0x6d;
    puVar6 = puVar14 + param_3 + 0x1d;
    psVar9 = (short *)((int)puVar14 + 0x6e);
    puVar7 = temp_v13 + 1;
    do {
      if (((*puVar14 & DAT_00571190) != 0 || (puVar14[1] & DAT_00571194) != 0) && (0 < (int)*puVar6)
         ) {
        puVar7[temp_v3] = (int)*psVar9;
        temp_v3 = temp_v3 + 1;
      }
      temp_v5 = temp_v5 - 1;
      puVar14 = puVar14 + 0x102;
      puVar6 = puVar6 + 0x102;
      psVar9 = psVar9 + 0x204;
    } while (temp_v5 != 0);
    temp_v1 = FUN_004e9ae8(param_1,puVar7,temp_v3,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(puVar7[temp_v3] + temp_v5 + 0x38) = 1;
    break;
  case 0x1a:
    puVar14 = *(unsigned int **)(*param_1 + 0x1ffc);
    temp_v3 = 0;
    temp_v5 = 0x6d;
    puVar6 = puVar14 + param_3 + 0x1d;
    psVar9 = (short *)((int)puVar14 + 0x6e);
    puVar7 = temp_v13 + 1;
    do {
      if (((*puVar14 & DAT_00571190) != 0 || (puVar14[1] & DAT_00571194) != 0) &&
         (0x7fffffff < *puVar6)) {
        puVar7[temp_v3] = (int)*psVar9;
        temp_v3 = temp_v3 + 1;
      }
      temp_v5 = temp_v5 - 1;
      puVar14 = puVar14 + 0x102;
      puVar6 = puVar6 + 0x102;
      psVar9 = psVar9 + 0x204;
    } while (temp_v5 != 0);
    temp_v1 = FUN_004e9ae8(param_1,puVar7,temp_v3,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(puVar7[temp_v3] + temp_v5 + 0x38) = 1;
    break;
  case 0x1b:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      temp_v8 = puVar7[1] & DAT_00571194;
      if ((*puVar7 & DAT_00571190) != 0 || temp_v8 != 0) {
        temp_v0 = *(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6);
        temp_v10 = temp_v0 >> 10 != 3;
        temp_v9 = temp_v0 >> 10 != 4;
        if (temp_v10 && temp_v9) {
          temp_v8 = 1;
        }
        if ((temp_v10 && temp_v9) && temp_v8 != temp_v0 >> 10) {
          temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
          temp_v5 = temp_v5 + 1;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x1c:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (temp_v7 = temp_v3 * 0x408 + temp_v4,
         (int)param_3 <= *(int *)(temp_v7 + 0x25c) - *(int *)(temp_v7 + 600))) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x1d:
    temp_v3 = 0;
    temp_v15 = 0;
    do {
      temp_v5 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v5 + temp_v3 * 0x408);
      if (((*puVar7 & temp_v8) != 0 || (puVar7[1] & temp_v6) != 0) &&
         (temp_v4 = temp_v5 + temp_v3 * 0x408 + 0x164,
         temp_v4 = __aeabi_idivmod(*(int *)(temp_v4 + 0xf4) * 100,*(unsigned int *)(temp_v4 + 0xf8)),
         temp_v4 <= (int)param_3)) {
        temp_v13[temp_v15 + 1] = (int)*(short *)(temp_v5 + temp_v3 * 0x408 + 0x6e);
        temp_v15 = temp_v15 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v15,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x1e:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (*(char *)(temp_v3 * 0x408 + temp_v4 + param_3 + 0x2e0) != '\0')) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x1f:
    temp_v5 = 0;
    temp_v3 = 0;
    puVar7 = temp_v13 + 1;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar14 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar14 & DAT_00571190) != 0 || (puVar14[1] & DAT_00571194) != 0) &&
         (temp_v0 = *(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6),
         (temp_v0 & 0xfc00) == 0 || temp_v0 >> 10 == 2)) {
        puVar7[temp_v5] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,puVar7,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(puVar7[temp_v3] + temp_v5 + 0x38) = 1;
    break;
  case 0x20:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6) >> 10 == 5)) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x21:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6) >> 10 != 5)) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x22:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         ((*(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6) & 0xfc00) == 0)) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x23:
    temp_v5 = 0;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v4 + temp_v3 * 0x408);
      if (((*puVar7 & DAT_00571190) != 0 || (puVar7[1] & DAT_00571194) != 0) &&
         ((*(unsigned short *)(temp_v3 * 0x408 + temp_v4 + param_3 * 2 + 0x2b6) & 0xfc00) != 0)) {
        temp_v13[temp_v5 + 1] = (int)*(short *)(temp_v4 + temp_v3 * 0x408 + 0x6e);
        temp_v5 = temp_v5 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v5,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x24:
    temp_v3 = 0;
    temp_v15 = 0;
    do {
      temp_v5 = *(int *)(*param_1 + 0x1ffc);
      puVar7 = (unsigned int *)(temp_v5 + temp_v3 * 0x408);
      if (((*puVar7 & temp_v8) != 0 || (puVar7[1] & temp_v6) != 0) &&
         (temp_v4 = temp_v5 + temp_v3 * 0x408 + 0x164,
         temp_v4 = __aeabi_idivmod(*(int *)(temp_v4 + 0xfc) * 100,*(unsigned int *)(temp_v4 + 0x100)),
         temp_v4 <= (int)param_3)) {
        temp_v13[temp_v15 + 1] = (int)*(short *)(temp_v5 + temp_v3 * 0x408 + 0x6e);
        temp_v15 = temp_v15 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v1 = FUN_004e9ae8(param_1,temp_v13 + 1,temp_v15,1);
    temp_v3 = FUN_001633a0(temp_v1 - 1);
    temp_v5 = btlUnitGet(param_1);
    *(unsigned char *)(temp_v13[temp_v3 + 1] + temp_v5 + 0x38) = 1;
    break;
  case 0x25:
    FUN_004e84fc(param_1);
  }
  if (temp_v18 == 0) {
    return;
  }
  *(int *)(temp_v2 + 0x5a0) = temp_v17;
  *(unsigned int *)(temp_v2 + 0x5a4) = param_3;
  return;
}

} /* extern "C" */
