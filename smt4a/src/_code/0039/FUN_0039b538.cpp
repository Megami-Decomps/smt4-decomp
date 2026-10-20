/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b538` (_code @ 0x39b538, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00164a9c(...);
int FUN_0019d96c(unsigned int, int, int);

/* Supplied declaration required: FUN_00164a9c. */
/* Supplied declaration required: FUN_0019d96c. */
extern unsigned int FUN_00236038(unsigned int);
extern int FUN_002deb84(void);


unsigned int FUN_0039b538(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    temp_v0 = FUN_002deb84();
    if (temp_v0 == 0x14) {
      return 1;
    }
  }
  else {
    temp_v1 = FUN_00236038(0);
    temp_v2 = FUN_00164a9c();
    FUN_0019d96c(temp_v2,7,0x14);
    temp_v0 = FUN_00164a9c(temp_v1);
    *(unsigned int *)(temp_v0 + 0x78) = 2;
  }
  return 0;
}

} /* extern "C" */
