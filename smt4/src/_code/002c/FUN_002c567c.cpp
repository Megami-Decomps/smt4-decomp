/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c567c` (_code @ 0x2c567c, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011c264(unsigned int *, int *);
int FUN_0011c95c(void);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_0044e630; /* 0x44e630 */
extern unsigned int DAT_0044e634; /* 0x44e634 */

#ifndef ROMWRIGHT_ZEXT_4_8_DEFINED
#define ROMWRIGHT_ZEXT_4_8_DEFINED
#define romwright_zext_4_8(value) ((unsigned long long)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0011c264. */
/* Supplied declaration required: FUN_0011c95c. */


void FUN_002c567c(unsigned int *param_1)

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
  FUN_0011c95c();
  temp_v2 = (unsigned int)(romwright_zext_4_8(puVar1) * 1000000);
  temp_v3 = temp_v0 * 1000000 + (int)(romwright_zext_4_8(puVar1) * 1000000 >> 0x20);
  temp_v4 = DAT_0044e630;
  uStack_14 = DAT_0044e634;
  puVar1 = (unsigned int *)&temp_v4;
  FUN_0011c264(puVar1,&temp_v2);
  temp_v1 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = temp_v1;
  return;
}

} /* extern "C" */
