/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a65f4` (_code @ 0x3a65f4, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002621b4. */
extern int FUN_002a8764(void);
extern int FUN_002a8778(void);


unsigned int FUN_003a65f4(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int uStack_20;
  
  uStack_20 = param_4;
  if (((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
     (temp_v3 = param_2, FUN_002621b4(param_2,0xffffffff,param_3,&uStack_20), temp_v3 == 0)) {
    return 1;
  }
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) {
      return 0;
    }
    temp_v3 = 3;
    temp_v0 = FUN_002a8764();
    temp_v0 = temp_v0 + 0x9108;
  }
  else {
    temp_v3 = FUN_002a8778();
    temp_v0 = FUN_002a8764();
    temp_v0 = temp_v0 + 0x90f0;
  }
  temp_v2 = 0;
  if (temp_v2 < temp_v3) {
    do {
      if ((-1 < *(char *)(temp_v0 + temp_v2)) &&
         (temp_v1 = param_2, FUN_002621b4(param_2,(int)*(char *)(temp_v0 + temp_v2),param_3,&uStack_20),
         temp_v1 == 0)) {
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < temp_v3);
  }
  return 0;
}
