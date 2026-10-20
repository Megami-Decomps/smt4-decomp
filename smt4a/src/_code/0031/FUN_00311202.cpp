/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00311202` (_code @ 0x311202, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00113ed0(void);

typedef struct fn_00311202_arg0 fn_00311202_arg0;
struct fn_00311202_arg0 {
    undefined1 field_0x0; /* +0x0 */
    unsigned char pad_0x1[0x3b];
    int field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0x8];
    unsigned char field_0x48; /* +0x48 */
    unsigned char pad_0x49[0x33];
    int field_0x7c; /* +0x7c */
};

extern int FUN_0010ef7a(int, unsigned int);
/* Supplied declaration required: FUN_00113ed0. */
extern int operatorNew(unsigned int);
extern int FUN_002e7614(int, unsigned int);


unsigned char * FUN_00311202(fn_00311202_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (param_1->field_0x3c != 0) {
    if (*(int *)(param_1 + 1) != 0) {
      temp_v0 = FUN_0010ef7a(*(int *)(param_1 + 1),*(unsigned int *)&param_1->field_0x48);
    }
    else {
      temp_v0 = operatorNew(0x20);
      if (temp_v0 == 0) {
        return (unsigned char *)0x0;
      }
      temp_v0 = FUN_002e7614(temp_v0,*(unsigned int *)&param_1->field_0x48);
    }
    if (temp_v0 != 0) {
      param_1->field_0x0 = 1;
      FUN_00113ed0();
      return &param_1->field_0x0;
    }
  }
  else {
    param_1->field_0x7c = param_1->field_0x7c + 1;
  }
  return (unsigned char *)0x0;
}

} /* extern "C" */
