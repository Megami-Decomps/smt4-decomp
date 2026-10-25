/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00218c50` (_code @ 0x218c50, 0x494 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "battle/BtlMainAccess.h"

extern "C" {

int effectRenderTransformedInstance(int);
int renderCtxCalculateStereoParallax(int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: effectRenderTransformedInstance. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */
extern int vec2GetXInt(int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);


void FUN_00218c50(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  
  if ((*(int *)(param_1 + 0x2180) != 0) &&
     (temp_v0 = reinterpret_cast<int>(btlGetMainState()), (*(unsigned int *)(temp_v0 + 0x44a0) & 0x200) == 0)) {
    temp_v6 = 0.29f;
    renderCtxCalculateStereoParallax(g_titleScene);
    temp_v0 = vec2GetXInt(param_1 + 0x20f0);
    temp_v0 = temp_v0 + (int)temp_v6;
    temp_v5 = 0;
    do {
      temp_v4 = g_titleScene;
      temp_v1 = packNibblesAndByte(6,1,0);
      piVar5 = (int *)(temp_v4 + 0x12ac);
      temp_v2 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v1;
      if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v2 != temp_v1) {
        (**(romwright_code **)(temp_v4 + 0x12c8))();
        *(unsigned char *)(temp_v4 + 0x12c4) = 0;
      }
      temp_v4 = param_1 + temp_v5 * 0x8c;
      if (*(char *)(temp_v4 + 0x1685) != '\0') {
        VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        effectRenderTransformedInstance(temp_v4 + 0x1600);
      }
      temp_v1 = g_titleScene;
      temp_v2 = packNibblesAndByte(6,7,0);
      piVar5 = (int *)(temp_v1 + 0x12ac);
      temp_v3 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v2;
      if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v1 + 0x12c8))();
        *(unsigned char *)(temp_v1 + 0x12c4) = 0;
      }
      if (*(char *)(temp_v4 + 0xa5) != '\0') {
        VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        effectRenderTransformedInstance(temp_v4 + 0x20);
      }
      temp_v1 = g_titleScene;
      temp_v2 = packNibblesAndByte(6,1,0);
      piVar5 = (int *)(temp_v1 + 0x12ac);
      temp_v3 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v2;
      if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v1 + 0x12c8))();
        *(unsigned char *)(temp_v1 + 0x12c4) = 0;
      }
      if (*(char *)(temp_v4 + 0x110d) != '\0') {
        VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        effectRenderTransformedInstance(temp_v4 + 0x1088);
      }
      temp_v1 = g_titleScene;
      temp_v2 = packNibblesAndByte(6,7,0);
      piVar5 = (int *)(temp_v1 + 0x12ac);
      temp_v3 = piVar5[*piVar5 + 2];
      piVar5[*piVar5 + 2] = temp_v2;
      if (*(char *)(temp_v1 + 0x12c4) != '\0' || temp_v3 != temp_v2) {
        (**(romwright_code **)(temp_v1 + 0x12c8))();
        *(unsigned char *)(temp_v1 + 0x12c4) = 0;
      }
      if (*(char *)(temp_v4 + 0x61d) != '\0') {
        VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        effectRenderTransformedInstance(temp_v4 + 0x598);
      }
      temp_v4 = g_titleScene;
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 10);
    temp_v5 = packNibblesAndByte(6,1,0);
    piVar5 = (int *)(temp_v4 + 0x12ac);
    temp_v1 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v5;
    if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v1 != temp_v5) {
      (**(romwright_code **)(temp_v4 + 0x12c8))(temp_v5);
      *(unsigned char *)(temp_v4 + 0x12c4) = 0;
    }
    if (*(int *)(param_1 + 0x2180) == 2) {
      temp_v5 = 0x14;
      do {
        temp_v4 = param_1 + temp_v5 * 0x8c;
        if (*(char *)(temp_v4 + 0xa5) != '\0') {
          *(unsigned int *)(temp_v4 + 0x50) = *(unsigned int *)(param_1 + 0x2188);
          VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          effectRenderTransformedInstance(temp_v4 + 0x20);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 0x1e);
    }
    else {
      temp_v5 = 0;
      temp_v4 = (int)*(short *)(param_1 + 0x218e);
      temp_v1 = (int)*(short *)(param_1 + 0x218c);
      if (0 < *(short *)(param_1 + 0x2192)) {
        temp_v4 = temp_v4 + *(short *)(param_1 + 0x2192);
      }
      if (0 < *(short *)(param_1 + 0x2190)) {
        temp_v1 = temp_v1 + *(short *)(param_1 + 0x2190);
      }
      if (0 < temp_v4) {
        do {
          temp_v2 = param_1 + ((temp_v1 - temp_v5) + 0x13) * 0x8c;
          *(unsigned int *)(temp_v2 + 0x50) = *(unsigned int *)(param_1 + 0x2188);
          VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          effectRenderTransformedInstance(temp_v2 + 0x20);
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < temp_v4);
      }
    }
    temp_v5 = g_titleScene;
    temp_v4 = packNibblesAndByte(6,7,0);
    piVar5 = (int *)(temp_v5 + 0x12ac);
    temp_v1 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v4;
    if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v1 != temp_v4) {
      (**(romwright_code **)(temp_v5 + 0x12c8))();
      *(unsigned char *)(temp_v5 + 0x12c4) = 0;
    }
    temp_v5 = g_titleScene;
    temp_v4 = packNibblesAndByte(6,1,0);
    piVar5 = (int *)(temp_v5 + 0x12ac);
    temp_v1 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v4;
    if (*(char *)(temp_v5 + 0x12c4) != '\0' || temp_v1 != temp_v4) {
      (**(romwright_code **)(temp_v5 + 0x12c8))();
      *(unsigned char *)(temp_v5 + 0x12c4) = 0;
    }
    temp_v5 = 0x32;
    do {
      temp_v4 = param_1 + temp_v5 * 0x8c;
      if (*(char *)(temp_v4 + 0xa5) != '\0') {
        *(unsigned int *)(temp_v4 + 0x50) = *(unsigned int *)(param_1 + (temp_v5 - 0x32) * 4 + 0x21bc);
        VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        effectRenderTransformedInstance(temp_v4 + 0x20);
        VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        effectRenderTransformedInstance(temp_v4 + 0x20);
      }
      temp_v4 = g_titleScene;
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0x3c);
    temp_v0 = packNibblesAndByte(6,7,0);
    piVar5 = (int *)(temp_v4 + 0x12ac);
    temp_v5 = piVar5[*piVar5 + 2];
    piVar5[*piVar5 + 2] = temp_v0;
    if (*(char *)(temp_v4 + 0x12c4) != '\0' || temp_v5 != temp_v0) {
      (**(romwright_code **)(temp_v4 + 0x12c8))();
      *(unsigned char *)(temp_v4 + 0x12c4) = 0;
    }
  }
  return;
}

} /* extern "C" */
