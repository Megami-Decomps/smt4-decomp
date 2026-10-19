/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_ResFog_Setup` (_code @ 0x1207ec, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int FUN_002b50e4(int *);
/* Supplied declaration required: nw_gfx_res_SetupReferenceLut. */


unsigned int nw_gfx_res_ResFog_Setup(int *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = 0;
  temp_v2 = 0;
  temp_v0 = *(int *)(*param_1 + 0xc4);
  if (temp_v0 != 0) {
    puVar1 = (unsigned int *)(*param_1 + 0xc4 + temp_v0);
  }
  else {
    puVar1 = (unsigned int *)0x0;
  }
  if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
    puVar1 = (unsigned int *)0x0;
  }
  temp_v3 = param_4;
  nw_gfx_res_SetupReferenceLut(puVar1,param_3);
  if (-1 < (int)puVar1) {
    temp_v0 = *(int *)(*param_1 + 0xc4);
    if (temp_v0 != 0) {
      temp_v2 = temp_v0 + *param_1 + 0xc4;
    }
    temp_v3 = temp_v2;
    temp_v1 = FUN_002b50e4(&temp_v3);
  }
  return (unsigned int)puVar1 | temp_v1;
}
