/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138068` (_code @ 0x138068, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00142a78(int);
int FUN_00145e24(unsigned int, unsigned int);
int FUN_00152f54(void);
int FUN_001575cc(unsigned int);

extern signed char DAT_0057ffd0; /* 0x57ffd0 */
extern signed char DAT_0057ffd1; /* 0x57ffd1 */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00142a78. */
/* Supplied declaration required: FUN_00145e24. */
/* Supplied declaration required: FUN_00152f54. */
/* Supplied declaration required: FUN_001575cc. */
extern int FUN_001696f4(void);


unsigned int FUN_00138068(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (((DAT_0057ffd0 == '\0') && (temp_v0 = FUN_001696f4(), temp_v0 == 1)) && (DAT_0057ffd1 != '\0')) {
    FUN_00142a78(0);
  }
  FUN_001575cc(DAT_0059dbb4);
  temp_v0 = FUN_00152f54();
  if (temp_v0 != 0) {
    temp_v1 = FUN_00152f54();
    FUN_00145e24(DAT_0059dbb4,temp_v1);
  }
  return 0;
}

} /* extern "C" */
