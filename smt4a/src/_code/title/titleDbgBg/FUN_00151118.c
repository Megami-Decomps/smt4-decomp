/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00151118` (_code @ 0x151118, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_0015120c; /* 0x15120c */
extern unsigned char LAB_0015121c; /* 0x15121c */
extern unsigned char LAB_00151228; /* 0x151228 */
extern unsigned char LAB_0016547c; /* 0x16547c */
extern int FUN_00167234(); /* 0x167234 */
extern int FUN_00167e80(); /* 0x167e80 */
extern unsigned int *DAT_00589168; /* 0x589168 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */


void FUN_00151118(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x90,1);
  DAT_00589168 = puVar1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  FUN_00100388(puVar1 + 4,&LAB_0015120c,"May 11 2016");
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar2 = &LAB_0015121c;
  FUN_0014e38c(&LAB_0015121c,4,0,0,&LAB_0016547c,FUN_00167e80,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_00151228,0x75,0,0,FUN_00167234,0,0,puVar2);
  return;
}
