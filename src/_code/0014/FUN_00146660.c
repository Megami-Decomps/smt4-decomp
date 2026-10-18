/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146660` (_code @ 0x146660, 0x54 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002bce48. */
extern unsigned int FUN_002c153c(int *, unsigned int, unsigned int, unsigned int);
extern int FUN_002c1570(void);
extern unsigned int FUN_002c3290(unsigned int);


unsigned int FUN_00146660(int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c1570();
  if (temp_v0 < 0) {
    FUN_002bce48();
  }
  if (*param_1 != 0) {
    temp_v1 = 0xd8a103f9;
  }
  else {
    temp_v2 = FUN_002c3290(param_2);
    temp_v1 = FUN_002c153c(param_1,param_2,temp_v2,0);
    if ((temp_v1 & 0x80000000) != 0) {
      temp_v1 = 0xd92103fb;
    }
  }
  return temp_v1;
}
