/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c24c` (_code @ 0x35c24c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_0057f4c0; /* 0x57f4c0 */

extern int FUN_00163e40(unsigned int);
extern int FUN_002deb84(void);


unsigned int FUN_0035c24c(void)

{
  unsigned int *puVar1;
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    if (DAT_0057f4c0 == (unsigned int *)0x0) {
      return 1;
    }
  }
  else if ((DAT_0057f4c0 != (unsigned int *)0x0) &&
          (temp_v0 = FUN_00163e40(*DAT_0057f4c0), puVar1 = DAT_0057f4c0, temp_v0 != 0)) {
    DAT_0057f4c0[0x15a] = 4;
    puVar1[0x15b] = 0;
  }
  return 0;
}

} /* extern "C" */
