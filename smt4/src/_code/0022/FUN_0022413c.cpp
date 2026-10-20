/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022413c` (_code @ 0x22413c, 0x6e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_0024d5bc(...);
int renderCtxCallB(...);
int FUN_002ae9ec(...);
int FUN_002ba12c(int);
int FUN_002bed3c(void);
int FUN_002bf538(void);
int FUN_002c18e4(...);
int FUN_002c198c(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
} void_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_0024d5bc. */
/* Supplied declaration required: renderCtxCallB. */
extern int FUN_002865c0(unsigned int);
/* Supplied declaration required: FUN_002ae9ec. */
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf538. */
extern int jobGetWork(void);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


unsigned int FUN_0022413c(void)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  unsigned int temp_v9;
  unsigned long long temp_v10;
  unsigned int temp_v11;
  long long temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned char temp_v15 [64];
  unsigned char temp_v16 [64];
  unsigned char temp_v17 [128];
  
  temp_v1 = jobGetWork();
  if (*(int *)(temp_v1 + 4) == 1 || *(int *)(temp_v1 + 4) == 2) {
    temp_v8 = 0.29f;
    FUN_002ba12c(g_titleScene);
    temp_v9 = (unsigned int)temp_v8;
    FUN_002bed3c();
    FUN_002bf538();
    temp_v3 = g_titleScene;
    temp_v8 = 0.0f;
    temp_v2 = FUN_002865c0(6);
    piVar7 = (int *)(temp_v3 + 0x126c);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v2;
    if (*(char *)(temp_v3 + 0x1284) != '\0' || temp_v5 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x1288))();
      *(unsigned char *)(temp_v3 + 0x1284) = 0;
    }
    temp_v3 = g_titleScene;
    temp_v2 = FUN_002c5d80(1,0);
    piVar7 = (int *)(temp_v3 + 0x124c);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v2;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v5 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    temp_v3 = g_titleScene;
    temp_v2 = FUN_002c5da8(6,1,0);
    piVar7 = (int *)(temp_v3 + 0x12ac);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v2;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v5 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    temp_v13 = (float)VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (unsigned long long)temp_v9;
    temp_v9 = (in_fpscr & 0xfffffff) | ((unsigned int)(*(float *)(temp_v1 + 0x10) == temp_v8) << 0x1e);
    temp_v12 = (unsigned long long)(unsigned int)temp_v8 << 0x20;
    if (!romwright_subpiece_4_1_0(temp_v9 >> 0x1e,0)) {
      temp_v3 = *(int *)(temp_v1 + 0x18);
      if (*(int *)(temp_v1 + 0x28) != 2000) {
        if (temp_v3 < 300) {
          VectorSignedToFloat(temp_v3,(unsigned char)(temp_v9 >> 0x16) & 3);
        }
      }
      else if (temp_v3 < 300) {
        VectorSignedToFloat(temp_v3,(unsigned char)(temp_v9 >> 0x16) & 3);
      }
      FUN_0024d5bc(temp_v15);
      renderCtxCallB(temp_v15);
      if (*(int *)(temp_v1 + 0x1c) < 0x14) {
        VectorSignedToFloat(*(int *)(temp_v1 + 0x1c),(unsigned char)(temp_v9 >> 0x16) & 3);
      }
      FUN_002bf538();
      FUN_002ae9ec(2,0x37,*(unsigned int *)(temp_v1 + 0x28),(int)(*(float *)(temp_v1 + 0x2c) + temp_v13),
                   (int)*(float *)(temp_v1 + 0x30),0x81);
    }
    temp_v13 = (float)VectorSignedToFloat((int)temp_v10,(unsigned char)(temp_v9 >> 0x16) & 3);
    temp_v8 = (float)((unsigned long long)temp_v12 >> 0x20);
    temp_v9 = (temp_v9 & 0xfffffff) | ((unsigned int)(*(float *)(temp_v1 + 0x10) == temp_v8) << 0x1e);
    if (!romwright_subpiece_4_1_0(temp_v9 >> 0x1e,0)) {
      temp_v3 = *(int *)(temp_v1 + 0x38);
      if (*(int *)(temp_v1 + 0x48) != 2000) {
        if (temp_v3 < 300) {
          VectorSignedToFloat(temp_v3,(unsigned char)(temp_v9 >> 0x16) & 3);
          temp_v12 = (unsigned long long)(unsigned int)temp_v8 << 0x20;
        }
      }
      else if (temp_v3 < 300) {
        VectorSignedToFloat(temp_v3,(unsigned char)(temp_v9 >> 0x16) & 3);
        temp_v10 = temp_v10 & 0xffffffff;
      }
      FUN_0024d5bc(temp_v15);
      renderCtxCallB(temp_v15);
      if (*(int *)(temp_v1 + 0x3c) < 0x14) {
        VectorSignedToFloat(*(int *)(temp_v1 + 0x3c),(unsigned char)(temp_v9 >> 0x16) & 3);
      }
      FUN_002bf538();
      FUN_002ae9ec(2,0x37,*(unsigned int *)(temp_v1 + 0x48),(int)(*(float *)(temp_v1 + 0x4c) + temp_v13),
                   (int)*(float *)(temp_v1 + 0x50),0x82);
    }
    temp_v3 = g_titleScene;
    piVar7 = (int *)(g_titleScene + 0x12ac);
    temp_v2 = *piVar7;
    temp_v4 = piVar7[temp_v2 + 2];
    *piVar7 = temp_v2 - 1;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v4 != piVar7[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x12c8))(piVar7[temp_v2 + 1]);
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    temp_v3 = g_titleScene;
    temp_v2 = FUN_002c5da8(6,7,0);
    piVar7 = (int *)(temp_v3 + 0x12ac);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v2;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v5 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    temp_v14 = 0x43480000;
    temp_v6 = 0;
    do {
      temp_v8 = (float)VectorSignedToFloat((int)temp_v10,(unsigned char)(temp_v9 >> 0x16) & 3);
      temp_v10 = CONCAT44(*(float *)(temp_v1 + 0x10),(int)temp_v10);
      temp_v13 = (float)((unsigned long long)temp_v12 >> 0x20);
      temp_v9 = (temp_v9 & 0xfffffff) | ((unsigned int)(*(float *)(temp_v1 + 0x10) == temp_v13) << 0x1e);
      if (!romwright_subpiece_4_1_0(temp_v9 >> 0x1e,0)) {
        temp_v12 = CONCAT44(temp_v13,temp_v8 + (float)temp_v14);
        FUN_0024d5bc(temp_v16);
        renderCtxCallB(temp_v16);
        FUN_002bf538();
        FUN_002ae9ec(2,0x37,*(unsigned int *)(temp_v1 + temp_v6 * 0x20 + 0x70),(int)(float)temp_v12,0x80,
                     0x83);
      }
      temp_v3 = g_titleScene;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 3);
    piVar7 = (int *)(g_titleScene + 0x12ac);
    temp_v2 = *piVar7;
    temp_v4 = piVar7[temp_v2 + 2];
    *piVar7 = temp_v2 - 1;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v4 != piVar7[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x12c8))(piVar7[temp_v2 + 1]);
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    temp_v3 = g_titleScene;
    temp_v2 = FUN_002c5da8(6,1,0);
    piVar7 = (int *)(temp_v3 + 0x12ac);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v2;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v5 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    temp_v6 = 0;
    do {
      temp_v11 = (unsigned int)temp_v10;
      temp_v8 = *(float *)(temp_v1 + 0x10);
      temp_v10 = CONCAT44(temp_v8,temp_v11);
      temp_v13 = (float)((unsigned long long)temp_v12 >> 0x20);
      temp_v3 = temp_v1 + temp_v6 * 0x34;
      temp_v11 = VectorSignedToFloat(temp_v11,(unsigned char)(temp_v9 >> 0x16) & 3);
      temp_v12 = CONCAT44(temp_v13,temp_v11);
      *(float *)(temp_v3 + 0xe4) = temp_v8;
      temp_v0 = temp_v9 & 0xfffffff;
      temp_v9 = temp_v0 | ((unsigned int)(*(float *)(temp_v3 + 0xc0) == temp_v13) << 0x1e);
      temp_v7 = romwright_subpiece_4_1_0(temp_v9 >> 0x1e,0);
      if (!temp_v7) {
        temp_v9 = temp_v0 | ((unsigned int)(temp_v8 == temp_v13) << 0x1e);
        temp_v7 = romwright_subpiece_4_1_0(temp_v9 >> 0x1e,0);
      }
      if (!temp_v7) {
        FUN_0024d5bc(temp_v17);
        renderCtxCallB(temp_v17);
        FUN_002bf538();
        FUN_002ae9ec(2,0x37,*(unsigned short *)(*(int *)(temp_v3 + 0xd4) + *(int *)(temp_v3 + 0xdc) * 2),
                     (int)(*(float *)(temp_v3 + 0xb4) + (float)temp_v12),(int)*(float *)(temp_v3 + 0xb8),
                     0x84);
      }
      temp_v3 = g_titleScene;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 5);
    piVar7 = (int *)(g_titleScene + 0x12ac);
    temp_v1 = *piVar7;
    temp_v2 = piVar7[temp_v1 + 2];
    *piVar7 = temp_v1 - 1;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v2 != piVar7[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    temp_v1 = g_titleScene;
    piVar7 = (int *)(g_titleScene + 0x124c);
    temp_v3 = *piVar7;
    temp_v2 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 - 1;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v2 != piVar7[temp_v3 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    temp_v1 = g_titleScene;
    piVar7 = (int *)(g_titleScene + 0x126c);
    temp_v3 = *piVar7;
    temp_v2 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 - 1;
    if (*(char *)(temp_v1 + 0x1284) != '\0' || temp_v2 != piVar7[temp_v3 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1288))();
      *(unsigned char *)(temp_v1 + 0x1284) = 0;
    }
    FUN_002bed3c();
    FUN_002bf538();
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
  }
  return 0;
}

} /* extern "C" */
