/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b830` (_code @ 0x10b830, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00107120(unsigned int, unsigned int, int, int);
int FUN_002e995c(unsigned char [8]);
int FUN_002f5020(unsigned int *, unsigned char *, int, int);
int FUN_00441db8(unsigned int *);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char LAB_00107239; /* 0x107239 */

/* Supplied declaration required: FUN_00107120. */
/* Supplied declaration required: FUN_002e995c. */
extern unsigned int *FUN_002f5010(unsigned int);
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_00441db8. */


unsigned int FUN_0010b830(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned char temp_v1 [8];
  unsigned int temp_v2;
  
  puVar1 = (unsigned int *)FUN_002f5010(0x20);
  puVar2 = (unsigned int *)0x0;
  if (puVar1 != (unsigned int *)0x0) {
    puVar2 = puVar1 + 2;
    puVar1[1] = 1;
    *puVar1 = 0x18;
    FUN_002f5020(puVar2,&LAB_00107239,0x18,1);
  }
  param_1[1] = (unsigned int)puVar2;
  FUN_002e995c(temp_v1);
  temp_v0 = 0;
  FUN_00441db8(&temp_v0);
  temp_v2 = temp_v0;
  *(unsigned int *)param_1[1] =
       (temp_v0 & 0xff000000) | (((temp_v0 >> 0x10) & 0xff) << 0x10) |
       (((temp_v0 >> 8) & 0xff) << 8) | (temp_v0 & 0xff);
  *(unsigned int *)(param_1[1] + 8) = 0xffffff;
  *(unsigned int *)(param_1[1] + 4) = 0xffffffff;
  *param_1 = 1;
  FUN_00107120(param_1[1],0xffffffff,1,0);
  return 1;
}

} /* extern "C" */
