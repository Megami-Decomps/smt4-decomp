/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b52a4` (_code @ 0x2b52a4, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_00298508(); /* 0x298508 */
extern unsigned char LAB_002b537c; /* 0x2b537c */
extern unsigned char LAB_002b5390; /* 0x2b5390 */
extern int FUN_002dece8(); /* 0x2dece8 */
extern int FUN_003286e0(); /* 0x3286e0 */
extern unsigned int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: FUN_0014bdb4. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_0031b654. */
/* Supplied declaration required: FUN_004f55c8. */


void FUN_002b52a4(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  
  puVar1 = &LAB_002b537c;
  FUN_0015155c(&LAB_002b537c,4,0,0,FUN_00298508,FUN_003286e0,param_1,*param_1);
  param_1[0x17] = (unsigned int)puVar1;
  temp_v0 = 0;
  FUN_0031b654();
  param_1[0x18] = temp_v0;
  FUN_0014bdb4(*param_1,temp_v0);
  puVar1 = &LAB_002b5390;
  FUN_0015155c(&LAB_002b5390,0x73,0,0,FUN_002dece8,0,param_1,*param_1);
  param_1[0x19] = (unsigned int)puVar1;
  temp_v0 = 0x100;
  FUN_00163060(0x100,0x100,0,0x9c74,1);
  DAT_00573808 = temp_v0;
  FUN_004f55c8();
  return;
}
