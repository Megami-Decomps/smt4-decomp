/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fbfbc` (_code @ 0x4fbfbc, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004102d8(int, int, int, int);

extern int DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: FUN_004102d8. */


void FUN_004fbfbc(short param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int *piVar1;
  unsigned char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int in_s0;
  
  temp_v0 = 0;
  temp_v1 = *(int *)(DAT_005712f0 + 8);
  if (*(int *)(DAT_005712f0 + 8) != 0) {
    do {
      piVar1 = (int *)(temp_v1 + 0xc);
      temp_v2 = *(char *)(temp_v1 + 4) == '\x11';
      if (temp_v2) {
        temp_v1 = *(int *)(temp_v1 + 8);
      }
      if (temp_v2 && temp_v1 == param_2) {
        temp_v0 = 1;
      }
      temp_v1 = *piVar1;
    } while (*piVar1 != 0);
    if (temp_v0) {
      return;
    }
  }
  temp_v1 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
  *(unsigned int *)(temp_v1 + 0x28) = param_3;
  *(unsigned char *)(temp_v1 + 4) = 0x11;
  *(unsigned int *)(temp_v1 + 0x30) = in_s0;
  return;
}

} /* extern "C" */
