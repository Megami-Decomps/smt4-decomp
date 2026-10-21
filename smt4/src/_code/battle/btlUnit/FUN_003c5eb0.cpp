/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c5eb0` (_code @ 0x3c5eb0, 0x134 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a358(...);
int asdListBoxSetItemMode2(...);
int asdListBoxSetByteValue(...);
int asdListBoxAddItems(...);
int asdListBoxCreateDefault(...);
int jobSetText(...);

typedef struct fn_003c5eb0_arg0 fn_003c5eb0_arg0;
struct fn_003c5eb0_arg0 {
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

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int g_btlMain; /* 0x4342c8 */

/* Supplied declaration required: FUN_0022a358. */
/* Supplied declaration required: asdListBoxSetItemMode2. */
/* Supplied declaration required: asdListBoxSetByteValue. */
/* Supplied declaration required: asdListBoxAddItems. */
/* Supplied declaration required: asdListBoxCreateDefault. */
/* Supplied declaration required: jobSetText. */


void FUN_003c5eb0(fn_003c5eb0_arg0 *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x5c);
  asdListBoxCreateDefault(temp_v0,0x73,0);
  *(unsigned int *)&param_1->field_0x10 = temp_v0;
  asdListBoxAddItems();
  asdListBoxSetByteValue(*(unsigned int *)&param_1->field_0x10,1);
  jobSetText(*(unsigned int *)&param_1->field_0x10,"Camera UpDown Menu");
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,0,(*(unsigned int *)(g_btlMain + 0x634) & 0x20) >> 5);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,1,(*(unsigned int *)(g_btlMain + 0x634) & 0x40) >> 6);
  asdListBoxSetItemMode2(*(unsigned int *)&param_1->field_0x10,2,(*(unsigned int *)(g_btlMain + 0x634) & 0x80) >> 7);
  FUN_0022a358(*(unsigned int *)&param_1->field_0x10,3,0xfffffff6,10);
  FUN_0022a358(*(unsigned int *)&param_1->field_0x10,4,0,10);
  FUN_0022a358(*(unsigned int *)&param_1->field_0x10,5,0xfffffc19,999);
  FUN_0022a358(*(unsigned int *)&param_1->field_0x10,6,0xfffffc19,999);
  FUN_0022a358(*(unsigned int *)&param_1->field_0x10,7,0xfffffc19,999);
  return;
}

} /* extern "C" */
