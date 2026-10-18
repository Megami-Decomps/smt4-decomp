/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f0c4` (_code @ 0x37f0c4, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0037f0c4_arg0 fn_0037f0c4_arg0;
struct fn_0037f0c4_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    unsigned char field_0xc; /* +0xc */
    unsigned char pad_0xd[0x3];
    undefined1 field_0x10; /* +0x10 */
    unsigned char pad_0x11[0xf];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x3];
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x1];
    unsigned char field_0x26; /* +0x26 */
    unsigned char pad_0x27[0x1];
    undefined4 field_0x28; /* +0x28 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002a1fc8. */
/* Supplied declaration required: FUN_002b4bf8. */
/* Supplied declaration required: FUN_002c4038. */


void FUN_0037f0c4(fn_0037f0c4_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1[1].field_0x24 != '\0') {
    param_1[1].field_0x26 = 1;
    temp_v0 = 0;
    if (*(int *)&param_1[4].field_0x20 != 0) {
      do {
        if (*(int *)((int)param_1 + temp_v0 * 0x340 + 0xd8) != 0) {
          FUN_002a1fc8(*(unsigned int *)&param_1[2].field_0xc);
          *(unsigned int *)((int)param_1 + temp_v0 * 0x340 + 0xd8) = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(unsigned int *)&param_1[4].field_0x20);
    }
    temp_v0 = 0;
    if (*(int *)&param_1[4].field_0x20 != 0) {
      do {
        if (*(int *)((int)param_1 + temp_v0 * 0x340 + 0x108) != 0) {
          FUN_002b4bf8();
          *(unsigned int *)((int)param_1 + temp_v0 * 0x340 + 0x108) = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(unsigned int *)&param_1[4].field_0x20);
    }
    *(unsigned int *)&param_1[2].field_0xc = 0;
    param_1->field_0xc = 0;
    param_1[1].field_0x24 = 0;
    FUN_002c4038(param_1);
    return;
  }
  return;
}
