/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f80b0` (_code @ 0x1f80b0, 0xd0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_001e4990(); /* 0x1e4990 */
extern unsigned char LAB_001f8188; /* 0x1f8188 */
extern unsigned char LAB_001f819c; /* 0x1f819c */
extern int FUN_0020eca8(); /* 0x20eca8 */
extern int FUN_002c9f7c(); /* 0x2c9f7c */
extern unsigned int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_002217d8. */
/* Supplied declaration required: FUN_002c4460. */
extern unsigned int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_003d9948. */


void FUN_001f80b0(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  
  puVar1 = &LAB_001f8188;
  FUN_002c4c00(&LAB_001f8188,2,0,0,FUN_001e4990,FUN_002c9f7c,param_1,*param_1);
  param_1[0xe] = (unsigned int)puVar1;
  temp_v0 = 0;
  FUN_002217d8();
  param_1[0xf] = temp_v0;
  FUN_002c4460(*param_1,temp_v0);
  puVar1 = &LAB_001f819c;
  FUN_002c4c00(&LAB_001f819c,0x71,0,0,FUN_0020eca8,0,param_1,*param_1);
  param_1[0x10] = (unsigned int)puVar1;
  DAT_00435d18 = FUN_002c4b84(0x100,0x100,0,0x32a4,1);
  FUN_003d9948(DAT_00435d18,param_1);
  return;
}
