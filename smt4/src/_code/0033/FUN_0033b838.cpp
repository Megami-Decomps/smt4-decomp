/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b838` (_code @ 0x33b838, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029e974(void);
int FUN_002b9024(void);

extern int FUN_00245768(unsigned short);
extern int padIsButtonDown(unsigned int);
/* Supplied declaration required: FUN_0029e974. */
/* Supplied declaration required: FUN_002b9024. */
extern int FUN_002c09f4(unsigned int);


unsigned int FUN_0033b838(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (0 < param_2) {
    temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x46);
    FUN_002b9024();
    temp_v1 = FUN_00245768(*(unsigned short *)(param_1 + 0x46));
    temp_v3 = temp_v1 / 500 + (*(unsigned int *)(temp_v0 + 0x2c) & 0x7f);
    temp_v1 = padIsButtonDown(5);
    if (temp_v1 != 0) {
      temp_v3 = temp_v3 + 0x1e;
    }
    temp_v1 = 0;
    do {
      temp_v2 = FUN_002c09f4(99);
      if (param_3 != 0) {
        temp_v2 = -1;
      }
      if (temp_v2 < temp_v3) {
        temp_v2 = 0;
        do {
          temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x34 + temp_v2 * 2);
          FUN_0029e974();
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
