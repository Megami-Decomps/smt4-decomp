/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324b74` (_code @ 0x324b74, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002c08f0(unsigned int);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c56dc. */
/* Supplied declaration required: FUN_002c5728. */
/* Supplied declaration required: FUN_002c5758. */


void FUN_00324b74(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_002c5758(1);
  FUN_002c5728(1);
  FUN_002c56dc(1);
  temp_v0 = FUN_002c08f0(param_1);
  if (*(int *)(temp_v0 + 8) != 0) {
    FUN_002c415c();
  }
  FUN_002c415c(temp_v0);
  return;
}
