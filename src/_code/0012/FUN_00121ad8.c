/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121ad8` (_code @ 0x121ad8, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001312cc. */
/* Supplied declaration required: FUN_002ac408. */
/* Supplied declaration required: FUN_002b4d78. */
extern unsigned int FUN_002bb0b4(unsigned int, unsigned int);
extern unsigned int FUN_002bb218(void);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


void FUN_00121ad8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + 4;
  FUN_002c3aa8(temp_v2);
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_002c3aa8(param_1 + 4);
    FUN_002ac408(param_1 + 0x10);
    FUN_002c3a24(param_1 + 4);
    temp_v0 = FUN_002bb218();
    temp_v1 = FUN_002bb0b4(temp_v0,1);
    FUN_002b4d78(temp_v0,temp_v1);
    FUN_001312cc(param_1 + 0x10);
    FUN_002c3a24(temp_v2);
    return;
  }
  FUN_002c3a24(temp_v2);
  return;
}
