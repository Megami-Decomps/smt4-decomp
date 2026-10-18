/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e4a4` (_code @ 0x22e4a4, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_0022a478. */
/* Supplied declaration required: FUN_00298d64. */
/* Supplied declaration required: FUN_002992bc. */
/* Supplied declaration required: FUN_0029d620. */


void FUN_0022e4a4(char *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  if (*param_1 == '\0') {
    FUN_00298d64(param_1 + 0x10);
    FUN_0029d620(param_1 + 0x10,param_3);
  }
  if (*param_1 == '\x01') {
    FUN_0022a478(param_1 + 0x10,param_2);
    FUN_002992bc(param_1 + 0x10,param_3);
    return;
  }
  return;
}
