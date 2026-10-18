/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a83c8` (_code @ 0x1a83c8, 0x140 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_0019e034(); /* 0x19e034 */
extern unsigned char LAB_001a854c; /* 0x1a854c */
extern unsigned char LAB_001a855c; /* 0x1a855c */
extern unsigned char LAB_001a8570; /* 0x1a8570 */
extern unsigned char LAB_001a8588; /* 0x1a8588 */
extern unsigned char LAB_001a859c; /* 0x1a859c */
extern int FUN_001b71e0(); /* 0x1b71e0 */
extern unsigned char LAB_001e4af8; /* 0x1e4af8 */
extern unsigned char LAB_001e4afc; /* 0x1e4afc */
extern unsigned char LAB_0020f3fc; /* 0x20f3fc */
extern int *DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00289b4c. */
extern int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_003ad98c. */


void FUN_001a83c8(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  
  FUN_00289b4c();
  if (DAT_00439ca8 == (int *)0x0) {
    DAT_00439ca8 = (int *)FUN_002c4b84(0x100,0x100,0,0xf040,1);
  }
  piVar1 = DAT_00439ca8;
  puVar2 = &LAB_001a854c;
  FUN_002c4c00(&LAB_001a854c,2,0,0,FUN_0019e034,&LAB_001e4af8,param_1,*param_1);
  param_1[0x15] = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_001a855c,0x7a,0,0,FUN_001b71e0,0,param_1,puVar2);
  FUN_002c4c00(&LAB_001a8570,0xd8,0,0,FUN_001b71e0,0,param_1,param_1[0x15]);
  FUN_002c4c00(&LAB_001a8588,0xe7,0,0,&LAB_001e4afc,0,param_1,param_1[0x15]);
  FUN_002c4c00(&LAB_001a859c,0xe9,0,0,&LAB_0020f3fc,0,param_1,param_1[0x15]);
  FUN_003ad98c(piVar1,param_1);
  *piVar1 = (int)param_1;
  return;
}
