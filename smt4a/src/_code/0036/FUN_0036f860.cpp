/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036f860` (_code @ 0x36f860, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187010(unsigned int);
int FUN_003c6034(unsigned int, int);

/* Supplied declaration required: FUN_00187010. */
extern unsigned int FUN_00236038(unsigned int);
extern int FUN_002deb84(void);
extern int FUN_0037d9fc(unsigned int);
extern int FUN_003c5fdc(void);
/* Supplied declaration required: FUN_003c6034. */


unsigned int FUN_0036f860(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    temp_v1 = FUN_00236038(0);
    temp_v0 = FUN_0037d9fc(temp_v1 & 0xffff);
    if (temp_v0 == 0) {
      return 1;
    }
    FUN_00187010(temp_v1 & 0xffff);
    FUN_003c6034(temp_v1,temp_v0);
  }
  temp_v0 = FUN_003c5fdc();
  if (temp_v0 != 0) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
