/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029bc38` (_code @ 0x29bc38, 0x138 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_0018bfec(); /* 0x18bfec */
extern int FUN_001a15b0(); /* 0x1a15b0 */
extern int FUN_001c87d8(); /* 0x1c87d8 */
extern unsigned char LAB_001c8874; /* 0x1c8874 */
extern int DAT_0044dc20; /* 0x44dc20 */

/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_00296a18. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_003b7d78. */


void FUN_0029bc38(unsigned char param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int *puVar3;
  
  if (DAT_0044dc20 == 0) {
    FUN_00289b4c();
    temp_v0 = FUN_002c4b84(0x100,0x100,0,0xd658,1);
    pcVar2 = "Result CALC";
    DAT_0044dc20 = temp_v0;
    FUN_002c5978("Result CALC",2,0,0,FUN_0018bfec,FUN_001c87d8,0);
    puVar3 = (unsigned int *)(temp_v0 + 0xd644);
    *puVar3 = (unsigned int)pcVar2;
    FUN_002c4c00("Result DrawUpLeft",0x80,0,0,FUN_001a15b0,0,0,pcVar2);
    FUN_002c4c00("Result DrawUpRight",0xde,0,0,FUN_001a15b0,0,0,*puVar3);
    pcVar2 = "Result DDRAW";
    FUN_002c4c00("Result DDRAW",0xe6,0,0,&LAB_001c8874,0,0,*puVar3);
    *(char **)(temp_v0 + 0xd64c) = pcVar2;
    FUN_003b7d78(temp_v0);
    *(unsigned char *)(temp_v0 + 0x3560) = param_1;
    FUN_00296a18(temp_v0,1);
    return;
  }
  return;
}
