/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dcfe0` (_code @ 0x2dcfe0, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_00464b7c; /* 0x464b7c */
extern unsigned int DAT_00464b84; /* 0x464b84 */

extern unsigned int FUN_0024c3f8(int);
/* Supplied declaration required: FUN_002abb24. */
extern unsigned int *FUN_002c32a0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002cb80c. */
/* Supplied declaration required: FUN_002e113c. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_002dcfe0(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  
  puVar1 = (unsigned int *)FUN_002c32a0(0x10000,0x100,0,0x110,0x10,1);
  FUN_002c4938(puVar1,0x110);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[3] = 0x3f800000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[7] = 0x3f800000;
  puVar1[9] = 0xffffffff;
  puVar1[8] = 0x3f800000;
  if (param_1 != 0) {
    puVar1[10] = (unsigned int)*(unsigned short *)(param_1 + 0xc);
    temp_v0 = FUN_0024c3f8(param_1);
    rt_memcpy(puVar1 + 0xc,temp_v0,0xb4);
    puVar3 = puVar1 + 0xc;
    if (puVar1[0x31] == 1) {
      puVar3 = (unsigned int *)puVar1[0x32];
    }
    if (puVar1[0x31] == 1 && puVar3 == (unsigned int *)0x0) {
      FUN_002cb80c();
      FUN_002e113c();
      puVar1[0x43] = (unsigned int)puVar3;
    }
    FUN_002abb24(DAT_00464b7c,DAT_00464b84);
  }
  return puVar1;
}
