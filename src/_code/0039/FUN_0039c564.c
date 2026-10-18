/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c564` (_code @ 0x39c564, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0039c564_arg0 fn_0039c564_arg0;
struct fn_0039c564_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    int field_0x8; /* +0x8 */
    unsigned char pad_0xc[0x4];
    uint field_0x10; /* +0x10 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern signed char DAT_0049fb6d; /* 0x49fb6d */

/* Supplied declaration required: FUN_002313d4. */
/* Supplied declaration required: FUN_002333d4. */
extern int FUN_0026b7cc(void);
/* Supplied declaration required: FUN_002b85bc. */
extern unsigned int FUN_002bef70(int *);
extern unsigned int FUN_002bef7c(int *);
extern int FUN_002bf9f0(int *);


void FUN_0039c564(fn_0039c564_arg0 *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  
  if (param_1->field_0x8 != 0) {
    if (param_1->field_0x8 == 1) {
      piVar4 = &param_1[0x1b].field_0x8;
      temp_v0 = FUN_002bf9f0(piVar4);
      if ((temp_v0 != 0) && (temp_v0 = FUN_0026b7cc(), temp_v0 != 0)) {
        param_1->field_0x8 = 2;
        param_1->field_0x10 = param_1->field_0x10 | 2;
      }
      temp_v1 = FUN_002bef70(piVar4);
      temp_v2 = FUN_002bef7c(piVar4);
      FUN_002313d4(&param_1[0x11].field_0x10,temp_v2,temp_v1);
      return;
    }
  }
  else {
    FUN_002333d4(&param_1[0x12].field_0x10,1);
    if (DAT_0049fb6d == '\0') {
      FUN_002b85bc(0x1b);
    }
    param_1->field_0x10 = param_1->field_0x10 | 0x1000000;
    param_1->field_0x8 = 1;
  }
  return;
}
