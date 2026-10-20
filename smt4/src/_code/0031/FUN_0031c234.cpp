/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c234` (_code @ 0x31c234, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bf694(unsigned char *, unsigned int);

extern unsigned char DAT_0049fa1a; /* 0x49fa1a */
extern unsigned short DAT_0049fa1c; /* 0x49fa1c */
extern unsigned char DAT_0049fa20; /* 0x49fa20 */

extern unsigned int FUN_002592d8(unsigned int);
extern unsigned short FUN_00296cc8(void);
/* Supplied declaration required: FUN_002bf694. */


unsigned int FUN_0031c234(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002592d8(1);
  DAT_0049fa1a = 1;
  DAT_0049fa1c = temp_v0;
  FUN_002bf694(&DAT_0049fa20,temp_v1);
  return 1;
}

} /* extern "C" */
