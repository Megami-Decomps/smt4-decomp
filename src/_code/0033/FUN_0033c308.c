/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033c308` (_code @ 0x33c308, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0029ec14. */
extern int FUN_002c0bcc(unsigned int);


int FUN_0033c308(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  char temp_v3 [12];
  
  temp_v2 = 0;
  temp_v1 = 0;
  temp_v3[0] = '\0';
  temp_v3[1] = '\0';
  temp_v3[2] = '\0';
  temp_v3[3] = '\0';
  temp_v3[4] = '\0';
  temp_v3[5] = '\0';
  temp_v3[6] = '\0';
  temp_v3[7] = '\0';
  do {
    temp_v0 = (unsigned int)*(unsigned short *)(param_1 + temp_v1 * 2);
    if ((temp_v0 != 0) && (FUN_0029ec14(), (*(unsigned char *)(temp_v0 + 3) & 0x40) != 0)) {
      temp_v3[temp_v2] = (char)temp_v1;
      temp_v2 = temp_v2 + 1;
    }
    temp_v1 = (int)(char)((char)temp_v1 + '\x01');
  } while (temp_v1 < 8);
  if (temp_v2 == 0) {
    temp_v1 = -1;
  }
  else if (temp_v2 < 2) {
    temp_v1 = (int)temp_v3[0];
  }
  else {
    temp_v1 = FUN_002c0bcc((temp_v2 - 1) & 0xffff);
    temp_v1 = (int)temp_v3[temp_v1];
  }
  return temp_v1;
}
