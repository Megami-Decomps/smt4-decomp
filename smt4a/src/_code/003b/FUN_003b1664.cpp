/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b1664` (_code @ 0x3b1664, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004c8c10(unsigned int, unsigned int, int);

extern unsigned int DAT_00570de8; /* 0x570de8 */
extern unsigned int DAT_00570dec; /* 0x570dec */

extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_004c8c10. */


unsigned int FUN_003b1664(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = btlGetMainState();
  temp_v3 = DAT_00570dec | *(unsigned int *)(temp_v0 + 0x45a4);
  *(unsigned int *)(temp_v0 + 0x45a0) = DAT_00570de8 | *(unsigned int *)(temp_v0 + 0x45a0);
  *(unsigned int *)(temp_v0 + 0x45a4) = temp_v3;
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetArg(1);
  FUN_004c8c10(temp_v1,temp_v2,1);
  return 1;
}

} /* extern "C" */
