/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016f33c` (_code @ 0x16f33c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned short uRam006446ee; /* 0x6446ee */
extern unsigned char DAT_00647708; /* 0x647708 */
extern float fRam0064770c; /* 0x64770c */
extern float fRam00647710; /* 0x647710 */

extern int FUN_001c6e20(void);


void FUN_0016f33c(char *param_1)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  float in_s0;
  float temp_v1;
  
  if (*param_1 == '\0') {
    return;
  }
  *(float *)(param_1 + 4) = in_s0;
  if (DAT_00647708 != '\0') {
    temp_v1 = in_s0 * fRam00647710;
    fRam0064770c = in_s0;
    temp_v0 = FUN_001c6e20();
    if (temp_v0 != 0) {
      puVar2 = *(unsigned int **)((unsigned int)uRam006446ee * 4 + 0x644470);
      puVar2[1] = (unsigned int)temp_v1;
      *puVar2 = *puVar2 | 0x10000;
    }
    return;
  }
  return;
}

} /* extern "C" */
