/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002228ec` (_code @ 0x2228ec, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_001ed5c0(); /* 0x1ed5c0 */
extern unsigned char LAB_00212320; /* 0x212320 */
extern unsigned char LAB_002229d4; /* 0x2229d4 */
extern unsigned char LAB_002229ec; /* 0x2229ec */
extern unsigned int *DAT_0044d1b0; /* 0x44d1b0 */

extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_002228ec(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0044d1b0 == (unsigned int *)0x0) {
    DAT_0044d1b0 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0xc,1);
  }
  puVar1 = DAT_0044d1b0;
  *DAT_0044d1b0 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = &LAB_002229d4;
  FUN_002c5978(&LAB_002229d4,2,0,0,FUN_001ed5c0,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_002229ec,0x73,0,0,&LAB_00212320,0,0,puVar2);
  return;
}
