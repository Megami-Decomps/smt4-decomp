/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b1cf4` (_code @ 0x3b1cf4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_003eaa14(void);
int FUN_004bcb54(unsigned int);
int FUN_004bd354(unsigned int, int);

/* Supplied declaration required: FUN_0014aa78. */
extern unsigned int FUN_0015688c(void);
/* Supplied declaration required: FUN_003eaa14. */
/* Supplied declaration required: FUN_004bcb54. */
extern int FUN_004bd340(unsigned int, unsigned int);
/* Supplied declaration required: FUN_004bd354. */


unsigned int FUN_003b1cf4(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_0015688c();
  temp_v1 = FUN_004bd340(temp_v0,1);
  if (temp_v1 != 0) {
    FUN_004bcb54(temp_v0);
    FUN_004bd354(temp_v0,1);
    FUN_0014aa78();
    FUN_003eaa14();
  }
  return 1;
}

} /* extern "C" */
