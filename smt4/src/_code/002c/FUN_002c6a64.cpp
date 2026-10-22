/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c6a64` (_code @ 0x2c6a64, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, int);
int effectRenderTransformedInstance(int);
int renderCtxCalculateStereoParallax(int);
int FUN_002bf288(int, int, int, int, int, int);
int efctSetSpeed(void);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern int btlGetMainState(void);
/* Supplied declaration required: effectRenderTransformedInstance. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_002c6a64(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar7;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  unsigned long long temp_v8;
  
  temp_v7 = 0.29f;
  temp_v6 = temp_v7;
  renderCtxCalculateStereoParallax(g_titleScene);
  temp_v8 = CONCAT44(temp_v6,(int)temp_v7);
  temp_v3 = btlGetMainState();
  if ((*(unsigned int *)(temp_v3 + 0x44a0) & 0x200) == 0) {
    VectorSignedToFloat((int)temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    effectRenderTransformedInstance(param_1 + 0x1c4);
  }
  temp_v6 = (float)((unsigned long long)temp_v8 >> 0x20);
  renderCtxCalculateStereoParallax(g_titleScene);
  temp_v3 = (int)temp_v6;
  if (*(char *)(param_1 + 0x25c) != '\0') {
    temp_v7 = 0.0f;
    temp_v6 = *(float *)(param_1 + 0x40);
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 < 0.0f) << 0x1f) | ((unsigned int)(temp_v6 == 0.0f) << 0x1e);
    in_fpscr = temp_v0 | ((unsigned int)(temp_v6 != temp_v6) << 0x1c);
    temp_v1 = (unsigned char)(temp_v0 >> 0x18);
    if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      efctSetSpeed();
      FUN_002bf288(2,0x14,1000,temp_v3,0,0x1f);
      temp_v6 = *(float *)(param_1 + 0x158);
      temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 < temp_v7) << 0x1f) |
              ((unsigned int)(temp_v6 == temp_v7) << 0x1e);
      in_fpscr = temp_v0 | ((unsigned int)((temp_v6 != temp_v6) || (temp_v7 != temp_v7)) << 0x1c);
      temp_v1 = (unsigned char)(temp_v0 >> 0x18);
      if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        efctSetSpeed();
        temp_v2 = g_titleScene;
        temp_v4 = packNibblesAndByte(6,1,0);
        piVar7 = (int *)(temp_v2 + 0x12ac);
        temp_v5 = piVar7[*piVar7 + 2];
        piVar7[*piVar7 + 2] = temp_v4;
        if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v5 != temp_v4) {
          (**(romwright_code **)(temp_v2 + 0x12c8))();
          *(unsigned char *)(temp_v2 + 0x12c4) = 0;
        }
        FUN_002bf288(2,0x14,0x3e9,temp_v3,0,0x24);
        temp_v2 = g_titleScene;
        temp_v4 = packNibblesAndByte(6,7,0);
        piVar7 = (int *)(temp_v2 + 0x12ac);
        temp_v5 = piVar7[*piVar7 + 2];
        piVar7[*piVar7 + 2] = temp_v4;
        if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v5 != temp_v4) {
          (**(romwright_code **)(temp_v2 + 0x12c8))();
          *(unsigned char *)(temp_v2 + 0x12c4) = 0;
        }
      }
      efctSetSpeed();
    }
  }
  if (*(char *)(param_1 + 0x25d) != '\0') {
    VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    effectRenderTransformedInstance(param_1 + 0x20);
    temp_v2 = g_titleScene;
    temp_v4 = packNibblesAndByte(6,1,0);
    piVar7 = (int *)(temp_v2 + 0x12ac);
    temp_v5 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v4;
    if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v5 != temp_v4) {
      (**(romwright_code **)(temp_v2 + 0x12c8))();
      *(unsigned char *)(temp_v2 + 0x12c4) = 0;
    }
    VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    effectRenderTransformedInstance(param_1 + 0x138);
    temp_v2 = g_titleScene;
    temp_v4 = packNibblesAndByte(6,7,0);
    piVar7 = (int *)(temp_v2 + 0x12ac);
    temp_v5 = piVar7[*piVar7 + 2];
    piVar7[*piVar7 + 2] = temp_v4;
    if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v5 != temp_v4) {
      (**(romwright_code **)(temp_v2 + 0x12c8))();
      *(unsigned char *)(temp_v2 + 0x12c4) = 0;
    }
    VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    effectRenderTransformedInstance(param_1 + 0xac);
    return;
  }
  return;
}

} /* extern "C" */
