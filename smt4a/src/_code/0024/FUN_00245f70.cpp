/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245f70` (_code @ 0x245f70, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d4ed8(int);

extern int DAT_0058103c; /* 0x58103c */
extern unsigned char DAT_005f15fc; /* 0x5f15fc */

/* Supplied declaration required: FUN_003d4ed8. */


void FUN_00245f70(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = 0;
  do {
    temp_v2 = DAT_0058103c + temp_v0 * 0x194;
    if ((*(char *)(temp_v2 + 0x1dc) != '\0') &&
       (*(int *)(temp_v2 + 0x1f0) == 0x25 || *(int *)(temp_v2 + 0x1f0) == 0x28)) {
      temp_v1 = *(int *)(temp_v2 + 0x1e0);
      temp_v3 = temp_v1 == 6;
      if (temp_v3) {
        temp_v1 = *(int *)(temp_v2 + 500);
      }
      if (temp_v3 && temp_v1 == param_1) {
        if ((*(signed char *)((unsigned char *)&DAT_005f15fc + 0x18)) == '\0') {
          FUN_003d4ed8(0x10002ab);
        }
        *(unsigned int *)(temp_v2 + 0x1e0) = 7;
        *(unsigned short *)(temp_v2 + 0x208) = 0;
        return;
      }
    }
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x80) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
