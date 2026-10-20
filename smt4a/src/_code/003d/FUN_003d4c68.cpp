/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d4c68` (_code @ 0x3d4c68, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d5520(unsigned int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00588fb0; /* 0x588fb0 */
extern unsigned int DAT_0061951c; /* 0x61951c */
extern unsigned int DAT_00619520; /* 0x619520 */
extern unsigned int DAT_00619524; /* 0x619524 */
extern unsigned int DAT_00619538; /* 0x619538 */
extern unsigned int DAT_0061953c; /* 0x61953c */
extern unsigned int DAT_00619540; /* 0x619540 */
extern unsigned int DAT_00619544; /* 0x619544 */
extern unsigned int DAT_00619558; /* 0x619558 */

extern int jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: FUN_003d5520. */


void FUN_003d4c68(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 == 0) {
    temp_v0 = jyoucyuGetTableEntry(1);
    if ((temp_v0 == 0) &&
       ((((DAT_00619538 & 2) != 0 && ((DAT_00619538 & 0x20) != 0)) ||
        ((DAT_00619558 & 2) != 0 && (DAT_00619558 & 0x20) != 0)))) {
      temp_v0 = jyoucyuGetTableEntry(1);
      if (temp_v0 == 0) {
        if ((DAT_00619538 & 2) != 0) {
          if ((DAT_00619538 & 0x20) != 0) {
            DAT_00619538 = (DAT_00619538 & 0xffffffdf) | 0x40;
            DAT_00619520 = 0x3c;
            DAT_00588fb0 = DAT_0061951c;
          }
          else if ((DAT_00619538 & 0x400) == 0) {
            DAT_00619524 = 0x1e;
            DAT_00619538 = DAT_00619538 | 8;
          }
        }
        if ((DAT_00619558 & 2) != 0) {
          if ((DAT_00619558 & 0x20) != 0) {
            DAT_00619558 = (DAT_00619558 & 0xffffffdf) | 0x40;
            DAT_00619540 = 0x3c;
            DAT_00588fb0 = DAT_0061953c;
          }
          else if ((DAT_00619558 & 0x400) == 0) {
            DAT_00619544 = 0x1e;
            DAT_00619558 = DAT_00619558 | 8;
            return;
          }
        }
      }
    }
    else {
      temp_v0 = jyoucyuGetTableEntry(1);
      if (temp_v0 == 0) {
        FUN_003d5520(param_1,0,0x3c);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
