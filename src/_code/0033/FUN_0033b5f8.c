/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b5f8` (_code @ 0x33b5f8, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0033b5f8_arg0 fn_0033b5f8_arg0;
struct fn_0033b5f8_arg0 {
    unsigned char pad_0x0[0x88];
    int field_0x88; /* +0x88 */
    unsigned char pad_0x8c[0x1f34];
    int field_0x1fc0; /* +0x1fc0 */
    unsigned char pad_0x1fc4[0x34c];
    int field_0x2310; /* +0x2310 */
    int field_0x2314; /* +0x2314 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;


unsigned int FUN_0033b5f8(fn_0033b5f8_arg0 *param_1,unsigned int *param_2)

{
  int temp_v0;
  int temp_v1;
  
  do {
    while( 1 ) {
      if (param_1->field_0x2314 < 1) {
        return 0;
      }
      temp_v0 = param_1->field_0x2314 - 1;
      param_1->field_0x2314 = temp_v0;
      temp_v1 = param_1->field_0x2310;
      if (param_1->field_0x88 != 0) break;
      if ((*(int *)(temp_v1 + temp_v0 * 0x10) != 4) ||
         ((*(unsigned short *)(param_1->field_0x1fc0 + *(int *)(temp_v1 + temp_v0 * 0x10 + 4) * 0x288 + 0x1c6) &
          0x1c0) == 0)) {
        *param_2 = *(unsigned int *)(param_1->field_0x2310 + param_1->field_0x2314 * 0x10);
        param_2[1] = *(unsigned int *)(param_1->field_0x2310 + param_1->field_0x2314 * 0x10 + 4);
        param_2[2] = *(unsigned int *)(param_1->field_0x2310 + param_1->field_0x2314 * 0x10 + 8);
        param_2[3] = *(unsigned int *)(param_1->field_0x2310 + param_1->field_0x2314 * 0x10 + 0xc);
        return 1;
      }
    }
  } while (*(int *)(temp_v1 + temp_v0 * 0x10) != 5);
  *param_2 = *(unsigned int *)(param_1->field_0x2310 + param_1->field_0x2314 * 0x10);
  param_2[1] = *(unsigned int *)(param_1->field_0x2310 + param_1->field_0x2314 * 0x10 + 4);
  param_2[2] = *(unsigned int *)(param_1->field_0x2310 + param_1->field_0x2314 * 0x10 + 8);
  param_2[3] = *(unsigned int *)(param_1->field_0x2310 + param_1->field_0x2314 * 0x10 + 0xc);
  return 1;
}
