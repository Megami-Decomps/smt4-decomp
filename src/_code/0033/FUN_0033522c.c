/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033522c` (_code @ 0x33522c, 0x120 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0023f554(void);
extern int FUN_002a8a08(void);


void FUN_0033522c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 8;
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 9) & 2) != 0) {
    temp_v1 = 9;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 9) & 4) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 9) & 8) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 9) & 0x10) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 9) & 0x20) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 9) & 0x40) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 9) & 0x80) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 10) & 1) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 10) & 2) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 10) & 4) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 10) & 8) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 10) & 0x10) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 10) & 0x20) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 10) & 0x40) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 10) & 0x80) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_0023f554();
  if ((*(unsigned char *)(temp_v0 + 0xb) & 1) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  if (temp_v1 >= 0x19) {
    temp_v1 = 0x18;
  }
  temp_v0 = FUN_002a8a08();
  *(char *)(temp_v0 + 0x910b) = (char)temp_v1;
  return;
}
