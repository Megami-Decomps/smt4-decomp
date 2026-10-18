/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00193b40` (_code @ 0x193b40, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00193b40_arg0 fn_00193b40_arg0;
struct fn_00193b40_arg0 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    void *field_0x8; /* +0x8 */
    void *field_0xc; /* +0xc */
    unsigned char pad_0x10[0x8];
    int field_0x18; /* +0x18 */
};

/* Supplied declaration required: FUN_001a83f4. */
/* Supplied declaration required: FUN_001a8558. */
/* Supplied declaration required: FUN_001a86b4. */


void FUN_00193b40(fn_00193b40_arg0 *param_1,int *param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  void *pvVar2;
  int temp_v1;
  int temp_v2;
  
  pvVar2 = param_1->field_0x4;
  temp_v0 = '\0';
  if (pvVar2 != (void *)0x0) {
    temp_v0 = *(char *)((int)pvVar2 + 0x19);
  }
  if (pvVar2 != (void *)0x0) {
    temp_v0 = temp_v0 - '\x01';
  }
  else {
    temp_v0 = '\x01';
  }
  temp_v1 = param_1->field_0x18;
  FUN_001a83f4(temp_v1,*param_2,(~*(unsigned char *)(param_3 + 2) & 1) == 0,temp_v0);
  if (param_1->field_0x8 != (void *)0x0) {
    temp_v0 = *(char *)((int)param_1->field_0x8 + 0x19) - '\x01';
  }
  else {
    temp_v0 = '\x01';
  }
  temp_v2 = param_1->field_0x18 + 0x10;
  FUN_001a8558(temp_v2,temp_v1,(~*(unsigned char *)(param_3 + 2) & 2) == 0,temp_v0);
  if (param_1->field_0xc != (void *)0x0) {
    temp_v0 = *(char *)((int)param_1->field_0xc + 0x19) - '\x01';
  }
  else {
    temp_v0 = '\x01';
  }
  temp_v1 = param_1->field_0x18 + 0x20;
  FUN_001a86b4(temp_v1,temp_v2,(~*(unsigned char *)(param_3 + 2) & 4) == 0,temp_v0);
  *param_2 = temp_v1;
  return;
}
