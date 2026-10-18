/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e6340` (_code @ 0x2e6340, 0x14 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *FUN_002c2710(void);


/* WARNING: Removing unreachable block (ram,0x002e6398) */
/* WARNING: Removing unreachable block (ram,0x002e6390) */
/* WARNING: Removing unreachable block (ram,0x002e6380) */
/* WARNING: Removing unreachable block (ram,0x002e6384) */
/* WARNING: Removing unreachable block (ram,0x002e639c) */
/* WARNING: Removing unreachable block (ram,0x002e63a0) */
/* WARNING: Removing unreachable block (ram,0x002e63a4) */

unsigned int * FUN_002e6340(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  puVar1 = (unsigned int *)FUN_002c2710();
  temp_v1 = 1;
  temp_v0 = 0x2360;
  do {
    if (temp_v1) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1 = puVar1 + 8;
      temp_v1 = temp_v0 >= 0x20;
      temp_v0 = temp_v0 - 0x20;
    }
  } while (temp_v1);
  return puVar1;
}
