/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c8858` (_code @ 0x2c8858, 0x20c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00447a78; /* 0x447a78 */
extern unsigned char DAT_0049f934; /* 0x49f934 */
extern int DAT_0049f954; /* 0x49f954 */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern float DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned int DAT_0049f9bc; /* 0x49f9bc */
extern signed char DAT_0049fb49; /* 0x49fb49 */
extern unsigned int DAT_0049fb4c; /* 0x49fb4c */
extern float DAT_0049fb50; /* 0x49fb50 */
extern unsigned int DAT_0049fb54; /* 0x49fb54 */
extern unsigned int DAT_0049fb58; /* 0x49fb58 */
extern unsigned int DAT_0049fb5c; /* 0x49fb5c */

/* Supplied declaration required: FUN_002531bc. */
/* Supplied declaration required: FUN_00291e40. */


void FUN_002c8858(void)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v1 = DAT_00447a78;
  temp_v3 = (unsigned int)*(char *)(DAT_00447a78 + 0xcc71);
  temp_v5 = DAT_00447a78 + 0xcc70;
  if (DAT_0049fb49 != '\0') {
    temp_v6 = temp_v3 == 0;
    if (temp_v6) {
      temp_v3 = (unsigned int)DAT_0049f934;
    }
    if ((temp_v6 && temp_v3 == 0) && (*(char *)(DAT_00447a78 + 0xcce0) == '\0')) {
      FUN_00291e40(0x10001ff);
    }
    *(unsigned char *)(temp_v1 + 0xcc71) = 1;
    *(unsigned char *)(temp_v1 + 0xcc72) = 1;
    temp_v4 = DAT_0049fb54;
    temp_v2 = DAT_0049fb50;
    *(unsigned int *)(temp_v1 + 0xcc7c) = DAT_0049fb4c;
    *(float *)(temp_v1 + 0xcc80) = temp_v2;
    *(unsigned int *)(temp_v1 + 0xcc84) = temp_v4;
    *(float *)(temp_v1 + 0xcc80) = temp_v2 + 200.0f;
    *(unsigned int *)(temp_v1 + 0xcc88) = DAT_0049fb58;
    switch(DAT_0049fb5c) {
    default:
      *(unsigned int *)(temp_v1 + 0xcc8c) = 0;
      break;
    case 2:
      *(unsigned int *)(temp_v1 + 0xcc8c) = 3;
      break;
    case 3:
      temp_v4 = 6;
      *(unsigned int *)(temp_v1 + 0xcc8c) = temp_v4;
      break;
    case 4:
      temp_v4 = 7;
      *(unsigned int *)(temp_v1 + 0xcc8c) = temp_v4;
      break;
    case 5:
      temp_v4 = 8;
      *(unsigned int *)(temp_v1 + 0xcc8c) = temp_v4;
      break;
    case 10:
    case 0xc:
      *(unsigned int *)(temp_v1 + 0xcc8c) = 1;
      break;
    case 0xb:
    case 0xd:
      temp_v4 = 2;
      *(unsigned int *)(temp_v1 + 0xcc8c) = temp_v4;
      break;
    case 0xe:
    case 0x10:
      temp_v4 = 4;
      *(unsigned int *)(temp_v1 + 0xcc8c) = temp_v4;
      break;
    case 0xf:
    case 0x11:
      temp_v4 = 5;
      *(unsigned int *)(temp_v1 + 0xcc8c) = temp_v4;
    }
  }
  else if (temp_v3 != 0) {
    *(unsigned char *)(DAT_00447a78 + 0xcc71) = 0;
    *(unsigned char *)(temp_v1 + 0xcc72) = 1;
  }
  FUN_002531bc(temp_v5);
  if (DAT_0049f954 != 0x20) {
    if (DAT_0049f954 < 0x20) {
      if ((DAT_0049f954 == 5 || DAT_0049f954 == 0x19) ||
         (DAT_0049f954 == 0x1a || DAT_0049f954 == 0x1f)) goto LAB_002c8a14;
    }
    else if ((DAT_0049f954 == 0x21 || DAT_0049f954 == 0x23) || DAT_0049f954 == 0x24)
    goto LAB_002c8a14;
    temp_v0 = *(char *)(temp_v1 + 0xcc95);
  }
  else {
LAB_002c8a14:
    if (DAT_0049f934 == 0) {
      *(unsigned char *)(temp_v1 + 0xcc95) = 1;
      *(unsigned char *)(temp_v1 + 0xcc96) = 1;
      *(unsigned int *)(temp_v1 + 0xcca0) = DAT_0049f9a0;
      *(float *)(temp_v1 + 0xcca4) = DAT_0049f9a4 + 10.0f;
      *(unsigned int *)(temp_v1 + 0xcca8) = DAT_0049f9a8;
      *(unsigned int *)(temp_v1 + 0xccac) = DAT_0049f9bc;
      FUN_002531bc();
      return;
    }
    temp_v0 = *(char *)(temp_v1 + 0xcc95);
  }
  if (temp_v0 != '\0') {
    *(unsigned char *)(temp_v1 + 0xcc95) = 0;
    *(unsigned char *)(temp_v1 + 0xcc96) = 1;
  }
  FUN_002531bc();
  return;
}
