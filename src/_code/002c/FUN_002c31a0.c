/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c31a0` (_code @ 0x2c31a0, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e3a68; /* 0x4e3a68 */
extern unsigned char DAT_004e3ae0; /* 0x4e3ae0 */

/* Supplied declaration required: FUN_002bd75c. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002c3702) */

void FUN_002c31a0(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)0x0;
  temp_v0 = 0;
  FUN_002bd75c();
  if (param_1 >= 2) {
    if (param_1 == 2) {
      *(unsigned int *)(temp_v0 + 0x14) = 0x200;
      puVar3 = (unsigned int *)&DAT_004e3ae0;
      *(unsigned int *)(temp_v0 + 0x18) = 0x200;
    }
  }
  else {
    *(unsigned int *)(temp_v0 + 0x14) = 0x200;
    puVar3 = (unsigned int *)&DAT_004e3a68;
    *(unsigned int *)(temp_v0 + 0x18) = 0x200;
  }
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = *puVar3;
  if (puVar3[5] == 0) {
    *(unsigned int *)(temp_v0 + 0x20) = 0x1403;
  }
  else if (puVar3[5] == 2) {
    *(unsigned int *)(temp_v0 + 0x20) = 0x1405;
  }
  *(unsigned int *)(temp_v0 + 0x34) = puVar3[1];
  temp_v1 = *(int *)(temp_v0 + 0x14) * *(int *)(temp_v0 + 0x18);
  *(int *)(temp_v0 + 0x28) = temp_v1;
  if (*(int *)(temp_v0 + 0x20) == 0x1405) {
    temp_v1 = temp_v1 * 4;
  }
  else {
    temp_v1 = temp_v1 * 2;
  }
  *(int *)(temp_v0 + 0x28) = temp_v1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
