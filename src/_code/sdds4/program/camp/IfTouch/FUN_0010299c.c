/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010299c` (_code @ 0x10299c, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_00102a94; /* 0x102a94 */
extern unsigned char LAB_00107ccc; /* 0x107ccc */
extern unsigned char LAB_0010a28c; /* 0x10a28c */
extern signed char DAT_0043dcb0; /* 0x43dcb0 */
extern unsigned int *DAT_0043dcb4; /* 0x43dcb4 */

/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */


void FUN_0010299c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043dcb0 < '\x01') {
    if (DAT_0043dcb4 == (unsigned int *)0x0) {
      DAT_0043dcb4 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x680,1);
    }
    puVar1 = DAT_0043dcb4;
    FUN_002c4b30(DAT_0043dcb4,0x680);
    puVar2 = &LAB_00102a94;
    FUN_002c5978(&LAB_00102a94,1,0,0,&LAB_00107ccc,&LAB_0010a28c,0);
    *puVar1 = (unsigned int)puVar2;
    *(unsigned short *)((int)puVar1 + 0x64e) = 0xffff;
    *(unsigned short *)((int)puVar1 + 0x64a) = 10;
    *(unsigned short *)(puVar1 + 0x193) = 0;
  }
  DAT_0043dcb0 = DAT_0043dcb0 + '\x01';
  return;
}
