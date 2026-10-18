/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c418` (_code @ 0x31c418, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00215ba0(void);
/* Supplied declaration required: FUN_00215bd8. */
/* Supplied declaration required: FUN_0026a02c. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_00296bd8. */
/* Supplied declaration required: FUN_00296f60. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_00349348. */


unsigned char FUN_0031c418(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00296f60(1);
  temp_v2 = FUN_00289640();
  if (temp_v2 == 0) {
    FUN_00349348(temp_v0,temp_v1);
    temp_v2 = FUN_002c1f28();
    if (temp_v2 != 0) {
      return 1;
    }
    FUN_0026a02c(0);
    FUN_00215bd8(temp_v0);
  }
  temp_v2 = FUN_00215ba0();
  if (temp_v2 != 0) {
    FUN_00296bd8();
    FUN_002b8b78(0x90);
  }
  return temp_v2 != 0;
}
