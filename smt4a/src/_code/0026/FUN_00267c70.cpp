/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00267c70` (_code @ 0x267c74, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int vec2GetXInt(...);
int FUN_004b1a00(int, unsigned int, unsigned int);
int FUN_004b2e50(int, int);
int FUN_004b40f4(int, unsigned int, unsigned int);
int FUN_004b4f9c(int, unsigned int, unsigned int);

/* Supplied declaration required: vec2GetXInt. */
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: FUN_004b1a00. */
/* Supplied declaration required: FUN_004b2e50. */
/* Supplied declaration required: FUN_004b40f4. */
/* Supplied declaration required: FUN_004b4f9c. */
extern int FUN_004b6b1c(int);


unsigned int FUN_00267c70(int param_1)

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
          temp_v1 = vec2GetXInt(temp_v3 + 0x6b0);
          temp_v2 = vec2GetYInt(temp_v3 + 0x6b0);
          FUN_004b40f4(temp_v3,temp_v1,temp_v2);
        }
      }
      else {
        temp_v1 = vec2GetXInt(temp_v3 + 0xac);
        temp_v2 = vec2GetYInt(temp_v3 + 0xac);
        FUN_004b1a00(temp_v3,temp_v1,temp_v2);
      }
    }
    else {
      temp_v1 = vec2GetXInt();
      temp_v2 = vec2GetYInt(temp_v3 + 0x624);
      FUN_004b4f9c(temp_v3,temp_v1,temp_v2);
    }
  }
  return 0;
}

} /* extern "C" */
