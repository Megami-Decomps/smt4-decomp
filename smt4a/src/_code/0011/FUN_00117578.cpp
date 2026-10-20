/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117578` (_code @ 0x117578, 0x10 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001240f6(void);

/* Supplied declaration required: FUN_001240f6. */
extern int FUN_002f6758(void);


void FUN_00117578(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002f6758();
  if (temp_v0 != 0) {
    FUN_001240f6();
  }
  return;
}

} /* extern "C" */
