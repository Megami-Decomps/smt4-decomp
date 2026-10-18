/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001904c8` (_code @ 0x1904c8, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001904c8_arg0 fn_001904c8_arg0;
struct fn_001904c8_arg0 {
    unsigned char pad_0x0[0x38];
    void *field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0x48];
    void *field_0x84; /* +0x84 */
    unsigned char pad_0x88[0x48];
    void *field_0xd0; /* +0xd0 */
    unsigned char pad_0xd4[0x38];
    uint field_0x10c; /* +0x10c */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;


unsigned int FUN_001904c8(fn_001904c8_arg0 *param_1,unsigned int *param_2,int param_3,int param_4)

{
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = *param_2;
  if ((temp_v0 & 0x1f) == 0) {
    temp_v1 = (param_4 + 3U) & 0xfffffffc;
    puVar2 = param_1->field_0x84;
    if ((void **)puVar2 != &param_1->field_0x84) {
      do {
        puVar2[-3] = temp_v0;
        puVar2[-2] = temp_v1;
        puVar2 = (unsigned int *)*puVar2;
        temp_v0 = temp_v0 + temp_v1;
      } while ((void **)puVar2 != &param_1->field_0x84);
    }
    puVar2 = param_1->field_0x38;
    if ((void **)puVar2 != &param_1->field_0x38) {
      do {
        puVar2[-3] = temp_v0;
        puVar2[-2] = temp_v1;
        puVar2 = (unsigned int *)*puVar2;
        temp_v0 = temp_v0 + temp_v1;
      } while ((void **)puVar2 != &param_1->field_0x38);
    }
    puVar2 = param_1->field_0xd0;
    if ((void **)puVar2 != &param_1->field_0xd0) {
      do {
        puVar2[-3] = temp_v0;
        puVar2[-2] = temp_v1;
        puVar2 = (unsigned int *)*puVar2;
        temp_v0 = temp_v0 + temp_v1;
      } while ((void **)puVar2 != &param_1->field_0xd0);
    }
    param_1->field_0x10c = temp_v1;
    if ((int)(temp_v0 - param_3) < 1) {
      return 1;
    }
  }
  return 0;
}
