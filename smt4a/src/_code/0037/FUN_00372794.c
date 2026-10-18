/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372794` (_code @ 0x372794, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab854(void);
/* Supplied declaration required: FUN_001aba54. */
extern int FUN_002919a4(void);
extern int FUN_003e0044(unsigned int);
extern int FUN_004bd098(int, int);
extern int FUN_004bd340(int, unsigned int);


unsigned int FUN_00372794(int param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = *(short *)(param_1 + *(int *)(param_1 + 0x3890) * 2 + 0x4210);
  if (temp_v0 != -1) {
    if (param_3 == 0) {
      return 0;
    }
    if (temp_v0 != -2) {
      param_3 = FUN_001ab854();
    }
    else {
      param_3 = FUN_002919a4();
    }
    temp_v1 = FUN_004bd340(param_3,4);
  }
  else {
    temp_v1 = FUN_003e0044(4);
  }
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v1 = param_2;
    FUN_001aba54();
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = *(short *)(temp_v1 + 0x86);
    }
    if ((temp_v1 != 0 && temp_v0 != 0) &&
       ((param_3 == 0 || (temp_v1 = FUN_004bd098(param_3,param_2), -1 < temp_v1)))) {
      temp_v2 = 1;
    }
  }
  return temp_v2;
}
