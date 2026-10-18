/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ed634` (_code @ 0x3ed634, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned int DAT_0046519c; /* 0x46519c */
extern unsigned int DAT_004651a0; /* 0x4651a0 */
extern unsigned int DAT_004651a4; /* 0x4651a4 */
extern unsigned int DAT_004651a8; /* 0x4651a8 */
extern unsigned int DAT_004651b8; /* 0x4651b8 */
extern unsigned int DAT_004651bc; /* 0x4651bc */
extern unsigned int DAT_004e4138; /* 0x4e4138 */
extern unsigned int DAT_004e413c; /* 0x4e413c */
extern unsigned int DAT_004e4140; /* 0x4e4140 */


void FUN_003ed634(unsigned int param_1,unsigned int param_2,int param_3)

{
  *(unsigned int *)(param_3 + 0x18) = param_1;
  *(unsigned int *)(param_3 + 0x1c) = param_2;
  DAT_004651b8 = 0;
  DAT_004651bc = 0;
  DAT_0046519c = 0;
  DAT_004651a0 = 0;
  DAT_004651a4 = 0;
  DAT_004651a8 = 0;
  DAT_004e4138 = 0;
  DAT_004e4140 = 0xffffffff;
  DAT_004e413c = 0;
  return;
}
