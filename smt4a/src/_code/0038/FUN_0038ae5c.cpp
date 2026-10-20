/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038ae5c` (_code @ 0x38ae5c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(int);
int FUN_00357a90(void);
int FUN_00379be8(void);
int FUN_003b61ec(void);
int FUN_003c5848(void);

extern signed char DAT_005f1891; /* 0x5f1891 */

/* Supplied declaration required: FUN_001681cc. */
extern int FUN_0018719c(unsigned int);
extern int FUN_00236038(void);
/* Supplied declaration required: FUN_00357a90. */
/* Supplied declaration required: FUN_00379be8. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: FUN_003c5848. */


unsigned int FUN_0038ae5c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00236038();
  if (temp_v0 != 0) {
    if (DAT_005f1891 == '\0') {
      DAT_005f1891 = '\x01';
      FUN_00379be8();
      FUN_003b61ec();
      FUN_001681cc(0x92);
    }
  }
  else if (DAT_005f1891 != '\0') {
    DAT_005f1891 = '\0';
    temp_v0 = FUN_0018719c(0x49a);
    if (temp_v0 != 0) {
      FUN_003c5848();
    }
    else {
      FUN_003b61ec();
    }
    FUN_00357a90();
  }
  return 1;
}

} /* extern "C" */
