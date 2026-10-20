/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002df788` (_code @ 0x2df788, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned short DAT_0049f948; /* 0x49f948 */
extern signed char DAT_0049f94a; /* 0x49f94a */
extern signed char DAT_0049f94b; /* 0x49f94b */
extern signed char DAT_0049f94c; /* 0x49f94c */
extern signed char DAT_0049f94d; /* 0x49f94d */
extern signed char DAT_0049f94e; /* 0x49f94e */
extern signed char DAT_0049f94f; /* 0x49f94f */


void FUN_002df788(void)

{
  DAT_0049f94a = DAT_0049f94f;
  if (DAT_0049f94f == -1) {
    DAT_0049f94a = DAT_0049f94e;
  }
  if (DAT_0049f94f == -1 && DAT_0049f94a == -1) {
    DAT_0049f94a = DAT_0049f94d;
    if (DAT_0049f94d == -1) {
      DAT_0049f94a = DAT_0049f94c;
    }
    if ((DAT_0049f94d == -1 && DAT_0049f94a == -1) &&
       (DAT_0049f94a = DAT_0049f94b, DAT_0049f94b == -1)) {
      DAT_0049f94a = (char)DAT_0049f948;
    }
  }
  return;
}

} /* extern "C" */
