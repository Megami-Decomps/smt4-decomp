/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241c98` (_code @ 0x241c98, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c415c(int);

typedef int romwright_code(...);
extern unsigned int DAT_004c5830; /* 0x4c5830 */
extern unsigned int DAT_004c5834; /* 0x4c5834 */
extern unsigned int DAT_004c5838; /* 0x4c5838 */

/* Supplied declaration required: FUN_002c415c. */


void FUN_00241c98(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = (&DAT_004c5830)[param_1 * 4];
  do {
    if (temp_v2 == 0) {
      return;
    }
    temp_v0 = *(char *)(temp_v2 + 2);
    if (temp_v0 != '\0') {
      *(char *)(temp_v2 + 2) = temp_v0 - '\x01';
      if (temp_v0 == '\x01') {
        if (*(romwright_code **)(temp_v2 + 0x18) != (romwright_code *)0x0) {
          (**(romwright_code **)(temp_v2 + 0x18))(temp_v2 + 0x34);
        }
        temp_v1 = *(int *)(temp_v2 + 0x1c);
        temp_v3 = *(int *)(temp_v2 + 0x20);
        if (temp_v1 != 0) {
          *(int *)(temp_v1 + 0x20) = temp_v3;
        }
        else {
          (&DAT_004c5830)[param_1 * 4] = temp_v3;
        }
        if (temp_v3 != 0) {
          *(int *)(temp_v3 + 0x1c) = temp_v1;
        }
        else {
          (&DAT_004c5834)[param_1 * 4] = temp_v1;
        }
        (&DAT_004c5838)[param_1 * 4] = (&DAT_004c5838)[param_1 * 4] - 1;
        FUN_002c415c(temp_v2);
        temp_v2 = temp_v3;
        continue;
      }
    }
    else if (*(romwright_code **)(temp_v2 + 8) != (romwright_code *)0x0) {
      (**(romwright_code **)(temp_v2 + 8))(temp_v2 + 0x34);
    }
    temp_v2 = *(int *)(temp_v2 + 0x20);
  } while( 1 );
}

} /* extern "C" */
