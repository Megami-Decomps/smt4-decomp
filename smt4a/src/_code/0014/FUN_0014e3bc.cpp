/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014e3bc` (_code @ 0x14e3bc, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163060(unsigned int, int, int, unsigned int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_00163060. */


void FUN_0014e3bc(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if ((param_2 & 1) != 0) {
    if ((param_2 & 2) != 0) {
      temp_v0 = 0x10000;
      temp_v1 = 0;
    }
    else {
      temp_v0 = 0x10000;
      temp_v1 = 1;
    }
  }
  else if ((param_2 & 2) != 0) {
    temp_v1 = 0;
    temp_v0 = 0x100;
  }
  else {
    temp_v0 = 0x100;
    temp_v1 = 1;
  }
  FUN_00163060(temp_v0,0x100,0,param_1,temp_v1);
  return;
}

} /* extern "C" */
