/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c6f4c` (_code @ 0x2c6f4c, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002880a8(int);
int FUN_002c39a4(void);
int FUN_002c4f8c(int, unsigned int);

typedef struct fn_002c6f4c_arg0 fn_002c6f4c_arg0;
struct fn_002c6f4c_arg0 {
    unsigned char pad_0x0[0x18];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x3];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x50b];
    undefined4 field_0x528; /* +0x528 */
    void *field_0x52c; /* +0x52c */
    unsigned char pad_0x530[0xc4];
    byte field_0x5f4; /* +0x5f4 */
};

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_002880a8. */
/* Supplied declaration required: FUN_002c39a4. */
/* Supplied declaration required: FUN_002c4f8c. */


void FUN_002c6f4c(fn_002c6f4c_arg0 *param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  
  (**(romwright_code **)(*(int *)&param_1->field_0x18 * 0x18 + 0x472488))(param_1);
  *(int *)&param_1->field_0x1c = *(int *)&param_1->field_0x1c + 1;
  temp_v0 = *(char *)(DAT_0044ea00 + 0x5f4);
  if (temp_v0 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x002c6ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*(int *)&param_1->field_0x18 * 0x18 + 0x47248c))(param_1);
    return;
  }
  temp_v1 = *(unsigned int *)(DAT_0044ea00 + 0x6f8);
  FUN_002c39a4();
  (**(romwright_code **)(*(int *)&param_1->field_0x18 * 0x18 + 0x47248c))(param_1);
  if (temp_v0 != '\x03' && temp_v0 != '\x04') {
    if (temp_v0 == '\x05') {
      FUN_002c4f8c(DAT_0044ea00,temp_v1);
      return;
    }
    return;
  }
  FUN_002880a8(DAT_0044ea00);
  return;
}

} /* extern "C" */
