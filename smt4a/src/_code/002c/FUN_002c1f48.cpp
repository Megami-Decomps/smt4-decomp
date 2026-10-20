/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1f48` (_code @ 0x2c1f48, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00280d2c(void);

extern int FUN_00163e40(unsigned int);
extern int FUN_00164a9c(unsigned int);
extern unsigned int FUN_00236038(void);
/* Supplied declaration required: FUN_00280d2c. */
extern int FUN_002deb84(void);


unsigned int FUN_002c1f48(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_002deb84();
  if (temp_v1 != 0) {
    temp_v1 = FUN_00163e40(temp_v0);
    if (temp_v1 == 0) {
      return 1;
    }
  }
  else {
    temp_v1 = FUN_00163e40(temp_v0);
    if (temp_v1 == 0) {
      return 1;
    }
    temp_v1 = FUN_00164a9c(temp_v0);
    if (*(int *)(temp_v1 + 0x18) != 0) {
      FUN_00280d2c();
    }
    *(unsigned int *)(temp_v1 + 8) = 3;
    *(unsigned int *)(temp_v1 + 0xc) = 0;
  }
  return 0;
}

} /* extern "C" */
