/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc35c` (_code @ 0x3bc35c, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003897ac. */


int FUN_003bc35c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_002c0ec4(3,0);
  temp_v1 = FUN_002c0e9c();
  if ((-1 < (int)param_1) && (temp_v2 = FUN_002c0e4c(temp_v0), param_1 < temp_v2)) {
    temp_v3 = DAT_00433158;
    FUN_003897ac(DAT_00433158,param_1);
    if (temp_v3 == 0) {
      temp_v3 = temp_v1 + param_1 * 0x60;
    }
    return temp_v3;
  }
  return temp_v1;
}
