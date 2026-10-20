/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ed5dc` (_code @ 0x2ed5dc, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a780c(unsigned int);
int FUN_002ae7e8(int);
int FUN_002ae898(int, int);
int FUN_002c415c(int);

extern unsigned int DAT_0043dc28; /* 0x43dc28 */

/* Supplied declaration required: FUN_002a780c. */
/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002ae898. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */


void FUN_002ed5dc(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  FUN_002a780c(*(unsigned int *)(temp_v0 + 0xc));
  FUN_002a780c(*(unsigned int *)(temp_v0 + 0x10));
  FUN_002ae898(0x2d,0);
  FUN_002ae7e8(0x2d);
  FUN_002c415c(temp_v0);
  DAT_0043dc28 = 0;
  return;
}

} /* extern "C" */
