/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026fd14` (_code @ 0x26fd14, 0x344 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_002899c4. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002c0bcc. */
extern char *FUN_002c2b1c(void);


void FUN_0026fd14(void)

{
/* irregular: 5 goto(s); 2 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  int temp_v1;
  char temp_v2;
  char temp_v3;
  
  pcVar1 = (char *)FUN_002c2b1c();
  temp_v2 = '\0';
  temp_v3 = '\0';
  temp_v1 = 0;
  do {
    FUN_002c0bcc(0xff);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x80);
  if (*pcVar1 == '\x01') {
    temp_v2 = pcVar1[1];
    temp_v3 = pcVar1[2];
    temp_v1 = FUN_002c0bcc(0xff);
    if (temp_v2 != '\x0e' || temp_v3 != '\x01') goto LAB_0026fd7c;
    temp_v1 = FUN_002c0bcc(0xff);
LAB_0026fde4:
    if ((temp_v1 != 0) || (temp_v1 = FUN_002c0ba8(0x573), temp_v1 != 0)) {
      FUN_002899c4(0x572,0,1);
    }
    else {
      FUN_002899c4(0x572,1);
    }
    temp_v1 = FUN_002c0bcc(0xff);
    if (temp_v2 != '\x05' || temp_v3 != '\x06') goto LAB_0026fe50;
    temp_v1 = FUN_002c0bcc(0xff);
LAB_0026febc:
    if ((temp_v1 != 0) || (temp_v1 = FUN_002c0ba8(0x577), temp_v1 != 0)) {
      FUN_002899c4(0x576,0,1);
    }
    else {
      FUN_002899c4(0x576,1);
    }
    temp_v1 = FUN_002c0bcc(0xff);
    if (temp_v2 != '\b' || temp_v3 != '\x01') goto LAB_0026ff28;
    temp_v1 = FUN_002c0bcc(0xff);
    if ((temp_v1 != 0) || (temp_v1 = FUN_002c0ba8(0x57b), temp_v1 != 0)) {
      FUN_002899c4(0x57a,0,1);
    }
    else {
      FUN_002899c4(0x57a,1);
    }
  }
  else {
    temp_v1 = FUN_002c0bcc(0xff);
LAB_0026fd7c:
    if ((temp_v1 != 0) || (temp_v1 = FUN_002c0ba8(0x571), temp_v1 != 0)) {
      FUN_002899c4(0x570,0,1);
    }
    else {
      FUN_002899c4(0x570,1);
    }
    temp_v1 = FUN_002c0bcc(0xff);
    if (temp_v2 != '\x03' || temp_v3 != '\b') goto LAB_0026fde4;
    temp_v1 = FUN_002c0bcc(0xff);
LAB_0026fe50:
    if ((temp_v1 != 0) || (temp_v1 = FUN_002c0ba8(0x575), temp_v1 != 0)) {
      FUN_002899c4(0x574,0,1);
    }
    else {
      FUN_002899c4(0x574,1);
    }
    temp_v1 = FUN_002c0bcc(0xff);
    if (temp_v2 != '\a' || temp_v3 != '\x01') goto LAB_0026febc;
    temp_v1 = FUN_002c0bcc(0xff);
LAB_0026ff28:
    if ((temp_v1 != 0) || (temp_v1 = FUN_002c0ba8(0x579), temp_v1 != 0)) {
      FUN_002899c4(0x578,0,1);
    }
    else {
      FUN_002899c4(0x578,1);
    }
    temp_v1 = FUN_002c0bcc(0xff);
    if (!(temp_v2 == '\f' && temp_v3 == '\x01')) {
      if ((temp_v1 != 0) || (temp_v1 = FUN_002c0ba8(0x57b), temp_v1 != 0)) {
        FUN_002899c4(0x57a,0,1);
      }
      else {
        FUN_002899c4(0x57a,1);
      }
    }
  }
  temp_v1 = FUN_002c0bcc(0xff);
  temp_v0 = FUN_002c0ba8(0x648);
  if (temp_v0 == 0) {
    temp_v1 = 0xff;
  }
  if (temp_v2 == '\r' && temp_v3 == '\x01') {
    return;
  }
  if ((temp_v1 == 0) && (temp_v1 = FUN_002c0ba8(0x57d), temp_v1 == 0)) {
    FUN_002899c4(0x57c,1);
    return;
  }
  FUN_002899c4(0x57c,0,1);
  return;
}
