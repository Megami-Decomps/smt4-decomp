/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bb88` (_code @ 0x31bb88, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00200001; /* 0x200001 */
extern int DAT_0044ea8c; /* 0x44ea8c */
extern unsigned int DAT_0044ea94; /* 0x44ea94 */
extern int DAT_0044eac4; /* 0x44eac4 */
extern int DAT_0044f864; /* 0x44f864 */

extern int FUN_00246a4c(unsigned int, int);
/* Supplied declaration required: FUN_00250368. */
/* Supplied declaration required: FUN_002f2a5c. */
/* Supplied declaration required: FUN_002f2e3c. */


unsigned char * FUN_0031bb88(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  FUN_002f2a5c(DAT_0044eac4);
  temp_v0 = FUN_00246a4c(DAT_0044ea94,DAT_0044ea8c + DAT_0044f864);
  FUN_002f2e3c(DAT_0044eac4,temp_v0 + 0x9c);
  if (!(*(int *)(DAT_0044eac4 + 8) == 2 || *(int *)(DAT_0044eac4 + 8) == 1)) {
    puVar2 = &LAB_00200001;
  }
  else {
    FUN_00250368(DAT_0044eac4);
    puVar2 = (unsigned char *)0x0;
    DAT_0044eac4 = 0;
  }
  return puVar2;
}
