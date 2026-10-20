/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c9edc` (_code @ 0x2c9edc, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025c2d0(int, int);
int asdMemFree(int);
int jobStop(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00435ce8; /* 0x435ce8 */
extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_0025c2d0. */
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_002c9edc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = jobGetWork();
  if (DAT_00439ca8 != 0) {
    FUN_0025c2d0(DAT_00439ca8,0);
  }
  if (DAT_00435ce8 != 0) {
    if (temp_v0 != 0) {
      piVar2 = (int *)(temp_v0 + 0x1e98);
      temp_v1 = 0;
      if (*piVar2 != 0) {
        temp_v2 = 4;
        do {
          temp_v1 = temp_v2 + 1;
          temp_v2 = *piVar2 + temp_v2 * 0x114;
          temp_v3 = *(unsigned int *)(temp_v2 + 0x50);
          if ((temp_v3 & 1) != 0 && (temp_v3 & 0x80) != 0) {
            *(unsigned int *)(temp_v2 + 0x50) = temp_v3 & 0xfffffff7;
          }
          temp_v2 = temp_v1;
        } while (temp_v1 < 0x36);
      }
      if (temp_v0 != 0) {
        temp_v1 = *piVar2;
      }
      if (temp_v0 != 0 && temp_v1 != 0) {
        temp_v1 = 0;
        do {
          temp_v2 = temp_v1 + 1;
          temp_v1 = *piVar2 + temp_v1 * 0x114;
          *(unsigned int *)(temp_v1 + 100) = *(unsigned int *)(temp_v1 + 0x68);
          temp_v1 = temp_v2;
        } while (temp_v2 < 0x6d);
      }
    }
    *(unsigned int *)(temp_v0 + 0x44a8) = *(unsigned int *)(temp_v0 + 0x44a8) & 0xfff7ffff;
    asdMemFree(DAT_00435ce8);
    DAT_00435ce8 = 0;
  }
  jobStop(*(unsigned int *)(temp_v0 + 0x58),0);
  return;
}

} /* extern "C" */
