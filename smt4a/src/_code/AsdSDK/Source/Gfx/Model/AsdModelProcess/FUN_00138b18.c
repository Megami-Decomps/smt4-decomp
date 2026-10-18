/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138b18` (_code @ 0x138b18, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned char LAB_00138c58; /* 0x138c58 */
extern unsigned char LAB_00138c74; /* 0x138c74 */
extern unsigned char LAB_00138c90; /* 0x138c90 */
extern int FUN_0013ea8c(); /* 0x13ea8c */
extern unsigned char LAB_001400f8; /* 0x1400f8 */
extern unsigned char LAB_00141260; /* 0x141260 */
extern int FUN_00141270(); /* 0x141270 */
extern unsigned char *DAT_005b3cd4; /* 0x5b3cd4 */

/* Supplied declaration required: FUN_00141870. */
/* Supplied declaration required: FUN_00143320. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_0019a5a0. */


unsigned char * FUN_00138b18(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0xc,1);
  puVar2 = (unsigned char *)0x0;
  if (puVar1 != (unsigned int *)0x0) {
    puVar2 = &LAB_00138c58;
    FUN_0014e38c(&LAB_00138c58,param_1,0,0,&LAB_001400f8,FUN_0013ea8c,puVar1);
    DAT_005b3cd4 = puVar2;
    if (puVar2 == (unsigned char *)0x0) {
      FUN_0019a5a0(puVar1);
      return (unsigned char *)0x0;
    }
    puVar2 = &LAB_00138c74;
    FUN_0014e38c(&LAB_00138c74,param_2,0,0,FUN_00141270,0,puVar1);
    *puVar1 = (unsigned int)puVar2;
    FUN_00141870();
    puVar2 = &LAB_00138c90;
    FUN_0014e38c(&LAB_00138c90,param_3,0,0,&LAB_00141260,0,puVar1);
    puVar1[2] = (unsigned int)puVar2;
    FUN_00143320();
    puVar2 = (unsigned char *)0x0;
    if (param_1 != 0) {
      puVar2 = DAT_005b3cd4;
    }
  }
  return puVar2;
}
