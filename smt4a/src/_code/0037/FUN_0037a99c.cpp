/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a99c` (_code @ 0x37a99c, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_001575cc(int);
int FUN_004097b4(int, unsigned char [8], unsigned int, unsigned int);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_2_stack;

extern int g_renderCtx; /* 0x59dbb4 */
extern unsigned int DAT_0063fd88; /* 0x63fd88 */
extern unsigned int DAT_0063fdb4; /* 0x63fdb4 */
extern unsigned int *DAT_0063fef4; /* 0x63fef4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_001575cc. */
/* Supplied declaration required: FUN_004097b4. */


void FUN_0037a99c(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_d1; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned long long in_d1;
  unsigned char temp_v2 [8];
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = *(unsigned int *)(g_renderCtx + 0x52c);
  temp_v3 = (unsigned int)in_d1;
  temp_v4 = (unsigned int)((unsigned long long)in_d1 >> 0x20);
  if (DAT_0063fef4 == &DAT_0063fd88) {
    temp_v1 = 0;
  }
  else if (DAT_0063fef4 == &DAT_0063fdb4) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 2;
  }
  *(unsigned int *)(g_renderCtx + 0x52c) = temp_v1;
  FUN_001575cc(g_renderCtx);
  FUN_00157558(g_renderCtx);
  FUN_004097b4(g_renderCtx,temp_v2,param_1,param_2);
  *(unsigned int *)(g_renderCtx + 0x52c) = temp_v0;
  return;
}

} /* extern "C" */
