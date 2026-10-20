/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00493e94` (_code @ 0x493e94, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001ba3d0(unsigned short);
extern int FUN_0049c9a0(unsigned short *);


int FUN_00493e94(unsigned short *param_1,unsigned short *param_2)

{
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = *param_2;
  temp_v1 = FUN_001ba3d0(*param_1);
  temp_v2 = FUN_001ba3d0(temp_v0);
  temp_v2 = temp_v2 - temp_v1;
  if (temp_v2 == 0) {
    temp_v2 = FUN_0049c9a0(param_1);
    temp_v1 = FUN_0049c9a0(param_2);
    temp_v2 = temp_v2 - temp_v1;
  }
  return temp_v2;
}

} /* extern "C" */
