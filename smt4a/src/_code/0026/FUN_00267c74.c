/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00267c74` (_code @ 0x267c74, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001654d8. */
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: FUN_004b1a00. */
/* Supplied declaration required: FUN_004b2e50. */
/* Supplied declaration required: FUN_004b40f4. */
/* Supplied declaration required: FUN_004b4f9c. */
extern int FUN_004b6b1c(int);


unsigned int FUN_00267c74(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = *(int *)(param_1 + 4);
  if ((temp_v3 != 0) && (temp_v0 = FUN_004b6b1c(temp_v3), temp_v0 != 0)) {
    if ((*(int *)(temp_v3 + 0x4364) < 9) && (*(int *)(temp_v3 + 0x4364) != 0)) {
      FUN_004b2e50(temp_v3,0);
    }
    temp_v0 = *(int *)(temp_v3 + 0x4364);
    if (temp_v0 != 0xb) {
      if (temp_v0 != 0x12) {
        if (temp_v0 == 0x13) {
          temp_v1 = FUN_001654d8(temp_v3 + 0x6b0);
          temp_v2 = FUN_001654e4(temp_v3 + 0x6b0);
          FUN_004b40f4(temp_v3,temp_v1,temp_v2);
        }
      }
      else {
        temp_v1 = FUN_001654d8(temp_v3 + 0xac);
        temp_v2 = FUN_001654e4(temp_v3 + 0xac);
        FUN_004b1a00(temp_v3,temp_v1,temp_v2);
      }
    }
    else {
      temp_v1 = FUN_001654d8();
      temp_v2 = FUN_001654e4(temp_v3 + 0x624);
      FUN_004b4f9c(temp_v3,temp_v1,temp_v2);
    }
  }
  return 0;
}
