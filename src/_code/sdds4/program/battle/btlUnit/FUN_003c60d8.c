/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c60d8` (_code @ 0x3c60d8, 0x134 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003c60d8_arg0 fn_003c60d8_arg0;
struct fn_003c60d8_arg0 {
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

extern int DAT_004342c8; /* 0x4342c8 */

/* Supplied declaration required: FUN_0022a4ec. */
/* Supplied declaration required: FUN_0022a594. */
/* Supplied declaration required: FUN_0025c524. */
/* Supplied declaration required: FUN_0025c550. */
/* Supplied declaration required: FUN_0025c7c4. */
/* Supplied declaration required: FUN_00262b40. */


void FUN_003c60d8(fn_003c60d8_arg0 *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x5c);
  FUN_0025c7c4(temp_v0,0x73,0);
  *(unsigned int *)&param_1->field_0x10 = temp_v0;
  FUN_0025c550();
  FUN_0025c524(*(unsigned int *)&param_1->field_0x10,1);
  FUN_00262b40(*(unsigned int *)&param_1->field_0x10,"Camera UpDown Menu");
  FUN_0022a594(*(unsigned int *)&param_1->field_0x10,0,(*(unsigned int *)(DAT_004342c8 + 0x634) & 0x20) >> 5);
  FUN_0022a594(*(unsigned int *)&param_1->field_0x10,1,(*(unsigned int *)(DAT_004342c8 + 0x634) & 0x40) >> 6);
  FUN_0022a594(*(unsigned int *)&param_1->field_0x10,2,(*(unsigned int *)(DAT_004342c8 + 0x634) & 0x80) >> 7);
  FUN_0022a4ec(*(unsigned int *)&param_1->field_0x10,3,0xfffffff6,10);
  FUN_0022a4ec(*(unsigned int *)&param_1->field_0x10,4,0,10);
  FUN_0022a4ec(*(unsigned int *)&param_1->field_0x10,5,0xfffffc19,999);
  FUN_0022a4ec(*(unsigned int *)&param_1->field_0x10,6,0xfffffc19,999);
  FUN_0022a4ec(*(unsigned int *)&param_1->field_0x10,7,0xfffffc19,999);
  return;
}
