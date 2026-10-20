/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001519c4` (_code @ 0x1519c4, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001677c0(void);
int FUN_001835b4(int, int, unsigned int, int, int, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_001835b4. */


void FUN_001519c4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  FUN_001677c0();
  FUN_001835b4(2,4,param_1,0,0,0xf1);
  FUN_001835b4(2,4,param_2,0,0,0xf1);
  FUN_001677c0();
  FUN_001835b4(2,4,param_3,0,0,0xf1);
  FUN_001677c0();
  FUN_001835b4(2,4,param_4,0,0,0xf1);
  FUN_001677c0();
  return;
}

} /* extern "C" */
