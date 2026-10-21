/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003762c0` (_code @ 0x3762c0, 0x1a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e314(unsigned int, unsigned int);
int FUN_0016c4b8(int, int);
int FUN_002e0924(unsigned int, unsigned int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
extern int g_renderCtx; /* 0x59dbb4 */
extern float g_uiDrawOffset; /* 0x5c10c4 */
extern float DAT_005c10c8; /* 0x5c10c8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0014e314. */
extern int FUN_001692ac(unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_002e0924. */


void FUN_003762c0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  
  temp_v0 = g_renderCtx;
  temp_v5 = (float)VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = romwright_piece_4_4((int)(temp_v6 + DAT_005c10c8),(int)(temp_v5 + g_uiDrawOffset));
  temp_v1 = FUN_001692ac(1);
  piVar6 = (int *)(temp_v0 + 0x1258);
  temp_v3 = *piVar6;
  temp_v4 = piVar6[temp_v3 + 2];
  *piVar6 = temp_v3 + 1;
  piVar6[temp_v3 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v4 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  FUN_0016c4b8(g_renderCtx,0);
  if (param_6 >> 0x18 != 0) {
    VectorSignedToFloat((int)((unsigned long long)temp_v7 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = (param_6 >> 0x18) |
            (param_6 << 0x18) | (((param_6 & 0xffff) >> 8) << 0x10) |
            (((param_6 & 0xffffff) >> 0x10) << 8);
    VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_0014e314(temp_v2,temp_v2);
  }
  if (param_5 >> 0x18 != 0) {
    VectorSignedToFloat((int)((unsigned long long)temp_v7 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = (param_5 >> 0x18) |
            (param_5 << 0x18) | (((param_5 & 0xffff) >> 8) << 0x10) |
            (((param_5 & 0xffffff) >> 0x10) << 8);
    VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002e0924(temp_v2,temp_v2);
  }
  temp_v0 = g_renderCtx;
  piVar6 = (int *)(g_renderCtx + 0x1258);
  temp_v1 = *piVar6;
  temp_v3 = piVar6[temp_v1 + 2];
  *piVar6 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1270) != '\0' || temp_v3 != piVar6[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1274))();
    *(unsigned char *)(temp_v0 + 0x1270) = 0;
  }
  return;
}

} /* extern "C" */
