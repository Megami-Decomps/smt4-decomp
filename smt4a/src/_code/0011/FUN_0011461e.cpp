/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011461e` (_code @ 0x11461e, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7634(unsigned char [36]);
int FUN_002ec8a8(int, unsigned char [36]);
int FUN_002ec9f4(unsigned char [36]);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002e7634. */
/* Supplied declaration required: FUN_002ec8a8. */
/* Supplied declaration required: FUN_002ec9f4. */


int FUN_0011461e(int *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [36];
  
  if (param_2 != 0) {
    FUN_002e7634(temp_v1);
    temp_v0 = (**(romwright_code **)(*param_1 + 0x10))(param_1,param_2,temp_v1);
    if (temp_v0 == 0) {
      FUN_002ec8a8(param_2,temp_v1);
    }
    FUN_002ec9f4(temp_v1);
  }
  else {
    temp_v0 = 3;
  }
  return temp_v0;
}

} /* extern "C" */
