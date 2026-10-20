/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d4dd4` (_code @ 0x3d4dd4, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1ee0(void);
int VectorSignedToFloat(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001a1ee0. */


void FUN_003d4dd4(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int in_fpscr;
  
  if (param_2 != 0) {
    if (param_1 == 0) {
      VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
      return;
    }
    if (param_1 == 1) {
      VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001a1ee0();
      return;
    }
    if (param_1 == 2) {
      VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001a1ee0();
    }
  }
  return;
}

} /* extern "C" */
