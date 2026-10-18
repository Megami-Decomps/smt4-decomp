/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011234c` (_code @ 0x11234c, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0055955c; /* 0x55955c */

extern int FUN_0010eec4(int);
/* Supplied declaration required: FUN_00132764. */
/* Supplied declaration required: FUN_002e7232. */
extern int FUN_002ea00c(int);
/* Supplied declaration required: FUN_002ecac4. */
extern int FUN_002f8760(unsigned int *);


void FUN_0011234c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055955c;
  if (param_1[0x5f] != 0) {
    FUN_002e7232();
  }
  if (param_1[0x60] != 0) {
    FUN_002e7232();
  }
  temp_v0 = FUN_002f8760(param_1 + 100);
  temp_v0 = FUN_002ea00c(temp_v0 - 0x78);
  temp_v0 = FUN_002ea00c(temp_v0 - 0x60);
  temp_v0 = temp_v0 - 0x1c;
  FUN_00132764(temp_v0);
  temp_v0 = FUN_0010eec4(temp_v0 - 0x34);
  FUN_002ecac4(temp_v0 - 0x68);
  return;
}
