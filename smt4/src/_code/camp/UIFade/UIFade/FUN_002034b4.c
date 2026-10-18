/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002034b4` (_code @ 0x2034b4, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_001908e8; /* 0x1908e8 */
extern unsigned char LAB_001a6d6c; /* 0x1a6d6c */
extern unsigned char LAB_002035dc; /* 0x2035dc */
extern unsigned char LAB_002035ec; /* 0x2035ec */
extern unsigned char LAB_002035fc; /* 0x2035fc */
extern signed char DAT_0043dd38; /* 0x43dd38 */
extern unsigned int *DAT_0043dd3c; /* 0x43dd3c */

/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_002034b4(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0043dd38 < '\x01') {
    if (DAT_0043dd3c == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x100;
      FUN_002c498c(0x100,0x100,0,0x14,1);
      DAT_0043dd3c = puVar1;
    }
    puVar1 = DAT_0043dd3c;
    puVar2 = &LAB_002035dc;
    FUN_002c5788(&LAB_002035dc,2,0,0,&LAB_001908e8,0,0);
    *puVar1 = (unsigned int)puVar2;
    FUN_002c4a08(&LAB_002035ec,0x7c,0,0,&LAB_001a6d6c,0,0,puVar2);
    FUN_002c4a08(&LAB_002035fc,0xda,0,0,&LAB_001a6d6c,0,0,*puVar1);
  }
  puVar1 = DAT_0043dd3c;
  DAT_0043dd3c[1] = 0;
  *(unsigned char *)(puVar1 + 4) = 1;
  DAT_0043dd38 = DAT_0043dd38 + '\x01';
  return;
}
