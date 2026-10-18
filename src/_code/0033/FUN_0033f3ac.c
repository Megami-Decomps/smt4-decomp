/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033f3ac` (_code @ 0x33f3ac, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */

extern int FUN_0023e48c(void);
extern int FUN_0023e4d4(void);
extern int FUN_0023e500(unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002487e4(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b96f0. */
extern unsigned int FUN_00389910(unsigned int, unsigned int);
extern unsigned int FUN_00389fd0(unsigned int, unsigned int);


unsigned int FUN_0033f3ac(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_002b96f0(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
  temp_v0 = FUN_0023e4d4();
  temp_v3 = 0;
  if (temp_v0 != 0) {
    if (*(int *)(param_1 + 8) != 0xc) {
      temp_v0 = FUN_0023e48c();
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v1 = FUN_00389910(DAT_00433158,*(unsigned int *)(param_1 + 4));
      temp_v2 = FUN_002487e4(DAT_00433158,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc))
      ;
    }
    else {
      temp_v0 = FUN_0023e500(DAT_00433158,*(unsigned int *)(param_1 + 4),0);
      if (temp_v0 == 0) {
        return 0;
      }
      temp_v1 = FUN_00389fd0(DAT_00433158,*(unsigned int *)(param_1 + 4));
      temp_v2 = FUN_002487e4(DAT_00433158,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc))
      ;
    }
    temp_v3 = 0;
    if ((temp_v1 & ~temp_v2) != 0) {
      temp_v3 = 1;
    }
  }
  return temp_v3;
}
