/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c384` (_code @ 0x31c384, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0049fa1a; /* 0x49fa1a */
extern unsigned short DAT_0049fa1c; /* 0x49fa1c */
extern unsigned char DAT_0049fa20; /* 0x49fa20 */

extern unsigned int FUN_00259510(unsigned int);
extern unsigned short FUN_00296f60(void);
/* Supplied declaration required: FUN_002bf86c. */


unsigned int FUN_0031c384(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00259510(1);
  DAT_0049fa1a = 1;
  DAT_0049fa1c = temp_v0;
  FUN_002bf86c(&DAT_0049fa20,temp_v1);
  return 1;
}
