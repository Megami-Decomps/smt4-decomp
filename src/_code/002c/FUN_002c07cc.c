/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c07cc` (_code @ 0x2c07cc, 0x258 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *FUN_0012d23c(void);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c07cc(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  
  piVar1 = (int *)FUN_0012d23c();
  temp_v0 = (**(romwright_code **)(*piVar1 + 0x10))(piVar1);
  *(unsigned int *)*param_3 = temp_v0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
