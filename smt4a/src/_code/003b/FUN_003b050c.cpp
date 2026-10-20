/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b050c` (_code @ 0x3b050c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003a3638(void);
int VectorSignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_003a3638. */


unsigned int FUN_003b050c(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_003a3638();
  return 1;
}

} /* extern "C" */
