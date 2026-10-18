/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c336c` (_code @ 0x2c336c, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_004e3a68; /* 0x4e3a68 */
extern unsigned char DAT_004e3ae0; /* 0x4e3ae0 */

/* Supplied declaration required: FUN_002bd940. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c336c(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)0x0;
  temp_v0 = 0;
  FUN_002bd940();
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
