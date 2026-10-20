/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d588` (_code @ 0x31d588, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005f15fc; /* 0x5f15fc */

extern unsigned int FUN_00236038(void);
extern int FUN_002a4b28(unsigned int);


unsigned int FUN_0031d588(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00236038();
  temp_v1 = FUN_002a4b28(temp_v0 & 0xffff);
  if (temp_v1 == 0) {
    temp_v1 = 0;
    do {
      if (*(unsigned int *)(&(*(unsigned char *)((unsigned char *)&DAT_005f15fc + 0x310)) + temp_v1 * 4) == temp_v0) {
        return 1;
      }
      if (*(unsigned int *)(&(*(unsigned char *)((unsigned char *)&DAT_005f15fc + 0x310)) + temp_v1 * 4) == 0) {
        *(unsigned int *)(&(*(unsigned char *)((unsigned char *)&DAT_005f15fc + 0x310)) + temp_v1 * 4) = temp_v0;
        return 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x20);
  }
  return 1;
}

} /* extern "C" */
