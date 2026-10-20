/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2688` (_code @ 0x3d2688, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c410(unsigned int);
int FUN_0016c4b8(unsigned int, int);
int FUN_0016c560(unsigned int);
int FUN_003db56c(unsigned int);

extern unsigned int DAT_0057f238; /* 0x57f238 */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_003db56c. */


unsigned int FUN_003d2688(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = DAT_0057f238;
  FUN_0016c4b8(DAT_0059dbb4,0);
  FUN_003db56c(temp_v0);
  FUN_0016c560(DAT_0059dbb4);
  FUN_0016c410(DAT_0059dbb4);
  return 0;
}

} /* extern "C" */
