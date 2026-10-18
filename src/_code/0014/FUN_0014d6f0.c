/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d6f0` (_code @ 0x14d6f0, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_00152688(void);
extern unsigned int FUN_002a43ae(unsigned int);


unsigned int FUN_0014d6f0(void)

{
/* irregular: irregular input(s): in_s0, in_s1; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_s0;
  unsigned int in_s1;
  
  if (((-1 < (int)(0x7f800000 - (in_s0 & 0x7fffffff))) &&
      (-1 < (int)(0x7f800000 - (in_s1 & 0x7fffffff)))) &&
     (((in_s0 & 0x7fffffff) == 0x7f800000 || ((in_s1 & 0x7fffffff) == 0)))) {
    temp_v0 = FUN_002a43ae(1);
    return temp_v0;
  }
  temp_v0 = FUN_00152688();
  if ((~(temp_v0 >> 0x17) & 0xff) == 0) {
    return ~(temp_v0 >> 0x17);
  }
  if ((in_s0 & 0x80000000) != (temp_v0 & 0x80000000)) {
    return (temp_v0 & 0x80000000) | (in_s1 & 0x7fffffff);
  }
  return temp_v0 & 0x80000000;
}
