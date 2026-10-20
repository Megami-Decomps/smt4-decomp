/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138804` (_code @ 0x138804, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00142a78(int);
int FUN_00145eb8(unsigned int);

extern signed char DAT_0057ffd0; /* 0x57ffd0 */
extern signed char DAT_0057ffd1; /* 0x57ffd1 */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00142a78. */
/* Supplied declaration required: FUN_00145eb8. */
extern int FUN_001696f4(void);


unsigned int FUN_00138804(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_0057ffd0 == '\0') && (temp_v0 = FUN_001696f4(), temp_v0 == 1)) && (DAT_0057ffd1 != '\0')) {
    FUN_00142a78(1);
  }
  FUN_00145eb8(DAT_0059dbb4);
  return 0;
}

} /* extern "C" */
