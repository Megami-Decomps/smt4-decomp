/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a3b30` (_code @ 0x3a3b30, 0x184 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003a3b30_arg0 fn_003a3b30_arg0;
struct fn_003a3b30_arg0 {
    unsigned char pad_0x0[0x10];
    int field_0x10; /* +0x10 */
    unsigned char pad_0x14[0x14c];
    int field_0x160; /* +0x160 */
    int field_0x164; /* +0x164 */
    int field_0x168; /* +0x168 */
    int field_0x16c; /* +0x16c */
    unsigned char pad_0x170[0x200];
    int field_0x370; /* +0x370 */
    int field_0x374; /* +0x374 */
    int field_0x378; /* +0x378 */
    unsigned char pad_0x37c[0x4e0];
    void *field_0x85c; /* +0x85c */
    unsigned char pad_0x860[0x154c4];
    unsigned char field_0x15d24; /* +0x15d24 */
    unsigned char pad_0x15d25[0x1b];
    undefined4 field_0x15d40; /* +0x15d40 */
    undefined4 field_0x15d44; /* +0x15d44 */
};

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002874e4. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_00292eb0. */
/* Supplied declaration required: FUN_0029a3c4. */
/* Supplied declaration required: FUN_002a7540. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002a7bd4. */
/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c0128. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_003a3b30(fn_003a3b30_arg0 *param_1)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  
  if (param_1->field_0x85c != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1->field_0x85c + 4))();
    param_1->field_0x85c = (void *)0x0;
  }
  if (param_1->field_0x378 != 0) {
    FUN_002a755c();
    param_1->field_0x378 = 0;
  }
  if (param_1->field_0x370 != 0) {
    FUN_002c4360();
    param_1->field_0x370 = 0;
  }
  if (param_1->field_0x374 != 0) {
    FUN_002c4360();
    param_1->field_0x374 = 0;
  }
  FUN_002a7bd4();
  temp_v0 = FUN_002bf41c(param_1->field_0x15d40);
  if (temp_v0 != 0) {
    FUN_002c45b8(param_1->field_0x15d40,0);
  }
  temp_v0 = FUN_002bf41c(param_1->field_0x15d44);
  if (temp_v0 != 0) {
    FUN_002c45b8(param_1->field_0x15d44,0);
  }
  FUN_002aeb2c(0x2b,0);
  FUN_002aea7c(0x2b);
  if (param_1->field_0x168 != 0) {
    FUN_002a755c();
    param_1->field_0x168 = 0;
  }
  if (param_1->field_0x16c != 0) {
    FUN_002a755c();
    param_1->field_0x16c = 0;
  }
  if (param_1->field_0x160 != 0) {
    FUN_002c4360();
    param_1->field_0x160 = 0;
  }
  if (param_1->field_0x164 != 0) {
    FUN_002c4360();
    param_1->field_0x164 = 0;
  }
  if (*(int *)&param_1->field_0x15d24 != 0) {
    FUN_0029a3c4(0);
    FUN_00292eb0();
  }
  if (param_1->field_0x10 != 1) {
    FUN_00291be8();
  }
  FUN_00291a5c();
  FUN_002874e4();
  FUN_002c0128();
  FUN_002a7540(1);
  return;
}
