/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d280` (_code @ 0x31d280, 0x17c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char LAB_0031d444; /* 0x31d444 */
extern unsigned char LAB_0031d454; /* 0x31d454 */
extern unsigned char LAB_0031d468; /* 0x31d468 */
extern int FUN_00328838(); /* 0x328838 */
extern unsigned char LAB_00357f9c; /* 0x357f9c */
extern unsigned char LAB_0037a050; /* 0x37a050 */
extern unsigned char LAB_0037a068; /* 0x37a068 */
extern unsigned char LAB_003a3c40; /* 0x3a3c40 */
extern unsigned int *DAT_0056fccc; /* 0x56fccc */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_0019ea64. */


void FUN_0031d280(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x598,1);
  DAT_0056fccc = puVar1;
  *(unsigned char *)((int)puVar1 + 5) = 1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0x153] = 0;
  *(unsigned char *)(puVar1 + 0x154) = 0;
  puVar1[0x155] = 0;
  puVar1[0x157] = 0;
  puVar1[0x158] = 0;
  puVar1[0x15a] = 0;
  puVar1[0x159] = 0;
  puVar1[0x15d] = 0;
  puVar1[0x15c] = 0;
  puVar1[0x160] = 0;
  puVar1[0x15f] = 0;
  puVar1[0x163] = 0;
  puVar1[0x162] = 0;
  FUN_0019ea64(0);
  puVar1[0xf] = 0;
  *(unsigned char *)(puVar1 + 1) = 0;
  if (param_1 != (unsigned int *)0x0) {
    puVar1[0x158] = *param_1 & 0xff;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  puVar2 = &LAB_0031d444;
  FUN_0014e38c(&LAB_0031d444,4,0,0,FUN_00328838,&LAB_0037a050,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_0031d454,0x77,0,0,&LAB_00357f9c,0,0,puVar2);
  FUN_0015155c(&LAB_0031d454,0xd3,0,0,&LAB_003a3c40,0,0,*puVar1);
  FUN_0015155c(&LAB_0031d468,0xeb,0,0,&LAB_0037a068,0,0,*puVar1);
  return;
}
