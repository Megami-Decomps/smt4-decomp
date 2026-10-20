/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00247af8` (_code @ 0x247af8, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297468(...);
int asdMemoryAlloc(int, int, int, int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned char DAT_00404290; /* 0x404290 */
extern unsigned char DAT_0043e312; /* 0x43e312 */
extern unsigned char DAT_0043e313; /* 0x43e313 */
extern unsigned char *DAT_0043e314; /* 0x43e314 */
extern unsigned int DAT_0043e31c; /* 0x43e31c */

/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: asdMemoryAlloc. */


void FUN_00247af8(unsigned char param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = (unsigned char *)0x100;
  asdMemoryAlloc(0x100,0x100,0,0x5c,1);
  DAT_0043e314 = puVar1;
  *puVar1 = param_1;
  *(unsigned int *)(puVar1 + 0x20) = 0xffffffff;
  *(unsigned int *)(puVar1 + 0x18) = param_5;
  *(unsigned int *)(puVar1 + 0x14) = param_4;
  *(unsigned int *)(puVar1 + 0x24) = 0xffffffff;
  *(unsigned int *)(puVar1 + 4) = param_2;
  *(unsigned int *)(puVar1 + 8) = param_3;
  *(unsigned int *)(puVar1 + 0xc) = 0;
  *(unsigned int *)(puVar1 + 0x58) = 0;
  *(unsigned int *)(puVar1 + 0x50) = 0;
  *(unsigned int *)(puVar1 + 0x54) = 0;
  FUN_00297468(&DAT_00404290,puVar1 + 0x50,0);
  if (*(int *)(puVar1 + 0x54) == 0) {
    FUN_00297468("saveLoadER/saveLoadER.mbm",puVar1 + 0x54,0);
  }
  DAT_0043e31c = 0xffffffff;
  DAT_0043e312 = 0;
  DAT_0043e313 = 0;
  return;
}

} /* extern "C" */
