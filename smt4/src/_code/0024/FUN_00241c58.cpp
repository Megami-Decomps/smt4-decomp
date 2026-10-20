/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241c58` (_code @ 0x241c58, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00241c98(int);
int FUN_002c415c(int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_004c5870; /* 0x4c5870 */
extern int DAT_004c5874; /* 0x4c5874 */
extern int DAT_004c5878; /* 0x4c5878 */

/* Supplied declaration required: FUN_00241c98. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_00241c58(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  FUN_00241c98(0);
  FUN_00241c98(1);
  FUN_00241c98(2);
  FUN_00241c98(3);
  FUN_00241c98(4);
  FUN_00241c98(3);
  temp_v3 = DAT_004c5870;
  do {
    if (temp_v3 == 0) {
      return;
    }
    temp_v0 = *(char *)(temp_v3 + 2);
    if (temp_v0 != '\0') {
      *(char *)(temp_v3 + 2) = temp_v0 - '\x01';
      if (temp_v0 == '\x01') {
        if (*(romwright_code **)(temp_v3 + 0x18) != (romwright_code *)0x0) {
          (**(romwright_code **)(temp_v3 + 0x18))(temp_v3 + 0x34);
        }
        temp_v2 = *(int *)(temp_v3 + 0x1c);
        temp_v4 = *(int *)(temp_v3 + 0x20);
        temp_v1 = temp_v4;
        if (temp_v2 != 0) {
          *(int *)(temp_v2 + 0x20) = temp_v4;
          temp_v1 = DAT_004c5870;
        }
        DAT_004c5870 = temp_v1;
        if (temp_v4 != 0) {
          *(int *)(temp_v4 + 0x1c) = temp_v2;
          temp_v2 = DAT_004c5874;
        }
        DAT_004c5874 = temp_v2;
        DAT_004c5878 = DAT_004c5878 - 1;
        FUN_002c415c(temp_v3);
        temp_v3 = temp_v4;
        continue;
      }
    }
    else if (*(romwright_code **)(temp_v3 + 8) != (romwright_code *)0x0) {
      (**(romwright_code **)(temp_v3 + 8))(temp_v3 + 0x34);
    }
    temp_v3 = *(int *)(temp_v3 + 0x20);
  } while( 1 );
}

} /* extern "C" */
