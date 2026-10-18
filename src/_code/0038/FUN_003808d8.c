/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003808d8` (_code @ 0x3808d8, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00380894(); /* 0x380894 */

/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
extern unsigned int FUN_00380228(int, unsigned int, romwright_code *, unsigned int);


unsigned int FUN_003808d8(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002c38a4(param_1 + 4);
  FUN_002c38a4(param_1 + 4);
  temp_v0 = FUN_00380228(param_1 + 0x10,param_2,FUN_00380894,0);
  FUN_002c3820(param_1 + 4);
  FUN_002c3820(param_1 + 4);
  return temp_v0;
}
