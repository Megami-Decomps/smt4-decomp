/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010123c` (_code @ 0x10123c, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00100366. */
/* Supplied declaration required: FUN_001005f0. */
/* Supplied declaration required: FUN_002c607c. */
extern unsigned int *FUN_002c6840(void);


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x001008b8) */
/* WARNING: Removing unreachable block (ram,0x001008b4) */
/* WARNING: Removing unreachable block (ram,0x001008a8) */
/* WARNING: Removing unreachable block (ram,0x00100890) */
/* WARNING: Removing unreachable block (ram,0x0010083a) */
/* WARNING: Removing unreachable block (ram,0x00100822) */
/* WARNING: Removing unreachable block (ram,0x001008a0) */
/* WARNING: Removing unreachable block (ram,0x001008b0) */
/* WARNING: Removing unreachable block (ram,0x001008c0) */

unsigned int * FUN_0010123c(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 18 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned int unaff_r6;
  
  if (param_2 == 0x6e) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 == 0x70) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (((param_2 == 0x66) || (param_2 == 0x65)) || (param_2 == 0x67)) {
    puVar2 = (unsigned int *)(*(romwright_code *)0x2c6599)();
    return puVar2;
  }
  if ((unsigned char)((unsigned char)(*param_1 >> 7) & 1)) {
    param_2 = param_2 | 0x80;
  }
  if (((param_2 == 0x69) || (param_2 == 100)) || (param_2 == 0x75)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 == 0x6f) {
    *param_1 = (unsigned int)param_1;
    param_1[1] = (unsigned int)param_3;
    param_1[2] = unaff_r6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (param_2 == 0x78) {
    puVar2 = (unsigned int *)(*(romwright_code *)0x1007fd)();
    return puVar2;
  }
  if (((param_2 == 0xe9) || (param_2 == 0xe4)) || (param_2 == 0xf5)) {
    *param_1 = (unsigned int)param_1;
    puVar1 = (unsigned int *)FUN_002c6840();
    temp_v0 = *puVar1;
    FUN_002c607c(param_1,0,10);
    *puVar1 = temp_v0;
    return param_1;
  }
  if (param_2 == 0xef) {
    puVar2 = (unsigned int *)(*(romwright_code *)0x100789)();
    return puVar2;
  }
  if (param_2 == 0xf8) {
    puVar2 = (unsigned int *)(*(romwright_code *)0x100819)();
    return puVar2;
  }
  if ((unsigned char)((unsigned char)(*param_1 >> 6) & 1)) {
    param_2 = param_2 | 0x80;
  }
  if (param_2 == 99) {
    *(char *)(param_1 + 9) = (char)*param_3;
    *(unsigned char *)((int)param_1 + 0x25) = 0;
    if (param_1[5] == 0) {
      FUN_00100366(param_1,param_1 + 9,1);
    }
    return (unsigned int *)0x1;
  }
  if (param_2 == 0x73) {
    puVar2 = (unsigned int *)(*(romwright_code *)0x10035f)();
    return puVar2;
  }
  if (param_2 == 0xe3) {
    *(short *)(param_1 + 9) = (short)*param_3;
    *(unsigned short *)((int)param_1 + 0x26) = 0;
    if (param_1[5] == 0) {
      FUN_001005f0(param_1,param_1 + 9,1);
    }
    return (unsigned int *)0x1;
  }
  if (param_2 == 0xf3) {
    puVar2 = (unsigned int *)(*(romwright_code *)0x10099b)();
    return puVar2;
  }
  return (unsigned int *)0x0;
}
