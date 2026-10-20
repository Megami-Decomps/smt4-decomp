/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a3914` (_code @ 0x3a3914, 0x184 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028727c(void);
int FUN_002917b8(void);
int FUN_00291944(void);
int FUN_00292c0c(void);
int FUN_0029a128(int);
int FUN_002a71fc(int);
int FUN_002a7218(void);
int FUN_002a7890(void);
int FUN_002ae7e8(int);
int FUN_002ae898(int, int);
int FUN_002bff50(void);
int FUN_002c415c(void);
int FUN_002c43b4(undefined4, int);

typedef struct fn_003a3914_arg0 fn_003a3914_arg0;
struct fn_003a3914_arg0 {
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

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0028727c. */
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_00292c0c. */
/* Supplied declaration required: FUN_0029a128. */
/* Supplied declaration required: FUN_002a71fc. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002a7890. */
/* Supplied declaration required: FUN_002ae7e8. */
/* Supplied declaration required: FUN_002ae898. */
extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_003a3914(fn_003a3914_arg0 *param_1)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  
  if (param_1->field_0x85c != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1->field_0x85c + 4))();
    param_1->field_0x85c = (void *)0x0;
  }
  if (param_1->field_0x378 != 0) {
    FUN_002a7218();
    param_1->field_0x378 = 0;
  }
  if (param_1->field_0x370 != 0) {
    FUN_002c415c();
    param_1->field_0x370 = 0;
  }
  if (param_1->field_0x374 != 0) {
    FUN_002c415c();
    param_1->field_0x374 = 0;
  }
  FUN_002a7890();
  temp_v0 = FUN_002bf244(param_1->field_0x15d40);
  if (temp_v0 != 0) {
    FUN_002c43b4(param_1->field_0x15d40,0);
  }
  temp_v0 = FUN_002bf244(param_1->field_0x15d44);
  if (temp_v0 != 0) {
    FUN_002c43b4(param_1->field_0x15d44,0);
  }
  FUN_002ae898(0x2b,0);
  FUN_002ae7e8(0x2b);
  if (param_1->field_0x168 != 0) {
    FUN_002a7218();
    param_1->field_0x168 = 0;
  }
  if (param_1->field_0x16c != 0) {
    FUN_002a7218();
    param_1->field_0x16c = 0;
  }
  if (param_1->field_0x160 != 0) {
    FUN_002c415c();
    param_1->field_0x160 = 0;
  }
  if (param_1->field_0x164 != 0) {
    FUN_002c415c();
    param_1->field_0x164 = 0;
  }
  if (*(int *)&param_1->field_0x15d24 != 0) {
    FUN_0029a128(0);
    FUN_00292c0c();
  }
  if (param_1->field_0x10 != 1) {
    FUN_00291944();
  }
  FUN_002917b8();
  FUN_0028727c();
  FUN_002bff50();
  FUN_002a71fc(1);
  return;
}

} /* extern "C" */
