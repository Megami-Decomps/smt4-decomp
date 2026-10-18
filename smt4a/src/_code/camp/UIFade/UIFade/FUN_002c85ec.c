/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c85ec` (_code @ 0x2c85ec, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_0020a134; /* 0x20a134 */
extern unsigned char LAB_0022e98c; /* 0x22e98c */
extern unsigned char LAB_002c8714; /* 0x2c8714 */
extern unsigned char LAB_002c8724; /* 0x2c8724 */
extern unsigned char LAB_002c8734; /* 0x2c8734 */
extern signed char DAT_0057f284; /* 0x57f284 */
extern unsigned int *DAT_0057f288; /* 0x57f288 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */


void FUN_002c85ec(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0057f284 < '\x01') {
    if (DAT_0057f288 == (unsigned int *)0x0) {
      puVar1 = (unsigned int *)0x100;
      FUN_00163060(0x100,0x100,0,0x14,1);
      DAT_0057f288 = puVar1;
    }
    puVar1 = DAT_0057f288;
    puVar2 = &LAB_002c8714;
    FUN_0014e38c(&LAB_002c8714,4,0,0,&LAB_0020a134,0,0);
    *puVar1 = (unsigned int)puVar2;
    FUN_0015155c(&LAB_002c8724,0x80,0,0,&LAB_0022e98c,0,0,puVar2);
    FUN_0015155c(&LAB_002c8734,0xdc,0,0,&LAB_0022e98c,0,0,*puVar1);
  }
  puVar1 = DAT_0057f288;
  DAT_0057f288[1] = 0;
  *(unsigned char *)(puVar1 + 4) = 1;
  DAT_0057f284 = DAT_0057f284 + '\x01';
  return;
}
