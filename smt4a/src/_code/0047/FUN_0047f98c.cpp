/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f98c` (_code @ 0x47f98c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [32], unsigned char *);
int FUN_001628c0(unsigned char [32], unsigned int, int);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);

extern unsigned char LAB_0047fa34; /* 0x47fa34 */
extern unsigned char LAB_0047fa48; /* 0x47fa48 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int FUN_0014af98(void);
/* Supplied declaration required: FUN_001628c0. */


void FUN_0047f98c(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  
  if ((param_1 & 0xfffff) >> 8 != 0 && param_1 >> 0x14 != 0) {
    textFormatBuffer(temp_v3,&LAB_0047fa34);
    if ((param_1 & 0x3f) >> 4 != 0) {
      textFormatBuffer(temp_v3,&LAB_0047fa48);
    }
    temp_v0 = FUN_0014af98();
    temp_v1 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = VectorFloatToUnsigned(temp_v1 * in_s0,3);
    FUN_001628c0(temp_v3,temp_v2 & 0xff,0);
  }
  return;
}

} /* extern "C" */
