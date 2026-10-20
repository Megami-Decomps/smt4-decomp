/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002216e4` (_code @ 0x2216e4, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001dcc64(void);
int jobStop(unsigned int, int);

typedef int romwright_code(...);
extern unsigned int DAT_0043dea8; /* 0x43dea8 */
extern unsigned int DAT_0043deac; /* 0x43deac */
extern unsigned int DAT_0043deb0; /* 0x43deb0 */
extern unsigned int DAT_0043deb4; /* 0x43deb4 */
extern unsigned int DAT_0043deb8; /* 0x43deb8 */
extern romwright_code *DAT_0043debc; /* 0x43debc */

/* Supplied declaration required: FUN_001dcc64. */
/* Supplied declaration required: jobStop. */


unsigned int FUN_002216e4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  FUN_001dcc64();
  if (param_1 == 0) {
    jobStop(DAT_0043deac,0);
    jobStop(DAT_0043deb0,0);
    jobStop(DAT_0043deb4,0);
    jobStop(DAT_0043deb8,0);
    jobStop(DAT_0043dea8,2);
    if (DAT_0043debc != (romwright_code *)0x0) {
      (*DAT_0043debc)();
    }
  }
  return 0;
}

} /* extern "C" */
