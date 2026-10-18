/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381bc8` (_code @ 0x381bc8, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002c0bcc(unsigned int);


unsigned int FUN_00381bc8(int param_1)

{
/* irregular: 3 goto(s) */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  if (*(char *)(param_1 + 8) == '\x0f') {
    *(unsigned char *)(param_1 + 8) = 0;
  }
  temp_v3 = FUN_002c0bcc(3);
  temp_v1 = *(unsigned char *)(param_1 + 8);
  do {
    while( 1 ) {
      do {
        if ((temp_v1 & 1) == 0) {
          if (temp_v3 != 0) {
            temp_v3 = temp_v3 - 1;
          }
          else if (*(char *)(param_1 + 10) != '\0') {
            *(unsigned char *)(param_1 + 10) = 0;
            goto LAB_00381c94;
          }
        }
        if ((temp_v1 & 2) == 0) {
          if (temp_v3 != 0) {
            temp_v3 = temp_v3 - 1;
          }
          else if (*(char *)(param_1 + 10) != '\x01') {
            *(unsigned char *)(param_1 + 10) = 1;
            goto LAB_00381c94;
          }
        }
        if ((temp_v1 & 4) == 0) {
          if (temp_v3 != 0) {
            temp_v3 = temp_v3 - 1;
          }
          else if (*(char *)(param_1 + 10) != '\x02') {
            temp_v2 = 2;
            goto LAB_00381cc8;
          }
        }
      } while ((temp_v1 & 8) != 0);
      if (temp_v3 == 0) break;
      temp_v3 = temp_v3 - 1;
    }
  } while (*(char *)(param_1 + 10) == '\x03');
  temp_v2 = 3;
LAB_00381cc8:
  *(unsigned char *)(param_1 + 10) = temp_v2;
LAB_00381c94:
  temp_v4 = (unsigned int)*(unsigned char *)(param_1 + 10);
  temp_v0 = 1 << temp_v4;
  if ((temp_v0 & *(unsigned char *)(param_1 + 9)) != 0) {
    temp_v4 = 5;
  }
  *(unsigned char *)(param_1 + 8) = temp_v1 | (unsigned char)temp_v0;
  return temp_v4;
}
