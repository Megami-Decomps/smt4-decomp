/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115c7c` (_code @ 0x115c7c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f17e4(int, int);
int FUN_002ffa20(int, int);

extern unsigned char DAT_00559bc8; /* 0x559bc8 */
extern unsigned char DAT_0055a7f8; /* 0x55a7f8 */

extern int FUN_002ea0e4(unsigned int *);
/* Supplied declaration required: FUN_002f17e4. */
/* Supplied declaration required: FUN_002ffa20. */


void FUN_00115c7c(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055a7f8;
  *(unsigned char *)(param_1 + 1) = 0;
  temp_v0 = FUN_002ea0e4(param_1 + 2);
  temp_v0 = temp_v0 + 8;
  FUN_002ffa20(temp_v0,0);
  temp_v0 = temp_v0 + 0x10;
  FUN_002f17e4(temp_v0,0);
  *(unsigned char **)(temp_v0 - 0x20) = &DAT_00559bc8;
  return;
}

} /* extern "C" */
