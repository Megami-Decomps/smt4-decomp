/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c5384` (_code @ 0x3c5384, 0x33c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003c5384_arg1 fn_003c5384_arg1;
struct fn_003c5384_arg1 {
    unsigned char pad_0x0[0x5c];
    undefined4 field_0x5c; /* +0x5c */
    unsigned char pad_0x60[0x2248];
    undefined4 field_0x22a8; /* +0x22a8 */
    undefined4 field_0x22ac; /* +0x22ac */
    undefined4 field_0x22b0; /* +0x22b0 */
    unsigned char field_0x22b4; /* +0x22b4 */
    unsigned char pad_0x22b5[0x3];
    unsigned char field_0x22b8; /* +0x22b8 */
    unsigned char pad_0x22b9[0x3];
    undefined4 field_0x22bc; /* +0x22bc */
    undefined4 field_0x22c0; /* +0x22c0 */
    undefined4 field_0x22c4; /* +0x22c4 */
    undefined4 field_0x22c8; /* +0x22c8 */
    unsigned char field_0x22cc; /* +0x22cc */
    unsigned char pad_0x22cd[0x3];
    unsigned char field_0x22d0; /* +0x22d0 */
    unsigned char pad_0x22d1[0x3];
    unsigned char field_0x22d4; /* +0x22d4 */
    unsigned char pad_0x22d5[0x3];
    unsigned char field_0x22d8; /* +0x22d8 */
    unsigned char pad_0x22d9[0x3];
    unsigned char field_0x22dc; /* +0x22dc */
    unsigned char pad_0x22dd[0x3];
    undefined4 field_0x22e0; /* +0x22e0 */
    unsigned char field_0x22e4; /* +0x22e4 */
    unsigned char pad_0x22e5[0x3];
    unsigned char field_0x22e8; /* +0x22e8 */
    unsigned char pad_0x22e9[0x3];
    undefined4 field_0x22ec; /* +0x22ec */
    unsigned char field_0x22f0; /* +0x22f0 */
    unsigned char pad_0x22f1[0x3];
    unsigned char field_0x22f4; /* +0x22f4 */
    unsigned char pad_0x22f5[0x3];
    undefined4 field_0x22f8; /* +0x22f8 */
    undefined4 field_0x22fc; /* +0x22fc */
    undefined4 field_0x2300; /* +0x2300 */
    undefined4 field_0x2304; /* +0x2304 */
    undefined4 field_0x2308; /* +0x2308 */
};

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_003c56c4; /* 0x3c56c4 */

/* Supplied declaration required: FUN_0022a3a8. */
/* Supplied declaration required: FUN_0022a400. */
/* Supplied declaration required: FUN_0025c2ec. */
/* Supplied declaration required: FUN_0025c318. */
/* Supplied declaration required: FUN_0025c58c. */
/* Supplied declaration required: FUN_00262914. */


void FUN_003c5384(int param_1,fn_003c5384_arg1 *param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = param_2->field_0x5c;
  FUN_0025c58c(temp_v0,0x73,0);
  *(unsigned int *)(param_1 + 0x10) = temp_v0;
  FUN_0025c318();
  FUN_0025c2ec(*(unsigned int *)(param_1 + 0x10),1);
  FUN_00262914(*(unsigned int *)(param_1 + 0x10),&LAB_003c56c4);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),0);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),1);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),2);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),3,*(unsigned int *)&param_2->field_0x22b4,0,9,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),4,*(unsigned int *)&param_2->field_0x22b8,0,2,0);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),5);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),6);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),7);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),8);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),9,*(unsigned int *)&param_2->field_0x22cc,0,999,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),10,*(unsigned int *)&param_2->field_0x22d0,0,4,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xb,*(unsigned int *)&param_2->field_0x22d4,0,0x1f,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xc,*(unsigned int *)&param_2->field_0x22d8,0,2,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xd,*(unsigned int *)&param_2->field_0x22dc,0,7,0);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),0xe);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xf,*(unsigned int *)&param_2->field_0x22e4,0,2,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x10,*(unsigned int *)&param_2->field_0x22e8,0,2,0);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),0x11);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x12,*(unsigned int *)&param_2->field_0x22f0,0,3,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x13,*(unsigned int *)&param_2->field_0x22f4,0,2,0);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),0x14);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),0x15);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),0x16);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),0x17);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),0x18);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x19,*(unsigned int *)(param_2 + 1),0,9,0);
  return;
}
