/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311048` (_code @ 0x311048, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int navigationFinishReadyField(void);
int mapDepartClearExtra(void);
int mapGimicReset(void);

extern unsigned char DAT_00447518; /* 0x447518 */

/* Supplied declaration required: navigationFinishReadyField. */
/* Supplied declaration required: mapDepartClearExtra. */
extern int mapModelsPollDeferredDestroy(void);
/* Supplied declaration required: mapGimicReset. */
extern int mapGimicIsIdle(void);


unsigned int FUN_00311048(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if ((*(int *)((unsigned char *)&DAT_00447518 + 0x8)) != 0) {
    if ((*(int *)((unsigned char *)&DAT_00447518 + 0x8)) != 1) {
      if ((*(int *)((unsigned char *)&DAT_00447518 + 0x8)) != 2) {
        if (((*(int *)((unsigned char *)&DAT_00447518 + 0x8)) == 3) && (temp_v0 = mapModelsPollDeferredDestroy(), temp_v0 != 0)) {
          (*(int *)((unsigned char *)&DAT_00447518 + 0x8)) = 0;
          return 1;
        }
      }
      else {
        mapDepartClearExtra();
        (*(int *)((unsigned char *)&DAT_00447518 + 0x8)) = 3;
      }
    }
    else {
      temp_v0 = mapGimicIsIdle();
      if (temp_v0 != 0) {
        (*(int *)((unsigned char *)&DAT_00447518 + 0x8)) = 2;
      }
    }
  }
  else {
    navigationFinishReadyField();
    mapGimicReset();
    (*(int *)((unsigned char *)&DAT_00447518 + 0x8)) = 1;
  }
  return 0;
}

} /* extern "C" */
