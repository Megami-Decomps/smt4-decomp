/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d5a70` (_code @ 0x4d5a70, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_004d5a70_arg0 fn_004d5a70_arg0;
struct fn_004d5a70_arg0 {
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
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int DAT_00571508; /* 0x571508 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_00280328. */
/* Supplied declaration required: FUN_002ea508. */
/* Supplied declaration required: FUN_00317508. */
/* Supplied declaration required: FUN_0032c1bc. */
/* Supplied declaration required: FUN_0032c450. */
/* Supplied declaration required: FUN_00340edc. */
/* Supplied declaration required: FUN_003592dc. */


void FUN_004d5a70(fn_004d5a70_arg0 *param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_00163e40(*(unsigned int *)&param_1->field_0x10);
  if (temp_v0 != 0) {
    FUN_003592dc(*(unsigned int *)&param_1->field_0x10);
    FUN_001631d0(*(unsigned int *)&param_1->field_0x10,0);
  }
  temp_v1 = *(unsigned int *)(param_2 + 0x80);
  FUN_00280328(temp_v1,0x75,0);
  *(unsigned int *)&param_1->field_0x10 = temp_v1;
  FUN_0032c1bc();
  FUN_00317508(*(unsigned int *)&param_1->field_0x10,1);
  FUN_002ea508(*(unsigned int *)&param_1->field_0x10,"Camera UpDown Menu");
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,0,(*(unsigned int *)(DAT_00571508 + 0x64c) & 0x20) >> 5);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,1,(*(unsigned int *)(DAT_00571508 + 0x64c) & 0x40) >> 6);
  FUN_0032c450(*(unsigned int *)&param_1->field_0x10,2,(*(unsigned int *)(DAT_00571508 + 0x64c) & 0x80) >> 7);
  FUN_00340edc(*(unsigned int *)&param_1->field_0x10,3,0xfffffff6,10);
  FUN_00340edc(*(unsigned int *)&param_1->field_0x10,4,0,10);
  FUN_00340edc(*(unsigned int *)&param_1->field_0x10,5,0xfffffc19,999);
  FUN_00340edc(*(unsigned int *)&param_1->field_0x10,6,0xfffffc19,999);
  FUN_00340edc(*(unsigned int *)&param_1->field_0x10,7,0xfffffc19,999);
  return;
}
