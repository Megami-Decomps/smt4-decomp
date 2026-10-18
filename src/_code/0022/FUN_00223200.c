/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223200` (_code @ 0x223200, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00215ba0(void);
/* Supplied declaration required: FUN_00215bd8. */
/* Supplied declaration required: FUN_0026a02c. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_00296bd8. */
extern unsigned short FUN_00296f60(void);
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_00349310. */


unsigned char FUN_00223200(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00289640();
  if (temp_v1 == 0) {
    FUN_00349310(temp_v0);
    temp_v1 = FUN_002c1f28();
    if (temp_v1 != 0) {
      return 1;
    }
    FUN_0026a02c(0);
    FUN_00215bd8(temp_v0);
  }
  temp_v1 = FUN_00215ba0();
  if (temp_v1 != 0) {
    FUN_00296bd8();
    FUN_002b8b78(0x90);
  }
  return temp_v1 != 0;
}
