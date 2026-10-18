/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002abb68` (_code @ 0x2abb68, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00465058; /* 0x465058 */
extern unsigned int DAT_00465064; /* 0x465064 */

extern unsigned int FUN_002af624(void);
/* Supplied declaration required: FUN_002b7488. */
/* Supplied declaration required: FUN_002bc9d8. */
/* Supplied declaration required: FUN_002bf148. */


void FUN_002abb68(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002bc9d8(0x207,param_1 + 2);
  FUN_002bf148((&DAT_00465064)[DAT_00465058]);
  param_1[3] = 1;
  FUN_002b7488();
  temp_v0 = FUN_002af624();
  FUN_002b7488();
  *param_1 = temp_v0;
  return;
}
