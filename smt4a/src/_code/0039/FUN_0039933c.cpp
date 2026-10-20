/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039933c` (_code @ 0x39933c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00244ac8(void);
int FUN_002747dc(void);
int FUN_0029aa60(int);
int FUN_002ddea0(void);
int FUN_00311b74(void);
int FUN_00364740(unsigned int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00580238; /* 0x580238 */
extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_00244ac8. */
/* Supplied declaration required: FUN_002747dc. */
/* Supplied declaration required: FUN_0029aa60. */
/* Supplied declaration required: FUN_002ddea0. */
/* Supplied declaration required: FUN_00311b74. */
/* Supplied declaration required: FUN_00364740. */


void FUN_0039933c(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = DAT_00580238;
  FUN_00244ac8();
  temp_v2 = DAT_00580238;
  temp_v4 = *(unsigned int *)(temp_v0 + 0x40);
  FUN_002747dc();
  FUN_00364740(temp_v4,*(unsigned int *)(temp_v2 + 0x48));
  FUN_002ddea0();
  temp_v0 = DAT_0058103c;
  temp_v2 = 0;
  do {
    temp_v1 = temp_v2 + 1;
    temp_v2 = temp_v0 + temp_v2 * 0x194;
    if (*(char *)(temp_v2 + 0x1dc) != '\0') {
      *(unsigned int *)(temp_v2 + 0x1e4) = 1;
    }
    temp_v2 = temp_v1;
  } while (temp_v1 < 0x80);
  temp_v2 = 0;
  do {
    FUN_0029aa60(1);
    FUN_00311b74();
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  temp_v2 = 0;
  do {
    temp_v1 = temp_v2 + 1;
    temp_v3 = temp_v0 + temp_v2 * 0x194;
    temp_v5 = *(char *)(temp_v3 + 0x1dc) != '\0';
    temp_v2 = 0;
    if (temp_v5) {
      temp_v2 = *(int *)(temp_v3 + 0x220);
    }
    if (temp_v5 && 0 < temp_v2) {
      *(unsigned int *)(temp_v3 + 0x220) = 0x10;
    }
    temp_v2 = temp_v1;
  } while (temp_v1 < 0x80);
  return;
}

} /* extern "C" */
