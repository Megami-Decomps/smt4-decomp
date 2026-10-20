/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a7218` (_code @ 0x2a7218, 0xa4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c415c(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0044de78; /* 0x44de78 */
extern int DAT_0044de7c; /* 0x44de7c */
extern int DAT_0044de80; /* 0x44de80 */

/* Supplied declaration required: FUN_002c415c. */


void FUN_002a7218(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(int *)(param_1 + 0xe8) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0xe8) = 0;
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0xec) = 0;
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    FUN_002c415c();
    *(unsigned int *)(param_1 + 0xd4) = 0;
  }
  if (DAT_0044de7c == param_1) {
    DAT_0044de7c = *(int *)(param_1 + 0xf4);
  }
  else {
    *(unsigned int *)(*(int *)(param_1 + 0xf0) + 0xf4) = *(unsigned int *)(param_1 + 0xf4);
  }
  if (DAT_0044de80 == param_1) {
    DAT_0044de80 = *(int *)(param_1 + 0xf0);
  }
  else {
    *(unsigned int *)(*(int *)(param_1 + 0xf4) + 0xf0) = *(unsigned int *)(param_1 + 0xf0);
  }
  *(unsigned int *)(param_1 + 0xf0) = 0;
  *(unsigned int *)(param_1 + 0xf4) = 0;
  DAT_0044de78 = DAT_0044de78 - 1;
  FUN_002c415c(param_1);
  return;
}

} /* extern "C" */
