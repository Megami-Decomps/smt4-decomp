/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00224bd0` (_code @ 0x224bd0, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ba78c(...);
int FUN_002c498c(...);
int FUN_002c5788(...);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_001b4cbc(...); /* 0x1b4cbc */
extern int FUN_0020ecbc(...); /* 0x20ecbc */
extern unsigned char LAB_00224ccc; /* 0x224ccc */
extern int DAT_00432fc8; /* 0x432fc8 */
extern unsigned int *DAT_00432fe0; /* 0x432fe0 */
extern unsigned int DAT_00432fe4; /* 0x432fe4 */

/* Supplied declaration required: FUN_002ba78c. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5788. */


unsigned int FUN_00224bd0(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_00432fe0 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0x5f4,1);
    DAT_00432fe0 = puVar1;
  }
  puVar1 = DAT_00432fe0;
  DAT_00432fe4 = 0;
  *(unsigned char *)(DAT_00432fe0 + 2) = 0;
  *(unsigned char *)((int)puVar1 + 9) = 0;
  FUN_002ba78c(puVar1 + 3);
  puVar1[0x17c] = 0;
  puVar2 = &LAB_00224ccc;
  FUN_002c5788(&LAB_00224ccc,2,0,0,FUN_001b4cbc,FUN_0020ecbc,0);
  puVar1 = DAT_00432fe0;
  *DAT_00432fe0 = (unsigned int)puVar2;
  *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xffffff8f;
  return *puVar1;
}

} /* extern "C" */
