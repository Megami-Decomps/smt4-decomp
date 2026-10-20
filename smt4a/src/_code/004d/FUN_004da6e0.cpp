/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004da6e0` (_code @ 0x4da6e0, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004bcd90(void);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

/* Supplied declaration required: FUN_004bcd90. */


void FUN_004da6e0(unsigned int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = 0;
  if (param_4 != 0) {
    temp_v3 = 0;
    do {
      temp_v4 = param_5 + temp_v3;
      temp_v0 = *(unsigned char *)(param_2 + temp_v3 + 0x68);
      temp_v2 = param_3 + temp_v3;
      temp_v1 = param_4 + temp_v3;
      *(unsigned char *)(temp_v4 + 0x68) = temp_v0;
      temp_v3 = temp_v3 + 1;
      temp_v0 = temp_v0 | *(unsigned char *)(temp_v2 + 0x68);
      *(unsigned char *)(temp_v4 + 0x68) = temp_v0;
      *(unsigned char *)(temp_v4 + 0x68) = temp_v0 | *(unsigned char *)(temp_v1 + 0x68);
    } while (temp_v3 < 0x40);
  }
  else {
    do {
      temp_v1 = param_2 + temp_v3;
      temp_v2 = param_5 + temp_v3;
      temp_v0 = *(unsigned char *)(temp_v1 + 0x68);
      temp_v4 = param_3 + temp_v3;
      temp_v3 = temp_v3 + 2;
      *(unsigned char *)(temp_v2 + 0x68) = temp_v0;
      *(unsigned char *)(temp_v2 + 0x68) = temp_v0 | *(unsigned char *)(temp_v4 + 0x68);
      temp_v0 = *(unsigned char *)(temp_v1 + 0x69);
      *(unsigned char *)(temp_v2 + 0x69) = temp_v0;
      *(unsigned char *)(temp_v2 + 0x69) = *(unsigned char *)(temp_v4 + 0x69) | temp_v0;
    } while (temp_v3 < 0x40);
  }
  FUN_004bcd90();
  return;
}

} /* extern "C" */
