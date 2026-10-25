/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fd9f4` (_code @ 0x1fd9f4, 0x48c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002005ec(void);
int mathInterpolatePackedTable(unsigned int);
int FUN_002ba1e0(unsigned int);
int FUN_002c1b64(...);
int FUN_002e0460(void);
int FUN_002f3904(void);
int FUN_002f484c(void);
int FUN_0030f730(void);
int FUN_00396dec(int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int g_lmapMainState; /* 0x447060 */
extern int g_titleScene; /* 0x44ea00 */
extern int DAT_0049fc68; /* 0x49fc68 */
extern int DAT_0049fc70; /* 0x49fc70 */
extern int DAT_0049fca0; /* 0x49fca0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_002005ec. */
/* Supplied declaration required: mathInterpolatePackedTable. */
/* Supplied declaration required: FUN_002ba1e0. */
/* Supplied declaration required: FUN_002c1b64. */
extern unsigned int asdTMTexTableGetNodeTexture(unsigned int, unsigned int);
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e0460. */
/* Supplied declaration required: FUN_002f3904. */
/* Supplied declaration required: FUN_002f484c. */
/* Supplied declaration required: FUN_0030f730. */
/* Supplied declaration required: FUN_00396dec. */


unsigned int FUN_001fd9f4(void)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned int temp_v7;
  
  temp_v1 = g_lmapMainState;
  if (*(int *)(g_lmapMainState + 0xc) < 0xb) {
    return 0;
  }
  if (*(int *)(g_lmapMainState + 0xc) >= 0x60) {
    return 0;
  }
  FUN_00396dec(g_lmapMainState + 0xec);
  temp_v3 = g_titleScene;
  if (DAT_0049fc68 != 0) {
    temp_v0 = FUN_002c5d80(5,1);
    piVar7 = (int *)(temp_v3 + 0x124c);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v5 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    FUN_002c1b64(g_titleScene,0);
    FUN_002005ec();
    temp_v3 = g_titleScene;
    piVar7 = (int *)(g_titleScene + 0x124c);
    temp_v0 = *piVar7;
    temp_v4 = piVar7[temp_v0 + 2];
    *piVar7 = temp_v0 - 1;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v4 != piVar7[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
  }
  temp_v3 = g_titleScene;
  if (DAT_0049fca0 != 0) {
    temp_v0 = FUN_002c5d80(5,0);
    piVar7 = (int *)(temp_v3 + 0x124c);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v5 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    FUN_002c1b64(g_titleScene,0);
    FUN_002f3904();
    temp_v3 = g_titleScene;
    piVar7 = (int *)(g_titleScene + 0x124c);
    temp_v0 = *piVar7;
    temp_v4 = piVar7[temp_v0 + 2];
    *piVar7 = temp_v0 - 1;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v4 != piVar7[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
  }
  temp_v3 = g_lmapMainState;
  if (*(char *)(temp_v1 + 0xb) != '\0') {
    temp_v0 = *(int *)(g_lmapMainState + 0x38);
    temp_v1 = temp_v0 + 1;
    *(int *)(g_lmapMainState + 0x38) = temp_v1;
    if (temp_v1 >= 0x1f) {
      temp_v1 = temp_v0 - 0x1d;
      *(int *)(temp_v3 + 0x38) = temp_v1;
    }
    temp_v6 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = VectorFloatToUnsigned(temp_v6 * 2184.5f,3);
    mathInterpolatePackedTable(temp_v7 & 0xffff);
    temp_v1 = g_titleScene;
    temp_v0 = FUN_002c5d80(5,0);
    piVar7 = (int *)(temp_v1 + 0x124c);
    temp_v4 = *piVar7;
    temp_v5 = piVar7[temp_v4 + 2];
    *piVar7 = temp_v4 + 1;
    piVar7[temp_v4 + 3] = temp_v0;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v5 != temp_v0) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
    temp_v1 = *(int *)(temp_v3 + 0xe4);
    if (*(char *)(temp_v3 + 0xe1) != '\0') {
      if (temp_v1 < 0xd8) {
        temp_v1 = temp_v1 + 0x20;
        *(int *)(temp_v3 + 0xe4) = temp_v1;
      }
      if (temp_v1 >= 0xd9) {
        temp_v1 = 0xd8;
      }
      temp_v6 = *(float *)(temp_v3 + 0xe8);
      *(int *)(temp_v3 + 0xe4) = temp_v1;
      if ((int)temp_v6 < 0x42820000) {
        temp_v6 = temp_v6 + 5.0f;
        *(float *)(temp_v3 + 0xe8) = temp_v6;
      }
      if ((int)temp_v6 >= 0x42820001) {
        temp_v6 = 65.0f;
      }
    }
    else {
      if (temp_v1 >= 0x39) {
        temp_v1 = temp_v1 - 0x20;
        *(int *)(temp_v3 + 0xe4) = temp_v1;
        if (temp_v1 < 0x39) {
          temp_v1 = 0x38;
        }
      }
      else {
        temp_v1 = 0x38;
      }
      temp_v6 = *(float *)(temp_v3 + 0xe8);
      *(int *)(temp_v3 + 0xe4) = temp_v1;
      if ((int)temp_v6 >= 0x42200001) {
        temp_v6 = temp_v6 - 5.0f;
        *(float *)(temp_v3 + 0xe8) = temp_v6;
      }
      if ((int)temp_v6 < 0x42200001) {
        temp_v6 = 40.0f;
      }
    }
    *(float *)(temp_v3 + 0xe8) = temp_v6;
    temp_v7 = *(unsigned int *)(temp_v3 + 0xe4);
    temp_v2 = asdTMTexTableGetNodeTexture(0xe,2);
    FUN_002c1b64(g_titleScene,temp_v2);
    temp_v1 = g_titleScene;
    temp_v3 = packNibblesAndByte(6,7,0);
    piVar7 = (int *)(temp_v1 + 0x12ac);
    temp_v0 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v3;
    if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v0 != temp_v3) {
      (**(romwright_code **)(temp_v1 + 0x12c8))();
      *(unsigned char *)(temp_v1 + 0x12c4) = 0;
    }
    FUN_002ba1e0(temp_v7 | 0xffffff00);
    temp_v1 = g_titleScene;
    piVar7 = (int *)(g_titleScene + 0x124c);
    temp_v3 = *piVar7;
    temp_v0 = piVar7[temp_v3 + 2];
    *piVar7 = temp_v3 - 1;
    if (*(char *)(temp_v1 + 0x1264) != '\0' || temp_v0 != piVar7[temp_v3 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1268))();
      *(unsigned char *)(temp_v1 + 0x1264) = 0;
    }
  }
  if (DAT_0049fc70 != 1) {
    if (DAT_0049fc70 != 2) {
      if (DAT_0049fc70 == 3) {
        FUN_0030f730();
      }
    }
    else {
      FUN_002e0460();
    }
  }
  else {
    FUN_002f484c();
  }
  return 0;
}

} /* extern "C" */
