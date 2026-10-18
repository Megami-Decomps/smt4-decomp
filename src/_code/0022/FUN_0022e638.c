/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e638` (_code @ 0x22e638, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_0022a60c. */
/* Supplied declaration required: FUN_00299000. */
/* Supplied declaration required: FUN_00299558. */
/* Supplied declaration required: FUN_0029d8c0. */


void FUN_0022e638(char *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  if (*param_1 == '\0') {
    FUN_00299000(param_1 + 0x10);
    FUN_0029d8c0(param_1 + 0x10,param_3);
  }
  if (*param_1 == '\x01') {
    FUN_0022a60c(param_1 + 0x10,param_2);
    FUN_00299558(param_1 + 0x10,param_3);
    return;
  }
  return;
}
