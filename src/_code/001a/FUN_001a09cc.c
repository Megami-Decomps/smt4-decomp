/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a09cc` (_code @ 0x1a09cc, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ca720(void);
extern int FUN_002893d8(void);
extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_002cf150. */
/* Supplied declaration required: FUN_002efd64. */


unsigned char FUN_001a09cc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002893d8();
  if (temp_v0 != 0) {
    temp_v0 = FUN_001ca720();
    if (temp_v0 != 0) {
      FUN_002efd64();
    }
    return temp_v0 != 0;
  }
  temp_v1 = FUN_00296cc8(0);
  temp_v2 = FUN_00296cc8(1);
  FUN_002cf150(temp_v1,temp_v2);
  return 0;
}
