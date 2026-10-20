/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031ba34` (_code @ 0x31ba34, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int taskCreate(...);
int FUN_002e6354(...);
int FUN_00389b58(...);

typedef int romwright_code(...);
/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern int FUN_002c17dc(...); /* 0x2c17dc */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: taskCreate. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_00389b58. */


romwright_code * FUN_0031ba34(unsigned int param_1,unsigned int *param_2,unsigned char param_3,unsigned char param_4)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 4 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int temp_v0;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  
  pcVar1 = FUN_002c17dc;
  taskCreate(FUN_002c17dc,0,0,0,0,0x168,3,0,0);
  if (pcVar1 != (romwright_code *)0x0) {
    FUN_002e6354();
    temp_v0 = param_1;
    FUN_00389b58();
    *(unsigned int *)((unsigned char *)pcVar1 + 8) = temp_v0;
    if (param_2 != (unsigned int *)0x0) {
      temp_v0 = 1;
    }
    *(unsigned int **)pcVar1 = param_2;
    if (param_2 != (unsigned int *)0x0) {
      *param_2 = temp_v0;
    }
    *(unsigned int *)((unsigned char *)pcVar1 + 0x20) = in_s0;
    *(unsigned int *)((unsigned char *)pcVar1 + 0x24) = in_s1;
    *(unsigned int *)((unsigned char *)pcVar1 + 0x28) = in_s2;
    ((unsigned char *)pcVar1)[0x30] = romwright_subpiece_4_1_0(param_1,0);
    ((unsigned char *)pcVar1)[0x150] = (unsigned char)param_3;
    ((unsigned char *)pcVar1)[0x45] = (unsigned char)param_4;
    *(unsigned int *)((unsigned char *)pcVar1 + 0x2c) = in_s3;
    *(unsigned int *)((unsigned char *)pcVar1 + 0x48) = in_s3;
    *(unsigned int *)((unsigned char *)pcVar1 + 0x15c) = 0xffffffff;
    *(unsigned int *)((unsigned char *)pcVar1 + 0x164) = 0xffffffff;
  }
  return pcVar1;
}

} /* extern "C" */
