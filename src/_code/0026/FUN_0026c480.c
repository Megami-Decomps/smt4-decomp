/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c480` (_code @ 0x26c480, 0x244 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

extern int FUN_00282f24(void);
extern int FUN_00282f3c(void);
extern int FUN_002830e0(void);
extern int FUN_0028df70(unsigned int);
/* Supplied declaration required: FUN_0029af4c. */
extern int FUN_0029e248(void);
/* Supplied declaration required: FUN_002b8794. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002c0ba8(unsigned int);


void FUN_0026c480(void)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v5 = DAT_0043dcf0;
  FUN_0029af4c();
  temp_v0 = *(unsigned char *)(temp_v5 + 0x66c);
  temp_v1 = 1;
  if ((temp_v0 < 2) || ((temp_v0 == 0xc || temp_v0 == 0xd) || temp_v0 == 0xe)) {
    temp_v1 = 0;
  }
  temp_v2 = FUN_002830e0();
  temp_v3 = FUN_00282f3c();
  if (temp_v2 != 0) {
    if (temp_v1) {
      if (*(char *)(temp_v5 + 0x66c) != '\x10') {
        if (*(char *)(temp_v5 + 0x42) == '\0') {
          temp_v4 = 0x1d;
        }
        else {
          temp_v4 = 0x1e;
        }
      }
      else if (*(char *)(temp_v5 + 0x42) == '\0') {
        temp_v4 = 0xb7;
      }
      else {
        temp_v4 = 0xb8;
      }
    }
    else if ((*(char *)(temp_v5 + 0x66c) == '\f') && (temp_v2 = FUN_002c0ba8(0x401), temp_v2 != 0)) {
      if (*(char *)(temp_v5 + 0x42) == '\0') {
        temp_v4 = 0xbe;
      }
      else {
        temp_v4 = 0xbf;
      }
    }
    else if (*(char *)(temp_v5 + 0x42) == '\0') {
      temp_v4 = 0x1b;
    }
    else {
      temp_v4 = 0x1c;
    }
  }
  else if (temp_v3 < 0) {
    if (temp_v1) {
      if (*(char *)(temp_v5 + 0x66c) != '\x10') {
        if (*(char *)(temp_v5 + 0x42) == '\0') {
          temp_v4 = 3;
        }
        else {
          temp_v4 = 4;
        }
      }
      else if (*(char *)(temp_v5 + 0x42) == '\0') {
        temp_v4 = 0xba;
      }
      else {
        temp_v4 = 0xbb;
      }
    }
    else if ((*(char *)(temp_v5 + 0x66c) == '\f') && (temp_v2 = FUN_002c0ba8(0x401), temp_v2 != 0)) {
      if (*(char *)(temp_v5 + 0x42) == '\0') {
        temp_v4 = 0xc2;
      }
      else {
        temp_v4 = 0xc3;
      }
    }
    else if (*(char *)(temp_v5 + 0x42) == '\0') {
      temp_v4 = 0x25;
    }
    else {
      temp_v4 = 0x26;
    }
  }
  else if (temp_v1) {
    if (*(char *)(temp_v5 + 0x66c) != '\x10') {
      if (*(char *)(temp_v5 + 0x42) == '\0') {
        temp_v4 = 0x23;
      }
      else {
        temp_v4 = 0x24;
      }
    }
    else if (*(char *)(temp_v5 + 0x42) == '\0') {
      temp_v4 = 0xb5;
    }
    else {
      temp_v4 = 0xb6;
    }
  }
  else {
    if (*(char *)(temp_v5 + 0x66c) != '\f') {
      if (*(char *)(temp_v5 + 0x42) == '\0') {
        temp_v4 = 0x21;
      }
      else {
        temp_v4 = 0x22;
      }
    }
    else if (*(char *)(temp_v5 + 0x42) == '\0') {
      temp_v4 = 0xc0;
    }
    else {
      temp_v4 = 0xc1;
    }
    FUN_002b8b78(temp_v4);
    temp_v2 = FUN_0029e248();
    if ((temp_v2 == 0) || (temp_v2 = FUN_00282f24(), temp_v2 == 0)) goto LAB_0026c66c;
    if (*(char *)(temp_v5 + 0x42) == '\0') {
      temp_v4 = 0xe3;
    }
    else {
      temp_v4 = 0xcc;
    }
  }
  FUN_002b8b78(temp_v4);
LAB_0026c66c:
  if (*(char *)(temp_v5 + 0x17f0) != '\0') {
    FUN_002b8794(3,0x12,0,1);
    return;
  }
  temp_v5 = FUN_0028df70(3);
  if (temp_v5 != 0) {
    return;
  }
  FUN_002b8794(3,3,0xb,1);
  return;
}
