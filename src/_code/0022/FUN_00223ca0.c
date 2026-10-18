/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223ca0` (_code @ 0x223ca0, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043dd50; /* 0x43dd50 */

extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);


unsigned short FUN_00223ca0(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0043dd50;
  temp_v1 = FUN_0029efc0(DAT_0043dd50 + 0x660);
  temp_v2 = FUN_0029efa8(temp_v0 + 0x660);
  return *(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x78a);
}
