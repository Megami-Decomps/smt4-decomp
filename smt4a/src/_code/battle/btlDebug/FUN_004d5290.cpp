/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d5290` (_code @ 0x4d5290, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(...);
int FUN_00280328(...);
int FUN_002ea508(...);
int FUN_00317508(...);
int asdListBoxAddItems(...);
int asdListBoxSetToggleItem(...);
int FUN_00340edc(...);
int FUN_003592dc(...);

typedef struct fn_004d5290_arg0 fn_004d5290_arg0;
struct fn_004d5290_arg0 {
    void *field_0x0; /* +0x0 */
    unsigned char pad_0x4[0xc];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3f];
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    unsigned char pad_0x60[0x8];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0xc];
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_00571508; /* 0x571508 */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_00280328. */
/* Supplied declaration required: FUN_002ea508. */
/* Supplied declaration required: FUN_00317508. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: asdListBoxSetToggleItem. */
/* Supplied declaration required: FUN_00340edc. */
/* Supplied declaration required: FUN_003592dc. */


void FUN_004d5290(fn_004d5290_arg0 *param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = jobIsValid(*(unsigned int *)&param_1->field_0x10);
  if (temp_v0 != 0) {
    FUN_003592dc(*(unsigned int *)&param_1->field_0x10);
    jobStop(*(unsigned int *)&param_1->field_0x10,0);
  }
  temp_v1 = *(unsigned int *)(param_2 + 0x80);
  FUN_00280328(temp_v1,0x75,0);
  *(unsigned int *)&param_1->field_0x10 = temp_v1;
  asdListBoxAddItems();
  FUN_00317508(*(unsigned int *)&param_1->field_0x10,1);
  FUN_002ea508(*(unsigned int *)&param_1->field_0x10,"Camera Ctrl");
  asdListBoxSetToggleItem(*(unsigned int *)&param_1->field_0x10,0,
               (*(unsigned int *)(DAT_00571508 + 0x64c) & 0x10000000) >> 0x1c);
  FUN_00340edc(*(unsigned int *)&param_1->field_0x10,1,0xfffffc19,999);
  FUN_00340edc(*(unsigned int *)&param_1->field_0x10,2,0xfffffc19,999);
  FUN_00340edc(*(unsigned int *)&param_1->field_0x10,3,0xfffffc19,999);
  FUN_00340edc(*(unsigned int *)&param_1->field_0x10,4,0,0x168);
  FUN_00340edc(*(unsigned int *)&param_1->field_0x10,5,0xffffffa6,0x5a);
  asdListBoxSetToggleItem(*(unsigned int *)&param_1->field_0x10,6,
               (*(unsigned int *)(DAT_00571508 + 0x64c) & 0x20000000) >> 0x1d);
  return;
}

} /* extern "C" */
