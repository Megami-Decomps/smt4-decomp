/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00380024` (_code @ 0x380024, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_004ea16a; /* 0x4ea16a */

/* Supplied declaration required: FUN_002a472c. */
/* Supplied declaration required: FUN_00379b94. */


void FUN_00380024(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  
  *(unsigned int *)(param_1 + 0x138) = 0;
  *(unsigned int *)(param_1 + 300) = param_2;
  *(unsigned int *)(param_1 + 0x130) = param_3;
  *(unsigned char *)(param_1 + 0xc5) = 0;
  *(unsigned char *)(param_1 + 200) = 1;
  *(unsigned char *)(param_1 + 0xc9) = 0;
  *(unsigned char *)(param_1 + 0xca) = 0;
  *(unsigned char *)(param_1 + 0x7c) = 0;
  *(unsigned int *)(param_1 + 0x78) = 0;
  *(unsigned int *)(param_1 + 0x120) = 0;
  *(unsigned char *)(param_1 + 0x126) = 0x3c;
  *(unsigned char *)(param_1 + 0x127) = 0x3c;
  *(unsigned int *)(param_1 + 0x100) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x104) = 0;
  *(unsigned int *)(param_1 + 0x108) = 0;
  *(unsigned int *)(param_1 + 0x10c) = 0x3f800000;
  *(unsigned int *)(param_1 + 0x118) = 0;
  *(unsigned int *)(param_1 + 0x11c) = 0x3f800000;
  *(unsigned int *)(param_1 + 0xcc) = 0x3f800000;
  *(unsigned int *)(param_1 + 0xf0) = 0;
  *(unsigned int *)(param_1 + 0xd0) = 0x3f800000;
  *(unsigned int *)(param_1 + 0xd4) = 0;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(unsigned int *)(param_1 + 0xdc) = 0;
  *(unsigned char *)(param_1 + 0xcb) = 0;
  *(unsigned int *)(param_1 + 0xe0) = 0;
  *(unsigned int *)(param_1 + 0xe4) = 0;
  *(unsigned int *)(param_1 + 0xe8) = 0;
  *(unsigned int *)(param_1 + 0xec) = 0;
  *(unsigned char *)(param_1 + 0x110) = 0xff;
  *(unsigned char *)(param_1 + 0x111) = 0xff;
  *(unsigned short *)(param_1 + 0x112) = 0;
  *(unsigned short *)(param_1 + 0x114) = 0;
  *(unsigned int *)(param_1 + 0xf4) = 0;
  *(unsigned int *)(param_1 + 0xfc) = 0;
  *(unsigned int *)(param_1 + 0xf8) = 0;
  FUN_00379b94(param_1 + 0x90);
  FUN_002a472c(param_1 + 0xac);
  *(unsigned char *)(param_1 + 0xc4) = 0;
  *(unsigned char *)(param_1 + 0x124) = 0;
  *(unsigned char *)(param_1 + 0x125) = 0;
  *(unsigned char *)(param_1 + 0x128) = 0;
  temp_v0 = 0;
  if (DAT_004ea16a == '\0') {
    temp_v0 = 2;
  }
  else if (DAT_004ea16a == '\x01') {
    temp_v0 = 1;
  }
  *(unsigned char *)(param_1 + 0x129) = temp_v0;
  return;
}
