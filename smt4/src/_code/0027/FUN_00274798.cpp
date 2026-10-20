/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00274798` (_code @ 0x274798, 0x814 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021e224(int);
int FUN_002878e4(void);
int FUN_00287aec(void);
int FUN_00287b0c(void);
int FUN_00287be4(void);
int FUN_0028c618(unsigned int, int);
int FUN_0028c640(unsigned int, int);
int FUN_00291e40(unsigned int);
int FUN_002a5710(unsigned int);
int FUN_002b2b64(unsigned int);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int spA0; /* 0xa0: local_a0 */
} void_stack;

extern int *DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e58; /* 0x447e58 */
extern int g_lmapScene; /* 0x447e88 */
extern int g_gameState; /* 0x49f91c */
extern signed char DAT_0049f93e; /* 0x49f93e */

/* Supplied declaration required: FUN_0021e224. */
/* Supplied declaration required: FUN_002878e4. */
/* Supplied declaration required: FUN_00287aec. */
/* Supplied declaration required: FUN_00287b0c. */
/* Supplied declaration required: FUN_00287be4. */
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: FUN_00291e40. */
/* Supplied declaration required: FUN_002a5710. */
/* Supplied declaration required: FUN_002b2b64. */


void FUN_00274798(void)

{
/* irregular: 2 goto(s); 10 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  float *pfVar7;
  unsigned int temp_v5;
  int temp_v6;
  int *piVar10;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  float *pfVar15;
  int temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  float temp_v18 [5];
  int temp_v19 [11];
  int temp_v20;
  
  temp_v13 = 0x47c34f8000000000;
  temp_v20 = 0;
  do {
    temp_v1 = DAT_00447e58 + temp_v20 * 0x38;
    if ((*(char *)(temp_v1 + 0xc) != '\0') && (*(char *)(temp_v1 + 0xf) == '\0')) {
      puVar3 = *(unsigned int **)(temp_v1 + 0x3c);
      if (DAT_0049f93e != '\0') {
        if ((*puVar3 & 2) == 0) {
          *puVar3 = *puVar3 | 2;
          *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
        }
      }
      else {
        if ((*puVar3 & 2) != 0) {
          *puVar3 = *puVar3 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 1;
        }
        if (*DAT_004474f4 == 3) {
          temp_v0 = *(short *)(temp_v1 + 0x12);
          puVar3 = *(unsigned int **)(temp_v1 + 0x3c);
          temp_v4 = *puVar3;
          temp_v5 = temp_v4 & 2;
          if ((temp_v0 == 0x10 || temp_v0 == 0x11) || temp_v0 == 0x16) {
            if (temp_v5 != 0) {
              *puVar3 = temp_v4 & 0xfffffffd;
              *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 1;
            }
            goto LAB_002748b4;
          }
        }
        else {
LAB_002748b4:
          if ((*(char *)(DAT_00447e58 + 0xe3c) == '\0') || (*(char *)(temp_v1 + 0xe) != '\0')) {
            temp_v11 = *(int *)(g_lmapScene + 0x1c);
            FUN_00287aec();
            temp_v8 = *(int *)(temp_v1 + 0x38);
            if (temp_v8 != 0) {
              if (*(char *)(temp_v1 + 0xe) != '\0') {
                *(unsigned int *)(temp_v1 + 0x2c) = 0;
              }
              else {
                if ((*(int *)(temp_v1 + 0x40) >= 0x10) ||
                   (FUN_0021e224(temp_v8), *(char *)(temp_v8 + 1) != '\0')) {
                  *(unsigned int *)(temp_v1 + 0x2c) = 0;
                }
                else {
                  *(unsigned int *)(temp_v1 + 0x2c) = 1;
                }
                temp_v3 = *(unsigned int *)(temp_v8 + 0x10);
                temp_v7 = *(unsigned int *)(temp_v8 + 0x14);
                *(unsigned int *)(temp_v1 + 0x1c) = *(unsigned int *)(temp_v8 + 0xc);
                *(unsigned int *)(temp_v1 + 0x20) = temp_v3;
                *(unsigned int *)(temp_v1 + 0x24) = temp_v7;
                *(unsigned int *)(temp_v1 + 0x28) = *(unsigned int *)(temp_v8 + 0x28);
              }
            }
            if (((*(char *)(DAT_00447e58 + 0xe3c) == '\0') && (*DAT_004474f4 != 3)) &&
               (*(char *)(temp_v1 + 0xe) == '\0')) {
              temp_v11 = DAT_004474f4[0x13];
              FUN_002878e4();
              if (temp_v11 < 0x42aa0000) {
                if (*(float *)(temp_v1 + 0x20) < (float)DAT_004474f4[0x14]) {
                  temp_v12 = 250.0f;
                  if (*(short *)(temp_v1 + 0x12) == 5 || *(short *)(temp_v1 + 0x12) == 6) {
                    temp_v12 = 130.0f;
                  }
                  if ((float)DAT_004474f4[0x14] - *(float *)(temp_v1 + 0x20) < temp_v12) {
                    puVar3 = *(unsigned int **)(temp_v1 + 0x3c);
                    temp_v4 = *puVar3;
                    temp_v5 = temp_v4 & 2;
                    goto joined_r0x00274a58;
                  }
                }
              }
            }
            if (g_gameState >= 0x65) {
              temp_v18[0] = (float)((unsigned long long)temp_v13 >> 0x20);
              temp_v19[0] = -1;
              temp_v18[1] = temp_v18[0];
              temp_v19[1] = -1;
              temp_v8 = 0;
              temp_v18[2] = temp_v18[0];
              temp_v9 = 0;
              temp_v19[2] = -1;
              do {
                temp_v2 = DAT_00447e58 + temp_v9 * 0x38;
                if (*(char *)(temp_v2 + 0xc) != '\0') {
                  *(unsigned char *)(temp_v2 + 0xd) = 0;
                  temp_v12 = *(float *)(g_lmapScene + 0x1c);
                  FUN_00287aec();
                  if (temp_v8 < 3) {
                    if (temp_v19[0] != -1) {
                      if (temp_v19[1] == -1) {
                        temp_v18[1] = temp_v12;
                        temp_v19[1] = temp_v9;
                        temp_v8 = temp_v8 + 1;
                      }
                      else if (temp_v19[2] == -1) {
                        temp_v18[2] = temp_v12;
                        temp_v19[2] = temp_v9;
                        temp_v8 = temp_v8 + 1;
                      }
                    }
                    else {
                      temp_v18[0] = temp_v12;
                      temp_v8 = temp_v8 + 1;
                      temp_v19[0] = temp_v9;
                    }
                  }
                  else if (temp_v12 < temp_v18[0]) {
                    temp_v18[0] = temp_v12;
                    temp_v19[0] = temp_v9;
                  }
                  temp_v2 = 0;
                  if (temp_v2 < temp_v8 - 1) {
                    do {
                      temp_v6 = (temp_v8 - temp_v2) - 1;
                      if (0 < temp_v6) {
                        pfVar15 = temp_v18 + temp_v2;
                        piVar10 = temp_v19 + temp_v2 + 1;
                        pfVar7 = pfVar15;
                        do {
                          pfVar7 = pfVar7 + 1;
                          temp_v12 = *pfVar15;
                          if (temp_v12 < *pfVar7) {
                            temp_v10 = temp_v19[temp_v2];
                            *pfVar15 = *pfVar7;
                            temp_v19[temp_v2] = *piVar10;
                            *pfVar7 = temp_v12;
                            *piVar10 = temp_v10;
                          }
                          temp_v6 = temp_v6 - 1;
                          piVar10 = piVar10 + 1;
                        } while (temp_v6 != 0);
                      }
                      temp_v2 = temp_v2 + 1;
                    } while (temp_v2 < temp_v8 - 1);
                  }
                }
                temp_v9 = temp_v9 + 1;
              } while (temp_v9 < 0x40);
              temp_v9 = 0;
              if (temp_v9 < temp_v8) {
                do {
                  piVar10 = temp_v19 + temp_v9;
                  temp_v9 = temp_v9 + 1;
                  temp_v2 = DAT_00447e58 + *piVar10 * 0x38;
                  if (*(char *)(temp_v2 + 0xc) != '\0') {
                    *(unsigned char *)(temp_v2 + 0xd) = 1;
                  }
                } while (temp_v9 < temp_v8);
              }
            }
            else {
              temp_v12 = (float)DAT_004474f4[0x13];
              FUN_00287be4();
              temp_v8 = 0;
              temp_v15 = 50.0f;
              temp_v17 = 0x428c0000;
              do {
                temp_v9 = DAT_00447e58 + temp_v8 * 0x38;
                if (*(char *)(temp_v9 + 0xc) != '\0') {
                  temp_v16 = temp_v15;
                  FUN_00287be4();
                  if (DAT_004474f4[0x2b] == -1) {
                    temp_v16 = (float)temp_v17;
                  }
                  temp_v14 = temp_v12;
                  FUN_00287b0c();
                  if ((temp_v12 > -temp_v16) && (temp_v16 > temp_v12)) {
                    *(unsigned char *)(temp_v9 + 0xd) = 1;
                    temp_v12 = temp_v14;
                  }
                  else {
                    *(unsigned char *)(temp_v9 + 0xd) = 0;
                    temp_v12 = temp_v14;
                  }
                }
                temp_v8 = temp_v8 + 1;
              } while (temp_v8 < 0x40);
            }
            FUN_0028c640(*(unsigned int *)(*(int *)(temp_v1 + 0x3c) + 8),0);
            temp_v8 = (int)temp_v13;
            FUN_0028c618(*(unsigned int *)(*(int *)(temp_v1 + 0x3c) + 8),0);
            if (*(int *)(*(int *)(*(int *)(temp_v1 + 0x3c) + 8) + 0x38) != *(int *)(temp_v1 + 0x2c)) {
              temp_v8 = (int)temp_v13;
              FUN_002a5710(*(unsigned int *)(*(int *)(temp_v1 + 0x3c) + 8));
              *(int *)(temp_v1 + 0x30) = (int)temp_v13;
            }
            FUN_002b2b64(*(unsigned int *)(*(int *)(temp_v1 + 0x3c) + 8));
            if ((*(int *)(temp_v1 + 0x2c) == 1) && (temp_v11 < 0x44960000)) {
              temp_v9 = *(int *)(temp_v1 + 0x30);
              if ((((temp_v9 < 0x3f800000) && (temp_v8 >= 0x3f800000)) ||
                  ((temp_v9 < 0x42240000 && (temp_v8 >= 0x42240000)))) ||
                 ((temp_v9 < 0x42a20000 && (temp_v8 >= 0x42a20000)))) {
                if (temp_v11 < 0x43c80000) {
                  temp_v3 = 0x1000227;
                }
                else if (temp_v11 < 0x44480000) {
                  temp_v3 = 0x1000229;
                }
                else {
                  temp_v3 = 0x100022b;
                }
                FUN_00291e40(temp_v3);
              }
              else if ((((0x41a7ffff >= temp_v9) && (temp_v8 >= 0x41a80000)) ||
                       ((0x4273ffff >= temp_v9 && (temp_v8 >= 0x42740000)))) ||
                      ((0x42c9ffff >= temp_v9 && (temp_v8 >= 0x42ca0000)))) {
                if (temp_v11 < 0x43c80000) {
                  temp_v3 = 0x1000226;
                }
                else if (temp_v11 < 0x44480000) {
                  temp_v3 = 0x1000228;
                }
                else {
                  temp_v3 = 0x100022a;
                }
                FUN_00291e40(temp_v3);
              }
            }
            *(int *)(temp_v1 + 0x30) = temp_v8;
            if ((*(char *)(DAT_00447e58 + 0xe3c) == '\0') && (*DAT_004474f4 != 3)) {
              puVar3 = *(unsigned int **)(temp_v1 + 0x3c);
              temp_v4 = *puVar3;
              temp_v5 = temp_v4 & 2;
              if (*(char *)(temp_v1 + 0xd) == '\0') {
                if (temp_v5 == 0) {
                  *puVar3 = temp_v4 | 2;
                  *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
                }
              }
              else if (temp_v5 != 0) {
                *puVar3 = temp_v4 & 0xfffffffd;
                *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 1;
              }
            }
            temp_v20 = temp_v20 + 1;
            if (temp_v20 >= 0x40) {
              return;
            }
            continue;
          }
          puVar3 = *(unsigned int **)(temp_v1 + 0x3c);
          temp_v4 = *puVar3;
          temp_v5 = temp_v4 & 2;
        }
joined_r0x00274a58:
        if (temp_v5 == 0) {
          *puVar3 = temp_v4 | 2;
          *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
        }
      }
    }
    temp_v20 = temp_v20 + 1;
    if (temp_v20 >= 0x40) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
