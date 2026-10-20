/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00193840` (_code @ 0x193840, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a063c(int *, unsigned int, int);
int nnnstdMemCpy(int, int *, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_001a063c. */
/* Supplied declaration required: nnnstdMemCpy. */


void FUN_00193840(unsigned int param_1,int *param_2,int param_3,int *param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = 0;
  do {
    temp_v1 = *(int *)(*param_4 + (unsigned int)*(unsigned short *)(param_3 + 0x20) * 0x278 + temp_v0 * 4 + 0x238);
    if (temp_v1 != 0) {
      temp_v3 = 0xf01c5;
      temp_v2 = (temp_v0 & 0xff) * 0x100 + 0x800;
      nnnstdMemCpy(*param_2,&temp_v2,8);
      *param_2 = *param_2 + 8;
      FUN_001a063c(param_2,*(unsigned int *)(temp_v1 + 4),*(int *)(temp_v1 + 8) << 2);
    }
    temp_v1 = *(int *)(*param_4 + (unsigned int)*(unsigned short *)(param_3 + 0x20) * 0x278 + temp_v0 * 4 + 600);
    if (temp_v1 != 0) {
      temp_v3 = 0xf01c5;
      temp_v2 = (temp_v0 & 0xff) * 0x100 + 0x1000;
      nnnstdMemCpy(*param_2,&temp_v2,8);
      *param_2 = *param_2 + 8;
      FUN_001a063c(param_2,*(unsigned int *)(temp_v1 + 4),*(int *)(temp_v1 + 8) << 2);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 8);
  return;
}

} /* extern "C" */
