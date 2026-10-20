#include "romwright_types.h"

extern "C" {

extern int FUN_001ab888(void);
extern int FUN_00348d64(void);


void FUN_003e43c8(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 8;
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 9) & 2) != 0) {
    temp_v1 = 9;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 9) & 4) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 9) & 8) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 9) & 0x10) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 9) & 0x20) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 9) & 0x40) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 9) & 0x80) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 10) & 1) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 10) & 2) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 10) & 4) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 10) & 8) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 10) & 0x10) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 10) & 0x20) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 10) & 0x40) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 10) & 0x80) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  temp_v0 = FUN_00348d64();
  if ((*(unsigned char *)(temp_v0 + 0xb) & 1) != 0) {
    temp_v1 = temp_v1 + 1;
  }
  if (temp_v1 > 0x18) {
    temp_v1 = 0x18;
  }
  temp_v0 = FUN_001ab888();
  *(char *)(temp_v0 + 0x1ca3) = (char)temp_v1;
  return;
}

} /* extern "C" */
