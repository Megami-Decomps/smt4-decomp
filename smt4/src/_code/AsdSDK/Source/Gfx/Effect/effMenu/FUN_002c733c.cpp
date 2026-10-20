/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c733c` (_code @ 0x2c733c, 0x164 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0944(unsigned int, unsigned int, unsigned int);
int FUN_002c1b64(int, int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
extern int g_titleScene; /* 0x44ea00 */
extern float DAT_004724cc; /* 0x4724cc */
extern float DAT_004724d0; /* 0x4724d0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002c0944. */
/* Supplied declaration required: FUN_002c1b64. */
extern int FUN_002c5d80(unsigned int);


void FUN_002c733c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  
  temp_v0 = g_titleScene;
  temp_v5 = (float)VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v7 = romwright_piece_4_4((int)(temp_v6 + DAT_004724d0),(int)(temp_v5 + DAT_004724cc));
  temp_v4 = (param_5 << 0x18) | (((param_5 & 0xffff) >> 8) << 0x10) |
          (((param_5 & 0xffffff) >> 0x10) << 8) | (param_5 >> 0x18);
  temp_v1 = FUN_002c5d80(1);
  piVar5 = (int *)(temp_v0 + 0x124c);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v3 != temp_v1) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  FUN_002c1b64(g_titleScene,0);
  VectorSignedToFloat((int)((unsigned long long)temp_v7 >> 0x20),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((int)temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002c0944(temp_v4,temp_v4,
               (param_6 << 0x18) | (((param_6 & 0xffff) >> 8) << 0x10) |
               (((param_6 & 0xffffff) >> 0x10) << 8) | (param_6 >> 0x18));
  temp_v0 = g_titleScene;
  piVar5 = (int *)(g_titleScene + 0x124c);
  temp_v1 = *piVar5;
  temp_v2 = piVar5[temp_v1 + 2];
  *piVar5 = temp_v1 - 1;
  if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v2 != piVar5[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v0 + 0x1268))();
    *(unsigned char *)(temp_v0 + 0x1264) = 0;
  }
  return;
}

} /* extern "C" */
