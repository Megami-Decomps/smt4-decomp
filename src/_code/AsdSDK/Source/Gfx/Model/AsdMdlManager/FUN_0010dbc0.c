/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010dbc0` (_code @ 0x10dbc0, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_0010dcb0; /* 0x10dcb0 */
extern unsigned char LAB_001174e4; /* 0x1174e4 */
extern unsigned char LAB_00118838; /* 0x118838 */
extern unsigned char *DAT_00464ad8; /* 0x464ad8 */
extern unsigned int DAT_004dad60; /* 0x4dad60 */
extern unsigned int DAT_004dad6c; /* 0x4dad6c */

/* Supplied declaration required: FUN_002c2b90. */
/* Supplied declaration required: FUN_002c4360. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */


void FUN_0010dbc0(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,4,1);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = 0;
    FUN_002c2b90(&DAT_004dad60);
    FUN_002c2b90(&DAT_004dad6c);
    puVar2 = &LAB_0010dcb0;
    FUN_002c5978(&LAB_0010dcb0,param_1,0,0,&LAB_00118838,&LAB_001174e4,puVar1);
    DAT_00464ad8 = puVar2;
    if (puVar2 == (unsigned char *)0x0) {
      FUN_002c4360(puVar1);
    }
  }
  return;
}
