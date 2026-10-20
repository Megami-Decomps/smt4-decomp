/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4a14` (_code @ 0x2f4a14, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00287728(int);
int FUN_00296cc8(...);
int FUN_002a03d8(int, unsigned int);

/* Supplied declaration required: FUN_00287728. */
/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_002a03d8. */
extern int FUN_002c1d5c(void);


unsigned int FUN_002f4a14(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_00296cc8(0);
  if (temp_v1 < 2) {
    temp_v2 = FUN_002c1d5c();
    if (temp_v2 != 0) {
      FUN_00287728(0);
      FUN_00287728(1);
    }
    else {
      FUN_002a03d8(0,temp_v0);
      FUN_002a03d8(1,temp_v0);
    }
  }
  return 1;
}

} /* extern "C" */
