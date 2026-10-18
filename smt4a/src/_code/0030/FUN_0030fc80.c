/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fc80` (_code @ 0x30fc80, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_00589370; /* 0x589370 */
extern unsigned int DAT_00589374; /* 0x589374 */

#ifndef ROMWRIGHT_ZEXT_4_8_DEFINED
#define ROMWRIGHT_ZEXT_4_8_DEFINED
#define romwright_zext_4_8(value) ((unsigned long long)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_001593ac. */
/* Supplied declaration required: FUN_00159aa4. */


void FUN_0030fc80(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_14;
  
  puVar1 = param_1;
  FUN_00159aa4();
  temp_v2 = (unsigned int)(romwright_zext_4_8(puVar1) * 1000000);
  temp_v3 = temp_v0 * 1000000 + (int)(romwright_zext_4_8(puVar1) * 1000000 >> 0x20);
  temp_v4 = DAT_00589370;
  uStack_14 = DAT_00589374;
  puVar1 = (unsigned int *)&temp_v4;
  FUN_001593ac(puVar1,&temp_v2);
  temp_v1 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = temp_v1;
  return;
}
