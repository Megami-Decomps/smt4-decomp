/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00219bc8` (_code @ 0x219bc8, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0044ea81; /* 0x44ea81 */
extern signed char DAT_0044ea89; /* 0x44ea89 */
extern int DAT_0044ea90; /* 0x44ea90 */
extern unsigned int DAT_0044eaac; /* 0x44eaac */

/* Supplied declaration required: FUN_00250420. */
/* Supplied declaration required: FUN_00250440. */


void FUN_00219bc8(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = DAT_0044eaac;
  if ((DAT_0044ea90 == 0) &&
     ((FUN_00250440(param_1), DAT_0044ea89 == '\0' ||
      (((temp_v0 = param_1, DAT_0044ea89 != '\x01' && (temp_v0 = param_1, DAT_0044ea89 == '\x02')) &&
       (temp_v0 = param_1, DAT_0044ea81 == '\0')))))) {
    FUN_00250420(param_1);
    temp_v0 = param_1;
  }
  DAT_0044eaac = temp_v0;
  return;
}
