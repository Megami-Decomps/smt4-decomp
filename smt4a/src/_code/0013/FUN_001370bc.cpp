/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001370bc` (_code @ 0x1370bc, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00145084(int);
int FUN_00167eb0(unsigned int);

extern signed char g_titleFlags; /* 0x57ffd0 */
extern signed char DAT_0057ffd1; /* 0x57ffd1 */
extern unsigned int DAT_0057ffdc; /* 0x57ffdc */

/* Supplied declaration required: FUN_00145084. */
/* Supplied declaration required: FUN_00167eb0. */
extern int FUN_001696f4(void);


unsigned int FUN_001370bc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (((g_titleFlags == '\0') && (temp_v0 = FUN_001696f4(), temp_v0 == 1)) && (DAT_0057ffd1 != '\0')) {
    FUN_00167eb0(DAT_0057ffdc);
  }
  temp_v0 = FUN_001696f4();
  if (temp_v0 == 1) {
    FUN_00145084(0x410);
  }
  return 0;
}

} /* extern "C" */
