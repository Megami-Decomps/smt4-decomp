/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124d52` (_code @ 0x124d52, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012ba6c(int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0012ba6c. */


void FUN_00124d52(int param_1)

{
/* irregular: 1 native warning(s); review required */
  FUN_0012ba6c(param_1 - 0x5c);
  return;
}

} /* extern "C" */
