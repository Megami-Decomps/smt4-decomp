/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d4b7c` (_code @ 0x3d4b7c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(int);
int taskListUpdate(int);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_006199c8; /* 0x6199c8 */
extern int DAT_006199cc; /* 0x6199cc */
extern int DAT_006199d0; /* 0x6199d0 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: taskListUpdate. */


void FUN_003d4b7c(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  taskListUpdate(0);
  taskListUpdate(1);
  taskListUpdate(2);
  taskListUpdate(3);
  taskListUpdate(4);
  taskListUpdate(3);
  temp_v3 = DAT_006199c8;
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
          temp_v1 = DAT_006199c8;
        }
        DAT_006199c8 = temp_v1;
        if (temp_v4 != 0) {
          *(int *)(temp_v4 + 0x1c) = temp_v2;
          temp_v2 = DAT_006199cc;
        }
        DAT_006199cc = temp_v2;
        DAT_006199d0 = DAT_006199d0 - 1;
        asdMemFree(temp_v3);
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
