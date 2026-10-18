/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00469e1c` (_code @ 0x469e1c, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_0013def0(unsigned int);
/* Supplied declaration required: FUN_0019ea64. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_003c1060. */
/* Supplied declaration required: FUN_003d54f8. */


void FUN_00469e1c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00224880(**(unsigned int **)(param_1 + 0x2b4));
  if (temp_v0 != 2) {
    return;
  }
  if (*(char *)(param_1 + 0x1a) == '\x01' || *(char *)(param_1 + 0x1a) == '\x02') {
    *(unsigned int *)(param_1 + 4) = 0x10;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 4) = 3;
    *(unsigned int *)(param_1 + 8) = 0;
    temp_v0 = FUN_0013def0(0);
    if (temp_v0 == 3) {
      FUN_003d54f8(0,10);
    }
    temp_v0 = FUN_0013def0(1);
    if (temp_v0 == 3) {
      FUN_003d54f8(1,10);
    }
  }
  FUN_0019ea64(0);
  FUN_003c1060();
  return;
}
