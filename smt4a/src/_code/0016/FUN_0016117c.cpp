/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016117c` (_code @ 0x16117c, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(unsigned int, int);

extern int DAT_005b40e0; /* 0x5b40e0 */
extern int DAT_005b40e4; /* 0x5b40e4 */
extern int DAT_0061a50c; /* 0x61a50c */

/* Supplied declaration required: FUN_002e6354. */


void FUN_0016117c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0061a50c;
  if ((DAT_0061a50c != 0) &&
     ((*(int *)(DAT_0061a50c + 4) != 0 || (*(int *)(DAT_0061a50c + 0x18) != 0)))) {
    FUN_002e6354(*(unsigned int *)(DAT_0061a50c + 0x18),*(int *)(DAT_0061a50c + 0x20) * 0x1c);
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    *(unsigned int *)(temp_v0 + 0x20) = 0;
    *(unsigned int *)(temp_v0 + 0x28) = 0;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
    *(unsigned int *)(temp_v0 + 0x24) = 0;
    *(unsigned int *)(temp_v0 + 0x34) = 0;
    *(unsigned int *)(temp_v0 + 0x30) = 0;
    DAT_005b40e0 = *(int *)(temp_v0 + 4);
    DAT_005b40e4 = DAT_005b40e0 + *(int *)(temp_v0 + 8);
  }
  return;
}

} /* extern "C" */
