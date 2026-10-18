/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c59fc` (_code @ 0x3c59fc, 0x4ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_003c5de0; /* 0x3c5de0 */
extern int DAT_004342c8; /* 0x4342c8 */
extern unsigned int DAT_004342d4; /* 0x4342d4 */
extern unsigned int DAT_004342d8; /* 0x4342d8 */
extern unsigned int DAT_004342e0; /* 0x4342e0 */
extern unsigned int DAT_004342e4; /* 0x4342e4 */
extern unsigned int DAT_004342e8; /* 0x4342e8 */
extern unsigned int DAT_004342ec; /* 0x4342ec */
extern unsigned int DAT_004342f0; /* 0x4342f0 */
extern unsigned int DAT_0043431c; /* 0x43431c */
extern unsigned int DAT_00434324; /* 0x434324 */
extern unsigned int DAT_00434328; /* 0x434328 */
extern unsigned int DAT_00434330; /* 0x434330 */
extern unsigned int DAT_00434334; /* 0x434334 */
extern unsigned int DAT_00434338; /* 0x434338 */
extern unsigned int DAT_0043433c; /* 0x43433c */
extern unsigned int DAT_00434340; /* 0x434340 */
extern unsigned int DAT_00434344; /* 0x434344 */
extern unsigned int DAT_00434348; /* 0x434348 */
extern unsigned int DAT_0043434c; /* 0x43434c */
extern unsigned int DAT_00434350; /* 0x434350 */
extern unsigned int DAT_00434354; /* 0x434354 */
extern unsigned int DAT_00439cec; /* 0x439cec */

/* Supplied declaration required: FUN_0022a358. */
/* Supplied declaration required: FUN_0022a3a8. */
/* Supplied declaration required: FUN_0022a400. */
/* Supplied declaration required: FUN_0025c2ec. */
/* Supplied declaration required: FUN_0025c318. */
/* Supplied declaration required: FUN_0025c58c. */
/* Supplied declaration required: FUN_00262914. */


void FUN_003c59fc(int param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x5c);
  FUN_0025c58c(temp_v0,0x73,0);
  *(unsigned int *)(param_1 + 0x10) = temp_v0;
  FUN_0025c318();
  FUN_0025c2ec(*(unsigned int *)(param_1 + 0x10),1);
  FUN_00262914(*(unsigned int *)(param_1 + 0x10),&LAB_003c5de0);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),0,(*(unsigned int *)(DAT_004342c8 + 0x634) & 0x100) >> 8);
  FUN_0022a358(*(unsigned int *)(param_1 + 0x10),1,0xfffffff6,10);
  FUN_0022a400(*(unsigned int *)(param_1 + 0x10),2,(*(unsigned int *)(param_2 + 0x44a8) & 0x40000000) >> 0x1e)
  ;
  FUN_0022a358(*(unsigned int *)(param_1 + 0x10),3,0xffffff9c,100);
  FUN_0022a358(*(unsigned int *)(param_1 + 0x10),4,0xffffff9c,100);
  FUN_0022a358(*(unsigned int *)(param_1 + 0x10),5,0xffffff9c,100);
  FUN_0022a358(*(unsigned int *)(param_1 + 0x10),6,0xffffff9c,100);
  FUN_0022a358(*(unsigned int *)(param_1 + 0x10),7,0xffffffce,200);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),8,DAT_0043431c,0xffffffff,100,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),9,DAT_004342d4,0xffffffff,100,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),10,DAT_004342d8,0,2,0);
  FUN_0022a358(*(unsigned int *)(param_1 + 0x10),0xb,0xffffffa6,0x5a);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xc,DAT_00434324,0xffffffff,100,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xd,DAT_004342e0,0xffffffff,100,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xe,DAT_00434328,0,2,0);
  FUN_0022a358(*(unsigned int *)(param_1 + 0x10),0xf,0xffffffa6,0x5a);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x10,DAT_00434330,0xffffffff,100,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x11,DAT_004342e4,0xffffffff,100,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x12,DAT_00434334,0,2,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x13,DAT_00434338,0xffffffff,100,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x14,DAT_004342e8,0xffffffff,100,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x15,DAT_0043433c,0,2,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x16,DAT_00434340,0xffffffff,100,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x17,DAT_004342ec,0xffffffff,100,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x18,DAT_00434344,0,2,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x19,DAT_00434348,0xffffffff,100,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x1a,DAT_0043434c,0xffffffff,100,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x1b,DAT_00434350,0,2,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x1c,DAT_00434354,0,999,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x1d,DAT_00439cec,0,99,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x1e,DAT_004342f0,0,99,0);
  return;
}
