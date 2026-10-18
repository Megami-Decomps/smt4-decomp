/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb064` (_code @ 0x4bb064, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_004cfeb0. */
/* Supplied declaration required: FUN_004d05c4. */


void FUN_004bb064(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_004cfeb0(param_1,10,*(unsigned int *)(param_1 + 0x7e8),0,1,1);
  *(unsigned char *)(param_1 + 0xd) = 1;
  FUN_004d05c4(param_1 + 0x74,0x1f,5,10);
  *(unsigned char *)(param_1 + 0x84) = 1;
  return;
}
