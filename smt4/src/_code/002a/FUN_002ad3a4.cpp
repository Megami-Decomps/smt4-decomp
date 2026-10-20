/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ad3a4` (_code @ 0x2ad3a4, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00471b78; /* 0x471b78 */
extern unsigned int DAT_004e8518; /* 0x4e8518 */
extern unsigned int DAT_004e851c; /* 0x4e851c */
extern unsigned char DAT_004e8520; /* 0x4e8520 */
extern unsigned char DAT_004e8524; /* 0x4e8524 */
extern unsigned char DAT_004e8526; /* 0x4e8526 */
extern unsigned int DAT_004e8528; /* 0x4e8528 */
extern unsigned char DAT_004e852c; /* 0x4e852c */
extern unsigned int DAT_004e8530; /* 0x4e8530 */
extern unsigned char DAT_004e8534; /* 0x4e8534 */
extern unsigned char DAT_004e8548; /* 0x4e8548 */
extern unsigned int DAT_004e854c; /* 0x4e854c */
extern unsigned int DAT_004e8550; /* 0x4e8550 */
extern unsigned int DAT_004e8554; /* 0x4e8554 */
extern unsigned int DAT_004e8558; /* 0x4e8558 */
extern unsigned int DAT_004e855c; /* 0x4e855c */
extern unsigned int DAT_004e8560; /* 0x4e8560 */
extern unsigned int DAT_004e8564; /* 0x4e8564 */

extern int __cxa_guard_acquire(unsigned int *);


unsigned int * FUN_002ad3a4(void)

{
  int temp_v0;
  
  if (((DAT_00471b78 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_00471b78), temp_v0 != 0)) {
    DAT_004e8518 = 0;
    DAT_004e851c = 0;
    DAT_004e8528 = 0;
    DAT_004e852c = 1;
    DAT_004e8530 = 0;
    DAT_004e8534 = 1;
    DAT_004e854c = 0;
    DAT_004e8550 = 0;
    DAT_004e8554 = 0xffffffff;
    DAT_004e8558 = 0;
    DAT_004e855c = 0;
    DAT_004e8560 = 0;
    DAT_004e8564 = 0;
    DAT_004e8524 = 0;
    DAT_004e8526 = 0;
    DAT_004e8520 = 0;
    DAT_004e8548 = 0;
  }
  return &DAT_004e8518;
}

} /* extern "C" */
