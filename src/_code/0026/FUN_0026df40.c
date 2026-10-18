/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026df40` (_code @ 0x26df40, 0x630 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int FUN_0019416c(); /* 0x19416c */
extern unsigned char LAB_001ab940; /* 0x1ab940 */
extern unsigned char LAB_001dd7e0; /* 0x1dd7e0 */
extern unsigned char LAB_0026e274; /* 0x26e274 */
extern unsigned char LAB_0026e288; /* 0x26e288 */
extern unsigned char LAB_0026e29c; /* 0x26e29c */
extern unsigned char LAB_0026e2b4; /* 0x26e2b4 */
extern unsigned char LAB_0026e570; /* 0x26e570 */
extern unsigned char LAB_0026e584; /* 0x26e584 */
extern unsigned int *DAT_0044d198; /* 0x44d198 */

/* Supplied declaration required: FUN_002523d0. */
/* Supplied declaration required: FUN_002860b4. */
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_00291000. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002976ac. */
extern int FUN_002c0ba8(void);
/* Supplied declaration required: FUN_002c0e4c. */
/* Supplied declaration required: FUN_002c0e9c. */
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4450. */
/* Supplied declaration required: FUN_002c4460. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_002c5ab8. */
/* Supplied declaration required: FUN_002c5e2c. */
/* Supplied declaration required: FUN_002fdfa4. */


void FUN_0026df40(unsigned int param_1)

{
/* irregular: 3 unstructured edge(s); 1 goto(s); 19 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned char *puVar7;
  unsigned int temp_v4;
  unsigned short *puVar9;
  unsigned int temp_v5;
  short *psVar11;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  short temp_v13 [10];
  
  if (DAT_0044d198 == (unsigned int *)0x0) {
    DAT_0044d198 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x108,1);
  }
  puVar5 = DAT_0044d198;
  FUN_002c4b30(DAT_0044d198,0x108);
  puVar7 = &LAB_0026e274;
  FUN_002c5978(&LAB_0026e274,2,0,0,FUN_0019416c,0,0);
  *puVar5 = (unsigned int)puVar7;
  FUN_002c4c00(&LAB_0026e288,0x7a,0,0,&LAB_001ab940,0,0,puVar7);
  FUN_002c4c00(&LAB_0026e29c,0xd8,0,0,&LAB_001ab940,0,0,*puVar5);
  FUN_002c4c00(&LAB_0026e2b4,0xe6,0,0,&LAB_001dd7e0,0,0,*puVar5);
  FUN_002976ac(0x35);
  FUN_002976ac(0x1a);
  *(short *)(puVar5 + 0x40) = (short)param_1;
  puVar6 = DAT_0044d198;
  DAT_0044d198[9] = 0;
  temp_v4 = FUN_002c0ec4(0x35,0);
  puVar9 = (unsigned short *)FUN_002c0e9c();
  temp_v5 = FUN_002c0e4c(temp_v4);
  temp_v9 = 0;
  if (temp_v9 < temp_v5) {
    do {
      if (*puVar9 == param_1) {
        puVar6[9] = (unsigned int)puVar9;
        break;
      }
      temp_v9 = temp_v9 + 1;
      puVar9 = puVar9 + 0x36;
    } while (temp_v9 < temp_v5);
  }
  puVar6 = DAT_0044d198;
  temp_v1 = *(short *)(puVar5 + 0x40);
  DAT_0044d198[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  temp_v4 = FUN_002c0ec4(0x35,1);
  psVar11 = (short *)FUN_002c0e9c();
  temp_v5 = FUN_002c0e4c(temp_v4);
  temp_v9 = 0;
  puVar6[0x3d] = 0;
  if (temp_v5 != 0) {
    do {
      if ((((*psVar11 == temp_v1) && ((psVar11[7] == 0 || (temp_v6 = FUN_002c0ba8(), temp_v6 != 0)))) &&
          ((psVar11[8] == 0 || (temp_v6 = FUN_002c0ba8(), temp_v6 != 0)))) &&
         (((psVar11[9] == 0 || (temp_v6 = FUN_002c0ba8(), temp_v6 == 0)) &&
          ((psVar11[10] == 0 || (temp_v6 = FUN_002c0ba8(), temp_v6 == 0)))))) {
        puVar6[puVar6[0x3d] + 10] = (unsigned int)psVar11;
        temp_v6 = puVar6[0x3d];
        puVar6[0x3d] = temp_v6 + 1;
        if (temp_v6 + 1 >= 8) break;
      }
      temp_v9 = temp_v9 + 1;
      psVar11 = psVar11 + 0x6a;
    } while (temp_v9 < temp_v5);
  }
  temp_v6 = 0;
  do {
    FUN_002c4450(puVar5 + temp_v6 * 4 + 0x19,0x10,0xffffffff);
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 8);
  temp_v5 = 0;
  temp_v13[0] = 0;
  temp_v13[1] = 0;
  temp_v13[2] = 0;
  temp_v13[3] = 0;
  temp_v13[4] = 0;
  temp_v13[5] = 0;
  temp_v13[6] = 0;
  temp_v13[7] = 0;
  temp_v6 = 0;
  puVar5[0x39] = 0;
  do {
    if (puVar5[temp_v6 + 10] != 0) {
      temp_v1 = *(short *)(puVar5[temp_v6 + 10] + 10);
      temp_v2 = (short)temp_v6;
      if (temp_v1 != 0) {
        if ((int)temp_v5 >= 1) {
          temp_v9 = temp_v5 & 1;
          temp_v3 = temp_v9;
        }
        else {
          temp_v9 = temp_v5;
          temp_v3 = 0;
        }
        temp_v7 = 0;
        if (0 < (int)temp_v9) {
          do {
            if (temp_v13[temp_v7] == temp_v1) goto LAB_0026e31c;
            temp_v7 = temp_v7 + 1;
          } while ((int)temp_v7 < (int)temp_v3);
        }
        while ((temp_v7 = temp_v3, (int)temp_v5 > (int)temp_v7 && (temp_v13[temp_v7] != temp_v1))) {
          if (temp_v13[temp_v7 + 1] == temp_v1) {
            temp_v7 = temp_v7 + 1;
            break;
          }
          temp_v3 = temp_v7 + 2;
        }
LAB_0026e31c:
        if ((int)temp_v5 <= (int)temp_v7) {
          temp_v8 = 1;
          *(short *)(puVar5 + puVar5[0x39] * 4 + 0x19) = temp_v2;
          if (0 < (int)((puVar5[0x3d] - temp_v6) - 1U)) {
            temp_v12 = 0;
            if (((puVar5[0x3d] - temp_v6) & 1U) == 0) {
              if (*(short *)(puVar5[temp_v6 + 10] + 10) == *(short *)(puVar5[temp_v6 + 0xb] + 10)) {
                temp_v8 = 2;
                *(short *)((int)puVar5 + puVar5[0x39] * 0x10 + 0x66) = temp_v2 + 1;
              }
              temp_v12 = 1;
            }
            for (temp_v10 = ((puVar5[0x3d] - temp_v6) - 1) >> 1; temp_v10 != 0; temp_v10 = temp_v10 - 1) {
              temp_v11 = temp_v6 + temp_v12;
              if (*(short *)(puVar5[temp_v6 + 10] + 10) == *(short *)(puVar5[temp_v11 + 0xb] + 10)) {
                temp_v0 = temp_v8 * 2;
                temp_v8 = temp_v8 + 1;
                *(short *)((int)puVar5 + temp_v0 + puVar5[0x39] * 0x10 + 100) = (short)temp_v11 + 1;
              }
              if (*(short *)(puVar5[temp_v6 + 10] + 10) == *(short *)(puVar5[temp_v11 + 0xc] + 10)) {
                temp_v0 = temp_v8 * 2;
                temp_v8 = temp_v8 + 1;
                *(short *)((int)puVar5 + temp_v0 + puVar5[0x39] * 0x10 + 100) = (short)temp_v11 + 2;
              }
              temp_v12 = temp_v12 + 2;
            }
          }
          psVar11 = temp_v13 + temp_v5;
          temp_v5 = temp_v5 + 1;
          puVar5[0x39] = puVar5[0x39] + 1;
          *psVar11 = *(short *)(puVar5[temp_v6 + 10] + 10);
        }
      }
      else {
        *(short *)(puVar5 + puVar5[0x39] * 4 + 0x19) = temp_v2;
        puVar5[0x39] = puVar5[0x39] + 1;
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (7 >= temp_v6);
  temp_v4 = FUN_002c5e2c(&LAB_0026e570);
  puVar5[0x12] = temp_v4;
  temp_v6 = FUN_002c5e2c(&LAB_0026e584);
  puVar5[0x13] = temp_v6;
  FUN_002972f8(temp_v6,puVar5[0x12]);
  puVar5[0x14] = temp_v6;
  *(unsigned int *)(temp_v6 + 0x108) = 2;
  temp_v6 = puVar5[0x13];
  FUN_002972f8(temp_v6,puVar5[0x12]);
  puVar5[0x15] = temp_v6;
  *(unsigned int *)(temp_v6 + 0x108) = 2;
  temp_v6 = 0;
  do {
    temp_v8 = puVar5[temp_v6 + 10];
    if (temp_v8 != 0) {
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v8 + 2);
      if (*(short *)(temp_v8 + 4) != 0) {
        FUN_002523d0();
      }
      else {
        FUN_002860b4(temp_v5,0,(int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v8 + 6));
      }
      puVar5[temp_v6 + 1] = temp_v5;
      FUN_002c4460(*puVar5,puVar5[temp_v6 + 1]);
      FUN_002fdfa4(puVar5[temp_v6 + 1],*(unsigned char *)(puVar5[temp_v6 + 10] + 0xd) + 3);
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 8);
  temp_v4 = FUN_002c0ec4(0x1a,0);
  temp_v6 = FUN_002c0e9c();
  FUN_002c0e4c(temp_v4);
  *(unsigned short *)((int)puVar5 + 0x102) =
       *(unsigned short *)((temp_v6 + (unsigned int)*(unsigned short *)(puVar5[9] + 0x22) * 2) - 2);
  FUN_002c5ab8(2);
  FUN_00289b4c();
  FUN_00289ae8();
  FUN_0028d974();
  FUN_00291000(0xa0);
  return;
}
