/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001afa44` (_code @ 0x1afa44, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_005c0af8; /* 0x5c0af8 */
extern unsigned int DAT_00644980; /* 0x644980 */
extern unsigned int DAT_00644984; /* 0x644984 */
extern unsigned char DAT_00644988; /* 0x644988 */
extern unsigned char DAT_0064498c; /* 0x64498c */
extern unsigned char DAT_0064498e; /* 0x64498e */
extern unsigned int DAT_00644990; /* 0x644990 */
extern unsigned char DAT_00644994; /* 0x644994 */
extern unsigned int DAT_00644998; /* 0x644998 */
extern unsigned char DAT_0064499c; /* 0x64499c */
extern unsigned char DAT_006449b0; /* 0x6449b0 */
extern unsigned int DAT_006449b4; /* 0x6449b4 */
extern unsigned int DAT_006449b8; /* 0x6449b8 */
extern unsigned int DAT_006449bc; /* 0x6449bc */
extern unsigned int DAT_006449c0; /* 0x6449c0 */
extern unsigned int DAT_006449c4; /* 0x6449c4 */
extern unsigned int DAT_006449c8; /* 0x6449c8 */
extern unsigned int DAT_006449cc; /* 0x6449cc */

extern int FUN_002eba64(unsigned int *);


unsigned int * FUN_001afa44(void)

{
  int temp_v0;
  
  if (((DAT_005c0af8 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_005c0af8), temp_v0 != 0)) {
    DAT_00644980 = 0;
    DAT_00644984 = 0;
    DAT_00644990 = 0;
    DAT_00644994 = 1;
    DAT_00644998 = 0;
    DAT_0064499c = 1;
    DAT_006449b4 = 0;
    DAT_006449b8 = 0;
    DAT_006449bc = 0xffffffff;
    DAT_006449c0 = 0;
    DAT_006449c4 = 0;
    DAT_006449c8 = 0;
    DAT_006449cc = 0;
    DAT_0064498c = 0;
    DAT_0064498e = 0;
    DAT_00644988 = 0;
    DAT_006449b0 = 0;
  }
  return &DAT_00644980;
}

} /* extern "C" */
