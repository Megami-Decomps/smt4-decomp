/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023795c` (_code @ 0x23795c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00285020(int);
int FUN_003d2588(int, int);

extern short FUN_00236038(unsigned int);
extern int FUN_0023a5d8(void);
/* Supplied declaration required: FUN_00285020. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003d2588. */


unsigned char FUN_0023795c(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    FUN_00285020(1);
    temp_v0 = FUN_00236038(0);
    FUN_003d2588((int)temp_v0,0);
  }
  temp_v1 = FUN_0023a5d8();
  return temp_v1 != 0;
}

} /* extern "C" */
