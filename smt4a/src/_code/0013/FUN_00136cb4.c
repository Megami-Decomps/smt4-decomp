/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00136cb4` (_code @ 0x136cb4, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_005891b3; /* 0x5891b3 */
extern unsigned char DAT_0061a5fc; /* 0x61a5fc */

extern int FUN_00147374(void);
/* Supplied declaration required: FUN_00147550. */
/* Supplied declaration required: FUN_00147a9c. */
/* Supplied declaration required: FUN_0016f9bc. */
/* Supplied declaration required: FUN_0018b868. */
/* Supplied declaration required: FUN_0018b964. */


void FUN_00136cb4(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00147374();
  if (temp_v0 == 0) {
    DAT_005891b3 = 1;
    FUN_0016f9bc(&DAT_0061a5fc,0x100);
    temp_v0 = 0;
    FUN_00147550(0x300,param_1 & 0xfffffff8,0xf);
    if (-1 < temp_v0) {
      FUN_0018b868();
      FUN_00147a9c(0);
      FUN_0018b964();
    }
  }
  return;
}
