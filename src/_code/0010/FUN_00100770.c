/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100770` (_code @ 0x100770, 0x18 bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0010072c. */
extern unsigned long long FUN_002c69b6(unsigned int, unsigned int);


void FUN_00100770(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned long long temp_v0;
  
  temp_v0 = FUN_002c69b6(*param_3,param_1);
  FUN_0010072c(param_1,(int)((unsigned long long)temp_v0 >> 0x20),(int)temp_v0,0);
  return;
}
