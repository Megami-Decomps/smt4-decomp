/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011904c` (_code @ 0x11904c, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012630c(unsigned int, unsigned int, unsigned int);

extern int DAT_0043ded0; /* 0x43ded0 */

/* Supplied declaration required: FUN_0012630c. */
extern int FUN_002b721c(unsigned int);
extern int FUN_002bf244(unsigned int);


unsigned int FUN_0011904c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0043ded0;
  if (((DAT_0043ded0 != 0) &&
      (temp_v1 = FUN_002bf244(*(unsigned int *)(DAT_0043ded0 + 0x30)), temp_v1 != 0)) &&
     (temp_v1 = FUN_002b721c(*(unsigned int *)(temp_v0 + 0x30)), temp_v1 == param_1)) {
    FUN_0012630c(*(unsigned int *)(temp_v0 + 0x30),param_2,param_3);
    return 1;
  }
  return 0;
}

} /* extern "C" */
