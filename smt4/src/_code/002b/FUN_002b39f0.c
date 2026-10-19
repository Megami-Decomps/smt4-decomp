/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b39f0` (_code @ 0x2b39f0, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_004c62a1; /* 0x4c62a1 */
extern unsigned char DAT_004c62a2; /* 0x4c62a2 */
extern unsigned char DAT_004c62a8; /* 0x4c62a8 */
extern int DAT_004c6330; /* 0x4c6330 */

/* Supplied declaration required: FUN_0013b608. */
/* Supplied declaration required: FUN_0013b618. */
/* Supplied declaration required: FUN_002ba2b8. */


void FUN_002b39f0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  romwright_code *UNRECOVERED_JUMPTABLE;
  int unaff_r7;
  int temp_v2;
  
  temp_v0 = DAT_004c6330;
  UNRECOVERED_JUMPTABLE = (romwright_code *)0x0;
  temp_v2 = *(int *)(DAT_004c6330 + 0x18) + *(int *)(DAT_004c6330 + 0x28) * 0x1c;
  FUN_0013b608();
  temp_v1 = *(int *)(temp_v0 + 0x28) + 1;
  *(int *)(temp_v0 + 0x28) = temp_v1;
  if ((*(romwright_code **)(temp_v0 + 0x38) != (romwright_code *)0x0) &&
     ((*(char *)(temp_v2 + 1) != '\0' ||
      ((temp_v1 == *(int *)(temp_v0 + 0x20) && (*(char *)(temp_v0 + 0x3c) != '\0')))))) {
    UNRECOVERED_JUMPTABLE = *(romwright_code **)(temp_v0 + 0x38);
    unaff_r7 = temp_v1;
  }
  if (*(char *)(temp_v2 + 2) != '\0') {
    DAT_004c62a2 = 0;
    DAT_004c62a8 = 0;
    DAT_004c62a1 = 0;
  }
  else if (temp_v1 >= *(int *)(temp_v0 + 0x20)) {
    DAT_004c62a1 = 0;
  }
  else {
    FUN_002ba2b8();
  }
  FUN_0013b618();
  if (UNRECOVERED_JUMPTABLE != (romwright_code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002b3a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(unaff_r7);
    return;
  }
  return;
}
