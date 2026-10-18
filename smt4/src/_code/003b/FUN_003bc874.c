/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc874` (_code @ 0x3bc874, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

extern unsigned int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00389168. */


int FUN_003bc874(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_002c0cec(2,1);
  temp_v1 = FUN_002c0cc4();
  if ((-1 < (int)param_1) && (temp_v2 = FUN_002c0c74(temp_v0), param_1 < temp_v2)) {
    temp_v3 = DAT_00433158;
    FUN_00389168(DAT_00433158,param_1);
    if (temp_v3 == 0) {
      temp_v3 = temp_v1 + param_1 * 0x3c;
    }
    return temp_v3;
  }
  return temp_v1;
}
