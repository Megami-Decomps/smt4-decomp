/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00379cfc` (_code @ 0x379cfc, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4f40(int, int);
int FUN_002b4f64(int, int);

typedef struct fn_00379cfc_arg0 fn_00379cfc_arg0;
struct fn_00379cfc_arg0 {
    unsigned char pad_0x0[0x4];
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x7];
    int field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    unsigned char pad_0x18[0x16c];
    undefined4 field_0x184; /* +0x184 */
};

/* Supplied declaration required: FUN_002b4f40. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);


void FUN_00379cfc(fn_00379cfc_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002baed8();
  temp_v1 = temp_v0;
  FUN_002b4f64(temp_v0,6);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x30;
  *(int *)(temp_v1 + 0x10) = param_1->field_0xc;
  *(int *)(temp_v1 + 0x14) = param_1->field_0x14 - param_1->field_0xc;
  FUN_002b4f40(temp_v0,temp_v1);
  param_1->field_0x14 = param_1->field_0xc;
  return;
}

} /* extern "C" */
