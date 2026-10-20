/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3e10` (_code @ 0x2a3e10, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003306cc(void);
int FUN_00342334(int);
int FUN_00370b8c(int, unsigned int);
int FUN_003fd63c(int, int);

extern int DAT_0057f55c; /* 0x57f55c */

extern int FUN_0016345c(void);
extern int FUN_00163e40(int);
extern unsigned int FUN_0018719c(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003306cc. */
/* Supplied declaration required: FUN_00342334. */
/* Supplied declaration required: FUN_00370b8c. */
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_002a3e10(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00236038(0);
  if (DAT_0057f55c == 0) {
    temp_v1 = FUN_0016345c();
    if (temp_v1 != 0) {
      return 0;
    }
    FUN_00342334(0);
    FUN_003306cc();
    temp_v1 = temp_v0 + 0x800;
    temp_v2 = FUN_0018719c();
    FUN_00370b8c(temp_v0,temp_v2);
    DAT_0057f55c = temp_v0;
    FUN_003fd63c(temp_v1,1);
  }
  temp_v0 = FUN_00163e40(DAT_0057f55c);
  if (temp_v0 != 0) {
    return 0;
  }
  DAT_0057f55c = 0;
  FUN_00342334(1);
  return 1;
}

} /* extern "C" */
