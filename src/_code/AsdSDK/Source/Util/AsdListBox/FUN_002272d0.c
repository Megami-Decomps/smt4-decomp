/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002272d0` (_code @ 0x2272d0, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_002272d0_arg0 fn_002272d0_arg0;
struct fn_002272d0_arg0 {
    unsigned char pad_0x0[0x28];
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x40];
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
};

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char LAB_002e117c; /* 0x2e117c */

/* Supplied declaration required: FUN_00259d88. */
/* Supplied declaration required: FUN_00262b60. */
/* Supplied declaration required: FUN_002b2814. */
extern int FUN_002c0ac8(void);
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002d567c. */


unsigned int FUN_002272d0(fn_002272d0_arg0 *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_002c0ac8();
  puVar2 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x220,1);
  FUN_00262b60((int)puVar2 + 6,param_2,0x100);
  *(unsigned char *)(puVar2 + 1) = 0;
  *puVar2 = *(unsigned int *)(temp_v0 + 0x70);
  *(int *)(temp_v0 + 0x70) = *(int *)(temp_v0 + 0x70) + 1;
  FUN_002b2814(temp_v0,puVar2,&LAB_002e117c);
  FUN_00259d88(param_1);
  FUN_002d567c(temp_v0 + 0xc);
  *(unsigned int *)(temp_v0 + 0x6c) = *(unsigned int *)(temp_v0 + 0x28);
  return *puVar2;
}
