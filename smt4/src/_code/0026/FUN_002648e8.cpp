/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002648e8` (_code @ 0x2648e8, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003965f0(unsigned int *);
int FUN_00396b08(unsigned int *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_003965f0. */
/* Supplied declaration required: FUN_00396b08. */


void FUN_002648e8(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((*param_1 & 1) == 0) {
    if ((*param_1 & 2) == 0) {
      temp_v0 = param_1[3];
      param_1[3] = temp_v0 + 1;
      if ((int)(temp_v0 + 1) >= 0x78) {
        param_1[3] = 0;
        FUN_00396b08(param_1,2);
      }
    }
    FUN_003965f0(param_1);
    return;
  }
  return;
}

} /* extern "C" */
