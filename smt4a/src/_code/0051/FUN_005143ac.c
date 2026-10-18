/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005143ac` (_code @ 0x5143ac, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_00589534; /* 0x589534 */

/* Supplied declaration required: FUN_004afd38. */


unsigned int FUN_005143ac(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_00589534 == (romwright_code *)0x0) {
    temp_v0 = 0x12;
  }
  else if (param_1 == (unsigned int *)0x0) {
    temp_v0 = 1;
  }
  else {
    FUN_004afd38(param_1[1]);
    (*DAT_00589534)(param_1[1]);
    (*DAT_00589534)(*param_1);
    (*DAT_00589534)(param_1);
    temp_v0 = 0;
  }
  return temp_v0;
}
