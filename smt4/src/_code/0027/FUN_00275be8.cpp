/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275be8` (_code @ 0x275be8, 0x1ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00295eb0(int, int, int);
int FUN_002a9fdc(int, int);
int FUN_002af5c0(...);
int FUN_002bd954(int, int, int, int, int);
int FUN_002bee58(int, int);
int FUN_002bf810(int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int DAT_0043e278; /* 0x43e278 */

/* Supplied declaration required: FUN_00295eb0. */
/* Supplied declaration required: FUN_002a9fdc. */
/* Supplied declaration required: FUN_002af5c0. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: FUN_002bf810. */


void FUN_00275be8(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  char temp_v3 [32];
  
  temp_v0 = DAT_0043e278;
  if (param_1 != 0) {
    if (param_1 == 1) {
      *(unsigned char *)(DAT_0043e278 + 0x1c) = 1;
      *(unsigned int *)(temp_v0 + 0x20) = 0;
      *(unsigned char *)(temp_v0 + 0x24) = 0;
      *(unsigned int *)(temp_v0 + 0x28) = 0x3e800000;
      *(unsigned int *)(temp_v0 + 0x2c) = 0x3e800000;
      *(unsigned int *)(temp_v0 + 0x30) = 0x41a00000;
      *(unsigned char *)(temp_v0 + 0x25) = 1;
      FUN_002bd954(temp_v0 + 0xd74,0x1d,2000,temp_v0 + 0x34,0xb);
      FUN_002af5c0(temp_v0 + 0xd74,0);
      FUN_002bd954(temp_v0 + 0xe00,0x1d,2000,temp_v0 + 0x34,0xb);
      FUN_002bee58(temp_v0 + 0xe00,0);
      temp_v3[0x14] = '\0';
      temp_v3[0x15] = '\x01';
      temp_v3[0x16] = '\x01';
      temp_v3[0x17] = '\0';
      temp_v3[0] = '\0';
      temp_v3[1] = '\x01';
      temp_v3[2] = '\x01';
      temp_v3[3] = '\0';
      temp_v3[4] = '\0';
      temp_v3[5] = '\0';
      temp_v3[6] = '\x01';
      temp_v3[7] = '\x01';
      temp_v3[8] = '\x01';
      temp_v3[9] = '\x01';
      temp_v3[10] = '\0';
      temp_v3[0xb] = '\0';
      temp_v3[0xc] = '\0';
      temp_v3[0xd] = '\0';
      temp_v3[0xe] = '\x01';
      temp_v3[0xf] = '\x01';
      temp_v3[0x10] = '\x01';
      temp_v3[0x11] = '\x01';
      temp_v3[0x12] = '\0';
      temp_v3[0x13] = '\0';
      temp_v1 = 0;
      do {
        temp_v2 = temp_v0 + temp_v1 * 0x8c;
        FUN_002bd954(temp_v2 + 0x54,0x1d,temp_v3[temp_v1] + 0x7d1,temp_v0 + 0x34,0xb);
        FUN_002a9fdc(temp_v2 + 0x54,0);
        FUN_00295eb0(temp_v2 + 0x54,0x1d,temp_v1 + 0x7d5);
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x18);
      return;
    }
    if (param_1 == 2) {
      FUN_002bf810(0x100025b);
      *(unsigned int *)(temp_v0 + 0x20) = 0;
      *(unsigned char *)(temp_v0 + 0x24) = 1;
      *(unsigned int *)(temp_v0 + 0x30) = 0x40e00000;
      FUN_002af5c0(temp_v0 + 0xd74,0,1);
      return;
    }
  }
  else {
    *(unsigned char *)(DAT_0043e278 + 0x1c) = 0;
    *(unsigned int *)(temp_v0 + 0x20) = 0;
    *(unsigned char *)(temp_v0 + 0x24) = 0;
    *(unsigned int *)(temp_v0 + 0x28) = 0x3e800000;
    *(unsigned int *)(temp_v0 + 0x2c) = 0x3e800000;
    *(unsigned int *)(temp_v0 + 0x30) = 0x41a00000;
    *(unsigned char *)(temp_v0 + 0xf28) = 0;
    *(unsigned char *)(temp_v0 + 0xf2b) = 0;
    *(unsigned char *)(temp_v0 + 0xf2c) = 0;
  }
  return;
}

} /* extern "C" */
