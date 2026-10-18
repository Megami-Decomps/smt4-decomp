/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa6f8` (_code @ 0x2fa6f8, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002fa722. */


void FUN_002fa6f8(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  FUN_002ea43c();
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_002fa722();
  }
  return;
}
