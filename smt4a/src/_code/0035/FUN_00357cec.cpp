/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357cec` (_code @ 0x357cec, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015688c(void);
int FUN_003e4e4c(int);
int FUN_004bd410(int);

/* Supplied declaration required: FUN_0015688c. */
extern int FUN_00187168(void);
extern int FUN_0019e52c(unsigned short);
extern unsigned short scrGetArg(void);
/* Supplied declaration required: FUN_003e4e4c. */
/* Supplied declaration required: FUN_004bd410. */


unsigned int FUN_00357cec(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = FUN_0019e52c(temp_v0);
  if (temp_v1 != 0) {
    FUN_004bd410(temp_v0);
    FUN_0015688c();
    temp_v1 = FUN_00187168();
    if (temp_v1 == 0) {
      FUN_003e4e4c(temp_v0);
    }
  }
  return 1;
}

} /* extern "C" */
