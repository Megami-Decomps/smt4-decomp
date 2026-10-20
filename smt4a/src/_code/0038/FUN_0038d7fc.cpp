/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038d7fc` (_code @ 0x38d7fc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003283ac(int);

extern int FUN_001ab888(void);
extern int FUN_001b347c(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0038d7fc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_001ab888();
  temp_v0 = *(unsigned char *)(temp_v2 + 0x1ca3);
  temp_v2 = FUN_001b347c();
  FUN_003283ac(temp_v1 <= (int)((unsigned int)temp_v0 - temp_v2));
  return 1;
}

} /* extern "C" */
