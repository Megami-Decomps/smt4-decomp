/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e07c` (_code @ 0x15e07c, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


void FUN_0015e07c(char *param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int iStack_20;
  int iStack_1c;
  
  if (*param_1 != '\0') {
    FUN_002c3aa8(param_1 + 0x34);
    if (*(int *)(param_1 + param_2 * 4 + 0x14) != 0) {
      temp_v1 = param_3 + 0x280;
      iStack_20 = param_3 + 0x500;
      iStack_1c = param_3 + 0x780;
      temp_v0 = param_3;
      (**(romwright_code **)(param_1 + param_2 * 4 + 0x14))
                (&temp_v0,0xa0,*(unsigned int *)(param_1 + param_2 * 4 + 0x1c));
    }
    FUN_002c3a24(param_1 + 0x34);
    return;
  }
  return;
}
