/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010dc54` (_code @ 0x10dc54, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_0010dd0c; /* 0x10dd0c */
extern unsigned char LAB_001175e4; /* 0x1175e4 */
extern unsigned char LAB_0011890c; /* 0x11890c */
extern unsigned char *DAT_00464ad8; /* 0x464ad8 */
extern unsigned int DAT_004dad60; /* 0x4dad60 */
extern unsigned int DAT_004dad6c; /* 0x4dad6c */

/* Supplied declaration required: FUN_002c29c4. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_0010dc54(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,4,1);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = 0;
    FUN_002c29c4(&DAT_004dad60);
    FUN_002c29c4(&DAT_004dad6c);
    puVar2 = &LAB_0010dd0c;
    FUN_002c5788(&LAB_0010dd0c,param_1,0,0,&LAB_0011890c,&LAB_001175e4,puVar1);
    DAT_00464ad8 = puVar2;
    if (puVar2 == (unsigned char *)0x0) {
      FUN_002c415c(puVar1);
    }
  }
  return;
}
