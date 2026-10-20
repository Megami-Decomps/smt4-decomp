/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ac0d4` (_code @ 0x4ac0d4, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0039ea2c(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_0039ea2c. */


void FUN_004ac0d4(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 unstructured edge(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v1 = DAT_0057a9c8;
  temp_v2 = 0;
  temp_v3 = (unsigned int)*(char *)(DAT_0057a9c8 + 0x7504);
  if ((int)temp_v3 >= 1) {
    temp_v4 = temp_v3 & 1;
    temp_v0 = temp_v4;
  }
  else {
    temp_v4 = temp_v3;
    temp_v0 = 0;
  }
  if (0 < (int)temp_v4) {
    do {
      if (*(unsigned short *)(DAT_0057a9c8 + temp_v2 * 2 + 0x74bc) == param_2) {
        if ((int)temp_v3 <= (int)temp_v2) {
          *(short *)(DAT_0057a9c8 + temp_v3 * 2 + 0x74bc) = (short)param_2;
          *(char *)(temp_v1 + 0x7504) = *(char *)(temp_v1 + 0x7504) + '\x01';
        }
        FUN_0039ea2c(temp_v1 + 0x28c4);
        return;
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < (int)temp_v0);
  }
  while ((temp_v2 = temp_v0, (int)temp_v3 > (int)temp_v2 &&
         (temp_v5 = DAT_0057a9c8 + temp_v2 * 2, *(unsigned short *)(temp_v5 + 0x74bc) != param_2))) {
    if (*(unsigned short *)(temp_v5 + 0x74be) == param_2) {
      temp_v2 = temp_v2 + 1;
      break;
    }
    temp_v0 = temp_v2 + 2;
  }
  if ((int)temp_v3 <= (int)temp_v2) {
    *(short *)(DAT_0057a9c8 + temp_v3 * 2 + 0x74bc) = (short)param_2;
    *(char *)(temp_v1 + 0x7504) = *(char *)(temp_v1 + 0x7504) + '\x01';
  }
  FUN_0039ea2c(temp_v1 + 0x28c4);
  return;
}

} /* extern "C" */
