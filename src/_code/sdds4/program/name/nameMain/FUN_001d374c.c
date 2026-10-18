/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d374c` (_code @ 0x1d374c, 0x174 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_001d947c; /* 0x1d947c */
extern unsigned char LAB_001fe08c; /* 0x1fe08c */
extern unsigned char LAB_0021f1ac; /* 0x21f1ac */
extern unsigned char LAB_0021f1c4; /* 0x21f1c4 */
extern unsigned int *DAT_0044d184; /* 0x44d184 */

extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_003986c0. */
/* Supplied declaration required: FUN_003986c8. */


void FUN_001d374c(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  char *pcVar2;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x960,1);
  DAT_0044d184 = puVar1;
  if (param_1 != (int *)0x0) {
    FUN_003986c8(puVar1 + 4,(int)(char)*param_1);
  }
  else {
    FUN_003986c0(puVar1 + 4);
  }
  pcVar2 = "NameMainProc";
  FUN_002c5978("NameMainProc",2,0,0,&LAB_001d947c,&LAB_0021f1ac,DAT_0044d184);
  *puVar1 = (unsigned int)pcVar2;
  if (*param_1 != 1) {
    FUN_002c4c00("NameDrawUp",0x7a,1,0,&LAB_001fe08c,0,DAT_0044d184,pcVar2);
    FUN_002c4c00("NameDrawUp",0xd8,1,0,&LAB_001fe08c,0,DAT_0044d184,*puVar1);
  }
  else {
    FUN_002c4c00("NameDrawUp",0x80,1,0,&LAB_001fe08c,0,DAT_0044d184,pcVar2);
    FUN_002c4c00("NameDrawUp",0xde,1,0,&LAB_001fe08c,0,DAT_0044d184,*puVar1);
  }
  pcVar2 = "NameDrawDown";
  FUN_002c4c00("NameDrawDown",0xe6,1,0,&LAB_0021f1c4,0,DAT_0044d184,*puVar1);
  puVar1[2] = (unsigned int)pcVar2;
  return;
}
