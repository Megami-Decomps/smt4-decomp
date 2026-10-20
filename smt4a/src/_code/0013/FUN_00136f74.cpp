/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00136f74` (_code @ 0x136f74, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00145084(int);
int asdGxCommandListEnd(unsigned int, int);

extern signed char g_titleFlags; /* 0x57ffd0 */
extern signed char DAT_0057ffd1; /* 0x57ffd1 */
extern unsigned int DAT_0057ffdc; /* 0x57ffdc */

/* Supplied declaration required: FUN_00145084. */
/* Supplied declaration required: asdGxCommandListEnd. */
extern int FUN_001696f4(void);


unsigned int FUN_00136f74(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (((g_titleFlags == '\0') && (temp_v0 = FUN_001696f4(), temp_v0 == 1)) && (DAT_0057ffd1 != '\0')) {
    asdGxCommandListEnd(DAT_0057ffdc,1);
  }
  FUN_00145084(0x400);
  return 0;
}

} /* extern "C" */
