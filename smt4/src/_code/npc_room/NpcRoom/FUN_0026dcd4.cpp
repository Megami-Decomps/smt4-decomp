/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026dcd4` (_code @ 0x26dcd4, 0x62c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00252190(...);
int FUN_00285e44(...);
int FUN_00289880(...);
int FUN_002898e4(...);
int FUN_0028d6d0(...);
int FUN_00290d5c(...);
int FUN_00297060(...);
int FUN_00297410(...);
int FUN_002c0c74(...);
int FUN_002c0cc4(...);
int FUN_002c424c(...);
int FUN_002c425c(...);
int FUN_002c4938(...);
int FUN_002c498c(...);
int FUN_002c4a08(...);
int FUN_002c5788(...);
int FUN_002c58c8(...);
int FUN_002c5c04(...);
int FUN_002fdfe0(...);

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

extern int FUN_00194278(...); /* 0x194278 */
extern unsigned char LAB_001aba44; /* 0x1aba44 */
extern unsigned char LAB_001dd8e8; /* 0x1dd8e8 */
extern unsigned char LAB_0026e004; /* 0x26e004 */
extern unsigned char LAB_0026e018; /* 0x26e018 */
extern unsigned char LAB_0026e02c; /* 0x26e02c */
extern unsigned char LAB_0026e044; /* 0x26e044 */
extern unsigned char LAB_0026e300; /* 0x26e300 */
extern unsigned char LAB_0026e314; /* 0x26e314 */
extern unsigned int *DAT_0044d198; /* 0x44d198 */

/* Supplied declaration required: FUN_00252190. */
/* Supplied declaration required: FUN_00285e44. */
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: FUN_0028d6d0. */
/* Supplied declaration required: FUN_00290d5c. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_00297410. */
extern int FUN_002c09d0(void);
/* Supplied declaration required: FUN_002c0c74. */
/* Supplied declaration required: FUN_002c0cc4. */
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c424c. */
/* Supplied declaration required: FUN_002c425c. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */
/* Supplied declaration required: FUN_002c58c8. */
/* Supplied declaration required: FUN_002c5c04. */
/* Supplied declaration required: FUN_002fdfe0. */


void FUN_0026dcd4(unsigned int param_1)

{
/* irregular: 3 unstructured edge(s); 1 goto(s); 20 native warning(s); review required */
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
    puVar6 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x108,1);
    DAT_0044d198 = puVar6;
  }
  puVar6 = DAT_0044d198;
  FUN_002c4938();
  puVar7 = &LAB_0026e004;
  FUN_002c5788(&LAB_0026e004,2,0,0,FUN_00194278,0,0);
  *puVar6 = (unsigned int)puVar7;
  FUN_002c4a08(&LAB_0026e018,0x7a,0,0,&LAB_001aba44,0,0,puVar7);
  FUN_002c4a08(&LAB_0026e02c,0xd8,0,0,&LAB_001aba44,0,0,*puVar6);
  FUN_002c4a08(&LAB_0026e044,0xe6,0,0,&LAB_001dd8e8,0,0,*puVar6);
  FUN_00297410(0x35);
  FUN_00297410(0x1a);
  *(short *)(puVar6 + 0x40) = (short)param_1;
  puVar5 = DAT_0044d198;
  DAT_0044d198[9] = 0;
  temp_v4 = FUN_002c0cec(0x35,0);
  puVar9 = (unsigned short *)FUN_002c0cc4();
  temp_v5 = FUN_002c0c74(temp_v4);
  temp_v9 = 0;
  if (temp_v9 < temp_v5) {
    do {
      if (*puVar9 == param_1) {
        puVar5[9] = (unsigned int)puVar9;
        break;
      }
      temp_v9 = temp_v9 + 1;
      puVar9 = puVar9 + 0x36;
    } while (temp_v9 < temp_v5);
  }
  puVar5 = DAT_0044d198;
  temp_v1 = *(short *)(puVar6 + 0x40);
  DAT_0044d198[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  temp_v4 = FUN_002c0cec(0x35,1);
  psVar11 = (short *)FUN_002c0cc4();
  temp_v5 = FUN_002c0c74(temp_v4);
  temp_v9 = 0;
  puVar5[0x3d] = 0;
  if (temp_v5 != 0) {
    do {
      if ((((*psVar11 == temp_v1) && ((psVar11[7] == 0 || (temp_v6 = FUN_002c09d0(), temp_v6 != 0)))) &&
          ((psVar11[8] == 0 || (temp_v6 = FUN_002c09d0(), temp_v6 != 0)))) &&
         (((psVar11[9] == 0 || (temp_v6 = FUN_002c09d0(), temp_v6 == 0)) &&
          ((psVar11[10] == 0 || (temp_v6 = FUN_002c09d0(), temp_v6 == 0)))))) {
        puVar5[puVar5[0x3d] + 10] = (unsigned int)psVar11;
        temp_v6 = puVar5[0x3d];
        puVar5[0x3d] = temp_v6 + 1;
        if (temp_v6 + 1 >= 8) break;
      }
      temp_v9 = temp_v9 + 1;
      psVar11 = psVar11 + 0x6a;
    } while (temp_v9 < temp_v5);
  }
  temp_v6 = 0;
  do {
    FUN_002c424c(puVar6 + temp_v6 * 4 + 0x19,0x10,0xffffffff);
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
  puVar6[0x39] = 0;
  do {
    if (puVar6[temp_v6 + 10] != 0) {
      temp_v1 = *(short *)(puVar6[temp_v6 + 10] + 10);
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
            if (temp_v13[temp_v7] == temp_v1) goto LAB_0026e0ac;
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
LAB_0026e0ac:
        if ((int)temp_v5 <= (int)temp_v7) {
          temp_v8 = 1;
          *(short *)(puVar6 + puVar6[0x39] * 4 + 0x19) = temp_v2;
          if (0 < (int)((puVar6[0x3d] - temp_v6) - 1U)) {
            temp_v12 = 0;
            if (((puVar6[0x3d] - temp_v6) & 1U) == 0) {
              if (*(short *)(puVar6[temp_v6 + 10] + 10) == *(short *)(puVar6[temp_v6 + 0xb] + 10)) {
                temp_v8 = 2;
                *(short *)((int)puVar6 + puVar6[0x39] * 0x10 + 0x66) = temp_v2 + 1;
              }
              temp_v12 = 1;
            }
            for (temp_v10 = ((puVar6[0x3d] - temp_v6) - 1) >> 1; temp_v10 != 0; temp_v10 = temp_v10 - 1) {
              temp_v11 = temp_v6 + temp_v12;
              if (*(short *)(puVar6[temp_v6 + 10] + 10) == *(short *)(puVar6[temp_v11 + 0xb] + 10)) {
                temp_v0 = temp_v8 * 2;
                temp_v8 = temp_v8 + 1;
                *(short *)((int)puVar6 + temp_v0 + puVar6[0x39] * 0x10 + 100) = (short)temp_v11 + 1;
              }
              if (*(short *)(puVar6[temp_v6 + 10] + 10) == *(short *)(puVar6[temp_v11 + 0xc] + 10)) {
                temp_v0 = temp_v8 * 2;
                temp_v8 = temp_v8 + 1;
                *(short *)((int)puVar6 + temp_v0 + puVar6[0x39] * 0x10 + 100) = (short)temp_v11 + 2;
              }
              temp_v12 = temp_v12 + 2;
            }
          }
          psVar11 = temp_v13 + temp_v5;
          temp_v5 = temp_v5 + 1;
          puVar6[0x39] = puVar6[0x39] + 1;
          *psVar11 = *(short *)(puVar6[temp_v6 + 10] + 10);
        }
      }
      else {
        *(short *)(puVar6 + puVar6[0x39] * 4 + 0x19) = temp_v2;
        puVar6[0x39] = puVar6[0x39] + 1;
      }
    }
    temp_v6 = temp_v6 + 1;
  } while (7 >= temp_v6);
  temp_v4 = FUN_002c5c04(&LAB_0026e300);
  puVar6[0x12] = temp_v4;
  temp_v6 = FUN_002c5c04(&LAB_0026e314);
  puVar6[0x13] = temp_v6;
  FUN_00297060(temp_v6,puVar6[0x12]);
  puVar6[0x14] = temp_v6;
  *(unsigned int *)(temp_v6 + 0x108) = 2;
  temp_v6 = puVar6[0x13];
  FUN_00297060(temp_v6,puVar6[0x12]);
  puVar6[0x15] = temp_v6;
  *(unsigned int *)(temp_v6 + 0x108) = 2;
  temp_v6 = 0;
  do {
    temp_v8 = puVar6[temp_v6 + 10];
    if (temp_v8 != 0) {
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v8 + 2);
      if (*(short *)(temp_v8 + 4) != 0) {
        FUN_00252190();
      }
      else {
        FUN_00285e44(temp_v5,0,(int)*(short *)(temp_v8 + 8) + (int)*(short *)(temp_v8 + 6));
      }
      puVar6[temp_v6 + 1] = temp_v5;
      FUN_002c425c(*puVar6,puVar6[temp_v6 + 1]);
      FUN_002fdfe0(puVar6[temp_v6 + 1],*(unsigned char *)(puVar6[temp_v6 + 10] + 0xd) + 3);
    }
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 8);
  temp_v4 = FUN_002c0cec(0x1a,0);
  temp_v6 = FUN_002c0cc4();
  FUN_002c0c74(temp_v4);
  *(unsigned short *)((int)puVar6 + 0x102) =
       *(unsigned short *)((temp_v6 + (unsigned int)*(unsigned short *)(puVar6[9] + 0x22) * 2) - 2);
  FUN_002c58c8(2);
  FUN_002898e4();
  FUN_00289880();
  FUN_0028d6d0();
  FUN_00290d5c(0xa0);
  return;
}

} /* extern "C" */
