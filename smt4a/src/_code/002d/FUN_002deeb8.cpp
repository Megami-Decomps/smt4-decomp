/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002deeb8` (_code @ 0x2deeb8, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int *DAT_005738e8; /* 0x5738e8 */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */


void FUN_002deeb8(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = jobGetWork();
  piVar1 = DAT_005738e8;
  if (DAT_005738e8 != (int *)0x0) {
    temp_v1 = *DAT_005738e8;
    while (piVar2 = DAT_005738e8, temp_v1 != 0) {
      if (*(int *)(temp_v1 + 0x878) == 0) {
        *DAT_005738e8 = *(int *)(temp_v1 + 0x874);
      }
      else {
        *(unsigned int *)(*(int *)(temp_v1 + 0x878) + 0x874) = *(unsigned int *)(temp_v1 + 0x874);
      }
      if (*(int *)(temp_v1 + 0x874) == 0) {
        piVar2[1] = *(int *)(temp_v1 + 0x878);
      }
      else {
        *(unsigned int *)(*(int *)(temp_v1 + 0x874) + 0x878) = *(unsigned int *)(temp_v1 + 0x878);
      }
      piVar2[2] = piVar2[2] - 1;
      asdMemFree();
      temp_v1 = *piVar1;
    }
    asdMemFree(DAT_005738e8);
    DAT_005738e8 = (int *)0x0;
  }
  temp_v1 = jobIsValid(*(unsigned int *)(temp_v0 + 0x70));
  if (temp_v1 != 0) {
    jobStop(*(unsigned int *)(temp_v0 + 0x70),0);
    return;
  }
  return;
}

} /* extern "C" */
