/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_res_SetupReferenceLut` (_code @ 0x2b5134, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013fd7c(unsigned char [8], int, unsigned int);
int FUN_002a7c80(int *, unsigned char [8]);

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_0013fd7c. */
/* Supplied declaration required: FUN_002a7c80. */


unsigned int nw_gfx_res_SetupReferenceLut(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  char temp_v2;
  unsigned char temp_v3 [8];
  
  temp_v0 = 0;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      puVar1 = (unsigned int *)(param_1 + 0xc + *(int *)(param_1 + 0xc));
    }
    else {
      puVar1 = (unsigned int *)0x0;
    }
    if ((puVar1 != (unsigned int *)0x0) && ((*puVar1 & 0x80000000) == 0)) {
      puVar1 = (unsigned int *)0x0;
    }
    if (puVar1 == (unsigned int *)0x0) {
      temp_v1 = 0;
      temp_v2 = '\0';
      FUN_0013fd7c(temp_v3,param_1,param_2);
      FUN_002a7c80(&temp_v1,temp_v3);
      if (temp_v2 == '\0') {
        temp_v0 = 0x80000004;
      }
    }
  }
  return temp_v0;
}

} /* extern "C" */
