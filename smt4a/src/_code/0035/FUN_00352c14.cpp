/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352c14` (_code @ 0x352c14, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned short DAT_005f162c; /* 0x5f162c */
extern signed char DAT_005f162e; /* 0x5f162e */
extern signed char DAT_005f162f; /* 0x5f162f */
extern signed char DAT_005f1630; /* 0x5f1630 */
extern signed char DAT_005f1631; /* 0x5f1631 */
extern signed char DAT_005f1632; /* 0x5f1632 */
extern signed char DAT_005f1633; /* 0x5f1633 */


void FUN_00352c14(void)

{
  DAT_005f162e = DAT_005f1633;
  if (DAT_005f1633 == -1) {
    DAT_005f162e = DAT_005f1632;
  }
  if (DAT_005f1633 == -1 && DAT_005f162e == -1) {
    DAT_005f162e = DAT_005f1631;
    if (DAT_005f1631 == -1) {
      DAT_005f162e = DAT_005f1630;
    }
    if ((DAT_005f1631 == -1 && DAT_005f162e == -1) &&
       (DAT_005f162e = DAT_005f162f, DAT_005f162f == -1)) {
      DAT_005f162e = (char)DAT_005f162c;
    }
  }
  return;
}

} /* extern "C" */
