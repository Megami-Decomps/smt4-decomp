/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bafb0` (_code @ 0x2bafb0, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0047233c; /* 0x47233c */
extern unsigned int DAT_004e9e28; /* 0x4e9e28 */
extern unsigned int DAT_004e9e2c; /* 0x4e9e2c */
extern unsigned int *DAT_004e9e30; /* 0x4e9e30 */
extern unsigned int *DAT_004e9e34; /* 0x4e9e34 */
extern unsigned char DAT_004e9e38; /* 0x4e9e38 */
extern unsigned int DAT_004e9e3c; /* 0x4e9e3c */

extern int __cxa_guard_acquire(unsigned int *);


unsigned int * FUN_002bafb0(void)

{
  int temp_v0;
  
  if (((DAT_0047233c & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_0047233c), temp_v0 != 0)) {
    DAT_004e9e28 = 0;
    DAT_004e9e2c = 0;
    DAT_004e9e30 = (unsigned int *)&DAT_004e9e30;
    DAT_004e9e34 = (unsigned int *)&DAT_004e9e30;
    DAT_004e9e38 = 0;
    DAT_004e9e3c = 0;
  }
  return &DAT_004e9e28;
}

} /* extern "C" */
