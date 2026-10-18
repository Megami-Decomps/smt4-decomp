/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003240b8` (_code @ 0x3240b8, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0049fa61; /* 0x49fa61 */
extern unsigned int DAT_0049fa64; /* 0x49fa64 */
extern unsigned char DAT_0049fa68; /* 0x49fa68 */

extern unsigned int FUN_00259510(unsigned int);
extern unsigned int FUN_00296f60(void);
/* Supplied declaration required: FUN_002bf86c. */


unsigned int FUN_003240b8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296f60();
  temp_v1 = FUN_00259510(1);
  DAT_0049fa61 = 1;
  DAT_0049fa64 = temp_v0;
  FUN_002bf86c(&DAT_0049fa68,temp_v1);
  return 1;
}
