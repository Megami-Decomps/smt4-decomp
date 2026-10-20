/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d680` (_code @ 0x31d680, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(...);
int FUN_0015155c(...);
int FUN_00163060(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_002a4b9c(...); /* 0x2a4b9c */
extern unsigned char LAB_002e6174; /* 0x2e6174 */
extern unsigned char LAB_0031d768; /* 0x31d768 */
extern unsigned char LAB_0031d780; /* 0x31d780 */
extern unsigned int *DAT_00588128; /* 0x588128 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */


void FUN_0031d680(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_00588128 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0xc,1);
    DAT_00588128 = puVar1;
  }
  puVar1 = DAT_00588128;
  *DAT_00588128 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = &LAB_0031d768;
  FUN_0014e38c(&LAB_0031d768,4,0,0,FUN_002a4b9c,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_0031d780,0x75,0,0,&LAB_002e6174,0,0,puVar2);
  return;
}

} /* extern "C" */
