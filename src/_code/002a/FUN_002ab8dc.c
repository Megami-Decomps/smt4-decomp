/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ab8dc` (_code @ 0x2ab8dc, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00465058; /* 0x465058 */
extern unsigned int DAT_00465064; /* 0x465064 */

extern unsigned int FUN_002af390(void);
/* Supplied declaration required: FUN_002b7148. */
/* Supplied declaration required: FUN_002bc7f4. */
/* Supplied declaration required: FUN_002bef70. */


void FUN_002ab8dc(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_002bc7f4(0x207,param_1 + 2);
  FUN_002bef70((&DAT_00465064)[DAT_00465058]);
  param_1[3] = 1;
  FUN_002b7148();
  temp_v0 = FUN_002af390();
  FUN_002b7148();
  *param_1 = temp_v0;
  return;
}
