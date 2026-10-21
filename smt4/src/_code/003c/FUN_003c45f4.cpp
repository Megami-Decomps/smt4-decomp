/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c45f4` (_code @ 0x3c45f4, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a358(...);
int asdListBoxSetItemMode3(...);
int asdListBoxSetByteValue(...);
int asdListBoxAddItems(...);
int asdListBoxCreateDefault(...);
int jobSetText(...);

typedef struct fn_003c45f4_arg0 fn_003c45f4_arg0;
struct fn_003c45f4_arg0 {
    void *field_0x0; /* +0x0 */
    undefined1 field_0x4; /* +0x4 */
    unsigned char pad_0x5[0xb];
    unsigned char field_0x10; /* +0x10 */
    unsigned char pad_0x11[0x3f];
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    void *field_0x5c; /* +0x5c */
    unsigned char pad_0x60[0x8];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0xc];
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
    unsigned char pad_0x84[0x190];
    undefined4 field_0x214; /* +0x214 */
};

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char DAT_00435e00; /* 0x435e00 */
extern unsigned char DAT_00435e01; /* 0x435e01 */
extern unsigned char DAT_00435e02; /* 0x435e02 */
extern unsigned char DAT_00435e03; /* 0x435e03 */
extern unsigned int DAT_00435e04; /* 0x435e04 */

/* Supplied declaration required: FUN_0022a358. */
/* Supplied declaration required: asdListBoxSetItemMode3. */
/* Supplied declaration required: asdListBoxSetByteValue. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: asdListBoxCreateDefault. */
/* Supplied declaration required: jobSetText. */


void FUN_003c45f4(fn_003c45f4_arg0 *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x5c);
  asdListBoxCreateDefault(temp_v0,0x73,0);
  *(unsigned int *)&param_1->field_0x10 = temp_v0;
  asdListBoxAddItems();
  asdListBoxSetByteValue(*(unsigned int *)&param_1->field_0x10,1);
  jobSetText(*(unsigned int *)&param_1->field_0x10,"btl Panel Menu");
  asdListBoxSetItemMode3(*(unsigned int *)&param_1->field_0x10,0,DAT_00435e00,0,0xff,0);
  asdListBoxSetItemMode3(*(unsigned int *)&param_1->field_0x10,1,DAT_00435e01,0,0xff,0);
  asdListBoxSetItemMode3(*(unsigned int *)&param_1->field_0x10,2,DAT_00435e02,0,0xff,0);
  asdListBoxSetItemMode3(*(unsigned int *)&param_1->field_0x10,3,DAT_00435e03,0,0xff,0);
  asdListBoxSetItemMode3(*(unsigned int *)&param_1->field_0x10,4,DAT_00435e04,0,0x78,0);
  FUN_0022a358(*(unsigned int *)&param_1->field_0x10,5,0,1);
  FUN_0022a358(*(unsigned int *)&param_1->field_0x10,6,0,1);
  return;
}

} /* extern "C" */
