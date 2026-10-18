/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00224ae0` (_code @ 0x224ae0, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_001b4bbc(); /* 0x1b4bbc */
extern int FUN_0020eb58(); /* 0x20eb58 */
extern unsigned char LAB_00224be0; /* 0x224be0 */
extern int DAT_00432fc8; /* 0x432fc8 */
extern unsigned int *DAT_00432fe0; /* 0x432fe0 */
extern unsigned int DAT_00432fe4; /* 0x432fe4 */

/* Supplied declaration required: FUN_002baacc. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */


unsigned int FUN_00224ae0(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_00432fe0 == (unsigned int *)0x0) {
    DAT_00432fe0 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x5f4,1);
  }
  puVar1 = DAT_00432fe0;
  DAT_00432fe4 = 0;
  *(unsigned char *)(DAT_00432fe0 + 2) = 0;
  *(unsigned char *)((int)puVar1 + 9) = 0;
  FUN_002baacc(puVar1 + 3);
  puVar1[0x17c] = 0;
  puVar2 = &LAB_00224be0;
  FUN_002c5978(&LAB_00224be0,2,0,0,FUN_001b4bbc,FUN_0020eb58,0);
  puVar1 = DAT_00432fe0;
  *DAT_00432fe0 = (unsigned int)puVar2;
  *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xffffff8f;
  return *puVar1;
}
