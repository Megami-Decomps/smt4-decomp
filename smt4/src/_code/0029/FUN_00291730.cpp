/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291730` (_code @ 0x291730, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableFreeEntry(int);
int FUN_002ae898(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_002ae898. */


void FUN_00291730(int param_1)

{
/* irregular: 2 native warning(s); review required */
  if (*(int *)(param_1 + 0xb7c) != 0) {
    FUN_002ae898(0x33);
    *(unsigned int *)(param_1 + 0xb7c) = 0;
  }
  asdTMTexTableFreeEntry(0x33);
  return;
}

} /* extern "C" */
