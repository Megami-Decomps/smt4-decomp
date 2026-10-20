/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0051dcec` (_code @ 0x51dcec, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_0051d7e0(void);


unsigned int FUN_0051dcec(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_0051d7e0();
  VectorUnsignedToFloat((unsigned int)*(unsigned short *)(temp_v0 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
  return (unsigned int)*(unsigned short *)(temp_v0 + 2);
}

} /* extern "C" */
