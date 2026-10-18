/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dc47c` (_code @ 0x2dc47c, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002983dc. */
/* Supplied declaration required: FUN_002bf030. */


void FUN_002dc47c(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  if (param_2 == 0) {
    *(unsigned char *)(param_1 + 0x3081) = 1;
  }
  else {
    *(unsigned char *)(param_1 + 0x3081) = 0;
  }
  *(unsigned char *)(param_1 + 0x307f) = 0;
  *(unsigned int *)(param_1 + 0x305c) = 4;
  FUN_002bf030(param_1 + 0x1344,9);
  if (*(int *)(param_1 + 0x3048) == 0x17) {
    *(unsigned int *)(param_1 + 0x3054) = 0x1f;
    FUN_002983dc(param_1,0x18,1);
    return;
  }
  FUN_002983dc(param_1,0x1f,1);
  return;
}
