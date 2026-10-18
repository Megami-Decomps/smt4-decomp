/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ced28` (_code @ 0x2ced28, 0x138 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_001accd4(); /* 0x1accd4 */
extern unsigned char LAB_001ad07c; /* 0x1ad07c */
extern unsigned char DAT_00403c24; /* 0x403c24 */
extern unsigned char DAT_00403c48; /* 0x403c48 */
extern unsigned char DAT_00403c6c; /* 0x403c6c */
extern unsigned int *DAT_0043e170; /* 0x43e170 */

/* Supplied declaration required: FUN_002bdb2c. */
/* Supplied declaration required: FUN_002bf030. */
/* Supplied declaration required: FUN_002c32f8. */
/* Supplied declaration required: FUN_002c3344. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_002ced28(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  
  if (DAT_0043e170 == (unsigned int *)0x0) {
    DAT_0043e170 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0xe4,1);
  }
  puVar1 = DAT_0043e170;
  FUN_002c4b30(DAT_0043e170,0xe4);
  pcVar2 = "SearchWin Calc";
  FUN_002c5978("SearchWin Calc",1,0,0,&LAB_001ad07c,0,0);
  *puVar1 = (unsigned int)pcVar2;
  FUN_002c4c00("SearchWin DrawUpLeft",0x81,0,0,FUN_001accd4,0,0,pcVar2);
  FUN_002c4c00("SearchWin DrawUpRight",0xdf,0,0,FUN_001accd4,0,0,*puVar1);
  FUN_002c3344(puVar1 + 6);
  FUN_002c32f8(puVar1 + 6,&DAT_00403c24,0x24,&DAT_00403c48,0x24,0,0,0,0,&DAT_00403c6c,0x70);
  FUN_002bdb2c(puVar1 + 0xe,0xe,0x87,puVar1 + 6,1);
  FUN_002bf030(puVar1 + 0xe,0);
  return;
}
