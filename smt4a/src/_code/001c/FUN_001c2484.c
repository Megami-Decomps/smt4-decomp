/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c2484` (_code @ 0x1c2484, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005c0f80; /* 0x5c0f80 */
extern unsigned char DAT_00646e30; /* 0x646e30 */
extern unsigned int DAT_00646e34; /* 0x646e34 */
extern unsigned int *DAT_00646e38; /* 0x646e38 */
extern unsigned int *DAT_00646e3c; /* 0x646e3c */
extern unsigned int DAT_00646e40; /* 0x646e40 */
extern unsigned int *DAT_00646e44; /* 0x646e44 */
extern unsigned int *DAT_00646e48; /* 0x646e48 */

extern int FUN_002eba64(unsigned int *);


unsigned char * FUN_001c2484(void)

{
  int temp_v0;
  
  if (((DAT_005c0f80 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c0f80), temp_v0 != 0)) {
    DAT_00646e30 = 0;
    DAT_00646e34 = 0;
    DAT_00646e38 = (unsigned int *)&DAT_00646e38;
    DAT_00646e3c = (unsigned int *)&DAT_00646e38;
    DAT_00646e40 = 0;
    DAT_00646e44 = (unsigned int *)&DAT_00646e44;
    DAT_00646e48 = (unsigned int *)&DAT_00646e44;
  }
  return &DAT_00646e30;
}
