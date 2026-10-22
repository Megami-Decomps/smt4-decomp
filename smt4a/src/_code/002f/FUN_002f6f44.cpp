/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6f44` (_code @ 0x2f6f44, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00185dd4(int, int, unsigned int, int, int, unsigned int, unsigned int, unsigned int);
int renderCtxCalculateStereoParallax(unsigned int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_4_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00185dd4. */
/* Supplied declaration required: renderCtxCalculateStereoParallax. */


void FUN_002f6f44(unsigned int param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  
  temp_v1 = 0;
  temp_v2 = 0;
  temp_v0 = FUN_001834a4(0x1e,param_1);
  temp_v3 = 0.26f;
  renderCtxCalculateStereoParallax(g_renderCtx);
  temp_v5 = (float)VectorSignedToFloat((int)**(short **)(temp_v0 + 0xc),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat((int)(*(short **)(temp_v0 + 0xc))[1],(unsigned char)(in_fpscr >> 0x16) & 3
                                    );
  if (param_3 != 0) {
    temp_v8 = temp_v5 - temp_v5 * in_s0;
    temp_v5 = temp_v5 * in_s0;
    temp_v1 = (int)(temp_v8 * 0.5f);
  }
  if (param_4 != 0) {
    temp_v8 = temp_v6 - temp_v6 * in_s0;
    temp_v6 = temp_v6 * in_s0;
    temp_v2 = (int)(temp_v8 * 0.5f);
  }
  temp_v4 = VectorFloatToUnsigned(temp_v5,3);
  temp_v7 = VectorFloatToUnsigned(temp_v6,3);
  FUN_00185dd4(2,0x1e,param_1,temp_v1 + (int)temp_v3,temp_v2,temp_v4,temp_v7,param_2);
  return;
}

} /* extern "C" */
