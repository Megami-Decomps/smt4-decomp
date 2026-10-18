/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001afaec` (_code @ 0x1afaec, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_7_stack;

extern unsigned char LAB_00100ded; /* 0x100ded */
extern unsigned char LAB_00100df3; /* 0x100df3 */
extern unsigned char LAB_001bc5f4; /* 0x1bc5f4 */
extern int FUN_001bd870(); /* 0x1bd870 */
extern unsigned char DAT_0064497c; /* 0x64497c */

/* Supplied declaration required: FUN_00188b60. */
extern int FUN_0018b65c(void);
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002fb0d4. */


unsigned int *
FUN_001afaec(unsigned int *param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5,
            unsigned int param_6,int param_7)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned int temp_v5 [2];
  
  if (*(char *)(param_1 + 3) != '\0') {
    puVar1 = (unsigned int *)0x820abf9;
  }
  else {
    temp_v0 = FUN_0018b65c();
    if ((temp_v0 != 0) && (param_7 == 1)) {
      param_6 = 0x5109d500;
    }
    FUN_00188b60(param_1 + 0xd);
    temp_v1 = 4;
    temp_v2 = &LAB_001bc5f4;
    puVar1 = param_1 + 4;
    temp_v3 = &LAB_00100df3;
    temp_v4 = &LAB_00100ded;
    temp_v5[0] = 0;
    FUN_002fb0d4(puVar1,&temp_v1,FUN_001bd870,temp_v5,param_4 + param_5,param_6,param_7,0);
    if ((((unsigned int)puVar1 & 0x7e00000) != 0x600000) && ((int)puVar1 < 0)) {
      FUN_002e3140(puVar1);
    }
    if (((unsigned int)puVar1 & 0x80000000) != 0) {
      param_1[0xf] = 0xffffffff;
    }
    else {
      param_1[8] = 0;
      *(unsigned char *)(param_1 + 3) = 1;
      DAT_0064497c = param_7 == 0;
      param_1[9] = 0;
      param_1[10] = param_2;
      param_1[0xb] = param_3;
      *param_1 = 0;
      param_1[1] = 0;
      *(char *)(param_1 + 0xc) = (char)param_7;
    }
  }
  return puVar1;
}
