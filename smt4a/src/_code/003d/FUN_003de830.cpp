/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de830` (_code @ 0x3de830, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);

extern int FUN_0018719c(void);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_003df390(int);


unsigned int FUN_003de830(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = param_1;
  FUN_001ad9b4();
  temp_v2 = 0;
  if ((temp_v1 != 0) && (temp_v0 = FUN_003df390(param_1), temp_v2 = 0, temp_v0 != 0)) {
    if (((*(short *)(temp_v1 + 0x130) != 0) && (temp_v0 = FUN_0018719c(), temp_v0 != 0)) &&
       ((*(short *)(temp_v1 + 0x132) == 0 || (temp_v1 = FUN_0018719c(), temp_v1 == 0)))) {
      return 0;
    }
    temp_v2 = 1;
  }
  return temp_v2;
}

} /* extern "C" */
