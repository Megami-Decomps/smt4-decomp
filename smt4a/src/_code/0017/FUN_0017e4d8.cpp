/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017e4d8` (_code @ 0x17e4d8, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int globalCriticalSectionEnterForward(void);
int globalCriticalSectionLeaveForward(void);
int FUN_001963e0(void);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0061a481; /* 0x61a481 */
extern unsigned char DAT_0061a482; /* 0x61a482 */
extern unsigned char DAT_0061a488; /* 0x61a488 */
extern int DAT_0061a510; /* 0x61a510 */

/* Supplied declaration required: globalCriticalSectionEnterForward. */
/* Supplied declaration required: globalCriticalSectionLeaveForward. */
/* Supplied declaration required: FUN_001963e0. */


void FUN_0017e4d8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  romwright_code *UNRECOVERED_JUMPTABLE;
  int unaff_r7;
  int temp_v2;
  
  temp_v0 = DAT_0061a510;
  UNRECOVERED_JUMPTABLE = (romwright_code *)0x0;
  temp_v2 = *(int *)(DAT_0061a510 + 0x18) + *(int *)(DAT_0061a510 + 0x28) * 0x1c;
  globalCriticalSectionEnterForward();
  temp_v1 = *(int *)(temp_v0 + 0x28) + 1;
  *(int *)(temp_v0 + 0x28) = temp_v1;
  if ((*(romwright_code **)(temp_v0 + 0x38) != (romwright_code *)0x0) &&
     ((*(char *)(temp_v2 + 1) != '\0' ||
      ((temp_v1 == *(int *)(temp_v0 + 0x20) && (*(char *)(temp_v0 + 0x3c) != '\0')))))) {
    UNRECOVERED_JUMPTABLE = *(romwright_code **)(temp_v0 + 0x38);
    unaff_r7 = temp_v1;
  }
  if (*(char *)(temp_v2 + 2) != '\0') {
    DAT_0061a482 = 0;
    DAT_0061a488 = 0;
    DAT_0061a481 = 0;
  }
  else if (temp_v1 >= *(int *)(temp_v0 + 0x20)) {
    DAT_0061a481 = 0;
  }
  else {
    FUN_001963e0();
  }
  globalCriticalSectionLeaveForward();
  if (UNRECOVERED_JUMPTABLE != (romwright_code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0017e57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(unaff_r7);
    return;
  }
  return;
}

} /* extern "C" */
