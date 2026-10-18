/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bbd10` (_code @ 0x2bbd10, 0x20 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004d4200; /* 0x4d4200 */
extern unsigned char DAT_004d4201; /* 0x4d4201 */
extern unsigned short DAT_004d4202; /* 0x4d4202 */


int FUN_002bbd10(unsigned int param_1,int param_2)

{
  DAT_004d4201 = 0;
  DAT_004d4202 = 0xbca3;
  DAT_004d4200 = 0;
  return param_2 >> 0x20;
}
