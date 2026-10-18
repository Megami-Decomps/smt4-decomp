/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f1d0` (_code @ 0x23f1d0, 0x11c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019dfbc(unsigned int);
extern unsigned int FUN_0023eec0(unsigned int *);
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002c2bd0(unsigned int);


unsigned int FUN_0023f1d0(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c2bd0(0);
  if ((temp_v0 == 3) && (temp_v0 = FUN_002c2bd0(1), temp_v0 == 3)) {
    FUN_00289b4c();
    FUN_0028d974();
    FUN_00289ae8();
    FUN_002b8b78(0xa9);
    temp_v0 = param_1[3];
    FUN_002972f8(temp_v0,param_1[5]);
    param_1[4] = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 1;
    FUN_002971e4(param_1[4],0);
    *param_1 = 7;
    temp_v0 = FUN_0019dfbc(param_1[4]);
    if (temp_v0 != 2) {
      temp_v1 = 0;
    }
    else {
      FUN_00291be8();
      FUN_00291a5c();
      temp_v0 = FUN_00293c98();
      if (((param_1[1] & 1) == 0) && (*(int *)(temp_v0 + 0x4978) != 1)) {
        *param_1 = 8;
        temp_v1 = FUN_0023eec0(param_1);
      }
      else {
        *(unsigned int *)(temp_v0 + 0x4978) = 1;
        temp_v1 = 0xffffffff;
        *param_1 = 9;
      }
    }
    return temp_v1;
  }
  return 0;
}
