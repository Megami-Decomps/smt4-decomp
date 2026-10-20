/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a378c` (_code @ 0x3a378c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e4e4c(unsigned int);

extern int FUN_00187168(void);
extern unsigned int FUN_00236038(unsigned int);
extern int FUN_003e4d68(unsigned int);
/* Supplied declaration required: FUN_003e4e4c. */


unsigned int FUN_003a378c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  temp_v2 = 0;
  while ((temp_v1 = FUN_003e4d68(temp_v2 & 0xffff), *(unsigned short *)(temp_v1 + 300) != temp_v0 ||
         (temp_v1 = FUN_00187168(), temp_v1 == 0))) {
    temp_v2 = temp_v2 + 1;
    if ((int)temp_v2 >= 0xc) {
      return 1;
    }
  }
  FUN_003e4e4c(temp_v0 & 0xffff);
  return 1;
}

} /* extern "C" */
