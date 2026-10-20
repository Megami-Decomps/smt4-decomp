/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e64a0` (_code @ 0x2e64a0, 0x6b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014afd0(...);
int FUN_0014bdb4(...);
int FUN_0014e38c(...);
int FUN_0015155c(...);
int FUN_00163060(...);
int FUN_0018719c(...);
int FUN_00192748(...);
int FUN_00192798(...);
int FUN_001b4a90(...);
int FUN_0020214c(...);
int FUN_00275bc8(...);
int FUN_002e6354(...);
int FUN_0031a400(...);
int FUN_00342010(...);
int FUN_003423cc(...);
int FUN_00389fcc(...);
int FUN_0039af48(...);
int FUN_003afe2c(...);
int FUN_003b61ec(...);
int FUN_003f86f8(...);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern int FUN_00214324(...); /* 0x214324 */
extern int FUN_002394a8(...); /* 0x2394a8 */
extern unsigned char LAB_00284dbc; /* 0x284dbc */
extern unsigned char LAB_002e6818; /* 0x2e6818 */
extern unsigned char LAB_002e682c; /* 0x2e682c */
extern unsigned char LAB_002e6840; /* 0x2e6840 */
extern unsigned char LAB_002e6858; /* 0x2e6858 */
extern unsigned char LAB_002e6b54; /* 0x2e6b54 */
extern unsigned char LAB_002e6b68; /* 0x2e6b68 */
extern unsigned int *DAT_00588124; /* 0x588124 */

/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_0014bdb4. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: FUN_00192748. */
/* Supplied declaration required: FUN_00192798. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0031a400. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_003423cc. */
/* Supplied declaration required: FUN_00389fcc. */
/* Supplied declaration required: FUN_0039af48. */
/* Supplied declaration required: FUN_003afe2c. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: FUN_003f86f8. */


void FUN_002e64a0(unsigned int param_1)

{
/* irregular: 5 unstructured edge(s); 4 goto(s); 22 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  short temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  unsigned short temp_v5;
  unsigned int *puVar8;
  unsigned char *puVar9;
  unsigned int temp_v6;
  unsigned short *puVar11;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  int temp_v12;
  short *psVar18;
  int temp_v13;
  int temp_v14;
  unsigned short *puVar21;
  short temp_v15 [14];
  
  if (DAT_00588124 == (unsigned int *)0x0) {
    puVar8 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x16c,1);
    DAT_00588124 = puVar8;
  }
  puVar8 = DAT_00588124;
  FUN_002e6354();
  puVar9 = &LAB_002e6818;
  FUN_0014e38c(&LAB_002e6818,4,0,0,FUN_00214324,0,0);
  *puVar8 = (unsigned int)puVar9;
  FUN_0015155c(&LAB_002e682c,0x7e,0,0,FUN_002394a8,0,0,puVar9);
  FUN_0015155c(&LAB_002e6840,0xda,0,0,FUN_002394a8,0,0,*puVar8);
  FUN_0015155c(&LAB_002e6858,0xea,0,0,&LAB_00284dbc,0,0,*puVar8);
  FUN_003f86f8(0x1a);
  puVar21 = (unsigned short *)(puVar8 + 0x40);
  *puVar21 = (unsigned short)param_1;
  puVar6 = DAT_00588124;
  DAT_00588124[9] = 0;
  temp_v6 = FUN_00187180(0x35,0);
  puVar11 = (unsigned short *)FUN_00192798();
  temp_v7 = FUN_00192748(temp_v6);
  temp_v8 = 0;
  if (temp_v8 < temp_v7) {
    do {
      if (*puVar11 == param_1) {
        puVar6[9] = (unsigned int)puVar11;
        break;
      }
      temp_v8 = temp_v8 + 1;
      puVar11 = puVar11 + 0x36;
    } while (temp_v8 < temp_v7);
  }
  puVar6 = DAT_00588124;
  temp_v1 = *puVar21;
  DAT_00588124[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0;
  temp_v6 = FUN_00187180(0x35,1);
  puVar11 = (unsigned short *)FUN_00192798();
  temp_v7 = FUN_00192748(temp_v6);
  temp_v8 = 0;
  puVar6[0x3d] = 0;
  if (temp_v7 != 0) {
    do {
      if ((((*puVar11 == temp_v1) && ((puVar11[7] == 0 || (temp_v9 = FUN_0018719c(), temp_v9 != 0)))) &&
          ((puVar11[8] == 0 || (temp_v9 = FUN_0018719c(), temp_v9 != 0)))) &&
         (((puVar11[9] == 0 || (temp_v9 = FUN_0018719c(), temp_v9 == 0)) &&
          ((puVar11[10] == 0 || (temp_v9 = FUN_0018719c(), temp_v9 == 0)))))) {
        puVar6[puVar6[0x3d] + 10] = (unsigned int)puVar11;
        temp_v9 = puVar6[0x3d];
        puVar6[0x3d] = temp_v9 + 1;
        if (temp_v9 + 1 >= 8) break;
      }
      temp_v8 = temp_v8 + 1;
      puVar11 = puVar11 + 0x2a;
    } while (temp_v8 < temp_v7);
  }
  temp_v9 = 0;
  do {
    FUN_001b4a90(puVar8 + temp_v9 * 4 + 0x19,0x10,0xffffffff);
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 8);
  temp_v7 = 0;
  temp_v15[0] = 0;
  temp_v15[1] = 0;
  temp_v15[2] = 0;
  temp_v15[3] = 0;
  temp_v15[4] = 0;
  temp_v15[5] = 0;
  temp_v15[6] = 0;
  temp_v15[7] = 0;
  temp_v9 = 0;
  puVar8[0x39] = 0;
  do {
    if (puVar8[temp_v9 + 10] != 0) {
      temp_v2 = *(short *)(puVar8[temp_v9 + 10] + 10);
      temp_v3 = (short)temp_v9;
      if (temp_v2 != 0) {
        if ((int)temp_v7 >= 1) {
          temp_v8 = temp_v7 & 1;
          temp_v4 = temp_v8;
        }
        else {
          temp_v8 = temp_v7;
          temp_v4 = 0;
        }
        temp_v10 = 0;
        if (0 < (int)temp_v8) {
          do {
            if (temp_v15[temp_v10] == temp_v2) goto LAB_002e6874;
            temp_v10 = temp_v10 + 1;
          } while ((int)temp_v10 < (int)temp_v4);
        }
        while ((temp_v10 = temp_v4, (int)temp_v7 > (int)temp_v10 && (temp_v15[temp_v10] != temp_v2))) {
          if (temp_v15[temp_v10 + 1] == temp_v2) {
            temp_v10 = temp_v10 + 1;
            break;
          }
          temp_v4 = temp_v10 + 2;
        }
LAB_002e6874:
        if ((int)temp_v7 <= (int)temp_v10) {
          temp_v11 = 1;
          *(short *)(puVar8 + puVar8[0x39] * 4 + 0x19) = temp_v3;
          if (0 < (int)((puVar8[0x3d] - temp_v9) - 1U)) {
            temp_v14 = 0;
            if (((puVar8[0x3d] - temp_v9) & 1U) == 0) {
              if (*(short *)(puVar8[temp_v9 + 10] + 10) == *(short *)(puVar8[temp_v9 + 0xb] + 10)) {
                temp_v11 = 2;
                *(short *)((int)puVar8 + puVar8[0x39] * 0x10 + 0x66) = temp_v3 + 1;
              }
              temp_v14 = 1;
            }
            for (temp_v12 = ((puVar8[0x3d] - temp_v9) - 1) >> 1; temp_v12 != 0; temp_v12 = temp_v12 - 1) {
              temp_v13 = temp_v9 + temp_v14;
              if (*(short *)(puVar8[temp_v9 + 10] + 10) == *(short *)(puVar8[temp_v13 + 0xb] + 10)) {
                temp_v0 = temp_v11 * 2;
                temp_v11 = temp_v11 + 1;
                *(short *)((int)puVar8 + temp_v0 + puVar8[0x39] * 0x10 + 100) = (short)temp_v13 + 1;
              }
              if (*(short *)(puVar8[temp_v9 + 10] + 10) == *(short *)(puVar8[temp_v13 + 0xc] + 10)) {
                temp_v0 = temp_v11 * 2;
                temp_v11 = temp_v11 + 1;
                *(short *)((int)puVar8 + temp_v0 + puVar8[0x39] * 0x10 + 100) = (short)temp_v13 + 2;
              }
              temp_v14 = temp_v14 + 2;
            }
          }
          psVar18 = temp_v15 + temp_v7;
          temp_v7 = temp_v7 + 1;
          puVar8[0x39] = puVar8[0x39] + 1;
          *psVar18 = *(short *)(puVar8[temp_v9 + 10] + 10);
        }
      }
      else {
        *(short *)(puVar8 + puVar8[0x39] * 4 + 0x19) = temp_v3;
        puVar8[0x39] = puVar8[0x39] + 1;
      }
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 8);
  puVar9 = &LAB_002e6b54;
  FUN_0020214c();
  puVar8[0x12] = (unsigned int)puVar9;
  puVar9 = &LAB_002e6b68;
  FUN_0020214c();
  puVar8[0x13] = (unsigned int)puVar9;
  FUN_00275bc8();
  puVar8[0x14] = (unsigned int)puVar9;
  *(unsigned int *)(puVar9 + 0x108) = 2;
  temp_v9 = puVar8[0x13];
  FUN_00275bc8(temp_v9,puVar8[0x12]);
  puVar8[0x15] = temp_v9;
  *(unsigned int *)(temp_v9 + 0x108) = 2;
  temp_v9 = 0;
  do {
    temp_v11 = puVar8[temp_v9 + 10];
    if (temp_v11 != 0) {
      temp_v7 = (unsigned int)*(unsigned short *)(temp_v11 + 2);
      if (*(short *)(temp_v11 + 4) != 0) {
        FUN_003afe2c();
      }
      else {
        FUN_0039af48(temp_v7,0,(int)*(short *)(temp_v11 + 8) + (int)*(short *)(temp_v11 + 6));
      }
      puVar8[temp_v9 + 1] = temp_v7;
      FUN_0014bdb4(*puVar8,puVar8[temp_v9 + 1]);
      FUN_00389fcc(puVar8[temp_v9 + 1],*(unsigned char *)(puVar8[temp_v9 + 10] + 0xd) + 3);
    }
    temp_v9 = temp_v9 + 1;
  } while (temp_v9 < 8);
  temp_v6 = FUN_00187180(0x1a,0);
  temp_v9 = FUN_00192798();
  FUN_00192748(temp_v6);
  *(unsigned short *)((int)puVar8 + 0x102) =
       *(unsigned short *)((temp_v9 + (unsigned int)*(unsigned short *)(puVar8[9] + 0x22) * 2) - 2);
  temp_v1 = *puVar21;
  if (temp_v1 != 0x7d) {
    if (temp_v1 >= 0x7d) {
      if ((!(temp_v1 != 0x7e && temp_v1 != 0x7f)) || (!(temp_v1 != 0x80 && temp_v1 != 0x81)))
      goto LAB_002e6b3c;
      FUN_0014afd0(0,*(unsigned short *)((int)puVar8 + 0x102));
      FUN_0031a400();
      FUN_003b61ec();
      FUN_00342010();
      FUN_003423cc(0xa2);
      return;
    }
    if (temp_v1 == 0x41 || temp_v1 == 0x42) goto LAB_002e6b3c;
    if ((!(temp_v1 != 0x60 && temp_v1 != 0x61)) && (temp_v9 = FUN_0018719c(0x9d), temp_v9 != 0)) {
      temp_v5 = 0xfb;
      *(unsigned short *)((int)puVar8 + 0x102) = temp_v5;
    }
  }
  else {
LAB_002e6b3c:
    temp_v9 = FUN_0018719c(0x170);
    if (temp_v9 == 0) goto LAB_002e6af4;
    temp_v5 = 0x3f;
    *(unsigned short *)((int)puVar8 + 0x102) = temp_v5;
  }
LAB_002e6af4:
  FUN_0014afd0(0,*(unsigned short *)((int)puVar8 + 0x102));
  FUN_0031a400();
  FUN_003b61ec();
  FUN_00342010();
  FUN_003423cc(0xa2);
  return;
}

} /* extern "C" */
