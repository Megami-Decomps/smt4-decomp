/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035dc10` (_code @ 0x35dc10, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_0035dd40; /* 0x35dd40 */
extern unsigned char LAB_0035dd50; /* 0x35dd50 */
extern int FUN_003cf02c(); /* 0x3cf02c */
extern int FUN_003d26cc(); /* 0x3d26cc */
extern int FUN_003da030(); /* 0x3da030 */
extern unsigned int *DAT_0057f2c4; /* 0x57f2c4 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_002cd8fc. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003f86f8. */


void FUN_0035dc10(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0057f2c4 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x9f0,1);
    DAT_0057f2c4 = puVar1;
  }
  puVar1 = DAT_0057f2c4;
  FUN_002e6354();
  puVar2 = &LAB_0035dd40;
  FUN_0014e38c(&LAB_0035dd40,4,0,0,FUN_003cf02c,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_0035dd50,0xeb,0,0,FUN_003da030,0,0,puVar2);
  FUN_0015155c(&LAB_0035dd50,0x71,0,0,FUN_003d26cc,0,0,*puVar1);
  FUN_002cd8fc();
  FUN_001695a0();
  FUN_003f86f8(0x25);
  return;
}
