/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00397730` (_code @ 0x397730, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_00297178. */
/* Supplied declaration required: FUN_002b8b78. */


void FUN_00397730(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0x654));
  if (temp_v0 != 2) {
    return;
  }
  FUN_00297178(param_1,2);
  if (*(char *)(param_1 + 0x29) != '\0') {
    FUN_002b8b78(0x97);
    return;
  }
  if ((*(char *)(param_1 + 0x20) != '\x02') && (*(char *)(param_1 + 0x20) != '\x06')) {
    FUN_002b8b78(0x95);
    return;
  }
  FUN_002b8b78(0x96);
  return;
}
