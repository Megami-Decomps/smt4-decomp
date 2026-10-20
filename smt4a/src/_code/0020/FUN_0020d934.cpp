/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020d934` (_code @ 0x20d934, 0x2dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019de98(int, unsigned int);
int FUN_0023f900(void);
int screenShowMessage(int);
int FUN_00359b6c(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0057f268; /* 0x57f268 */

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0023f900. */
/* Supplied declaration required: screenShowMessage. */
/* Supplied declaration required: FUN_00359b6c. */


void FUN_0020d934(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (DAT_0057f268 == 0) {
    return;
  }
  temp_v0 = 0;
  switch(*(unsigned char *)(DAT_0057f268 + 0x9b4)) {
  default:
    if (temp_v0 == 0) {
      return;
    }
    FUN_0019de98(temp_v0,0xf4f4f4ff);
    return;
  case 2:
  case 3:
  case 4:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x13:
  case 0x14:
    FUN_0023f900();
    return;
  case 5:
  case 6:
  case 7:
    FUN_00359b6c(*(unsigned short *)(DAT_0057f268 + 0x36));
    return;
  case 8:
  case 9:
    screenShowMessage(*(unsigned short *)(DAT_0057f268 + 0x36));
    return;
  case 10:
  case 0x12:
    if (*(int *)(DAT_0057f268 + 0xe84) == 0) {
      temp_v2 = dataTableGet(0x39,0);
      temp_v0 = dataTableGetEntries();
      temp_v1 = dataTableGetCount(temp_v2);
      if (temp_v1 < 4) {
        return;
      }
      temp_v0 = temp_v0 + 0x115;
      if (temp_v0 == 0) {
        return;
      }
      FUN_0019de98(temp_v0,0xf4f4f4ff);
      return;
    }
    if (*(int *)(DAT_0057f268 + 0xe84) != 1) {
      return;
    }
    temp_v1 = *(unsigned int *)(DAT_0057f268 + 0x1074);
    if ((temp_v1 & 8) != 0) {
      temp_v2 = dataTableGet(0x39,0);
      temp_v0 = dataTableGetEntries();
      temp_v1 = dataTableGetCount(temp_v2);
      if (temp_v1 < 0xf) {
        return;
      }
      temp_v0 = temp_v0 + 0x508;
    }
    else if ((temp_v1 & 0x40) != 0) {
      temp_v2 = dataTableGet(0x39,0);
      temp_v0 = dataTableGetEntries();
      temp_v1 = dataTableGetCount(temp_v2);
      if (temp_v1 < 0xc) {
        return;
      }
      temp_v0 = temp_v0 + 0x3f4;
    }
    else if ((temp_v1 & 2) != 0) {
      temp_v2 = dataTableGet(0x39,0);
      temp_v0 = dataTableGetEntries();
      temp_v1 = dataTableGetCount(temp_v2);
      if (temp_v1 < 0xd) {
        return;
      }
      temp_v0 = temp_v0 + 0x450;
    }
    else if ((temp_v1 & 4) != 0) {
      temp_v2 = dataTableGet(0x39,0);
      temp_v0 = dataTableGetEntries();
      temp_v1 = dataTableGetCount(temp_v2);
      if (temp_v1 < 0xe) {
        return;
      }
      temp_v0 = temp_v0 + 0x4ac;
    }
    else if ((temp_v1 & 0x20) != 0) {
      temp_v2 = dataTableGet(0x39,0);
      temp_v0 = dataTableGetEntries();
      temp_v1 = dataTableGetCount(temp_v2);
      if (temp_v1 < 0x10) {
        return;
      }
      temp_v0 = temp_v0 + 0x564;
    }
    else if ((temp_v1 & 0x80) != 0) {
      temp_v2 = dataTableGet(0x39,0);
      temp_v0 = dataTableGetEntries();
      temp_v1 = dataTableGetCount(temp_v2);
      if (temp_v1 < 0x11) {
        return;
      }
      temp_v0 = temp_v0 + 0x5c0;
    }
    else {
      temp_v2 = dataTableGet(0x39,0);
      temp_v0 = dataTableGetEntries();
      temp_v1 = dataTableGetCount(temp_v2);
      if (temp_v1 < 5) {
        return;
      }
      temp_v0 = temp_v0 + 0x170;
    }
    break;
  case 0xb:
    temp_v2 = dataTableGet(0x39,0);
    temp_v0 = dataTableGetEntries();
    temp_v1 = dataTableGetCount(temp_v2);
    if (temp_v1 < 6) {
      return;
    }
    temp_v0 = temp_v0 + 0x1cc;
  }
  temp_v0 = temp_v0 + 1;
  if (temp_v0 == 0) {
    return;
  }
  FUN_0019de98(temp_v0,0xf4f4f4ff);
  return;
}

} /* extern "C" */
