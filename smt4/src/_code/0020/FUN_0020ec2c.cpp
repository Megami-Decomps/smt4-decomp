/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ec2c` (_code @ 0x20ec2c, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00296cc8(...);
int FUN_002a03d8(int, unsigned int);

extern int FUN_002893d8(void);
/* Supplied declaration required: FUN_00296cc8. */
/* Supplied declaration required: FUN_002a03d8. */
extern int FUN_002b89a4(unsigned int);
extern int FUN_002c1d5c(void);


unsigned int FUN_0020ec2c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002893d8();
  if (temp_v1 != 0) {
    temp_v1 = FUN_002b89a4(0);
    if ((temp_v1 == 0) || (temp_v1 = FUN_002b89a4(0), temp_v1 == 0)) {
      return 0;
    }
  }
  else {
    temp_v1 = FUN_002c1d5c();
    if ((temp_v1 == 0) && ((temp_v1 = FUN_00296cc8(0), temp_v1 == 0 || (temp_v1 == 1)))) {
      FUN_002a03d8(0,temp_v0);
      FUN_002a03d8(1,temp_v0);
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
