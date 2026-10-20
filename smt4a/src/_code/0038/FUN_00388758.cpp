/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00388758` (_code @ 0x388758, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00165088(...);
int FUN_001846d0(...);

extern unsigned int DAT_0057f58c; /* 0x57f58c */
extern int DAT_0057f590; /* 0x57f590 */

/* Supplied declaration required: FUN_00165088. */
/* Supplied declaration required: FUN_001846d0. */


unsigned int FUN_00388758(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v2 = DAT_0057f590;
  if (*(char *)(DAT_0057f590 + 0x8d) == '\x03') {
    if (*(char *)(DAT_0057f590 + 0x8e) != '\0') {
      temp_v4 = *(int *)(DAT_0057f590 + 0x88) + *(int *)(DAT_0057f590 + 0x80);
      *(int *)(DAT_0057f590 + 0x7c) = temp_v4;
      *(unsigned int *)(temp_v2 + 0x74) = 10;
      *(unsigned int *)(temp_v2 + 0x84) = 0;
      *(int *)(temp_v2 + 0x88) = temp_v4;
      if (temp_v4 < 1) {
        temp_v4 = 0;
      }
      *(int *)(temp_v2 + 0x7c) = temp_v4;
      if (temp_v4 >= 1000000000) {
        temp_v4 = 999999999;
      }
      *(int *)(temp_v2 + 0x7c) = temp_v4;
      *(unsigned char *)(temp_v2 + 0x8d) = 0;
    }
    if (*(char *)(temp_v2 + 0x8f) != '\0') {
      temp_v4 = *(int *)(temp_v2 + 0x88) + *(int *)(temp_v2 + 0x80);
      *(int *)(temp_v2 + 0x7c) = temp_v4;
      *(unsigned int *)(temp_v2 + 0x74) = 10;
      *(unsigned int *)(temp_v2 + 0x84) = 0;
      *(int *)(temp_v2 + 0x88) = temp_v4;
      if (temp_v4 < 1) {
        temp_v4 = 0;
      }
      *(int *)(temp_v2 + 0x7c) = temp_v4;
      if (temp_v4 >= 100) {
        temp_v4 = 99;
      }
      *(int *)(temp_v2 + 0x7c) = temp_v4;
      *(unsigned char *)(temp_v2 + 0x8d) = 0;
    }
  }
  if (((param_1 != 0) && (*(char *)(temp_v2 + 9) == '\v')) && (*(char *)(temp_v2 + 8) != '\0')) {
    if (*(char *)(temp_v2 + 0x8d) == '\0' || *(char *)(temp_v2 + 0x8d) == '\x02') {
      *(unsigned char *)(temp_v2 + 0x8d) = 4;
      if (*(char *)(temp_v2 + 0x91) != '\0') {
        temp_v3 = temp_v2 + 0xb00;
        FUN_001846d0(temp_v3,2);
      }
      else {
        temp_v3 = temp_v2 + 0xb00;
        FUN_001846d0(temp_v3,7);
      }
      temp_v1 = DAT_0057f58c;
      if (DAT_0057f58c != 0) {
        temp_v3 = (unsigned int)*(unsigned char *)(DAT_0057f58c + 8);
      }
      if (DAT_0057f58c != 0 && temp_v3 != 0) {
        temp_v3 = DAT_0057f58c;
        FUN_00165088(DAT_0057f58c,*(unsigned char *)(DAT_0057f58c + 9));
        *(unsigned char *)(temp_v1 + 8) = 3;
        *(unsigned char *)(temp_v1 + 0x35) = 0;
      }
      if (temp_v2 != 0) {
        temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 + 8);
      }
      if (temp_v2 != 0 && temp_v3 != 0) {
        FUN_00165088(temp_v2,*(unsigned char *)(temp_v2 + 9));
        *(unsigned char *)(temp_v2 + 8) = 3;
        *(unsigned char *)(temp_v2 + 0x35) = 0;
      }
    }
    return 0;
  }
  temp_v0 = *(char *)(temp_v2 + 0x8d);
  if ((temp_v0 == '\0' || temp_v0 == '\x02') || temp_v0 == '\x01') {
    *(unsigned char *)(temp_v2 + 0x8d) = 4;
    FUN_001846d0(temp_v2 + 0xb00,2);
  }
  return 1;
}

} /* extern "C" */
