/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00420f08` (_code @ 0x420f08, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a79e8(...);
int FUN_003fd7c0(...);
int FUN_003fd924(...);
int FUN_0040619c(...);
int FUN_00421858(...);
int ownerSlotSetText(...);

typedef struct fn_00420f08_arg0 fn_00420f08_arg0;
struct fn_00420f08_arg0 {
    unsigned char pad_0x0[0x8];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x23];
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x57];
    undefined4 field_0x84; /* +0x84 */
    undefined4 field_0x88; /* +0x88 */
    unsigned char pad_0x8c[0x4];
    void *field_0x90; /* +0x90 */
    unsigned char pad_0x94[0x10];
    undefined1 field_0xa4; /* +0xa4 */
    unsigned char pad_0xa5[0x167];
    void *field_0x20c; /* +0x20c */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001a79e8. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fd924. */
extern unsigned int FUN_003fdadc(void);
/* Supplied declaration required: FUN_0040619c. */
/* Supplied declaration required: FUN_00421858. */
/* Supplied declaration required: ownerSlotSetText. */


void FUN_00420f08(fn_00420f08_arg0 *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  *(unsigned int *)&param_1->field_0x2c = 5;
  FUN_00421858(param_1);
  if (*(int *)&param_1->field_0x8 != 0) {
    temp_v0 = *(int *)(*(int *)&param_1->field_0x8 + 8);
    FUN_0040619c(temp_v0,2);
    if (temp_v0 != 0) {
      temp_v1 = FUN_003fdadc();
      temp_v2 = temp_v0;
      ownerSlotSetText(temp_v0,temp_v1);
      if (temp_v2 != 0xffff) {
        FUN_003fd924(temp_v0,temp_v2,2);
      }
      temp_v2 = temp_v0;
      FUN_001a79e8(temp_v0,temp_v1);
      if (temp_v2 != 0xffff) {
        FUN_003fd7c0(temp_v0,temp_v2,2);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
