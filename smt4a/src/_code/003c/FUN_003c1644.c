/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c1644` (_code @ 0x3c1644, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0020a2fc(void);
extern int FUN_00237608(void);
extern int FUN_002c7e3c(void);
extern int FUN_002c7e54(void);
extern int FUN_003493ac(void);


unsigned int FUN_003c1644(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0020a2fc();
  if ((((temp_v0 != 0) && (temp_v0 = FUN_002c7e3c(), temp_v0 == 0 || temp_v0 == 2)) &&
      (temp_v0 = FUN_002c7e54(), temp_v0 != 0xc)) &&
     ((temp_v0 = FUN_00237608(), temp_v0 == 0 &&
      (((temp_v0 = FUN_003493ac(), temp_v0 == 0xc || temp_v0 == 4 || (temp_v0 == 0xf || temp_v0 == 0x11)) ||
       (temp_v0 == 1 || temp_v0 == 0x13)))))) {
    return 1;
  }
  return 0;
}
