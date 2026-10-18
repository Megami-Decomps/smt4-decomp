/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00191eac` (_code @ 0x191eac, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char LAB_00191f74; /* 0x191f74 */
extern unsigned char LAB_001c8d28; /* 0x1c8d28 */
extern unsigned char LAB_00214960; /* 0x214960 */
extern unsigned int *DAT_0044de2c; /* 0x44de2c */

extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */


void FUN_00191eac(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x10000,0x100,0,0x388,1);
  DAT_0044de2c = puVar1;
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar2 = &LAB_00191f74;
  FUN_002c5978(&LAB_00191f74,2,0,0,&LAB_001c8d28,&LAB_00214960,0);
  *puVar1 = (unsigned int)puVar2;
  puVar1[2] = 0x11;
  puVar1[3] = 0;
  return;
}
