/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262cb0` (_code @ 0x262cb0, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043e2a8; /* 0x43e2a8 */

extern unsigned int FUN_0026aa78(void);


unsigned int FUN_00262cb0(unsigned int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v4 = (*(int *)((unsigned char *)&DAT_0043e2a8 + 0x4)) + 0x90;
  temp_v0 = FUN_0026aa78();
  if ((int)temp_v0 < 1) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = temp_v0 & 1;
    temp_v2 = 0;
    if (temp_v1 != 0) {
      do {
        if (*(unsigned short *)(temp_v4 + temp_v2 * 2 + 0x78) == param_1) {
          return 1;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)temp_v1);
    }
  }
  while( 1 ) {
    if ((int)temp_v0 <= (int)temp_v1) {
      return 0;
    }
    temp_v3 = temp_v4 + temp_v1 * 2;
    temp_v5 = *(unsigned short *)(temp_v3 + 0x78) != param_1;
    if (temp_v5) {
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v3 + 0x7a);
    }
    if (!temp_v5 || temp_v3 == param_1) break;
    temp_v1 = temp_v1 + 2;
  }
  return 1;
}

} /* extern "C" */
