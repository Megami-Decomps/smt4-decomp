/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00417b70` (_code @ 0x417b70, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00417e08(int);
int FUN_004bb6d8(unsigned int, int);

extern int gameFlagBlockGet(void);
extern int FUN_001bd118(int);
extern int FUN_003de444(int);
extern unsigned int FUN_003de734(int);
/* Supplied declaration required: FUN_00417e08. */
/* Supplied declaration required: FUN_004bb6d8. */


void FUN_00417b70(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = gameFlagBlockGet();
  temp_v0 = temp_v0 + param_1 * 4;
  *(unsigned char *)(temp_v0 + 0x2a1) = 0;
  *(unsigned char *)(temp_v0 + 0x2a0) = (*(unsigned char *)(temp_v0 + 0x2a0) & 0x3f) | 0x21;
  *(unsigned char *)(temp_v0 + 0x2a2) = *(unsigned char *)(temp_v0 + 0x2a2) & 0xde;
  temp_v0 = FUN_001bd118(param_1);
  if (((temp_v0 != 6 && temp_v0 != 9) && (temp_v0 != 0xb && temp_v0 != 0xc)) &&
     (temp_v0 = FUN_003de444(param_1), temp_v0 != 0)) {
    FUN_00417e08(param_1);
  }
  temp_v1 = FUN_003de734(param_1);
  if (temp_v1 != 0) {
    temp_v0 = gameFlagBlockGet();
    FUN_004bb6d8(temp_v1,1);
    *(unsigned char *)(temp_v0 + (temp_v1 >> 3)) = *(unsigned char *)(temp_v0 + (temp_v1 >> 3)) | (unsigned char)(1 << (temp_v1 & 7));
  }
  return;
}

} /* extern "C" */
