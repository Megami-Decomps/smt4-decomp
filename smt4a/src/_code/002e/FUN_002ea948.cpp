/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea948` (_code @ 0x2ea948, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9538(int, unsigned int);

/* Supplied declaration required: FUN_002e9538. */
extern int FUN_002e995c(void);


int FUN_002ea948(unsigned int param_1,unsigned int param_2,unsigned char param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002e995c();
  FUN_002e9538(temp_v0,param_2);
  *(unsigned char *)(temp_v0 + 0x20) = param_3;
  return temp_v0;
}

} /* extern "C" */
