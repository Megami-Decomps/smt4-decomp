/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00237930` (_code @ 0x237930, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ef750(int);
int FUN_003d3738(void);

extern int FUN_00208b68(void);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002ef750. */
/* Supplied declaration required: FUN_003d3738. */


unsigned char FUN_00237930(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    FUN_003d3738();
  }
  temp_v0 = FUN_00208b68();
  if (temp_v0 == 0) {
    FUN_002ef750(0);
  }
  return temp_v0 == 0;
}

} /* extern "C" */
