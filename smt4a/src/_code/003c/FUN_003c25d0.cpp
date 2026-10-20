/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c25d0` (_code @ 0x3c25d0, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004ab7f4(unsigned int, int);

extern unsigned int DAT_00570da0; /* 0x570da0 */
extern unsigned int DAT_00570da4; /* 0x570da4 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_004ab7f4. */


unsigned int FUN_003c25d0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  temp_v1 = FUN_0014aa78();
  puVar3 = *(unsigned int **)(temp_v1 + 0x1ffc);
  temp_v0 = ~DAT_00570da0;
  puVar3[1] = puVar3[1] & ~DAT_00570da4;
  *puVar3 = *puVar3 & temp_v0;
  FUN_004ab7f4(DAT_0057a9c8,0);
  return 1;
}

} /* extern "C" */
