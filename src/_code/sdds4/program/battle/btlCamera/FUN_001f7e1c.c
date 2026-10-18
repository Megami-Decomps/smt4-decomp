/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f7e1c` (_code @ 0x1f7e1c, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_001e4928(); /* 0x1e4928 */
extern unsigned char LAB_001f7eb0; /* 0x1f7eb0 */
extern int FUN_002c9dec(); /* 0x2c9dec */
extern int DAT_004342c8; /* 0x4342c8 */

extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_003d5a5c. */


void FUN_001f7e1c(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  
  puVar1 = &LAB_001f7eb0;
  FUN_002c4c00(&LAB_001f7eb0,2,0,0,FUN_001e4928,FUN_002c9dec,param_1,*param_1);
  param_1[0x11] = (unsigned int)puVar1;
  if (DAT_004342c8 == 0) {
    DAT_004342c8 = FUN_002c4b84(0x100,0x100,0,0x848,1);
  }
  FUN_003d5a5c(DAT_004342c8,param_1);
  return;
}
