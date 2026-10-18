/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027e108` (_code @ 0x27e108, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0027e108_arg0 fn_0027e108_arg0;
struct fn_0027e108_arg0 {
    unsigned char pad_0x0[0x88];
    int field_0x88; /* +0x88 */
    unsigned char pad_0x8c[0x1f34];
    int field_0x1fc0; /* +0x1fc0 */
    unsigned char pad_0x1fc4[0x34c];
    int field_0x2310; /* +0x2310 */
    int field_0x2314; /* +0x2314 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;


unsigned int FUN_0027e108(fn_0027e108_arg0 *param_1)

{
  int temp_v0;
  int temp_v1;
  
  if (0 < param_1->field_0x2314) {
    temp_v0 = 0;
    do {
      temp_v1 = *(int *)(param_1->field_0x2310 + temp_v0 * 0x10);
      if (param_1->field_0x88 != 0) {
        if (temp_v1 == 5) {
          return 1;
        }
      }
      else {
        if (temp_v1 != 4) {
          return 1;
        }
        if ((*(unsigned short *)
              (param_1->field_0x1fc0 +
              *(int *)(param_1->field_0x2310 + temp_v0 * 0x10 + 4) * 0x288 + 0x1c6) & 0x1c0) == 0) {
          return 1;
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < param_1->field_0x2314);
  }
  return 0;
}
