/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd798` (_code @ 0x2cd798, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern unsigned int FUN_0024bb38(void);
extern unsigned int FUN_002592d8(void);
/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002b4414(unsigned int, unsigned int, unsigned int);


unsigned int FUN_002cd798(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_002592d8();
  temp_v1 = FUN_0024bb38();
  temp_v2 = FUN_002b4414(temp_v0,temp_v1,0x12);
  FUN_0028dcb0(temp_v2 == 0);
  return 1;
}

} /* extern "C" */
