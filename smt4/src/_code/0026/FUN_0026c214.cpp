/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026c214` (_code @ 0x26c214, 0x244 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029acb0(void);
int FUN_002b8454(int, int, int, int);
int buttonHelpSetPreset(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int g_partyPanel; /* 0x43dcf0 */

extern int FUN_00282cb4(void);
extern int FUN_00282ccc(void);
extern int FUN_00282e70(void);
extern int buttonHelpGetEntryValue(unsigned int);
/* Supplied declaration required: FUN_0029acb0. */
extern int FUN_0029dfa8(void);
/* Supplied declaration required: FUN_002b8454. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int gameFlagIsSet(unsigned int);


void FUN_0026c214(void)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v5 = g_partyPanel;
  FUN_0029acb0();
  temp_v0 = *(unsigned char *)(temp_v5 + 0x66c);
  temp_v1 = 1;
  if ((temp_v0 < 2) || ((temp_v0 == 0xc || temp_v0 == 0xd) || temp_v0 == 0xe)) {
    temp_v1 = 0;
  }
  temp_v2 = FUN_00282e70();
  temp_v3 = FUN_00282ccc();
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
    else if ((*(char *)(temp_v5 + 0x66c) == '\f') && (temp_v2 = gameFlagIsSet(0x401), temp_v2 != 0)) {
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
    else if ((*(char *)(temp_v5 + 0x66c) == '\f') && (temp_v2 = gameFlagIsSet(0x401), temp_v2 != 0)) {
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
    buttonHelpSetPreset(temp_v4);
    temp_v2 = FUN_0029dfa8();
    if ((temp_v2 == 0) || (temp_v2 = FUN_00282cb4(), temp_v2 == 0)) goto LAB_0026c400;
    if (*(char *)(temp_v5 + 0x42) == '\0') {
      temp_v4 = 0xe3;
    }
    else {
      temp_v4 = 0xcc;
    }
  }
  buttonHelpSetPreset(temp_v4);
LAB_0026c400:
  if (*(char *)(temp_v5 + 0x17f0) != '\0') {
    FUN_002b8454(3,0x12,0,1);
    return;
  }
  temp_v5 = buttonHelpGetEntryValue(3);
  if (temp_v5 != 0) {
    return;
  }
  FUN_002b8454(3,3,0xb,1);
  return;
}

} /* extern "C" */
