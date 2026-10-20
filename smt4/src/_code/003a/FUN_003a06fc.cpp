/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a06fc` (_code @ 0x3a06fc, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00230e04(...);

/* Supplied declaration required: FUN_00230e04. */
extern int FUN_00230f44(unsigned int);


int FUN_003a06fc(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00230e04();
  temp_v1 = FUN_00230e04(param_2);
  temp_v1 = temp_v1 - temp_v0;
  if (temp_v1 == 0) {
    temp_v1 = FUN_00230f44(param_1);
    temp_v0 = FUN_00230f44(param_2);
    temp_v1 = temp_v1 - temp_v0;
  }
  return temp_v1;
}

} /* extern "C" */
