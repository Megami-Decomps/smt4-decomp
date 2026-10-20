/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc390` (_code @ 0x1fc390, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c498c(...);
int FUN_002c4a08(...);
int FUN_002c564c(...);
int FUN_002c5788(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_001fc4ac; /* 0x1fc4ac */
extern unsigned char LAB_001fc4c0; /* 0x1fc4c0 */
extern int FUN_001fdff0(...); /* 0x1fdff0 */
extern unsigned char LAB_002d54dc; /* 0x2d54dc */
extern unsigned char LAB_002d5534; /* 0x2d5534 */
extern unsigned char DAT_0044cfd0; /* 0x44cfd0 */
extern unsigned int *DAT_0044cfd4; /* 0x44cfd4 */
extern int DAT_0044cfd8; /* 0x44cfd8 */
extern int DAT_0044cfdc; /* 0x44cfdc */

/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c564c. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_001fc390(short *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  FUN_002c564c(0);
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0xc,1);
  DAT_0044cfd4 = puVar1;
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  DAT_0044cfd0 = 0;
  *(unsigned char *)((int)puVar1 + 5) = 0;
  if ((param_1 != (short *)0x0) && (param_2 == 4)) {
    DAT_0044cfd8 = (int)*param_1;
    DAT_0044cfdc = (int)param_1[1];
  }
  puVar2 = &LAB_001fc4ac;
  FUN_002c5788(&LAB_001fc4ac,2,0,0,FUN_001fdff0,&LAB_002d54dc,puVar1);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_001fc4c0,0xe7,1,0,&LAB_002d5534,0,DAT_0044cfd4,puVar2);
  return;
}

} /* extern "C" */
