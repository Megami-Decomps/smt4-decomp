/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ef98` (_code @ 0x20ef98, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(...);
int jobStop(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int *DAT_00435d78; /* 0x435d78 */

extern int jobIsValid(unsigned int);
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_0020ef98(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = jobGetWork();
  piVar1 = DAT_00435d78;
  if (DAT_00435d78 != (int *)0x0) {
    temp_v1 = *DAT_00435d78;
    while (piVar2 = DAT_00435d78, temp_v1 != 0) {
      if (*(int *)(temp_v1 + 0x2a8) == 0) {
        *DAT_00435d78 = *(int *)(temp_v1 + 0x2a4);
      }
      else {
        *(unsigned int *)(*(int *)(temp_v1 + 0x2a8) + 0x2a4) = *(unsigned int *)(temp_v1 + 0x2a4);
      }
      if (*(int *)(temp_v1 + 0x2a4) == 0) {
        piVar2[1] = *(int *)(temp_v1 + 0x2a8);
      }
      else {
        *(unsigned int *)(*(int *)(temp_v1 + 0x2a4) + 0x2a8) = *(unsigned int *)(temp_v1 + 0x2a8);
      }
      piVar2[2] = piVar2[2] - 1;
      asdMemFree();
      temp_v1 = *piVar1;
    }
    asdMemFree(DAT_00435d78);
    DAT_00435d78 = (int *)0x0;
  }
  temp_v1 = jobIsValid(*(unsigned int *)(temp_v0 + 0x4c));
  if (temp_v1 != 0) {
    jobStop(*(unsigned int *)(temp_v0 + 0x4c),0);
    return;
  }
  return;
}

} /* extern "C" */
