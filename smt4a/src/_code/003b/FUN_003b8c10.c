/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8c10` (_code @ 0x3b8c10, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00570da0; /* 0x570da0 */
extern unsigned int DAT_00570da4; /* 0x570da4 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_004ab7f4. */


unsigned int FUN_003b8c10(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0014aa78();
  puVar2 = *(unsigned int **)(temp_v0 + 0x1ffc);
  temp_v1 = puVar2[1] | DAT_00570da4;
  *puVar2 = DAT_00570da0 | *puVar2;
  puVar2[1] = temp_v1;
  FUN_004ab7f4(DAT_0057a9c8,1);
  return 1;
}
