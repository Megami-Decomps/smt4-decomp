/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002229e4` (_code @ 0x2229e4, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c498c(...);
int FUN_002c4a08(...);
int FUN_002c5788(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_001ed6ac(...); /* 0x1ed6ac */
extern unsigned char LAB_0021241c; /* 0x21241c */
extern unsigned char LAB_00222acc; /* 0x222acc */
extern unsigned char LAB_00222ae4; /* 0x222ae4 */
extern unsigned int *DAT_0044d1b0; /* 0x44d1b0 */

/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c4a08. */
/* Supplied declaration required: FUN_002c5788. */


void FUN_002229e4(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (DAT_0044d1b0 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_002c498c(0x100,0x100,0,0xc,1);
    DAT_0044d1b0 = puVar1;
  }
  puVar1 = DAT_0044d1b0;
  *DAT_0044d1b0 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar2 = &LAB_00222acc;
  FUN_002c5788(&LAB_00222acc,2,0,0,FUN_001ed6ac,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_002c4a08(&LAB_00222ae4,0x73,0,0,&LAB_0021241c,0,0,puVar2);
  return;
}

} /* extern "C" */
