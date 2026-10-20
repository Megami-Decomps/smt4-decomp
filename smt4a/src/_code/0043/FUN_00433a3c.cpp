/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00433a3c` (_code @ 0x433a3c, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e14(unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_0055a4c0; /* 0x55a4c0 */
extern unsigned char DAT_0055ad8c; /* 0x55ad8c */

/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002e9318(int);
extern int FUN_003106d0(unsigned int *);


int FUN_00433a3c(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  *param_1 = (unsigned int)&DAT_0055ad8c;
  puVar3 = (unsigned int *)param_1[0x19];
  for (puVar2 = (unsigned int *)param_1[0x18]; puVar2 != puVar3; puVar2 = puVar2 + 2) {
    (**(romwright_code **)*puVar2)(puVar2);
  }
  FUN_002e6e14(param_1[0x18]);
  temp_v0 = FUN_003106d0(param_1 + 0x10);
  *(unsigned char **)(temp_v0 - 0x18) = &DAT_0055a4c0;
  FUN_002e6e14(*(unsigned int *)(temp_v0 - 0x10));
  *(unsigned char **)(temp_v0 - 0x2c) = &DAT_0055a4c0;
  FUN_002e6e14(*(unsigned int *)(temp_v0 - 0x24));
  temp_v0 = FUN_002e9318(temp_v0 - 0x34);
  return temp_v0 - 0xc;
}

} /* extern "C" */
