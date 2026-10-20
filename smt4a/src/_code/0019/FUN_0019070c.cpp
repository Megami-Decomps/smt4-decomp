/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019070c` (_code @ 0x19070c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5020(int, unsigned char *, int, int);

typedef struct fn_0019070c_arg0 fn_0019070c_arg0;
struct fn_0019070c_arg0 {
    unsigned char pad_0x0[0x328e];
    undefined1 field_0x328e; /* +0x328e */
    unsigned char pad_0x328f[0x1];
    undefined4 field_0x3290; /* +0x3290 */
    undefined4 field_0x3294; /* +0x3294 */
};

extern unsigned char LAB_001aafb0; /* 0x1aafb0 */
extern unsigned char DAT_0055bef8; /* 0x55bef8 */

extern int FUN_001a6384(int);
extern int FUN_001a6400(unsigned int *);
extern unsigned int *FUN_001b18cc(void);
/* Supplied declaration required: FUN_002f5020. */


void FUN_0019070c(fn_0019070c_arg0 *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_001b18cc();
  *puVar1 = (unsigned int)&DAT_0055bef8;
  temp_v0 = FUN_001a6400(puVar1 + 0x46);
  temp_v0 = FUN_001a6384(temp_v0 + 0x21fc);
  *(unsigned int *)(temp_v0 + 0xd30) = param_2;
  temp_v0 = temp_v0 + 0xd34;
  FUN_002f5020(temp_v0,&LAB_001aafb0,0x10,4);
  *(unsigned char *)(temp_v0 + 0x246) = 0;
  *(unsigned int *)(temp_v0 + 0x248) = 0;
  *(unsigned int *)(temp_v0 + 0x24c) = 0;
  return;
}

} /* extern "C" */
