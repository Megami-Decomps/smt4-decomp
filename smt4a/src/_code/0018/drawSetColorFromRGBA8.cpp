/* NON_MATCHING: romwright 0.5.0 decompilation of `drawSetColorFromRGBA8` (_code @ 0x184e64, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001834e4(float *);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001834e4. */


void drawSetColorFromRGBA8(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int in_fpscr;
  float temp_v0;
  float fStack_14;
  float temp_v1;
  unsigned int temp_v2;
  
  fStack_14 = (float)VectorUnsignedToFloat
                               ((param_1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = (float)VectorUnsignedToFloat(param_1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = (float)VectorUnsignedToFloat((param_1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = 0x3f800000;
  fStack_14 = fStack_14 * 0.003921569f;
  temp_v0 = temp_v0 * 0.003921569f;
  temp_v1 = temp_v1 * 0.003921569f;
  FUN_001834e4(&temp_v0);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
