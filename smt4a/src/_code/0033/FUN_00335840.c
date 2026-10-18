/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00335840` (_code @ 0x335840, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570de8; /* 0x570de8 */
extern unsigned int DAT_00570dec; /* 0x570dec */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00203d04. */
extern unsigned int FUN_002360dc(unsigned int);
extern int FUN_002619e0(void);
/* Supplied declaration required: FUN_004c8894. */
/* Supplied declaration required: FUN_004c8b10. */


unsigned int FUN_00335840(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0014aa78();
  temp_v2 = DAT_00570dec | *(unsigned int *)(temp_v0 + 0x45a4);
  *(unsigned int *)(temp_v0 + 0x45a0) = DAT_00570de8 | *(unsigned int *)(temp_v0 + 0x45a0);
  *(unsigned int *)(temp_v0 + 0x45a4) = temp_v2;
  FUN_004c8b10();
  temp_v0 = FUN_002619e0();
  if (temp_v0 != 0) {
    FUN_00203d04(1);
  }
  temp_v1 = FUN_002360dc(0);
  FUN_004c8894(temp_v1,1);
  return 1;
}
