/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f0388` (_code @ 0x2f0388, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_00240170. */
/* Supplied declaration required: FUN_002efd90. */
/* Supplied declaration required: FUN_002efdc0. */


void FUN_002f0388(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  
  temp_v0 = *(char *)(*(int *)(param_2 + 4) + 0x2018);
  if (temp_v0 != '\x03' && temp_v0 != '\n') {
    return;
  }
  if (param_1 != 0) {
    FUN_00240170();
  }
  else {
    FUN_002efd90();
  }
  FUN_002efdc0();
  return;
}
