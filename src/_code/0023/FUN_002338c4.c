/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002338c4` (_code @ 0x2338c4, 0xd8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

/* Supplied declaration required: FUN_0022a60c. */
/* Supplied declaration required: FUN_00299000. */
/* Supplied declaration required: FUN_00299558. */
/* Supplied declaration required: FUN_0029d8c0. */
/* Supplied declaration required: FUN_0029fae8. */


void FUN_002338c4(char *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 5 native warning(s); review required */
  if (param_4 != 0) {
    if (param_4 == 1) {
      FUN_0029fae8(param_1 + 0x10,param_3,1,param_2,1,param_6);
    }
  }
  else {
    FUN_0029fae8(param_1 + 0x10,param_3,param_2,1,1,param_6);
  }
  *(unsigned int *)(param_1 + 4) = param_2;
  *(unsigned int *)(param_1 + 8) = param_3;
  *param_1 = (char)param_4;
  if ((param_4 & 0xff) == 0) {
    FUN_00299000(param_1 + 0x10,0);
    FUN_0029d8c0(param_1 + 0x10,0);
  }
  if (*param_1 == '\x01') {
    FUN_0022a60c(param_1 + 0x10,0);
    FUN_00299558(param_1 + 0x10,0);
  }
  param_1[0xc] = '\0';
  return;
}
