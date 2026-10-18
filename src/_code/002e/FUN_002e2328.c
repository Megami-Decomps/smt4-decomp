/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2328` (_code @ 0x2e2328, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_0043df98; /* 0x43df98 */

extern int FUN_002893d8(void);
extern int FUN_002bf244(unsigned int);


unsigned int FUN_002e2328(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 != 0) {
    if (DAT_0043df98 == (unsigned int *)0x0) {
      return 1;
    }
  }
  else if ((DAT_0043df98 != (unsigned int *)0x0) &&
          (temp_v0 = FUN_002bf244(*DAT_0043df98), puVar1 = DAT_0043df98, temp_v0 != 0)) {
    DAT_0043df98[0x159] = 4;
    puVar1[0x15a] = 0;
  }
  return 0;
}
