/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00233730` (_code @ 0x233730, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_6_stack;

/* Supplied declaration required: FUN_0022a478. */
/* Supplied declaration required: FUN_00298d64. */
/* Supplied declaration required: FUN_002992bc. */
/* Supplied declaration required: FUN_0029d620. */
/* Supplied declaration required: FUN_0029f848. */


void FUN_00233730(char *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6)

{
/* irregular: 5 native warning(s); review required */
  if (param_4 != 0) {
    if (param_4 == 1) {
      FUN_0029f848(param_1 + 0x10,param_3,1,param_2,1,param_6);
    }
  }
  else {
    FUN_0029f848(param_1 + 0x10,param_3,param_2,1,1,param_6);
  }
  *(unsigned int *)(param_1 + 4) = param_2;
  *(unsigned int *)(param_1 + 8) = param_3;
  *param_1 = (char)param_4;
  if ((param_4 & 0xff) == 0) {
    FUN_00298d64(param_1 + 0x10,0);
    FUN_0029d620(param_1 + 0x10,0);
  }
  if (*param_1 == '\x01') {
    FUN_0022a478(param_1 + 0x10,0);
    FUN_002992bc(param_1 + 0x10,0);
  }
  param_1[0xc] = '\0';
  return;
}
