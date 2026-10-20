/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001063f8` (_code @ 0x1063f8, 0x192 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int streamReadU8(int);

/* stack frame of param_2: 12 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned short sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned short sp54; /* 0x54: local_54 */
    unsigned short sp58; /* 0x58: local_58 */
    unsigned char sp5C; /* 0x5c: local_5c */
    unsigned char sp60; /* 0x60: local_60 */
} param_2_stack;

/* Supplied declaration required: streamReadU8. */


/* WARNING: Removing unreachable block (ram,0x00106432) */
/* WARNING: Removing unreachable block (ram,0x0010643e) */
/* WARNING: Removing unreachable block (ram,0x00106454) */
/* WARNING: Removing unreachable block (ram,0x0010646c) */
/* WARNING: Removing unreachable block (ram,0x00106482) */
/* WARNING: Removing unreachable block (ram,0x00106498) */
/* WARNING: Removing unreachable block (ram,0x001064b0) */
/* WARNING: Removing unreachable block (ram,0x001064c8) */
/* WARNING: Removing unreachable block (ram,0x001064e2) */
/* WARNING: Removing unreachable block (ram,0x001064fc) */
/* WARNING: Removing unreachable block (ram,0x0010651e) */
/* WARNING: Removing unreachable block (ram,0x0010652e) */
/* WARNING: Removing unreachable block (ram,0x0010655e) */
/* WARNING: Removing unreachable block (ram,0x00106564) */
/* WARNING: Removing unreachable block (ram,0x00106572) */
/* WARNING: Removing unreachable block (ram,0x0010657a) */
/* WARNING: Removing unreachable block (ram,0x00106580) */
/* WARNING: Removing unreachable block (ram,0x00106586) */

unsigned int FUN_001063f8(unsigned int param_1,int param_2)

{
/* irregular: 19 native warning(s); review required */
  if (*(int *)(*(int *)(param_2 + 8) + 0x10) != 0) {
    streamReadU8(param_2);
  }
  return 0;
}

} /* extern "C" */
