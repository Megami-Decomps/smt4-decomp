/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00432dd8` (_code @ 0x432dd8, 0x878 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int _ZN9Obj5596acaSERKS_(unsigned int, unsigned int);
int FUN_0011e41a(unsigned char **, unsigned char *);
int FUN_0012055e(unsigned int, unsigned char **);
int FUN_0012083e(...);
int FUN_001304a8(...);
int rt_malloc(...);
int asdOperatorDeleteArray(...);
int _ZN9Obj55aff4D1Ev(unsigned char [8]);
int _ZN9Obj55aff4aSERKS_(unsigned int, unsigned int);
int _ZN9Obj55b1045resetEv(unsigned int);
int _ZN15Obj55aff4VectoraSERKS_(unsigned int, unsigned int **);

typedef int romwright_code(...);
/* stack frame of param_1: 42 slot(s), 137 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned short sp5E; /* 0x5e: local_5e */
    unsigned char sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned char sp71; /* 0x71: local_71 */
    unsigned char sp72; /* 0x72: local_72 */
    unsigned char sp73; /* 0x73: local_73 */
    unsigned char sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned char sp7B; /* 0x7b: local_7b */
    unsigned char sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned char spE8; /* 0xe8: local_e8 */
    unsigned short spEA; /* 0xea: local_ea */
    unsigned char spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
} param_1_stack;

extern unsigned char LAB_0043313c; /* 0x43313c */
extern unsigned char DAT_0055a340; /* 0x55a340 */
extern unsigned char DAT_0055a4c0; /* 0x55a4c0 */
extern unsigned char DAT_0055a9d8; /* 0x55a9d8 */
extern unsigned char DAT_0055aafc; /* 0x55aafc */
extern unsigned char DAT_0055acb0; /* 0x55acb0 */
extern unsigned char DAT_0055add0; /* 0x55add0 */

/* Supplied declaration required: _ZN9Obj5596acaSERKS_. */
/* Supplied declaration required: FUN_0011e41a. */
/* Supplied declaration required: FUN_0012055e. */
/* Supplied declaration required: FUN_0012083e. */
/* Supplied declaration required: FUN_001304a8. */
/* Supplied declaration required: rt_malloc. */
/* Supplied declaration required: asdOperatorDeleteArray. */
extern unsigned int _ZN9Obj55aff4C1EPKc(unsigned char *, unsigned char *);
/* Supplied declaration required: _ZN9Obj55aff4D1Ev. */
/* Supplied declaration required: _ZN9Obj55aff4aSERKS_. */
/* Supplied declaration required: _ZN9Obj55b1045resetEv. */
extern unsigned int _ZN9Obj5596acC1EhRK10WordVector(unsigned char **, unsigned int, unsigned int *);
/* Supplied declaration required: _ZN15Obj55aff4VectoraSERKS_. */


void FUN_00432dd8(unsigned int param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int *piVar10;
  unsigned char *temp_v3;
  unsigned char temp_v4;
  unsigned short temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned int *temp_v8;
  unsigned char *temp_v9;
  unsigned char *temp_v10;
  unsigned char *temp_v11;
  unsigned char *temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned char *temp_v16;
  unsigned char **temp_v17;
  unsigned int *temp_v18;
  unsigned int *temp_v19;
  unsigned char *temp_v20 [2];
  unsigned int temp_v21;
  int temp_v22;
  unsigned char *temp_v23;
  unsigned char temp_v24;
  unsigned char temp_v25;
  unsigned char *temp_v26;
  unsigned char temp_v27;
  unsigned char temp_v28;
  unsigned char temp_v29;
  unsigned char temp_v30;
  unsigned int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  unsigned int temp_v34;
  unsigned char temp_v35;
  unsigned short temp_v36;
  int temp_v37;
  unsigned int temp_v38;
  unsigned int temp_v39;
  unsigned int *temp_v40;
  unsigned int *temp_v41;
  unsigned int temp_v42;
  unsigned char temp_v43 [8];
  unsigned int temp_v44;
  unsigned int temp_v45;
  
  *(unsigned int *)(param_1 + 8) = 0;
  temp_v45 = param_1;
  temp_v2 = _ZN9Obj55aff4C1EPKc(temp_v43,&LAB_0043313c);
  _ZN9Obj55aff4aSERKS_(param_1 + 0xc,temp_v2);
  _ZN9Obj55aff4D1Ev(temp_v43);
  temp_v1 = temp_v45;
  *(unsigned short *)(temp_v45 + 0x14) = 0;
  temp_v37 = 0;
  temp_v38 = 0;
  temp_v39 = 0;
  temp_v2 = _ZN9Obj5596acC1EhRK10WordVector(temp_v20,3,(unsigned int *)&temp_v37);
  _ZN9Obj5596acaSERKS_(temp_v1 + 0x38,temp_v2);
  temp_v20[0] = &DAT_0055a4c0;
  asdOperatorDeleteArray(temp_v21);
  asdOperatorDeleteArray(temp_v37);
  temp_v1 = temp_v45;
  temp_v37 = 0;
  temp_v38 = 0;
  temp_v39 = 0;
  temp_v2 = _ZN9Obj5596acC1EhRK10WordVector(temp_v20,3,(unsigned int *)&temp_v37);
  _ZN9Obj5596acaSERKS_(temp_v1 + 0x4c,temp_v2);
  temp_v20[0] = &DAT_0055a4c0;
  asdOperatorDeleteArray(temp_v21);
  asdOperatorDeleteArray(temp_v37);
  *(unsigned int *)(temp_v45 + 0x60) = 0;
  *(unsigned short *)(temp_v45 + 100) = 0x5a;
  *(unsigned int *)(temp_v45 + 0x68) = 0;
  temp_v40 = (unsigned int *)0x0;
  temp_v41 = (unsigned int *)0x0;
  temp_v42 = 0;
  _ZN15Obj55aff4VectoraSERKS_(temp_v45 + 0x6c,&temp_v40);
  puVar4 = temp_v41;
  for (puVar8 = temp_v40; puVar8 != puVar4; puVar8 = puVar8 + 2) {
    (**(romwright_code **)*puVar8)(puVar8);
  }
  asdOperatorDeleteArray(temp_v40);
  _ZN9Obj55b1045resetEv(temp_v45 + 0x18);
  temp_v4 = 0;
  temp_v6 = 1;
  temp_v3 = &DAT_0055a9d8;
  temp_v5 = 0xffff;
  FUN_0012055e(temp_v45 + 0x84,&temp_v3);
  temp_v7 = temp_v45;
  temp_v8 = (unsigned int *)0x0;
  temp_v9 = (unsigned char *)0x0;
  temp_v14 = (temp_v45 & 0xff) << 8;
  temp_v10 = (unsigned char *)0x0;
  temp_v11 = (unsigned char *)0x0;
  temp_v12 = (unsigned char *)0x0;
  temp_v13 = 0;
  puVar4 = (unsigned int *)rt_malloc(0xc);
  temp_v2 = rt_malloc(0x700);
  puVar4[2] = temp_v2;
  *puVar4 = (unsigned int)temp_v8;
  puVar4[1] = 0x20;
  temp_v12 = (unsigned char *)puVar4[2];
  temp_v11 = temp_v12 + 0x700;
  temp_v10 = temp_v12 + 0x38;
  *(unsigned int *)(temp_v12 + 8) = 0;
  *(unsigned int *)(temp_v12 + 0xc) = 0;
  *temp_v12 = 0;
  *(unsigned int *)(temp_v12 + 4) = 0;
  *(unsigned char **)(temp_v12 + 8) = temp_v12;
  *(unsigned char **)(temp_v12 + 0xc) = temp_v12;
  puVar7 = *(unsigned int **)(temp_v7 + 0x78);
  puVar9 = *(unsigned int **)(temp_v7 + 0x7c);
  puVar8 = puVar7;
  temp_v8 = puVar4;
  if (puVar7 != puVar9) {
    do {
      (**(romwright_code **)*puVar8)(puVar8);
      puVar8 = puVar8 + 10;
    } while (puVar8 != puVar9);
    *(int *)(temp_v7 + 0x7c) =
         *(int *)(temp_v7 + 0x7c) + (((int)puVar9 - (int)puVar7) / 0x28) * -0x28;
  }
  puVar6 = *(unsigned char **)(temp_v12 + 8);
  if (puVar6 != temp_v12) {
    do {
      temp_v27 = 0;
      temp_v28 = 0;
      temp_v29 = 0;
      temp_v30 = 0;
      temp_v24 = 0;
      temp_v26 = &DAT_0055a340;
      temp_v32 = 0;
      temp_v35 = 0;
      temp_v31 = 0;
      temp_v33 = 0;
      temp_v34 = 0;
      temp_v36 = 0;
      temp_v23 = &DAT_0055acb0;
      temp_v25 = puVar6[0x10];
      FUN_0011e41a(&temp_v26,puVar6 + 0x18);
      temp_v1 = temp_v7;
      piVar10 = (int *)(temp_v7 + 0x78);
      puVar8 = *(unsigned int **)(temp_v7 + 0x7c);
      if (puVar8 != *(unsigned int **)(temp_v7 + 0x80)) {
        *(unsigned int **)(temp_v7 + 0x7c) = puVar8 + 10;
        if (puVar8 != (unsigned int *)0x0) {
          *puVar8 = (unsigned int)&DAT_0055add0;
          *(unsigned char *)(puVar8 + 1) = temp_v24;
          *(unsigned char *)((int)puVar8 + 5) = temp_v25;
          puVar8[2] = (unsigned int)&DAT_0055aafc;
          *(unsigned char *)(puVar8 + 3) = temp_v27;
          *(unsigned char *)((int)puVar8 + 0xd) = temp_v28;
          *(unsigned char *)((int)puVar8 + 0xe) = temp_v29;
          *(unsigned char *)((int)puVar8 + 0xf) = temp_v30;
          puVar8[4] = temp_v31;
          puVar8[5] = temp_v32;
          puVar8[6] = temp_v33;
          puVar8[7] = temp_v34;
          *(unsigned char *)(puVar8 + 8) = temp_v35;
          *(unsigned short *)((int)puVar8 + 0x22) = temp_v36;
          puVar8[2] = (unsigned int)&DAT_0055a340;
          *puVar8 = (unsigned int)&DAT_0055acb0;
        }
      }
      else {
        temp_v17 = &temp_v23;
        temp_v0 = ((int)puVar8 - *piVar10) / 0x28;
        temp_v18 = puVar8;
        if (temp_v0 < (unsigned int)(((int)*(unsigned int **)(temp_v7 + 0x80) - *piVar10) / 0x28)) {
          *(unsigned int **)(temp_v7 + 0x7c) = puVar8 + 10;
          if (puVar8 != (unsigned int *)0x0) {
            *(unsigned char *)(puVar8 + 1) = *(unsigned char *)(puVar8 + -9);
            *(unsigned char *)((int)puVar8 + 5) = *(unsigned char *)((int)puVar8 - 0x23);
            *(unsigned char *)(puVar8 + 3) = *(unsigned char *)(puVar8 + -7);
            *(unsigned char *)((int)puVar8 + 0xd) = *(unsigned char *)((int)puVar8 - 0x1b);
            *(unsigned char *)((int)puVar8 + 0xe) = *(unsigned char *)((int)puVar8 - 0x1a);
            *(unsigned char *)((int)puVar8 + 0xf) = *(unsigned char *)((int)puVar8 - 0x19);
            puVar8[4] = puVar8[-6];
            puVar8[5] = puVar8[-5];
            puVar8[6] = puVar8[-4];
            puVar8[7] = puVar8[-3];
            *(unsigned char *)(puVar8 + 8) = *(unsigned char *)(puVar8 + -2);
            *(unsigned short *)((int)puVar8 + 0x22) = *(unsigned short *)((int)puVar8 - 6);
            puVar8[2] = (unsigned int)&DAT_0055a340;
            *puVar8 = (unsigned int)&DAT_0055acb0;
          }
          puVar7 = puVar8 + -10;
          puVar4 = puVar8;
          while (puVar8 != puVar7) {
            puVar4 = puVar4 + -10;
            puVar7 = puVar7 + -10;
            FUN_0012083e(puVar4,puVar7);
          }
          FUN_0012083e(temp_v18,temp_v17);
        }
        else {
          temp_v44 = temp_v0 + (temp_v0 >> 1) + (temp_v0 >> 3);
          if (temp_v44 < temp_v0 + 0x20) {
            temp_v44 = temp_v0 + 0x20;
          }
          temp_v19 = (unsigned int *)rt_malloc(temp_v44 * 0x28);
          puVar4 = temp_v19;
          for (puVar8 = (unsigned int *)*piVar10; puVar8 != temp_v18; puVar8 = puVar8 + 10) {
            if (puVar4 != (unsigned int *)0x0) {
              *puVar4 = (unsigned int)&DAT_0055add0;
              *(unsigned char *)(puVar4 + 1) = *(unsigned char *)(puVar8 + 1);
              *(unsigned char *)((int)puVar4 + 5) = *(unsigned char *)((int)puVar8 + 5);
              puVar4[2] = (unsigned int)&DAT_0055aafc;
              *(unsigned char *)(puVar4 + 3) = *(unsigned char *)(puVar8 + 3);
              *(unsigned char *)((int)puVar4 + 0xd) = *(unsigned char *)((int)puVar8 + 0xd);
              *(unsigned char *)((int)puVar4 + 0xe) = *(unsigned char *)((int)puVar8 + 0xe);
              *(unsigned char *)((int)puVar4 + 0xf) = *(unsigned char *)((int)puVar8 + 0xf);
              temp_v2 = puVar8[5];
              puVar4[4] = puVar8[4];
              puVar4[5] = temp_v2;
              puVar4[6] = puVar8[6];
              puVar4[7] = puVar8[7];
              *(unsigned char *)(puVar4 + 8) = *(unsigned char *)(puVar8 + 8);
              *(unsigned short *)((int)puVar4 + 0x22) = *(unsigned short *)((int)puVar8 + 0x22);
              puVar4[2] = (unsigned int)&DAT_0055a340;
              *puVar4 = (unsigned int)&DAT_0055acb0;
            }
            puVar4 = puVar4 + 10;
          }
          puVar8 = temp_v19 + (((int)temp_v18 - *piVar10) / 0x28) * 10;
          if (puVar8 != (unsigned int *)0x0) {
            *puVar8 = (unsigned int)&DAT_0055add0;
            *(unsigned char *)(puVar8 + 1) = *(unsigned char *)(temp_v17 + 1);
            *(unsigned char *)((int)puVar8 + 5) = *(unsigned char *)((int)temp_v17 + 5);
            puVar8[2] = (unsigned int)&DAT_0055aafc;
            *(unsigned char *)(puVar8 + 3) = *(unsigned char *)(temp_v17 + 3);
            *(unsigned char *)((int)puVar8 + 0xd) = *(unsigned char *)((int)temp_v17 + 0xd);
            *(unsigned char *)((int)puVar8 + 0xe) = *(unsigned char *)((int)temp_v17 + 0xe);
            *(unsigned char *)((int)puVar8 + 0xf) = *(unsigned char *)((int)temp_v17 + 0xf);
            puVar8[4] = temp_v31;
            puVar8[5] = temp_v32;
            puVar8[6] = temp_v33;
            puVar8[7] = temp_v34;
            *(unsigned char *)(puVar8 + 8) = *(unsigned char *)(temp_v17 + 8);
            *(unsigned short *)((int)puVar8 + 0x22) = *(unsigned short *)((int)temp_v17 + 0x22);
            puVar8[2] = (unsigned int)&DAT_0055a340;
            *puVar8 = (unsigned int)&DAT_0055acb0;
          }
          puVar7 = *(unsigned int **)(temp_v1 + 0x7c);
          puVar8 = temp_v19 + (((int)temp_v18 - *piVar10) / 0x28) * 10;
          for (puVar4 = temp_v18; puVar4 != puVar7; puVar4 = puVar4 + 10) {
            puVar9 = puVar8 + 10;
            if (puVar9 != (unsigned int *)0x0) {
              *puVar9 = (unsigned int)&DAT_0055add0;
              *(unsigned char *)(puVar8 + 0xb) = *(unsigned char *)(puVar4 + 1);
              *(unsigned char *)((int)puVar8 + 0x2d) = *(unsigned char *)((int)puVar4 + 5);
              puVar8[0xc] = (unsigned int)&DAT_0055aafc;
              *(unsigned char *)(puVar8 + 0xd) = *(unsigned char *)(puVar4 + 3);
              *(unsigned char *)((int)puVar8 + 0x35) = *(unsigned char *)((int)puVar4 + 0xd);
              *(unsigned char *)((int)puVar8 + 0x36) = *(unsigned char *)((int)puVar4 + 0xe);
              *(unsigned char *)((int)puVar8 + 0x37) = *(unsigned char *)((int)puVar4 + 0xf);
              temp_v2 = puVar4[5];
              puVar8[0xe] = puVar4[4];
              puVar8[0xf] = temp_v2;
              puVar8[0x10] = puVar4[6];
              puVar8[0x11] = puVar4[7];
              *(unsigned char *)(puVar8 + 0x12) = *(unsigned char *)(puVar4 + 8);
              *(unsigned short *)((int)puVar8 + 0x4a) = *(unsigned short *)((int)puVar4 + 0x22);
              puVar8[0xc] = (unsigned int)&DAT_0055a340;
              *puVar9 = (unsigned int)&DAT_0055acb0;
            }
            puVar8 = puVar9;
          }
          puVar8 = (unsigned int *)*piVar10;
          puVar4 = *(unsigned int **)(temp_v1 + 0x7c);
          temp_v22 = ((int)puVar4 - (int)puVar8) / 0x28;
          for (; puVar8 != puVar4; puVar8 = puVar8 + 10) {
            (**(romwright_code **)*puVar8)(puVar8);
          }
          asdOperatorDeleteArray(*piVar10);
          *piVar10 = (int)temp_v19;
          *(unsigned int **)(temp_v1 + 0x7c) = temp_v19 + temp_v22 * 10 + 10;
          *(unsigned int **)(temp_v1 + 0x80) = temp_v19 + temp_v44 * 10;
        }
      }
      temp_v23 = &DAT_0055add0;
      puVar5 = *(unsigned char **)(puVar6 + 0xc);
      if (*(unsigned char **)(puVar6 + 0xc) != (unsigned char *)0x0) {
        do {
          puVar6 = puVar5;
          puVar5 = *(unsigned char **)(puVar6 + 8);
        } while (*(unsigned char **)(puVar6 + 8) != (unsigned char *)0x0);
      }
      else {
        puVar5 = *(unsigned char **)(puVar6 + 4);
        if (puVar6 == *(unsigned char **)(puVar5 + 0xc)) {
          do {
            puVar6 = puVar5;
            puVar5 = *(unsigned char **)(puVar6 + 4);
          } while (puVar6 == *(unsigned char **)(puVar5 + 0xc));
        }
        if (*(unsigned char **)(puVar6 + 0xc) != puVar5) {
          puVar6 = puVar5;
        }
      }
    } while (puVar6 != temp_v12);
  }
  if (temp_v12 != (unsigned char *)0x0) {
    temp_v16 = temp_v12;
    temp_v15 = *(unsigned int *)(temp_v12 + 8);
    FUN_001304a8(&temp_v17,&temp_v8,&temp_v15,&temp_v16);
    *(unsigned char **)(temp_v12 + 0xc) = temp_v9;
    temp_v9 = temp_v12;
    piVar10 = (int *)temp_v8;
    while (temp_v8 = (unsigned int *)piVar10, piVar10 != (int *)0x0) {
      temp_v8 = (unsigned int *)*piVar10;
      asdOperatorDeleteArray(piVar10[2]);
      asdOperatorDeleteArray(piVar10);
      piVar10 = (int *)temp_v8;
    }
  }
  puVar4 = *(unsigned int **)(temp_v45 + 0x90);
  puVar7 = *(unsigned int **)(temp_v45 + 0x94);
  puVar8 = puVar4;
  if (puVar4 != puVar7) {
    do {
      (**(romwright_code **)*puVar8)(puVar8);
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar7);
    *(unsigned int *)(temp_v45 + 0x94) =
         *(int *)(temp_v45 + 0x94) - (((int)puVar7 - (int)puVar4) & 0xfffffff8U);
  }
  return;
}

} /* extern "C" */
