/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fe58` (_code @ 0x10fe58, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00128e84; /* 0x128e84 */
extern int FUN_00128fa8(); /* 0x128fa8 */
extern int FUN_0012939c(); /* 0x12939c */
extern signed char DAT_0044e7c0; /* 0x44e7c0 */
extern signed char DAT_0044e7c3; /* 0x44e7c3 */
extern unsigned char DAT_004e6f14; /* 0x4e6f14 */
extern unsigned char DAT_004e6f64; /* 0x4e6f64 */
extern unsigned char DAT_004e8568; /* 0x4e8568 */

/* Supplied declaration required: FUN_0011bebc. */
/* Supplied declaration required: FUN_0011cbf4. */
/* Supplied declaration required: FUN_0011cc00. */
/* Supplied declaration required: FUN_00128e50. */
/* Supplied declaration required: FUN_001292a8. */
/* Supplied declaration required: FUN_002bb7b0. */


unsigned char FUN_0010fe58(void)

{
/* irregular: 8 native warning(s); review required */
  if (DAT_0044e7c0 != '\0') {
    DAT_0044e7c0 = '\0';
    FUN_0011bebc(FUN_00128fa8,FUN_0012939c,&LAB_00128e84);
    FUN_002bb7b0();
    FUN_00128e50();
    FUN_0011cc00(&DAT_004e6f14);
    FUN_0011cbf4(&DAT_004e8568);
    if (DAT_0044e7c3 == '\0') {
      FUN_001292a8(&DAT_004e6f64,0);
    }
  }
  return 0;
}
