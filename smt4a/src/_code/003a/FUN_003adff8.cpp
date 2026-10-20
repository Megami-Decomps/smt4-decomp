/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003adff8` (_code @ 0x3adff8, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002d23f0(int);

/* Supplied declaration required: FUN_002d23f0. */
extern unsigned int FUN_00379890(int);
extern int FUN_003b56bc(void);


void FUN_003adff8(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  temp_v0 = FUN_003b56bc();
  if (0 < temp_v0) {
    do {
      temp_v1 = FUN_00379890(temp_v3);
      if (*(unsigned char *)(temp_v1 + 8) == 0xff) {
        return;
      }
      if ((*(unsigned char *)(temp_v1 + 0xb) != param_1) || (*(unsigned char *)(temp_v1 + 0xc) != param_2)) {
        temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 0xd);
        temp_v4 = temp_v2 == param_1;
        if (temp_v4) {
          temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 0xe);
        }
        if (!(temp_v4 && temp_v2 == param_2)) {
          temp_v4 = *(unsigned char *)(temp_v1 + 0xf) == param_1;
          if (temp_v4) {
            temp_v1 = (unsigned int)*(unsigned char *)(temp_v1 + 0x10);
          }
          if (temp_v4 && temp_v1 == param_2) {
            FUN_002d23f0(temp_v3);
          }
        }
        else {
          FUN_002d23f0(temp_v3);
        }
      }
      else {
        FUN_002d23f0(temp_v3);
      }
      temp_v3 = temp_v3 + 1;
      temp_v0 = FUN_003b56bc();
    } while (temp_v3 < temp_v0);
  }
  return;
}

} /* extern "C" */
