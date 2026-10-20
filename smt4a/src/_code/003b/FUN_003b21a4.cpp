/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b21a4` (_code @ 0x3b21a4, 0x34c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001634b4(...);
int efctSetSpeed(void);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_00184c40(int, int, int);
int FUN_001879d0(int);
int FUN_001a1ee0(int);
int FUN_00387240(...);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00184c40. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_00387240. */


void FUN_003b21a4(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  short temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  short temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  int temp_v9;
  float temp_v10;
  
  temp_v7 = 0.29f;
  FUN_001879d0(g_renderCtx);
  FUN_001879d0(g_renderCtx);
  temp_v10 = 1.0f;
  if (*(char *)(param_1 + 0x400) != '\0') {
    temp_v8 = 0.0f;
    temp_v6 = *(float *)(param_1 + 0x40);
    temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 < 0.0f) << 0x1f) | ((unsigned int)(temp_v6 == 0.0f) << 0x1e);
    in_fpscr = temp_v2 | ((unsigned int)(temp_v6 != temp_v6) << 0x1c);
    temp_v0 = (unsigned char)(temp_v2 >> 0x18);
    if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      efctSetSpeed();
      FUN_001835b4(2,0xc,1000,(int)temp_v7,0,0x1f);
      temp_v6 = *(float *)(param_1 + 0x158);
      temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 < temp_v8) << 0x1f) |
              ((unsigned int)(temp_v6 == temp_v8) << 0x1e);
      in_fpscr = temp_v2 | ((unsigned int)((temp_v6 != temp_v6) || (temp_v8 != temp_v8)) << 0x1c);
      temp_v0 = (unsigned char)(temp_v2 >> 0x18);
      if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
        efctSetSpeed();
        temp_v9 = g_renderCtx;
        temp_v1 = FUN_00169294(6,1,0);
        piVar6 = (int *)(temp_v9 + 0x12b8);
        temp_v3 = piVar6[*piVar6 + 2];
        piVar6[*piVar6 + 2] = temp_v1;
        if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
          (**(romwright_code **)(temp_v9 + 0x12d4))();
          *(unsigned char *)(temp_v9 + 0x12d0) = 0;
        }
        FUN_001835b4(2,0xc,0x3e9,(int)temp_v7,0,0x24);
        temp_v9 = g_renderCtx;
        temp_v1 = FUN_00169294(6,7,0);
        piVar6 = (int *)(temp_v9 + 0x12b8);
        temp_v3 = piVar6[*piVar6 + 2];
        piVar6[*piVar6 + 2] = temp_v1;
        if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v3 != temp_v1) {
          (**(romwright_code **)(temp_v9 + 0x12d4))();
          *(unsigned char *)(temp_v9 + 0x12d0) = 0;
        }
      }
      efctSetSpeed();
    }
  }
  temp_v7 = 0.8f;
  FUN_001879d0(g_renderCtx);
  temp_v9 = (int)temp_v7;
  if (*(char *)(param_1 + 0x401) == '\0') {
    return;
  }
  temp_v4 = 0;
  if (*(int *)(param_1 + 0x3f8) == 7) {
    temp_v1 = 10 - *(int *)(param_1 + 0x404);
    temp_v7 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = temp_v7 * 1.5707964f * 0.1f * 40.743664f;
    FUN_001a1ee0(temp_v1);
    temp_v2 = *(unsigned int *)(param_1 + 0x404);
    temp_v7 = (temp_v10 - temp_v7) * 8.0f;
    if ((temp_v2 & 1) != 0) {
      temp_v7 = -temp_v7;
    }
    temp_v5 = (short)(int)temp_v7;
    if (-1 < (int)((temp_v2 + ((unsigned int)((int)temp_v2 >> 0x1f) >> 0x1e)) * 0x20000000)) {
      temp_v4 = temp_v5;
      temp_v5 = 0;
    }
    *(unsigned char *)(param_1 + 0x5c) = 0;
    *(unsigned char *)(param_1 + 0xe8) = 0;
    *(unsigned char *)(param_1 + 0x3a4) = 0;
    *(unsigned char *)(param_1 + 0x200) = 0;
    temp_v3 = (int)temp_v4;
    temp_v1 = (int)temp_v5;
    FUN_00184c40(param_1 + 0x20,temp_v1,temp_v3);
    FUN_00184c40(param_1 + 0xac,temp_v1,temp_v3);
    FUN_00184c40(param_1 + 0x368,temp_v1,temp_v3);
    FUN_00184c40(param_1 + 0x1c4,temp_v1,temp_v3);
  }
  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001634b4(param_1 + 0x20);
  FUN_00387240(param_1 + 0x20,0xc,0x29);
  *(unsigned char *)(param_1 + 0x5c) = 1;
  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001634b4(param_1 + 0x1c4);
  FUN_00387240(param_1 + 0x1c4,0xc,0x2d);
  *(unsigned char *)(param_1 + 0x200) = 1;
  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001634b4(param_1 + 0xac);
  FUN_00387240(param_1 + 0xac,0xc,0x2b);
  *(unsigned char *)(param_1 + 0xe8) = 1;
  VectorSignedToFloat(temp_v9,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_001634b4(param_1 + 0x368);
  FUN_00387240(param_1 + 0x368,0xc,0x29);
  *(unsigned char *)(param_1 + 0x3a4) = 1;
  return;
}

} /* extern "C" */
