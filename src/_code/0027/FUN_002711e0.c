/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002711e0` (_code @ 0x2711e0, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: while (FLOAT_SUB). */
/* Supplied declaration required: FUN_0027f6fc. */


void FUN_002711e0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  float temp_v1;
  float temp_v2;
  int temp_v3;
  float temp_v4;
  unsigned int uStack_28;
  int temp_v5;
  float fStack_20;
  unsigned int uStack_1c;
  
  temp_v0 = 0;
  temp_v3 = *param_1;
  temp_v4 = (float)param_1[1];
  uStack_28 = param_1[2];
  temp_v2 = 1.0f;
  temp_v1 = 15.0f;
  temp_v5 = *param_1;
  fStack_20 = (float)param_1[1];
  uStack_1c = param_1[2];
  temp_v4 = temp_v4 + temp_v2;
  do {
    puVar1 = (unsigned int *)&temp_v3;
    FUN_0027f6fc(&temp_v3,&temp_v5);
    if (puVar1 != (unsigned int *)0x0) {
      *param_1 = temp_v3;
      *(float *)&param_1[1] = temp_v4;
      param_1[2] = uStack_28;
      return;
    }
    temp_v5 = temp_v3;
    fStack_20 = temp_v4;
    uStack_1c = uStack_28;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 6) {
      *param_1 = temp_v3;
      *(float *)&param_1[1] = temp_v4;
      param_1[2] = uStack_28;
      return;
    }
    if (temp_v0 == 0) {
      temp_v4 = temp_v4 + temp_v2;
      continue;
    }
    temp_v4 = temp_v4 - temp_v1;
  } while( 1 );
}
