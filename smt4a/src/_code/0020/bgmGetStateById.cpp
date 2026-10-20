/* NON_MATCHING: romwright 0.5.0 decompilation of `bgmGetStateById` (_code @ 0x2009a8, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00619528; /* 0x619528 */
extern int DAT_0061952c; /* 0x61952c */
extern unsigned int DAT_00619538; /* 0x619538 */
extern int DAT_00619548; /* 0x619548 */
extern int DAT_0061954c; /* 0x61954c */
extern unsigned int DAT_00619558; /* 0x619558 */

extern int jyoucyuGetTableEntry(unsigned int);


unsigned int bgmGetStateById(int param_1)

{
  int temp_v0;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 != 0) {
    return 0;
  }
  if ((DAT_00619538 != 0) && ((DAT_00619538 & 1) != 0)) {
    if (DAT_00619528 == param_1) {
      if ((DAT_00619538 & 0x30) != 0) {
        return 3;
      }
      if (((DAT_00619538 & 2) != 0) && ((DAT_00619538 & 8) == 0)) {
        return 1;
      }
    }
    else if (DAT_0061952c == param_1) {
      return 3;
    }
  }
  if (DAT_00619558 == 0 || (DAT_00619558 & 1) == 0) {
    return 0;
  }
  if (DAT_00619548 == param_1) {
    if ((DAT_00619558 & 0x30) == 0) {
      if ((DAT_00619558 & 2) == 0) {
        return 0;
      }
      if ((DAT_00619558 & 8) == 0) {
        return 1;
      }
      return 0;
    }
  }
  else if (DAT_0061954c != param_1) {
    return 0;
  }
  return 3;
}

} /* extern "C" */
