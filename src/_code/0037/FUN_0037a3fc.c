/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a3fc` (_code @ 0x37a3fc, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_002c3628. */
extern int FUN_0037a420(void);


void FUN_0037a3fc(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0037a420();
  if (temp_v0 == 0) {
    FUN_002c3628(param_2 + 0xc);
    return;
  }
  return;
}
