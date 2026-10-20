/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00163ec4` (_code @ 0x163ec4, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(unsigned int, unsigned int, int);
int FUN_001879d0(unsigned int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(...);

extern unsigned int g_renderCtx; /* 0x59dbb4 */
extern signed char DAT_005b3d54; /* 0x5b3d54 */
extern unsigned int DAT_005b3d60; /* 0x5b3d60 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001879d0. */


void FUN_00163ec4(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float in_s0;
  
  VectorSignedToFloat(0x100 - param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = *(int *)(param_1 + 0x54) != 0;
  temp_v0 = '\0';
  if (temp_v2) {
    temp_v0 = *(char *)(param_1 + 0x5c);
  }
  if (temp_v2 && temp_v0 != '\0') {
    if (in_s0 == 0.0f) {
      temp_v1 = 0;
    }
    else if (in_s0 == 1.0f) {
      temp_v1 = 0xff;
    }
    else {
      temp_v1 = VectorFloatToUnsigned(in_s0 * 255.0f,3) & 0xff;
    }
    temp_v1 = DAT_005b3d60 | temp_v1;
    if (DAT_005b3d54 != '\0') {
      FUN_001879d0(g_renderCtx);
    }
    FUN_00162790(*(unsigned int *)(param_1 + 0x50),temp_v1,param_1 + 0x5c);
  }
  return;
}

} /* extern "C" */
