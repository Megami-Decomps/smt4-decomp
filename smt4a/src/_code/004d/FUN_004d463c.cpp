/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d463c` (_code @ 0x4d463c, 0x290 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00401578(int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0057a4f8; /* 0x57a4f8 */

extern int FUN_001656a0(unsigned int);
extern unsigned int *FUN_00317450(unsigned int);
extern unsigned int *FUN_00340ec8(unsigned int);
extern unsigned int FUN_003874fc(unsigned int);
/* Supplied declaration required: FUN_00401578. */


void FUN_004d463c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  
  temp_v0 = FUN_003874fc(*(unsigned int *)(param_1 + 0x10));
  temp_v1 = DAT_0057a4f8;
  puVar4 = (unsigned int *)(DAT_0057a4f8 + 0xb0);
  switch(temp_v0) {
  case 0:
    puVar2 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10));
    *puVar4 = *puVar2;
    return;
  case 1:
    puVar4 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(temp_v1 + 0xb4) = *puVar4;
    return;
  case 2:
    puVar4 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(temp_v1 + 0xb8) = *puVar4;
    return;
  case 3:
    puVar4 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x58) = *puVar4;
    return;
  case 4:
    puVar4 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x5c) = *puVar4;
    return;
  case 5:
    puVar4 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x60) = *puVar4;
    return;
  case 6:
    puVar4 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 100) = *puVar4;
    return;
  case 7:
    puVar4 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x68) = *puVar4;
    return;
  case 8:
    puVar4 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x6c) = *puVar4;
    return;
  case 9:
    puVar4 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x70) = *puVar4;
    return;
  case 0xb:
    puVar4 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x74) = *puVar4;
    return;
  case 0xc:
    puVar4 = (unsigned int *)FUN_00340ec8(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x78) = *puVar4;
    return;
  case 0xd:
    puVar4 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x7c) = *puVar4;
    return;
  case 0xe:
    puVar4 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x80) = *puVar4;
    return;
  case 0xf:
    puVar4 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x84) = *puVar4;
    return;
  case 0x10:
    puVar4 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x88) = *puVar4;
    return;
  case 0x11:
    puVar4 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x8c) = *puVar4;
    return;
  case 0x12:
    puVar4 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10));
    *(unsigned int *)(DAT_0057a4f8 + 0x90) = *puVar4;
    return;
  case 0x13:
    puVar4 = (unsigned int *)FUN_00317450(*(unsigned int *)(param_1 + 0x10));
    temp_v0 = *puVar4;
    temp_v1 = FUN_001656a0(9);
    if (temp_v1 != 0) {
      FUN_00401578(DAT_0057a4f8,temp_v0);
      return;
    }
  }
  return;
}

} /* extern "C" */
