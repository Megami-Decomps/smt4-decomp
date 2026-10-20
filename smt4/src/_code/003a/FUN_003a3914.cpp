#include "romwright_types.h"

extern "C" {

int FUN_0028727c(void);
int FUN_002917b8(void);
int FUN_00291944(void);
int FUN_00292c0c(void);
int FUN_0029a128(int);
int FUN_002a71fc(int);
int scrScriptProcessDestroy(void);
int FUN_002a7890(void);
int asdTMTexTableFreeEntry(int);
int FUN_002ae898(int, int);
int FUN_002bff50(void);
int asdMemFree(void);
int jobStop(undefined4, int);

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
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_002a7890. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_002ae898. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_002bff50. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: jobStop. */


void FUN_003a3914(fn_003a3914_arg0 *param_1)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  
  int *obj = (int *)param_1->field_0x85c;
  if (obj != 0) {
    (**(romwright_code **)(*obj + 4))(obj);
    param_1->field_0x85c = 0;
  }
  if (param_1->field_0x378 != 0) {
    scrScriptProcessDestroy();
    param_1->field_0x378 = 0;
  }
  if (param_1->field_0x370 != 0) {
    asdMemFree();
    param_1->field_0x370 = 0;
  }
  if (param_1->field_0x374 != 0) {
    asdMemFree();
    param_1->field_0x374 = 0;
  }
  FUN_002a7890();
  temp_v0 = jobIsValid(param_1->field_0x15d40);
  if (temp_v0 != 0) {
    jobStop(param_1->field_0x15d40,0);
  }
  temp_v0 = jobIsValid(param_1->field_0x15d44);
  if (temp_v0 != 0) {
    jobStop(param_1->field_0x15d44,0);
  }
  FUN_002ae898(0x2b,0);
  asdTMTexTableFreeEntry(0x2b);
  if (param_1->field_0x168 != 0) {
    scrScriptProcessDestroy();
    param_1->field_0x168 = 0;
  }
  if (param_1->field_0x16c != 0) {
    scrScriptProcessDestroy();
    param_1->field_0x16c = 0;
  }
  if (param_1->field_0x160 != 0) {
    asdMemFree();
    param_1->field_0x160 = 0;
  }
  if (param_1->field_0x164 != 0) {
    asdMemFree();
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
