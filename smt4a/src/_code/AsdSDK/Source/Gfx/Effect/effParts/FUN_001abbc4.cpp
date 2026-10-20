/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001abbc4` (_code @ 0x1abbc4, 0x6fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(...);
int FUN_001ac8ec(...);
int FUN_001acb48(...);
int FUN_001b4ba4(int);
int FUN_001b4c1c(...);
int FUN_001b4ddc(...);
int FUN_001b4e80(void);
int FUN_001b4eb8(...);
int FUN_002e342c(...);
int FUN_002e6354(...);
int rt_memcpy_w(...);

typedef int romwright_code(...);
/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern char s______________________005b3274[113]; /* 0x5b3274 */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_001ac8ec. */
/* Supplied declaration required: FUN_001acb48. */
/* Supplied declaration required: FUN_001b4ba4. */
/* Supplied declaration required: FUN_001b4c1c. */
/* Supplied declaration required: FUN_001b4ddc. */
/* Supplied declaration required: FUN_001b4e80. */
/* Supplied declaration required: FUN_001b4eb8. */
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int * FUN_001abbc4(unsigned int *param_1)

{
/* irregular: 11 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int *puVar13;
  int temp_v10;
  unsigned char temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  
  FUN_001b4ba4(3);
  puVar2 = (unsigned int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,0x90,0x10,1);
  FUN_002e6354();
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  FUN_001b4ddc(puVar2);
  temp_v4 = param_1[1];
  temp_v6 = param_1[2];
  temp_v8 = param_1[3];
  *puVar2 = *param_1;
  puVar2[1] = temp_v4;
  puVar2[2] = temp_v6;
  puVar2[3] = temp_v8;
  temp_v4 = param_1[1];
  temp_v6 = param_1[2];
  temp_v8 = param_1[3];
  puVar2[4] = *param_1;
  puVar2[5] = temp_v4;
  puVar2[6] = temp_v6;
  puVar2[7] = temp_v8;
  puVar2[0x1d] = param_1[0x1d];
  puVar2[0x1a] = param_1[0x1a];
  temp_v9 = param_1[0x23];
  if (temp_v9 != 0) {
    temp_v10 = 0;
    do {
      temp_v1 = 0x10000;
      FUN_00167ab4(0x10000,0x100,0,0xc0,0x10,1);
      FUN_002e6354();
      FUN_002e6354(temp_v1,0x90);
      *(unsigned int *)(temp_v1 + 0x84) = 1;
      *(unsigned char *)(temp_v1 + 0x88) = 8;
      *(unsigned char *)(temp_v1 + 0x89) = 0;
      *(unsigned char *)(temp_v1 + 0x8a) = 0;
      FUN_001b4ddc(temp_v1);
      if ((*(unsigned int *)(temp_v9 + 0x98) & 1) != 0) {
        temp_v2 = param_1[0x23];
        for (temp_v3 = temp_v2;
            (temp_v5 = temp_v10, temp_v3 != 0 &&
            (temp_v5 = temp_v3, *(int *)(temp_v3 + 0x90) != *(int *)(temp_v9 + 0x90)));
            temp_v3 = *(int *)(temp_v3 + 0xac)) {
        }
        temp_v3 = 0;
        for (; (temp_v7 = temp_v10, temp_v2 != 0 && (temp_v7 = temp_v3, temp_v2 != temp_v5));
            temp_v2 = *(int *)(temp_v2 + 0xac)) {
          temp_v3 = temp_v3 + 1;
        }
        temp_v3 = puVar2[0x23];
        while ((temp_v2 = temp_v10, temp_v3 != 0 &&
               (temp_v11 = temp_v7 != 0, temp_v7 = temp_v7 - 1, temp_v2 = temp_v3, temp_v11))) {
          temp_v3 = *(int *)(temp_v3 + 0xac);
        }
        temp_v3 = *(int *)(temp_v2 + 0x90);
        temp_v0 = *(unsigned short *)(temp_v3 + 4);
        puVar6 = (unsigned int *)0x10000;
        FUN_00167ab4(0x10000,0x100,0,0x2c,0x10,1);
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        *puVar6 = 0xdc;
        puVar6[10] = 0;
        *(unsigned short *)(puVar6 + 1) = temp_v0;
        *(unsigned short *)(puVar6 + 3) = *(unsigned short *)(temp_v3 + 0xc);
        *(unsigned short *)(puVar6 + 7) = *(unsigned short *)(temp_v3 + 0x1c);
        temp_v4 = (**(romwright_code **)(s______________________005b3274 +
                            (unsigned int)*(unsigned short *)(puVar6 + 1) * 0x44 + 0x14))
                          (*(unsigned int *)(temp_v3 + 8));
        puVar6[2] = temp_v4;
        *(unsigned int **)(temp_v1 + 0x90) = puVar6;
      }
      else {
        puVar13 = *(unsigned int **)(temp_v9 + 0x90);
        temp_v0 = *(unsigned short *)(puVar13 + 1);
        puVar6 = (unsigned int *)0x10000;
        FUN_00167ab4(0x10000,0x100,0,0x2c,0x10,1);
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        *puVar6 = 0xdc;
        puVar6[10] = 0;
        *(unsigned short *)(puVar6 + 1) = temp_v0;
        *puVar6 = *puVar13;
        *(unsigned short *)(puVar6 + 3) = *(unsigned short *)(puVar13 + 3);
        *(unsigned short *)(puVar6 + 7) = *(unsigned short *)(puVar13 + 7);
        temp_v4 = (**(romwright_code **)(s______________________005b3274 + (unsigned int)*(unsigned short *)(puVar6 + 1) * 0x44)
                )(puVar13);
        puVar6[2] = temp_v4;
        *(unsigned int **)(temp_v1 + 0x90) = puVar6;
      }
      rt_memcpy_w(temp_v1,temp_v9,0x90);
      FUN_002e342c(temp_v1 + 0x9c,temp_v9 + 0x9c);
      *(unsigned int *)(temp_v1 + 0xac) = 0;
      if (puVar2[0x22] != 0) {
        *(int *)(puVar2[0x22] + 0xac) = temp_v1;
        *(unsigned int *)(temp_v1 + 0xb0) = puVar2[0x22];
      }
      else {
        puVar2[0x23] = temp_v1;
        *(unsigned int *)(temp_v1 + 0xb0) = 0;
      }
      puVar2[0x22] = temp_v1;
      puVar2[0x20] = puVar2[0x20] + 1;
      temp_v9 = *(int *)(temp_v9 + 0xac);
    } while (temp_v9 != 0);
  }
  else {
    temp_v9 = param_1[0x20];
    temp_v1 = 0;
    temp_v10 = param_1[0x22] + (int)param_1;
    temp_v16 = temp_v10;
    if (0 < temp_v9) {
      do {
        temp_v3 = 0x10000;
        FUN_00167ab4(0x10000,0x100,0,0xc0,0x10,1);
        FUN_002e6354();
        FUN_002e6354(temp_v3,0x90);
        *(unsigned int *)(temp_v3 + 0x84) = 1;
        *(unsigned char *)(temp_v3 + 0x88) = 8;
        *(unsigned char *)(temp_v3 + 0x89) = 0;
        *(unsigned char *)(temp_v3 + 0x8a) = 0;
        FUN_001b4ddc(temp_v3);
        if ((*(unsigned int *)(temp_v10 + 0x98) & 1) != 0) {
          temp_v2 = puVar2[0x23];
          temp_v5 = *(int *)(temp_v10 + 0x90);
          while ((temp_v7 = 0, temp_v2 != 0 &&
                 (temp_v11 = temp_v5 != 0, temp_v5 = temp_v5 - 1, temp_v7 = temp_v2, temp_v11))) {
            temp_v2 = *(int *)(temp_v2 + 0xac);
          }
          temp_v2 = *(int *)(temp_v7 + 0x90);
          temp_v0 = *(unsigned short *)(temp_v2 + 4);
          puVar6 = (unsigned int *)0x10000;
          FUN_00167ab4(0x10000,0x100,0,0x2c,0x10,1);
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[6] = 0;
          puVar6[7] = 0;
          puVar6[8] = 0;
          puVar6[9] = 0;
          *puVar6 = 0xdc;
          puVar6[10] = 0;
          *(unsigned short *)(puVar6 + 1) = temp_v0;
          *(unsigned short *)(puVar6 + 3) = *(unsigned short *)(temp_v2 + 0xc);
          *(unsigned short *)(puVar6 + 7) = *(unsigned short *)(temp_v2 + 0x1c);
          temp_v4 = (**(romwright_code **)(s______________________005b3274 +
                              (unsigned int)*(unsigned short *)(puVar6 + 1) * 0x44 + 0x14))
                            (*(unsigned int *)(temp_v2 + 8));
          puVar6[2] = temp_v4;
          *(unsigned int **)(temp_v3 + 0x90) = puVar6;
        }
        else {
          puVar6 = (unsigned int *)(*(int *)(temp_v10 + 0x90) + (int)param_1);
          if ((*(unsigned int *)(temp_v10 + 0x98) & 2) != 0) {
            temp_v2 = *(int *)(temp_v16 + *(int *)(temp_v10 + 0x94) * 0xc0 + 0x90);
            puVar6[9] = *(unsigned int *)((int)param_1 + temp_v2 + 0x24);
            if (*(int *)((int)param_1 + temp_v2 + 0x28) != 0) {
              temp_v2 = *(int *)((int)param_1 + temp_v2 + 0x20);
            }
            else {
              temp_v5 = *(int *)((int)param_1 + temp_v2 + 0x20);
              if (temp_v5 != 0) {
                temp_v2 = (int)param_1 + temp_v5 + temp_v2;
              }
              else {
                temp_v2 = 0;
              }
            }
            puVar6[8] = temp_v2 - (int)puVar6;
            temp_v0 = *(unsigned short *)(puVar6 + 1);
            puVar13 = (unsigned int *)0x10000;
            FUN_00167ab4(0x10000,0x100,0,0x2c,0x10,1);
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[6] = 0;
            puVar13[7] = 0;
            puVar13[8] = 0;
            puVar13[9] = 0;
            *puVar13 = 0xdc;
            puVar13[10] = 0;
            *(unsigned short *)(puVar13 + 1) = temp_v0;
            *puVar13 = *puVar6;
            *(unsigned short *)(puVar13 + 3) = *(unsigned short *)(puVar6 + 3);
            *(unsigned short *)(puVar13 + 7) = *(unsigned short *)(puVar6 + 7);
            temp_v4 = (**(romwright_code **)(s______________________005b3274 +
                                (unsigned int)*(unsigned short *)(puVar13 + 1) * 0x44))(puVar6);
            puVar13[2] = temp_v4;
            *(unsigned int **)(temp_v3 + 0x90) = puVar13;
            puVar6[9] = 0;
            puVar6[8] = 0;
          }
          else {
            temp_v0 = *(unsigned short *)(puVar6 + 1);
            puVar13 = (unsigned int *)0x10000;
            FUN_00167ab4(0x10000,0x100,0,0x2c,0x10,1);
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar13[4] = 0;
            puVar13[5] = 0;
            puVar13[6] = 0;
            puVar13[7] = 0;
            puVar13[8] = 0;
            puVar13[9] = 0;
            *puVar13 = 0xdc;
            puVar13[10] = 0;
            *(unsigned short *)(puVar13 + 1) = temp_v0;
            *puVar13 = *puVar6;
            *(unsigned short *)(puVar13 + 3) = *(unsigned short *)(puVar6 + 3);
            *(unsigned short *)(puVar13 + 7) = *(unsigned short *)(puVar6 + 7);
            temp_v4 = (**(romwright_code **)(s______________________005b3274 +
                                (unsigned int)*(unsigned short *)(puVar13 + 1) * 0x44))(puVar6);
            puVar13[2] = temp_v4;
            *(unsigned int **)(temp_v3 + 0x90) = puVar13;
          }
        }
        rt_memcpy_w(temp_v3,temp_v10,0x90);
        FUN_002e342c(temp_v3 + 0x9c,temp_v10 + 0x9c);
        *(unsigned int *)(temp_v3 + 0xac) = 0;
        temp_v1 = temp_v1 + 1;
        temp_v10 = temp_v10 + 0xc0;
        if (puVar2[0x22] != 0) {
          *(int *)(puVar2[0x22] + 0xac) = temp_v3;
          *(unsigned int *)(temp_v3 + 0xb0) = puVar2[0x22];
        }
        else {
          puVar2[0x23] = temp_v3;
          *(unsigned int *)(temp_v3 + 0xb0) = 0;
        }
        puVar2[0x20] = puVar2[0x20] + 1;
        puVar2[0x22] = temp_v3;
      } while (temp_v1 < temp_v9);
    }
  }
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v14 = 0;
  temp_v15 = 0x3f800000;
  FUN_001b4eb8(puVar2,&temp_v12);
  FUN_001acb48(puVar2,&temp_v12);
  FUN_001ac8ec(puVar2);
  FUN_001b4c1c(puVar2,0xffffffff);
  FUN_001b4e80();
  return puVar2;
}

} /* extern "C" */
