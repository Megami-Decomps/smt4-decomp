/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032485c` (_code @ 0x32485c, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_005712f0; /* 0x5712f0 */
extern int DAT_00571508; /* 0x571508 */
extern int DAT_00573808; /* 0x573808 */
extern int DAT_00573828; /* 0x573828 */

extern int FUN_00163e40(unsigned int);


unsigned int FUN_0032485c(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_00163e40(*(unsigned int *)(param_1 + 8));
  if ((((temp_v0 != 0) && (DAT_00573828 != 0)) && (DAT_005712f0 != 0)) &&
     ((DAT_00573808 != 0 && (DAT_00571508 != 0)))) {
    if ((*(unsigned int *)(DAT_00571508 + 0x64c) & 0x80000) != 0) {
      return 0;
    }
    if ((*(unsigned int *)(DAT_00573828 + 0xc) & 4) == 0) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
