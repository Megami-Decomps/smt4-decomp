/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00254e4c` (_code @ 0x254e4c, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027eb88(unsigned int *, unsigned int);
int FUN_002ad8a8(unsigned int *, unsigned int *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_00439c88; /* 0x439c88 */

extern unsigned short FUN_0022c930(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0027eb88. */
/* Supplied declaration required: FUN_002ad8a8. */


void FUN_00254e4c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned short temp_v0;
  unsigned int *puVar3;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_00439c88 + 0x20));
  puVar3 = (*(unsigned int * *)((unsigned char *)&DAT_00439c88 + 0x20)) + 0x1fa5;
  FUN_0027eb88(puVar3,0xffffffff);
  temp_v0 = FUN_0022c930(*puVar1,0);
  *(unsigned short *)(puVar1 + 0x1fa5) = temp_v0;
  temp_v0 = FUN_0022c930(*puVar1,1);
  *(unsigned short *)((int)puVar1 + 0x7e96) = temp_v0;
  temp_v0 = FUN_0022c930(*puVar1,2);
  *(unsigned short *)(puVar1 + 0x1fa6) = temp_v0;
  temp_v0 = FUN_0022c930(*puVar1,3);
  *(unsigned short *)((int)puVar1 + 0x7e9a) = temp_v0;
  FUN_002ad8a8(puVar1 + 0x918,puVar3);
  return;
}

} /* extern "C" */
