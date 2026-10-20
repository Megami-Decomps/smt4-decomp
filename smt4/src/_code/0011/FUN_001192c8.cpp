/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001192c8` (_code @ 0x1192c8, 0x488 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b99b8(void);
int FUN_002ba1e0(int, int, int, int, int, int, int, double);
int FUN_002c1b64(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int DAT_0043e278; /* 0x43e278 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b99b8. */
/* Supplied declaration required: FUN_002ba1e0. */
extern int FUN_002bff10(unsigned int);
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_001192c8(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int *piVar6;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  
  temp_v0 = DAT_0043e278;
  temp_v7 = 400.0f;
  temp_v8 = temp_v7;
  temp_v1 = FUN_002bff10(0);
  temp_v6 = g_titleScene;
  temp_v5 = *(int *)(temp_v0 + 0xe90);
  if (((temp_v1 == 0) && (temp_v5 >= 2)) && (temp_v5 = temp_v5 - 1, temp_v5 < 1)) {
    temp_v5 = 1;
  }
  temp_v1 = FUN_002c5d80(1,0);
  piVar6 = (int *)(temp_v6 + 0x124c);
  temp_v2 = *piVar6;
  temp_v3 = piVar6[temp_v2 + 2];
  *piVar6 = temp_v2 + 1;
  piVar6[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v6 + 0x1264) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v6 + 0x1268))();
    *(unsigned char *)(temp_v6 + 0x1264) = 0;
  }
  temp_v10 = 2.0f;
  temp_v9 = 0;
  if ((*(unsigned int *)(temp_v0 + 0xed0) & 0xff) != 0) {
    temp_v6 = *(int *)(temp_v0 + 0xfe8);
    temp_v11 = temp_v10;
    if (temp_v5 != 0) {
      VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002b99b8();
      temp_v7 = temp_v7 / temp_v10;
    }
    *(unsigned int *)(temp_v6 + 0x3c) = 1;
    VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v6 + 0x40) = 1;
    temp_v1 = g_titleScene;
    temp_v7 = temp_v7 / temp_v10;
    temp_v10 = temp_v11;
    temp_v5 = packNibblesAndByte(6,1,0);
    piVar6 = (int *)(temp_v1 + 0x12ac);
    temp_v2 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v5;
    if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v2 != temp_v5) {
      (**(romwright_code **)(temp_v1 + 0x12c8))();
      *(unsigned char *)(temp_v1 + 0x12c4) = 0;
    }
    FUN_002c1b64(g_titleScene,temp_v6);
    temp_v4 = *(unsigned int *)(temp_v0 + 0xed0);
    FUN_002ba1e0(temp_v4,temp_v4,temp_v4,temp_v4,temp_v9,temp_v9,temp_v9,temp_v7);
  }
  if ((*(unsigned int *)(temp_v0 + 0xed4) & 0xff) != 0) {
    temp_v6 = *(int *)(temp_v0 + 0xfdc);
    *(unsigned int *)(temp_v6 + 0x3c) = 0;
    *(unsigned int *)(temp_v6 + 0x40) = 0;
    VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = temp_v8 / temp_v7;
    FUN_002c1b64(g_titleScene);
    temp_v6 = g_titleScene;
    temp_v1 = packNibblesAndByte(6,7,0);
    piVar6 = (int *)(temp_v6 + 0x12ac);
    temp_v5 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v1;
    if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v5 != temp_v1) {
      (**(romwright_code **)(temp_v6 + 0x12c8))();
      *(unsigned char *)(temp_v6 + 0x12c4) = 0;
    }
    temp_v4 = *(unsigned int *)(temp_v0 + 0xed4);
    FUN_002ba1e0(temp_v4,temp_v4,temp_v4,temp_v4,temp_v9,temp_v9,temp_v9,temp_v7);
  }
  temp_v6 = g_titleScene;
  if ((*(unsigned int *)(temp_v0 + 0xed8) & 0xff) != 0) {
    temp_v1 = packNibblesAndByte(6,1,0);
    piVar6 = (int *)(temp_v6 + 0x12ac);
    temp_v5 = piVar6[*piVar6 + 2];
    piVar6[*piVar6 + 2] = temp_v1;
    if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v5 != temp_v1) {
      (**(romwright_code **)(temp_v6 + 0x12c8))();
      *(unsigned char *)(temp_v6 + 0x12c4) = 0;
    }
    temp_v6 = *(int *)(temp_v0 + 0xfe4);
    FUN_002b99b8();
    temp_v7 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(temp_v6 + 0x3c) = 1;
    *(unsigned int *)(temp_v6 + 0x40) = 1;
    VectorSignedToFloat(*(unsigned int *)(temp_v6 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = (temp_v8 / temp_v10) / temp_v7;
    FUN_002c1b64(g_titleScene,temp_v6);
    temp_v4 = *(unsigned int *)(temp_v0 + 0xed8);
    FUN_002ba1e0(temp_v4,temp_v4,temp_v4,temp_v4,temp_v9,temp_v9,temp_v9,temp_v7);
  }
  temp_v0 = g_titleScene;
  temp_v6 = packNibblesAndByte(6,7,0);
  piVar6 = (int *)(temp_v0 + 0x12ac);
  temp_v1 = piVar6[*piVar6 + 2];
  piVar6[*piVar6 + 2] = temp_v6;
  if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v1 != temp_v6) {
    (**(romwright_code **)(temp_v0 + 0x12c8))();
    *(unsigned char *)(temp_v0 + 0x12c4) = 0;
  }
  temp_v0 = g_titleScene;
  piVar6 = (int *)(g_titleScene + 0x124c);
  temp_v6 = *piVar6;
  temp_v1 = piVar6[temp_v6 + 2];
  *piVar6 = temp_v6 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v1 != piVar6[temp_v6 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  return;
}

} /* extern "C" */
