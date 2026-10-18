/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00221fb4` (_code @ 0x221fb4, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043df58; /* 0x43df58 */

extern unsigned int FUN_00259510(unsigned int);
extern int FUN_00289640(void);
extern unsigned int FUN_00296f60(unsigned int);
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_0030a28c. */


unsigned int FUN_00221fb4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_00259510(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00296f60(2);
  temp_v3 = FUN_00296f60(3);
  temp_v4 = FUN_00289640();
  if (temp_v4 != 0) {
    temp_v4 = FUN_002bf41c(DAT_0043df58);
    if (temp_v4 == 0) {
      return 1;
    }
  }
  else {
    FUN_0030a28c(temp_v0,temp_v1,temp_v2,temp_v3);
    DAT_0043df58 = temp_v0;
  }
  return 0;
}
