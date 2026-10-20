/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00335840` (_code @ 0x335840, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dialogClose(int);
int FUN_004c8894(unsigned int, int);
int FUN_004c8b10(void);

extern unsigned int DAT_00570de8; /* 0x570de8 */
extern unsigned int DAT_00570dec; /* 0x570dec */

extern int btlGetMainState(void);
/* Supplied declaration required: dialogClose. */
extern unsigned int scrGetArgString(unsigned int);
extern int dialogIsActive(void);
/* Supplied declaration required: FUN_004c8894. */
/* Supplied declaration required: FUN_004c8b10. */


unsigned int FUN_00335840(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = btlGetMainState();
  temp_v2 = DAT_00570dec | *(unsigned int *)(temp_v0 + 0x45a4);
  *(unsigned int *)(temp_v0 + 0x45a0) = DAT_00570de8 | *(unsigned int *)(temp_v0 + 0x45a0);
  *(unsigned int *)(temp_v0 + 0x45a4) = temp_v2;
  FUN_004c8b10();
  temp_v0 = dialogIsActive();
  if (temp_v0 != 0) {
    dialogClose(1);
  }
  temp_v1 = scrGetArgString(0);
  FUN_004c8894(temp_v1,1);
  return 1;
}

} /* extern "C" */
