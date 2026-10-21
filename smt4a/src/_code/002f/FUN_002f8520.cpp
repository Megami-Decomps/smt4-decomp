/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8520` (_code @ 0x2f8520, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/Shard0031.h"

extern "C" {

ListOwner *FUN_00132478(ListOwner *);
int FUN_002f84b0(unsigned int *);

extern unsigned char DAT_0055853c; /* 0x55853c */

/* Supplied declaration required: FUN_002f84b0. */
extern int FUN_0030d458(unsigned int *);


unsigned int * FUN_002f8520(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055853c;
  while (temp_v0 = FUN_0030d458(param_1 + 1), temp_v0 == 0) {
    FUN_002f84b0(param_1 + 1);
  }
  param_1 = param_1 + 1;
  FUN_00132478((ListOwner *)param_1);
  return param_1 + -1;
}

} /* extern "C" */
