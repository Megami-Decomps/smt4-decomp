/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00325340` (_code @ 0x325340, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b5cb4(void);
int FUN_002b5cd4(void);
int FUN_00352bc4(void);
int FUN_00384830(void);

extern int DAT_00581038; /* 0x581038 */
extern int DAT_00581288; /* 0x581288 */
extern float DAT_005f19d8; /* 0x5f19d8 */

/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_002b5cd4. */
/* Supplied declaration required: FUN_00352bc4. */
/* Supplied declaration required: FUN_00384830. */


unsigned int FUN_00325340(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  float temp_v6;
  
  temp_v3 = 0;
  do {
    temp_v1 = DAT_00581038 + temp_v3 * 0x54;
    if ((*(char *)(temp_v1 + 0x5c) != '\0') &&
       (temp_v2 = *(int *)(temp_v1 + 0x60), (temp_v2 != 2 && temp_v2 != 3) && temp_v2 != 0)) {
      FUN_00352bc4();
      temp_v4 = *(unsigned int *)(temp_v1 + 0x74);
      FUN_002b5cd4();
      if (*(short *)(temp_v1 + 0xac) == 1 || *(short *)(temp_v1 + 0xac) == 6) {
        if ((temp_v4 < 0xc2b40000) && ((int)temp_v4 < 0x42b40000)) {
          temp_v0 = 1;
        }
        else {
          temp_v0 = 0;
        }
        temp_v5 = *(float *)(DAT_00581288 + 0x1c);
        FUN_002b5cb4();
        temp_v6 = DAT_005f19d8;
        FUN_002b5cb4();
        if (temp_v6 < temp_v5) {
          temp_v5 = temp_v6;
        }
        if ((int)temp_v5 < 0x43960000) {
          temp_v1 = *(int *)(DAT_00581288 + 0x1c);
          FUN_00384830();
          if (temp_v1 < 0x428c0000) {
            if (!temp_v0) {
              return 0;
            }
            return 1;
          }
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x10);
  return 0;
}

} /* extern "C" */
