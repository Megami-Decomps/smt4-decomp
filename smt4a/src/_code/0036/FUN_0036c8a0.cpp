/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036c8a0` (_code @ 0x36c8a0, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164b5c(int, int, int, unsigned int, unsigned int, int);
int FUN_001677c0(void);
int FUN_00183bb0(void);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00183bb0. */


void FUN_0036c8a0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  FUN_00183bb0();
  FUN_001677c0();
  FUN_00164b5c(2,0x2e,0xd,param_1,param_2,0x6c);
  return;
}

} /* extern "C" */
