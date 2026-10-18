/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cdbd4` (_code @ 0x4cdbd4, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004cdbd4_arg0 fn_004cdbd4_arg0;
struct fn_004cdbd4_arg0 {
    unsigned char pad_0x0[0x10];
    undefined4 field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x4];
    undefined4 field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x57c];
    undefined4 field_0x598; /* +0x598 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_002a4b60(void);
/* Supplied declaration required: FUN_0034913c. */
extern int FUN_0034919c(void);
extern int FUN_00357bc8(unsigned int, char *);
/* Supplied declaration required: FUN_00388758. */
/* Supplied declaration required: FUN_004ce300. */
extern int FUN_004ced50(fn_004cdbd4_arg0 *);


void FUN_004cdbd4(fn_004cdbd4_arg0 *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00224880(param_1->field_0x18);
  if (temp_v0 == 2) {
    FUN_0034913c();
    temp_v0 = FUN_002a4b60();
    if (temp_v0 != 0) {
      temp_v0 = FUN_0034919c();
      if (temp_v0 != 0) {
        FUN_00388758(0);
      }
      temp_v0 = FUN_00357bc8(param_1->field_0x10,"fountian_top");
      if (-1 < temp_v0) {
        FUN_00275f44(param_1->field_0x18);
      }
      temp_v1 = 5;
    }
    else {
      param_1->field_0x598 = 7;
      temp_v0 = FUN_004ced50(param_1);
      if (temp_v0 != 0) {
        param_1->field_0x598 = 8;
        FUN_004ce300(param_1);
        return;
      }
      temp_v0 = FUN_0034919c();
      if (temp_v0 != 0) {
        FUN_00388758(0);
      }
      temp_v0 = FUN_00357bc8(param_1->field_0x10,"fountian_no_healing");
      if (-1 < temp_v0) {
        FUN_00275f44(param_1->field_0x18);
      }
      temp_v1 = 10;
    }
    param_1->field_0x598 = temp_v1;
  }
  return;
}
