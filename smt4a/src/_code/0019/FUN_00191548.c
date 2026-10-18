/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00191548` (_code @ 0x191548, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005c0f60; /* 0x5c0f60 */
extern unsigned int DAT_006465f8; /* 0x6465f8 */
extern unsigned int DAT_006465fc; /* 0x6465fc */
extern unsigned int *DAT_00646600; /* 0x646600 */
extern unsigned int *DAT_00646604; /* 0x646604 */
extern unsigned char DAT_00646608; /* 0x646608 */
extern unsigned int DAT_0064660c; /* 0x64660c */

extern int FUN_002eba64(unsigned int *);


unsigned int * FUN_00191548(void)

{
  int temp_v0;
  
  if (((DAT_005c0f60 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c0f60), temp_v0 != 0)) {
    DAT_006465f8 = 0;
    DAT_006465fc = 0;
    DAT_00646600 = (unsigned int *)&DAT_00646600;
    DAT_00646604 = (unsigned int *)&DAT_00646600;
    DAT_00646608 = 0;
    DAT_0064660c = 0;
  }
  return &DAT_006465f8;
}
