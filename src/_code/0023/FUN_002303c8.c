/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002303c8` (_code @ 0x2303c8, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002303c8_arg0 fn_002303c8_arg0;
struct fn_002303c8_arg0 {
    unsigned char pad_0x0[0x10];
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x15d10];
    unsigned char field_0x15d24; /* +0x15d24 */
    unsigned char pad_0x15d25[0x3];
    undefined4 field_0x15d28; /* +0x15d28 */
    unsigned char pad_0x15d2c[0x1c];
    int field_0x15d48; /* +0x15d48 */
};

/* Supplied declaration required: FUN_002306ec. */
/* Supplied declaration required: FUN_0023077c. */
/* Supplied declaration required: FUN_0028c2a8. */
/* Supplied declaration required: FUN_00292f44. */
extern int FUN_0029a2d0(char *, unsigned int);
/* Supplied declaration required: FUN_0029a368. */
/* Supplied declaration required: FUN_0029a384. */
/* Supplied declaration required: FUN_0029a3c4. */
/* Supplied declaration required: FUN_0029c768. */
extern unsigned int FUN_002b66ec(void);


void FUN_002303c8(fn_002303c8_arg0 *param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  FUN_0028c2a8();
  if (param_1->field_0x10 == 1) {
    temp_v0 = 3;
  }
  else {
    temp_v0 = 7;
  }
  FUN_0029a3c4(temp_v0);
  FUN_00292f44(0);
  temp_v0 = FUN_002b66ec();
  FUN_0029c768(1);
  FUN_0029a384(temp_v0);
  FUN_0029a368(temp_v0);
  *(unsigned int *)&param_1->field_0x15d24 = 1;
  FUN_002306ec(1);
  FUN_0023077c(0);
  if (param_1->field_0x15d48 == 0) {
    temp_v1 = FUN_0029a2d0("player/pl_dammy.bam",7);
    param_1->field_0x15d48 = temp_v1;
  }
  param_1->field_0x15d28 = 0;
  return;
}
