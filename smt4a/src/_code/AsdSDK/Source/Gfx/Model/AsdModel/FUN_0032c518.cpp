/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032c518` (_code @ 0x32c518, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00197eb0(int, unsigned int);

extern unsigned int DAT_005b3c14; /* 0x5b3c14 */
extern unsigned int DAT_005b3c20; /* 0x5b3c20 */
extern unsigned int DAT_005b3c24; /* 0x5b3c24 */
extern unsigned int DAT_005b3c28; /* 0x5b3c28 */
extern int DAT_005b3ca0; /* 0x5b3ca0 */
extern int DAT_005b3ca4; /* 0x5b3ca4 */
extern unsigned int DAT_005b3cb8; /* 0x5b3cb8 */
extern unsigned int DAT_005b3cc0; /* 0x5b3cc0 */
extern unsigned int DAT_005b3cc4; /* 0x5b3cc4 */

/* Supplied declaration required: FUN_00197eb0. */


void FUN_0032c518(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)((&DAT_005b3cb8)[param_2] + 4);
  if (param_2 != 0) {
    if (param_2 == 1) {
      FUN_00197eb0(DAT_005b3ca4 + 0x10,DAT_005b3c20);
      DAT_005b3c28 = DAT_005b3c20;
      DAT_005b3c20 = param_1;
      *(unsigned int *)(*(int *)(temp_v0 + 0xac) + 4) = param_1;
      DAT_005b3cc4 = 1;
    }
    return;
  }
  FUN_00197eb0(DAT_005b3ca0 + 0x10,DAT_005b3c14);
  DAT_005b3c24 = DAT_005b3c14;
  DAT_005b3c14 = param_1;
  *(unsigned int *)(*(int *)(temp_v0 + 0xac) + 4) = param_1;
  DAT_005b3cc0 = 1;
  return;
}

} /* extern "C" */
