/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001115fe` (_code @ 0x1115fe, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e7634(unsigned char [36]);
int FUN_002ec8a8(unsigned int, unsigned char [36]);
int FUN_002ec9f4(unsigned char [36]);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_002e7634. */
/* Supplied declaration required: FUN_002ec8a8. */
/* Supplied declaration required: FUN_002ec9f4. */


unsigned int
FUN_001115fe(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
            )

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [36];
  
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_002e7634(temp_v1);
    temp_v0 = (**(romwright_code **)(param_1 + 0x48))(param_1 + 0x4c,param_4,temp_v1,param_5);
    if (temp_v0 == 0) {
      FUN_002ec9f4(temp_v1);
      return 0;
    }
    FUN_002ec8a8(param_4,temp_v1);
    FUN_002ec9f4(temp_v1);
  }
  return 1;
}

} /* extern "C" */
