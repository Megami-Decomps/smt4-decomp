/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002baf30` (_code @ 0x2baf30, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0047235c; /* 0x47235c */
extern unsigned char DAT_004ea470; /* 0x4ea470 */
extern unsigned int DAT_004ea474; /* 0x4ea474 */
extern unsigned int *DAT_004ea478; /* 0x4ea478 */
extern unsigned int *DAT_004ea47c; /* 0x4ea47c */
extern unsigned int DAT_004ea480; /* 0x4ea480 */
extern unsigned int *DAT_004ea484; /* 0x4ea484 */
extern unsigned int *DAT_004ea488; /* 0x4ea488 */

extern int FUN_002bfefc(unsigned int *);


unsigned char * FUN_002baf30(void)

{
  int temp_v0;
  
  if (((DAT_0047235c & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_0047235c), temp_v0 != 0)) {
    DAT_004ea470 = 0;
    DAT_004ea474 = 0;
    DAT_004ea478 = (unsigned int *)&DAT_004ea478;
    DAT_004ea47c = (unsigned int *)&DAT_004ea478;
    DAT_004ea480 = 0;
    DAT_004ea484 = (unsigned int *)&DAT_004ea484;
    DAT_004ea488 = (unsigned int *)&DAT_004ea484;
  }
  return &DAT_004ea470;
}
