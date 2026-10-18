/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d2528` (_code @ 0x1d2528, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_001b5398(); /* 0x1b5398 */
extern unsigned char LAB_001d25c8; /* 0x1d25c8 */
extern int FUN_0020ee34(); /* 0x20ee34 */
extern unsigned int *DAT_00435d78; /* 0x435d78 */

extern int FUN_002bf41c(unsigned int);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */


void FUN_001d2528(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  
  temp_v0 = FUN_002bf41c(param_1[0x13]);
  if (temp_v0 == 0) {
    puVar2 = &LAB_001d25c8;
    FUN_002c4c00(&LAB_001d25c8,2,0,0,FUN_001b5398,FUN_0020ee34,param_1,*param_1);
    param_1[0x13] = (unsigned int)puVar2;
    puVar3 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0xc,1);
    DAT_00435d78 = puVar3;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  return;
}
