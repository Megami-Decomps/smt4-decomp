/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380ae8` (_code @ 0x380ae8, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int FUN_00380aa4(); /* 0x380aa4 */

/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
extern unsigned int FUN_00380438(int, unsigned int, romwright_code *, unsigned int);


unsigned int FUN_00380ae8(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002c3aa8(param_1 + 4);
  FUN_002c3aa8(param_1 + 4);
  temp_v0 = FUN_00380438(param_1 + 0x10,param_2,FUN_00380aa4,0);
  FUN_002c3a24(param_1 + 4);
  FUN_002c3a24(param_1 + 4);
  return temp_v0;
}
