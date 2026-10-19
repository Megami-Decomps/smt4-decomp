/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_init_InitializeAllocator` (_code @ 0x1100a0, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00420f30; /* 0x420f30 */
extern unsigned int *puRam0044e688; /* 0x44e688 */
extern unsigned int uRam0044e68c; /* 0x44e68c */
extern char *pcRam004d45e0; /* 0x4d45e0 */
extern unsigned int *puRam004d45e4; /* 0x4d45e4 */
extern unsigned char uRam004d45e8; /* 0x4d45e8 */
extern unsigned char uRam004d45e9; /* 0x4d45e9 */
extern unsigned char uRam004d45ea; /* 0x4d45ea */
extern unsigned char DAT_004d45ec; /* 0x4d45ec */
extern int DAT_004d45f4; /* 0x4d45f4 */

/* Supplied declaration required: FUN_00123a38. */
/* Supplied declaration required: FUN_002c38fc. */
/* Supplied declaration required: FUN_002c3918. */


void nn_init_InitializeAllocator(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int unaff_r4;
  unsigned int *puVar3;
  
  FUN_00123a38(&DAT_004d45ec,param_1);
  temp_v1 = DAT_004d45f4;
  temp_v0 = (DAT_004d45f4 - 1U) & 0xfffffffc;
  puVar3 = (unsigned int *)(temp_v0 + 4);
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *(unsigned int *)(temp_v0 + 8) = 0;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
    *(unsigned int *)(temp_v0 + 0x18) = 0;
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
    *(unsigned int *)(temp_v0 + 0x58) = 0;
    *(unsigned int *)(temp_v0 + 0x5c) = 0;
    *(unsigned int *)(temp_v0 + 0x60) = 0;
    *(unsigned int *)(temp_v0 + 100) = 0xffffffff;
    *puVar3 = (unsigned int)&DAT_00420f30;
    FUN_002c3918(puVar3,temp_v0 + 0x68,(temp_v1 + param_1) - (temp_v0 + 0x68),0,unaff_r4);
    FUN_002c38fc(temp_v0 + 0x5c);
  }
  puRam0044e688 = puVar3;
  pcRam004d45e0 = "炜?灬?갴5";
  puRam004d45e4 = puVar3;
  uRam004d45e8 = 0;
  uRam004d45e9 = 0;
  uRam004d45ea = 0;
  uRam0044e68c = 0x4d45e0;
  return;
}
