/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00331498` (_code @ 0x331498, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001681cc. */
extern unsigned short FUN_00236038(void);
/* Supplied declaration required: FUN_002852f0. */
/* Supplied declaration required: FUN_002c76c0. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002f0c18. */
/* Supplied declaration required: FUN_0034aae4. */
extern int FUN_0038b6f0(void);
/* Supplied declaration required: FUN_0038b710. */


unsigned char FUN_00331498(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    FUN_002c76c0(1);
    FUN_002f0c18();
    FUN_0038b710(temp_v0);
  }
  temp_v1 = FUN_0038b6f0();
  if (temp_v1 != 0) {
    FUN_0034aae4();
    FUN_001681cc(0x92);
    FUN_002c76c0(0xffffffff);
    FUN_002852f0(0);
  }
  return temp_v1 != 0;
}
