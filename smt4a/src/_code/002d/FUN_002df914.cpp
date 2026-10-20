/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002df914` (_code @ 0x2df914, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bgmReleaseStopped(void);
int FUN_003d4c68(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int g_lmapMainState; /* 0x580238 */
extern unsigned int DAT_005f1628; /* 0x5f1628 */
extern signed char DAT_005f1749; /* 0x5f1749 */
extern signed char DAT_005f1776; /* 0x5f1776 */

extern int gameFlagIsSet(unsigned int);
extern int bgmGetStateById(unsigned int);
/* Supplied declaration required: bgmReleaseStopped. */
/* Supplied declaration required: FUN_003d4c68. */


void FUN_002df914(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_005f1776 == '\0') && (DAT_005f1749 != '\0')) &&
     (*(char *)(g_lmapMainState + 0x9e1) == '\0')) {
    DAT_005f1628 = 0x100003e;
    temp_v0 = gameFlagIsSet(0x137);
    if ((temp_v0 != 0) && (temp_v0 = gameFlagIsSet(0x189), temp_v0 == 0)) {
      DAT_005f1628 = 0x1000074;
      temp_v0 = gameFlagIsSet(0x147);
      if ((temp_v0 != 0) && (temp_v0 = gameFlagIsSet(0x171), temp_v0 == 0)) {
        DAT_005f1628 = 0x100003e;
      }
    }
    temp_v0 = bgmGetStateById(DAT_005f1628);
    if (temp_v0 != 0) {
      if (temp_v0 == 1 || temp_v0 == 2) {
        return;
      }
    }
    else {
      bgmReleaseStopped();
    }
    FUN_003d4c68(DAT_005f1628);
    return;
  }
  bgmReleaseStopped();
  DAT_005f1749 = 1;
  return;
}

} /* extern "C" */
