/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003482a4` (_code @ 0x3482a4, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001677c0(void);
int FUN_0017ffa8(int, int, int, unsigned int, unsigned int, unsigned int);
int FUN_0019d880(void);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_0017ffa8. */
/* Supplied declaration required: FUN_0019d880. */


void FUN_003482a4(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  int in_s0;
  
  FUN_0019d880();
  if (in_s0 < 0x3f800000) {
    FUN_001677c0();
  }
  FUN_0017ffa8(2,0xb,9,param_1,param_2,param_3);
  FUN_001677c0();
  return;
}

} /* extern "C" */
