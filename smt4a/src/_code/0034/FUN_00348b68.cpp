/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348b68` (_code @ 0x348b68, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c1ec(unsigned int);
int FUN_002bf09c(void);
int scrSetResult(unsigned int);
int VectorFloatToUnsigned(double, int);
int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_0013c1ec. */
extern unsigned int FUN_00145868(void);
extern unsigned int scrGetArg(unsigned int);
extern int scrGetArgString(unsigned int);
/* Supplied declaration required: FUN_002bf09c. */
/* Supplied declaration required: scrSetResult. */
extern unsigned int FUN_003d2150(void);


void FUN_00348b68(void)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  
  temp_v0 = scrGetArg(1);
  temp_v1 = FUN_00145868();
  temp_v3 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v5 = (float)VectorUnsignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = VectorFloatToUnsigned(temp_v3 * temp_v5 * 0.0125f,3);
  FUN_0013c1ec(temp_v4 & 0xff);
  temp_v2 = scrGetArgString(0);
  FUN_002bf09c();
  if (-1 < temp_v2) {
    temp_v0 = FUN_003d2150();
    FUN_0013c1ec(temp_v1);
    scrSetResult(temp_v0);
  }
  return;
}

} /* extern "C" */
