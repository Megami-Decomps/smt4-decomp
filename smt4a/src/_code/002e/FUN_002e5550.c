/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5550` (_code @ 0x2e5550, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: SUB84 (SUBPIECE). */
/* Supplied declaration required: FUN_00101598. */
/* Supplied declaration required: FUN_001015aa. */
/* Supplied declaration required: FUN_001d2978. */


void FUN_002e5550(float *param_1,double *param_2)

{
/* irregular: 4 native warning(s); review required */
  float temp_v0;
  double temp_v1;
  double temp_v2;
  int temp_v3 [7];
  
  temp_v1 = *param_2;
  FUN_001d2978(SUB84(temp_v1,0),(int)((unsigned long long)temp_v1 >> 0x20),temp_v3);
  temp_v2 = 0.0;
  temp_v3[0] = temp_v3[0] + 0x7e;
  if ((temp_v3[0] < 1) && (temp_v1 != 0.0)) {
    temp_v0 = (float)temp_v1;
    if (temp_v0 == 0.0f) {
      FUN_00101598(2,0);
    }
  }
  else if (temp_v3[0] < 0xff) {
    temp_v0 = (float)temp_v1;
  }
  else {
    FUN_001015aa(2);
    if (temp_v2 <= temp_v1) {
      temp_v0 = INFINITY;
    }
    else {
      temp_v0 = -INFINITY;
    }
  }
  *param_1 = temp_v0;
  return;
}
