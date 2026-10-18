/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358e28` (_code @ 0x358e28, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short DAT_0056fd74; /* 0x56fd74 */

extern int FUN_00261828(void);


int FUN_00358e28(int param_1)

{
  int temp_v0;
  
  if (param_1 >= 201) {
    temp_v0 = FUN_00261828();
    return temp_v0;
  }
  temp_v0 = 0;
  while( 1 ) {
    if (*(short *)(temp_v0 * 0x3c + 0x56fd38) == param_1) {
      return temp_v0 * 0x3c + 0x56fd3f;
    }
    if ((short)(&DAT_0056fd74)[temp_v0 * 0x1e] == param_1) break;
    temp_v0 = temp_v0 + 2;
    if (temp_v0 >= 0x16) {
      return 0;
    }
  }
  return temp_v0 * 0x3c + 0x56fd7b;
}
