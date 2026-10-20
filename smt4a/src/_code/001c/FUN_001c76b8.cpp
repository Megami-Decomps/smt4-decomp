/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c76b8` (_code @ 0x1c76b8, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a167c(unsigned char *);
int FUN_001cd5ac(void);
int FUN_001cd6bc(unsigned char *);

extern signed char DAT_005894e5; /* 0x5894e5 */
extern signed char DAT_005894e7; /* 0x5894e7 */
extern unsigned char DAT_005894e8; /* 0x5894e8 */
extern signed char DAT_005894e9; /* 0x5894e9 */
extern unsigned char DAT_00643380; /* 0x643380 */
extern unsigned char g_dspsndState; /* 0x6433d0 */
extern unsigned char uRam1ff810c0; /* 0x1ff810c0 */

/* Supplied declaration required: FUN_001a167c. */
/* Supplied declaration required: FUN_001cd5ac. */
/* Supplied declaration required: FUN_001cd6bc. */


void FUN_001c76b8(void)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_005894e5 == '\0' && DAT_005894e7 == '\0') {
    if (DAT_005894e9 != '\0') {
      FUN_001cd5ac();
    }
    DAT_005894e8 = uRam1ff810c0;
    FUN_001a167c(&DAT_00643380);
    FUN_001cd6bc(&g_dspsndState);
    DAT_005894e9 = '\x01';
  }
  return;
}

} /* extern "C" */
