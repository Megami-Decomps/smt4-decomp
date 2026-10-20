/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033896c` (_code @ 0x33896c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);

/* Supplied declaration required: FUN_001aba54. */
extern int FUN_00213b78(void);


unsigned int FUN_0033896c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00213b78();
  temp_v3 = (unsigned int)(temp_v0 == 1);
  if ((temp_v0 != 1) && (temp_v0 == 2)) {
    temp_v3 = 2;
  }
  temp_v2 = 1;
  while ((temp_v1 = temp_v2, FUN_001aba54(), temp_v1 == 0 || ((int)*(char *)(temp_v1 + 0x36) != temp_v3))) {
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 401) {
      return 0;
    }
  }
  return temp_v2;
}

} /* extern "C" */
