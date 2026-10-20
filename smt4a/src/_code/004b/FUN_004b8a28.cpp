/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b8a28` (_code @ 0x4b8a28, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(...);
int FUN_001f4e20(...);
int FUN_0020401c(...);
int FUN_00215978(...);
int FUN_00284f90(...);
int FUN_002a49e4(...);
int FUN_0047e38c(...);
int FUN_0047e3e4(...);
int FUN_004b7d88(...);

typedef struct fn_004b8a28_arg0 fn_004b8a28_arg0;
struct fn_004b8a28_arg0 {
    unsigned char pad_0x0[0x20];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0x7];
    undefined4 field_0x28; /* +0x28 */
    int field_0x2c; /* +0x2c */
    unsigned char pad_0x30[0xa58];
    undefined1 field_0xa88; /* +0xa88 */
    unsigned char pad_0xa89[0x68f];
    void *field_0x1118; /* +0x1118 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00570260; /* 0x570260 */

/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001f4e20. */
/* Supplied declaration required: FUN_0020401c. */
/* Supplied declaration required: FUN_00215978. */
/* Supplied declaration required: FUN_00284f90. */
/* Supplied declaration required: FUN_002a49e4. */
/* Supplied declaration required: FUN_0047e38c. */
/* Supplied declaration required: FUN_0047e3e4. */
extern int FUN_0047e4e4(int);
/* Supplied declaration required: FUN_004b7d88. */


void FUN_004b8a28(fn_004b8a28_arg0 *param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  
  if (param_1->field_0x2c != 0) {
    if ((param_1->field_0x2c == 1) && (temp_v0 = FUN_0047e4e4(DAT_00570260 + 0xa8), temp_v0 != 0)) {
      FUN_0047e3e4(DAT_00570260 + 0xa8);
      FUN_004b7d88(param_1);
      FUN_00215978(0);
      FUN_001f4e20(0);
      FUN_002a49e4(*(unsigned int *)&param_1[1].field_0x20,
                   *(unsigned char *)((int)param_1->field_0x1118 + 0x3f));
      param_1->field_0x2c = 0;
      param_1->field_0x28 = 5;
      param_1->field_0xa88 = 0;
      FUN_0020401c((int)param_1->field_0x1118 + 2);
      FUN_00284f90(1);
      return;
    }
  }
  else {
    FUN_0047e38c(DAT_00570260 + 0xa8);
    FUN_001681cc(0xa0);
    param_1->field_0x2c = 1;
  }
  return;
}

} /* extern "C" */
