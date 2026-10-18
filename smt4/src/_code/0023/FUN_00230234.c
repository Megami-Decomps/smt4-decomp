/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230234` (_code @ 0x230234, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00230234_arg0 fn_00230234_arg0;
struct fn_00230234_arg0 {
    unsigned char pad_0x0[0x10];
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x15d10];
    unsigned char field_0x15d24; /* +0x15d24 */
    unsigned char pad_0x15d25[0x3];
    undefined4 field_0x15d28; /* +0x15d28 */
    unsigned char pad_0x15d2c[0x1c];
    int field_0x15d48; /* +0x15d48 */
};

/* Supplied declaration required: FUN_00230558. */
/* Supplied declaration required: FUN_002305e8. */
/* Supplied declaration required: FUN_0028c040. */
/* Supplied declaration required: FUN_00292ca0. */
extern int FUN_0029a034(char *, unsigned int);
/* Supplied declaration required: FUN_0029a0cc. */
/* Supplied declaration required: FUN_0029a0e8. */
/* Supplied declaration required: FUN_0029a128. */
/* Supplied declaration required: FUN_0029c4c8. */
extern unsigned int FUN_002b63ac(void);


void FUN_00230234(fn_00230234_arg0 *param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  FUN_0028c040();
  if (param_1->field_0x10 == 1) {
    temp_v0 = 3;
  }
  else {
    temp_v0 = 7;
  }
  FUN_0029a128(temp_v0);
  FUN_00292ca0(0);
  temp_v0 = FUN_002b63ac();
  FUN_0029c4c8(1);
  FUN_0029a0e8(temp_v0);
  FUN_0029a0cc(temp_v0);
  *(unsigned int *)&param_1->field_0x15d24 = 1;
  FUN_00230558(1);
  FUN_002305e8(0);
  if (param_1->field_0x15d48 == 0) {
    temp_v1 = FUN_0029a034("player/pl_dammy.bam",7);
    param_1->field_0x15d48 = temp_v1;
  }
  param_1->field_0x15d28 = 0;
  return;
}
