/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d2124` (_code @ 0x4d2124, 0x168 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(...);
int FUN_00280328(...);
int FUN_002ea508(...);
int FUN_00317464(...);
int FUN_00317508(...);
int asdListBoxAddItems(...);
int FUN_0032c450(...);
int FUN_003592dc(...);

typedef struct fn_004d2124_arg0 fn_004d2124_arg0;
struct fn_004d2124_arg0 {
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

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int DAT_00571690; /* 0x571690 */
extern unsigned int DAT_00571694; /* 0x571694 */
extern unsigned int DAT_00571698; /* 0x571698 */
extern unsigned int DAT_0057169c; /* 0x57169c */
extern unsigned int DAT_005716c0; /* 0x5716c0 */
extern unsigned int DAT_005716c4; /* 0x5716c4 */
extern unsigned int DAT_005716d0; /* 0x5716d0 */
extern unsigned int DAT_005716d4; /* 0x5716d4 */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: FUN_00280328. */
/* Supplied declaration required: FUN_002ea508. */
/* Supplied declaration required: FUN_00317464. */
/* Supplied declaration required: FUN_00317508. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: FUN_0032c450. */
/* Supplied declaration required: FUN_003592dc. */


void FUN_004d2124(fn_004d2124_arg0 *param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
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
  FUN_002ea508(*(unsigned int *)&param_1->field_0x10,"btl Talk Menu");
  puVar3 = (unsigned int *)(param_2 + 0x45a8);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,0,
               (*(unsigned int *)(param_2 + 0x45ac) & DAT_00571694) != 0 || (DAT_00571690 & *puVar3) != 0);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,1,
               (DAT_0057169c & *(unsigned int *)(param_2 + 0x45ac)) != 0 || (*puVar3 & DAT_00571698) != 0);
  FUN_00317464(*(unsigned int *)&param_1->field_0x10,2,*(unsigned int *)(param_2 + 0x2364),0,600,0);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,3,
               (*(unsigned int *)(param_2 + 0x45a4) & DAT_005716c4) != 0 ||
               (*(unsigned int *)(param_2 + 0x45a0) & DAT_005716c0) != 0);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,4,
               (DAT_005716d0 & *puVar3) != 0 || (DAT_005716d4 & *(unsigned int *)(param_2 + 0x45ac)) != 0);
  return;
}

} /* extern "C" */
