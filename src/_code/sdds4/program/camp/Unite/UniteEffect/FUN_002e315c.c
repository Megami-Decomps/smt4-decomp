/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e315c` (_code @ 0x2e315c, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_002e3294; /* 0x2e3294 */
extern unsigned char LAB_002e32a4; /* 0x2e32a4 */
extern int FUN_00329da4(); /* 0x329da4 */
extern int FUN_0032b0b4(); /* 0x32b0b4 */
extern int FUN_00330cfc(); /* 0x330cfc */
extern unsigned int *DAT_0043dd90; /* 0x43dd90 */

/* Supplied declaration required: FUN_002959c4. */
/* Supplied declaration required: FUN_002976ac. */
/* Supplied declaration required: FUN_002c0128. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_002e315c(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043dd90 == (unsigned int *)0x0) {
    DAT_0043dd90 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x958,1);
  }
  puVar1 = DAT_0043dd90;
  FUN_002c4b30(DAT_0043dd90,0x958);
  puVar2 = &LAB_002e3294;
  FUN_002c5978(&LAB_002e3294,2,0,0,FUN_00329da4,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_002e32a4,0xe7,0,0,FUN_00330cfc,0,0,puVar2);
  FUN_002c4c00(&LAB_002e32a4,0x6f,0,0,FUN_0032b0b4,0,0,*puVar1);
  FUN_002959c4();
  FUN_002c0128();
  FUN_002976ac(0x25);
  return;
}
