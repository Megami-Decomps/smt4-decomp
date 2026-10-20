/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001144a4` (_code @ 0x1144a4, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004324d4(unsigned int *, unsigned int, unsigned int);

extern unsigned char DAT_00559684; /* 0x559684 */

extern unsigned int FUN_0011c5d8(void);
extern int operatorNew(unsigned int);
extern unsigned int FUN_002ea704(void);
/* Supplied declaration required: FUN_004324d4. */


unsigned int * FUN_001144a4(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002ea704();
  FUN_004324d4(param_1,param_2,temp_v0);
  param_1[10] = 0;
  *param_1 = (unsigned int)&DAT_00559684;
  temp_v1 = operatorNew(0x94);
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = FUN_0011c5d8();
  }
  param_1[5] = temp_v0;
  return param_1;
}

} /* extern "C" */
