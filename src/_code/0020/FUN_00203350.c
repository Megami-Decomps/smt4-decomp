/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00203350` (_code @ 0x203350, 0xec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_001907e8; /* 0x1907e8 */
extern unsigned char LAB_001a6c5c; /* 0x1a6c5c */
extern unsigned char LAB_00203478; /* 0x203478 */
extern unsigned char LAB_00203488; /* 0x203488 */
extern unsigned char LAB_00203498; /* 0x203498 */
extern signed char DAT_0043dd38; /* 0x43dd38 */
extern unsigned int *DAT_0043dd3c; /* 0x43dd3c */

extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_00203350(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043dd38 < '\x01') {
    if (DAT_0043dd3c == (unsigned int *)0x0) {
      DAT_0043dd3c = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x14,1);
    }
    puVar1 = DAT_0043dd3c;
    puVar2 = &LAB_00203478;
    FUN_002c5978(&LAB_00203478,2,0,0,&LAB_001907e8,0,0);
    *puVar1 = (unsigned int)puVar2;
    FUN_002c4c00(&LAB_00203488,0x7c,0,0,&LAB_001a6c5c,0,0,puVar2);
    FUN_002c4c00(&LAB_00203498,0xda,0,0,&LAB_001a6c5c,0,0,*puVar1);
  }
  puVar1 = DAT_0043dd3c;
  DAT_0043dd3c[1] = 0;
  *(unsigned char *)(puVar1 + 4) = 1;
  DAT_0043dd38 = DAT_0043dd38 + '\x01';
  return;
}
