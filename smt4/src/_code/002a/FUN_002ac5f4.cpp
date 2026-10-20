/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac5f4` (_code @ 0x2ac5f4, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_snd_internal_BankFile_FileHeader_GetInfoBlock(void);

/* Supplied declaration required: nw_snd_internal_BankFile_FileHeader_GetInfoBlock. */


int * FUN_002ac5f4(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = 0;
  param_1[1] = 0;
  *(unsigned char *)(param_1 + 2) = 0;
  if (((param_2 != (int *)0x0) && (*param_2 == 0x4b4e4243)) && (param_2[2] - 0x1000000U < 0x101)) {
    *param_1 = (int)param_2;
    nw_snd_internal_BankFile_FileHeader_GetInfoBlock();
    *(unsigned char *)(param_1 + 2) = 1;
    param_1[1] = (int)(param_2 + 2);
  }
  return param_1;
}

} /* extern "C" */
