/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004311c0` (_code @ 0x4311c0, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e800(int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0016e800. */
extern int FUN_004311e8(unsigned int, unsigned long long *);


unsigned long long FUN_004311c0(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned long long temp_v1 [2];
  
  temp_v0 = FUN_004311e8(param_1,temp_v1);
  if (temp_v0 < 0) {
    FUN_0016e800(temp_v0,0x4311d8);
  }
                    /* WARNING: Treating indirect jump as return */
  return temp_v1[0];
}

} /* extern "C" */
