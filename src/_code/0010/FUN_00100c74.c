/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100c74` (_code @ 0x100c74, 0x1c bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"


short * FUN_00100c74(short *param_1,short *param_2,int param_3)

{
  short *psVar1;
  unsigned char temp_v0;
  
  psVar1 = param_1;
  while (temp_v0 = param_3 != 0, param_3 = param_3 - 1, temp_v0) {
    *psVar1 = *param_2;
    psVar1 = psVar1 + 1;
    if (*param_2 != 0) {
      param_2 = param_2 + 1;
    }
  }
  return param_1;
}
