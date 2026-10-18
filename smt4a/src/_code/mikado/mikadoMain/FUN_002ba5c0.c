/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ba5c0` (_code @ 0x2ba5c0, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_002ba6dc; /* 0x2ba6dc */
extern unsigned char LAB_002ba6f0; /* 0x2ba6f0 */
extern int FUN_002bd1f4(); /* 0x2bd1f4 */
extern unsigned char LAB_003409bc; /* 0x3409bc */
extern unsigned char LAB_00340a14; /* 0x340a14 */
extern unsigned char DAT_00588010; /* 0x588010 */
extern unsigned int *DAT_00588014; /* 0x588014 */
extern int DAT_00588018; /* 0x588018 */
extern int DAT_0058801c; /* 0x58801c */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_00180008. */


void FUN_002ba5c0(short *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  FUN_00180008(0);
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0xc,1);
  DAT_00588014 = puVar1;
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  DAT_00588010 = 0;
  *(unsigned char *)((int)puVar1 + 5) = 0;
  if ((param_1 != (short *)0x0) && (param_2 == 4)) {
    DAT_00588018 = (int)*param_1;
    DAT_0058801c = (int)param_1[1];
  }
  puVar2 = &LAB_002ba6dc;
  FUN_0014e38c(&LAB_002ba6dc,4,0,0,FUN_002bd1f4,&LAB_003409bc,puVar1);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_002ba6f0,0xeb,1,0,&LAB_00340a14,0,DAT_00588014,puVar2);
  return;
}
