/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038d860` (_code @ 0x38d860, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00336de4(int, int);
int FUN_0035fd38(int);

extern unsigned short FUN_00236038(void);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_00336de4. */
/* Supplied declaration required: FUN_0035fd38. */
extern int FUN_003811b4(unsigned short);


unsigned char FUN_0038d860(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    FUN_00336de4(temp_v0,1);
    FUN_0035fd38(1);
  }
  temp_v1 = FUN_003811b4(temp_v0);
  return temp_v1 != 0;
}

} /* extern "C" */
