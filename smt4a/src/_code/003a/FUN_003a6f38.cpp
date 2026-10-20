/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a6f38` (_code @ 0x3a6f38, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019d96c(unsigned int, int, int);
int FUN_00236038(int);

extern unsigned int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019d96c. */
/* Supplied declaration required: FUN_00236038. */
extern int FUN_002deb84(void);


unsigned int FUN_003a6f38(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002deb84();
    if (temp_v0 == 10) {
      return 1;
    }
  }
  else {
    FUN_00236038(0);
    temp_v1 = FUN_00164a9c();
    FUN_0019d96c(temp_v1,1,10);
  }
  return 0;
}

} /* extern "C" */
