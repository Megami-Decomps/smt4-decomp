/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_init_InitializeAllocator` (_code @ 0x1472a4, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00558414; /* 0x558414 */
extern unsigned int *puRam005893bc; /* 0x5893bc */
extern unsigned int uRam005893c0; /* 0x5893c0 */
extern char *pcRam0062d610; /* 0x62d610 */
extern unsigned int *puRam0062d614; /* 0x62d614 */
extern unsigned char uRam0062d618; /* 0x62d618 */
extern unsigned char uRam0062d619; /* 0x62d619 */
extern unsigned char uRam0062d61a; /* 0x62d61a */
extern unsigned char DAT_0062d61c; /* 0x62d61c */
extern int DAT_0062d624; /* 0x62d624 */

/* Supplied declaration required: FUN_00159110. */
/* Supplied declaration required: FUN_00161b14. */
/* Supplied declaration required: FUN_00188b60. */


void nn_init_InitializeAllocator(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int unaff_r4;
  unsigned int *puVar3;
  
  FUN_00161b14(&DAT_0062d61c,param_1);
  temp_v1 = DAT_0062d624;
  temp_v0 = (DAT_0062d624 - 1U) & 0xfffffffc;
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
    *puVar3 = (unsigned int)&DAT_00558414;
    FUN_00159110(puVar3,temp_v0 + 0x68,(temp_v1 + param_1) - (temp_v0 + 0x68),0,unaff_r4);
    FUN_00188b60(temp_v0 + 0x5c);
  }
  puRam005893bc = puVar3;
  pcRam0062d610 = "䰬Q䯼QḘC";
  puRam0062d614 = puVar3;
  uRam0062d618 = 0;
  uRam0062d619 = 0;
  uRam0062d61a = 0;
  uRam005893c0 = 0x62d610;
  return;
}
