/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288700` (_code @ 0x288700, 0x18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0044e190; /* 0x44e190 */

extern int FUN_00288408(void);
extern int FUN_0029af30(void);


unsigned int FUN_00288700(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (*(char *)(DAT_0044e190 + 0x2392) != '\0') {
    temp_v0 = FUN_00288408();
    if ((((temp_v0 == 5) || (temp_v0 = FUN_00288408(), temp_v0 == 6)) ||
        (temp_v0 = FUN_00288408(), temp_v0 == 10)) ||
       (((temp_v0 = FUN_0029af30(), temp_v0 == 7 || (temp_v0 = FUN_0029af30(), temp_v0 == 8)) ||
        (temp_v0 = FUN_0029af30(), temp_v0 == 3)))) {
      temp_v1 = 0;
    }
    else {
      temp_v1 = 1;
    }
    return temp_v1;
  }
  return 0;
}
