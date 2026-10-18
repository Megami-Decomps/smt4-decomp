/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cdd20` (_code @ 0x2cdd20, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0026a02c. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_0028df0c. */
/* Supplied declaration required: FUN_0028df3c. */
/* Supplied declaration required: FUN_00296bd8. */
extern unsigned short FUN_00296f60(void);
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002fec24(void);
/* Supplied declaration required: FUN_002fec44. */


unsigned char FUN_002cdd20(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00289640();
  if (temp_v1 == 0) {
    FUN_0028df3c(1);
    FUN_0026a02c();
    FUN_002fec44(temp_v0);
  }
  temp_v1 = FUN_002fec24();
  if (temp_v1 != 0) {
    FUN_00296bd8();
    FUN_002b8b78(0x90);
    FUN_0028df3c(0xffffffff);
    FUN_0028df0c(0);
  }
  return temp_v1 != 0;
}
