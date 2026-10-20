/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f3048` (_code @ 0x3f3048, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_003c3f1c(void);

extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0031cfd0(unsigned short);
/* Supplied declaration required: FUN_003c3f1c. */
extern int FUN_003e46f4(unsigned int);


unsigned int FUN_003f3048(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (0 < param_2) {
    temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x62);
    FUN_00184310();
    temp_v1 = FUN_0031cfd0(*(unsigned short *)(param_1 + 0x62));
    temp_v3 = temp_v1 / 500 + (*(unsigned int *)(temp_v0 + 0x34) & 0x7f);
    temp_v1 = FUN_003e46f4(5);
    if (temp_v1 != 0) {
      temp_v3 = temp_v3 + 0x1e;
    }
    temp_v1 = 0;
    do {
      temp_v2 = FUN_0014bef4(99);
      if (param_3 != 0) {
        temp_v2 = -1;
      }
      if (temp_v2 < temp_v3) {
        temp_v2 = 0;
        do {
          temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x34 + temp_v2 * 2);
          FUN_003c3f1c();
          if ((*(unsigned char *)(temp_v0 + 3) & 0x40) != 0) {
            return 1;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 8);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < param_2);
  }
  return 0;
}

} /* extern "C" */
