/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eaa14` (_code @ 0x3eaa14, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp420; /* 0x420: local_420 */
} param_1_stack;

extern int FUN_0015688c(void);
/* Supplied declaration required: FUN_003ecfb4. */
/* Supplied declaration required: FUN_004ca63c. */


void FUN_003eaa14(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [680];
  
  temp_v0 = FUN_0015688c();
  if (temp_v0 != 0) {
    FUN_003ecfb4(param_1,temp_v1,temp_v0,0);
    FUN_004ca63c(param_1,temp_v1,2,0x36,0);
  }
  return;
}
