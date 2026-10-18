/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00143320` (_code @ 0x143320, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char LAB_0014340c; /* 0x14340c */
extern int FUN_001505f8(); /* 0x1505f8 */
extern unsigned char LAB_00151d9c; /* 0x151d9c */
extern unsigned char *DAT_005b3bf0; /* 0x5b3bf0 */
extern unsigned int DAT_00636de0; /* 0x636de0 */
extern unsigned int DAT_00636dec; /* 0x636dec */

/* Supplied declaration required: FUN_0014aa88. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_0019a5a0. */


void FUN_00143320(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,4,1);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = 0;
    FUN_0014aa88(&DAT_00636de0);
    FUN_0014aa88(&DAT_00636dec);
    puVar2 = &LAB_0014340c;
    FUN_0014e38c(&LAB_0014340c,param_1,0,0,&LAB_00151d9c,FUN_001505f8,puVar1);
    DAT_005b3bf0 = puVar2;
    if (puVar2 == (unsigned char *)0x0) {
      FUN_0019a5a0(puVar1);
    }
  }
  return;
}
