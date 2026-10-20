/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00268250` (_code @ 0x268250, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAlloc(int, int, int, int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern unsigned char DAT_0057f6cb; /* 0x57f6cb */
extern unsigned char DAT_0057f6cc; /* 0x57f6cc */
extern unsigned char *DAT_0057f6d0; /* 0x57f6d0 */
extern unsigned int DAT_0057f6d8; /* 0x57f6d8 */

/* Supplied declaration required: asdMemoryAlloc. */


void FUN_00268250(unsigned char param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = (unsigned char *)0x100;
  asdMemoryAlloc(0x100,0x100,0,0x6c,1);
  DAT_0057f6d0 = puVar1;
  *puVar1 = param_1;
  *(unsigned int *)(puVar1 + 0x20) = 0xffffffff;
  *(unsigned int *)(puVar1 + 0x24) = 0xffffffff;
  *(unsigned int *)(puVar1 + 0x14) = param_4;
  *(unsigned int *)(puVar1 + 4) = param_2;
  *(unsigned int *)(puVar1 + 8) = param_3;
  *(unsigned int *)(puVar1 + 0x18) = param_5;
  *(unsigned int *)(puVar1 + 0xc) = 0;
  *(unsigned int *)(puVar1 + 0x68) = 0;
  *(unsigned int *)(puVar1 + 0x60) = 0;
  *(unsigned int *)(puVar1 + 100) = 0;
  puVar1[0x54] = 0;
  *(unsigned int *)(puVar1 + 0x58) = 0xffffffff;
  DAT_0057f6d8 = 0xffffffff;
  DAT_0057f6cb = 0;
  DAT_0057f6cc = 0;
  return;
}

} /* extern "C" */
