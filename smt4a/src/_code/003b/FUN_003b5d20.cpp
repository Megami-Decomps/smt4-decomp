/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b5d20` (_code @ 0x3b5d20, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00244ac8(void);
int FUN_002747dc(void);
int FUN_0029aa60(int);
int FUN_002b7ce0(void);
int FUN_002c670c(int);
int FUN_002ddea0(void);
int FUN_00311b74(void);
int FUN_00313440(void);
int FUN_00364740(unsigned int, unsigned int);
int FUN_00376f94(void);
int FUN_003cb744(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0058103c; /* 0x58103c */
extern int DAT_00581274; /* 0x581274 */
extern signed char DAT_005f1623; /* 0x5f1623 */

/* Supplied declaration required: FUN_00244ac8. */
/* Supplied declaration required: FUN_002747dc. */
/* Supplied declaration required: FUN_0029aa60. */
/* Supplied declaration required: FUN_002b7ce0. */
/* Supplied declaration required: FUN_002c670c. */
/* Supplied declaration required: FUN_002ddea0. */
/* Supplied declaration required: FUN_00311b74. */
/* Supplied declaration required: FUN_00313440. */
/* Supplied declaration required: FUN_00364740. */
/* Supplied declaration required: FUN_00376f94. */
/* Supplied declaration required: FUN_003cb744. */


void FUN_003b5d20(void)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  
  temp_v0 = DAT_00581274;
  if (DAT_005f1623 != '\0') {
    temp_v2 = FUN_00376f94();
    if (temp_v2 != 0) {
      FUN_00244ac8();
      FUN_002747dc();
      temp_v3 = FUN_00376f94();
      FUN_00364740(*(unsigned int *)(temp_v0 + 0x30),temp_v3);
      FUN_002c670c(1);
    }
    else {
      FUN_00244ac8();
      FUN_002747dc();
      FUN_002c670c(1);
      FUN_002ddea0();
      FUN_002b7ce0();
    }
  }
  else {
    FUN_00244ac8();
    temp_v5 = *(unsigned int *)(temp_v0 + 0x30);
    temp_v3 = *(unsigned int *)(temp_v0 + 0x34);
    FUN_002747dc();
    FUN_00364740(temp_v5,temp_v3);
    FUN_00313440();
    FUN_002ddea0();
    FUN_002b7ce0();
    FUN_003cb744();
  }
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
    temp_v4 = temp_v0 + temp_v2 * 0x194;
    temp_v6 = *(char *)(temp_v4 + 0x1dc) != '\0';
    temp_v2 = 0;
    if (temp_v6) {
      temp_v2 = *(int *)(temp_v4 + 0x220);
    }
    if (temp_v6 && 0 < temp_v2) {
      *(unsigned int *)(temp_v4 + 0x220) = 0x10;
    }
    temp_v2 = temp_v1;
  } while (temp_v1 < 0x80);
  return;
}

} /* extern "C" */
