/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc2ec` (_code @ 0x1fc2ec, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_001fc408; /* 0x1fc408 */
extern unsigned char LAB_001fc41c; /* 0x1fc41c */
extern int FUN_001fdf4c(); /* 0x1fdf4c */
extern unsigned char LAB_002d5430; /* 0x2d5430 */
extern unsigned char LAB_002d5488; /* 0x2d5488 */
extern unsigned char DAT_0044cfd0; /* 0x44cfd0 */
extern unsigned int *DAT_0044cfd4; /* 0x44cfd4 */
extern int DAT_0044cfd8; /* 0x44cfd8 */
extern int DAT_0044cfdc; /* 0x44cfdc */

extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c583c. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_001fc2ec(short *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  FUN_002c583c(0);
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0xc,1);
  DAT_0044cfd4 = puVar1;
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  DAT_0044cfd0 = 0;
  *(unsigned char *)((int)puVar1 + 5) = 0;
  if ((param_1 != (short *)0x0) && (param_2 == 4)) {
    DAT_0044cfd8 = (int)*param_1;
    DAT_0044cfdc = (int)param_1[1];
  }
  puVar2 = &LAB_001fc408;
  FUN_002c5978(&LAB_001fc408,2,0,0,FUN_001fdf4c,&LAB_002d5430,puVar1);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4c00(&LAB_001fc41c,0xe7,1,0,&LAB_002d5488,0,DAT_0044cfd4,puVar2);
  return;
}
