/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004638ac` (_code @ 0x4638ac, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004638ac_arg0 fn_004638ac_arg0;
struct fn_004638ac_arg0 {
    unsigned char pad_0x0[0x18];
    void *field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0xb];
    byte field_0x27; /* +0x27 */
    unsigned char pad_0x28[0x8];
    void *field_0x30; /* +0x30 */
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x1c];
    unsigned char field_0x51; /* +0x51 */
    unsigned char pad_0x52[0x2];
    undefined4 field_0x54; /* +0x54 */
    int field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
};

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_004639e4. */


unsigned int FUN_004638ac(fn_004638ac_arg0 *param_1,int param_2,int *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [4];
  
  if ((unsigned int)param_1->field_0x60 <= (unsigned int)(param_1->field_0x58 + param_2)) {
    do {
      param_2 = param_2 - (param_1->field_0x60 - param_1->field_0x58);
      if (param_1->field_0x27 != 0) {
        param_1->field_0x5c = 0;
        param_1->field_0x60 = *(unsigned int *)((int)param_1->field_0x18 + 0x10);
        param_1->field_0x58 = 0;
      }
      else if (*(char *)((int)param_1->field_0x18 + 8) != '\0') {
        param_1->field_0x5c = *(unsigned int *)((int)param_1->field_0x18 + 0xc);
        param_1->field_0x60 = *(unsigned int *)((int)param_1->field_0x18 + 0x10);
        param_1->field_0x58 = param_1->field_0x5c;
      }
      else {
        if (param_1->field_0x30 == (romwright_code *)0x0) {
          param_1->field_0x58 = param_1->field_0x60;
          param_1->field_0x51 = 1;
          return 0;
        }
        temp_v1[0] = param_1->field_0x54;
        temp_v0 = (*param_1->field_0x30)(temp_v1,*(unsigned int *)&param_1->field_0x34);
        if (temp_v0 == 0) {
          param_1->field_0x58 = param_1->field_0x60;
          param_1->field_0x51 = 1;
          return 0;
        }
        param_1->field_0x54 = temp_v1[0];
        FUN_004639e4(param_1);
        param_1->field_0x58 = param_1->field_0x5c;
      }
      *param_3 = *param_3 + 1;
    } while ((unsigned int)param_1->field_0x60 <= (unsigned int)(param_1->field_0x58 + param_2));
  }
  param_1->field_0x58 = param_1->field_0x58 + param_2;
  return 1;
}
