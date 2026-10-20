/* NON_MATCHING: romwright 0.5.0 decompilation of `asdGxIndexBufferCreate` (_code @ 0x145148, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAlloc(int, int, int, unsigned int, int);
int asdTextureCreate(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_0063fe10; /* 0x63fe10 */
extern unsigned char DAT_0063fe88; /* 0x63fe88 */

/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: asdTextureCreate. */
extern unsigned int FUN_001bc2ec(void);


int asdGxIndexBufferCreate(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  
  puVar4 = (unsigned int *)0x0;
  temp_v0 = 0;
  asdTextureCreate();
  if (param_1 >= 2) {
    if (param_1 == 2) {
      *(unsigned int *)(temp_v0 + 0x14) = 0x200;
      puVar4 = (unsigned int *)&DAT_0063fe88;
      *(unsigned int *)(temp_v0 + 0x18) = 0x200;
    }
  }
  else {
    *(unsigned int *)(temp_v0 + 0x14) = 0x200;
    puVar4 = (unsigned int *)&DAT_0063fe10;
    *(unsigned int *)(temp_v0 + 0x18) = 0x200;
  }
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = *puVar4;
  if (puVar4[5] == 0) {
    *(unsigned int *)(temp_v0 + 0x20) = 0x1403;
  }
  else if (puVar4[5] == 2) {
    *(unsigned int *)(temp_v0 + 0x20) = 0x1405;
  }
  *(unsigned int *)(temp_v0 + 0x34) = puVar4[1];
  temp_v1 = *(int *)(temp_v0 + 0x14) * *(int *)(temp_v0 + 0x18);
  *(int *)(temp_v0 + 0x28) = temp_v1;
  if (*(int *)(temp_v0 + 0x20) == 0x1405) {
    temp_v1 = temp_v1 * 4;
  }
  else {
    temp_v1 = temp_v1 * 2;
  }
  *(int *)(temp_v0 + 0x28) = temp_v1;
  temp_v2 = 0x10000;
  asdMemoryAlloc(0x10000,0x100,0,*(unsigned int *)(temp_v0 + 0x28),1);
  *(unsigned int *)(temp_v0 + 0x24) = temp_v2;
  temp_v2 = FUN_001bc2ec();
  *(unsigned int *)(temp_v0 + 0x30) = temp_v2;
  return temp_v0;
}

} /* extern "C" */
