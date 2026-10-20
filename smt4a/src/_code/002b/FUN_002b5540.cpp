/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5540` (_code @ 0x2b5540, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_005f1ab4; /* 0x5f1ab4 */
extern int DAT_005f1ab8; /* 0x5f1ab8 */

extern int randRange(unsigned int);


unsigned int FUN_002b5540(void)

{
/* irregular: 1 goto(s) */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2 [5];
  
  temp_v0 = 0;
  temp_v2[0] = 0;
  temp_v2[1] = 0;
  temp_v2[2] = 0;
  temp_v2[3] = 0;
  if ((DAT_005f1ab4 == 0) || (temp_v0 = (unsigned int)(DAT_005f1ab8 != 0), DAT_005f1ab4 != 1)) {
    if (DAT_005f1ab8 != 1) {
      temp_v2[temp_v0] = 1;
      temp_v0 = temp_v0 + 1;
    }
    if (DAT_005f1ab4 != 2) goto LAB_002b55b0;
    if (DAT_005f1ab8 != 3) {
      temp_v2[temp_v0] = 3;
      temp_v0 = temp_v0 + 1;
    }
  }
  else {
LAB_002b55b0:
    if (DAT_005f1ab8 != 2) {
      temp_v2[temp_v0] = 2;
      temp_v0 = temp_v0 + 1;
    }
    if (DAT_005f1ab4 != 3) {
      if (DAT_005f1ab8 != 3) {
        temp_v2[temp_v0] = 3;
        temp_v0 = temp_v0 + 1;
      }
    }
  }
  temp_v1 = randRange((temp_v0 - 1) & 0xffff);
  if ((DAT_005f1ab4 != -1) || (DAT_005f1ab8 != -1)) {
    DAT_005f1ab8 = DAT_005f1ab4;
    DAT_005f1ab4 = temp_v2[temp_v1];
  }
  else {
    DAT_005f1ab4 = temp_v2[temp_v1];
  }
  return temp_v2[temp_v1];
}

} /* extern "C" */
