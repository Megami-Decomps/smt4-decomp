/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029cc3c` (_code @ 0x29cc3c, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b89e4(...);
int FUN_002bee58(unsigned int, unsigned int);

extern unsigned int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */

/* Supplied declaration required: FUN_002b89e4. */
/* Supplied declaration required: FUN_002bee58. */


unsigned int FUN_0029cc3c(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v2 = DAT_0043e190;
  if (*(char *)(DAT_0043e190 + 0x7c) == '\x03') {
    if (*(char *)(DAT_0043e190 + 0x7d) != '\0') {
      temp_v4 = *(int *)(DAT_0043e190 + 0x78) + *(int *)(DAT_0043e190 + 0x70);
      *(int *)(DAT_0043e190 + 0x6c) = temp_v4;
      *(unsigned int *)(temp_v2 + 100) = 10;
      *(unsigned int *)(temp_v2 + 0x74) = 0;
      *(int *)(temp_v2 + 0x78) = temp_v4;
      if (temp_v4 < 1) {
        temp_v4 = 0;
      }
      *(int *)(temp_v2 + 0x6c) = temp_v4;
      if (temp_v4 >= 1000000000) {
        temp_v4 = 999999999;
      }
      *(int *)(temp_v2 + 0x6c) = temp_v4;
      *(unsigned char *)(temp_v2 + 0x7c) = 0;
    }
    if (*(char *)(temp_v2 + 0x7e) != '\0') {
      temp_v4 = *(int *)(temp_v2 + 0x78) + *(int *)(temp_v2 + 0x70);
      *(int *)(temp_v2 + 0x6c) = temp_v4;
      *(unsigned int *)(temp_v2 + 100) = 10;
      *(unsigned int *)(temp_v2 + 0x74) = 0;
      *(int *)(temp_v2 + 0x78) = temp_v4;
      if (temp_v4 < 1) {
        temp_v4 = 0;
      }
      *(int *)(temp_v2 + 0x6c) = temp_v4;
      if (temp_v4 >= 100) {
        temp_v4 = 99;
      }
      *(int *)(temp_v2 + 0x6c) = temp_v4;
      *(unsigned char *)(temp_v2 + 0x7c) = 0;
    }
  }
  temp_v3 = DAT_0043e190 + 0x754;
  if ((*(char *)(temp_v2 + 9) == '\v') && (*(char *)(temp_v2 + 8) != '\0')) {
    if (*(char *)(temp_v2 + 0x7c) == '\0' || *(char *)(temp_v2 + 0x7c) == '\x02') {
      *(unsigned char *)(temp_v2 + 0x7c) = 4;
      if (*(char *)(temp_v2 + 0x7f) == '\0') {
        temp_v5 = 7;
      }
      else {
        temp_v5 = 2;
      }
      FUN_002bee58(temp_v3,temp_v5);
      temp_v1 = DAT_0043e18c;
      if (DAT_0043e18c != 0) {
        temp_v3 = (unsigned int)*(unsigned char *)(DAT_0043e18c + 8);
      }
      if (DAT_0043e18c != 0 && temp_v3 != 0) {
        temp_v3 = DAT_0043e18c;
        FUN_002b89e4(DAT_0043e18c,*(unsigned char *)(DAT_0043e18c + 9));
        *(unsigned char *)(temp_v1 + 8) = 3;
        *(unsigned char *)(temp_v1 + 0x35) = 0;
      }
      if (temp_v2 != 0) {
        temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 + 8);
      }
      if (temp_v2 != 0 && temp_v3 != 0) {
        FUN_002b89e4(temp_v2,*(unsigned char *)(temp_v2 + 9));
        *(unsigned char *)(temp_v2 + 8) = 3;
        *(unsigned char *)(temp_v2 + 0x35) = 0;
      }
    }
    return 0;
  }
  temp_v0 = *(char *)(temp_v2 + 0x7c);
  if ((temp_v0 == '\0' || temp_v0 == '\x02') || temp_v0 == '\x01') {
    *(unsigned char *)(temp_v2 + 0x7c) = 4;
    if (*(char *)(temp_v2 + 0x7f) == '\0') {
      temp_v5 = 7;
    }
    else {
      temp_v5 = 2;
    }
    FUN_002bee58(temp_v3,temp_v5);
  }
  return 1;
}

} /* extern "C" */
