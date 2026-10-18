/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014db98` (_code @ 0x14db98, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_0014dbc4(unsigned int);
/* Supplied declaration required: FUN_002b5058. */


void FUN_0014db98(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  FUN_002b5058();
  temp_v0 = FUN_0014dbc4(param_1);
  FUN_002b5058();
  *(unsigned int *)(temp_v0 - 0x98) = 0xffffffff;
  return;
}
