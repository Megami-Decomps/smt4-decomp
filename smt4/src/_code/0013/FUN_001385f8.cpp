/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001385f8` (_code @ 0x1385f8, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002aa024(int, int);
int FUN_002ae028(int);
int FUN_002bee58(int, int);

extern int DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: FUN_002aa024. */
/* Supplied declaration required: FUN_002ae028. */
/* Supplied declaration required: FUN_002bee58. */


void FUN_001385f8(void)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  
  temp_v1 = DAT_0043da2c;
  temp_v3 = 0;
  do {
    FUN_002bee58(temp_v1 + temp_v3 * 0x8c + 0x34,0);
    temp_v0 = *(char *)(temp_v1 + temp_v3 * 4 + 0x494);
    if (temp_v0 != '\0') {
      if (temp_v0 != '\a') {
        if (temp_v0 != '\b') {
          if (temp_v0 != '\t') {
            temp_v2 = FUN_002aa024(0x12,temp_v3 + 0x1f);
            *(unsigned short *)(temp_v1 + temp_v3 * 2 + 0x4ac) = temp_v2;
          }
          else {
            temp_v2 = FUN_002aa024(0x12,0x85);
            *(unsigned short *)(temp_v1 + temp_v3 * 2 + 0x4ac) = temp_v2;
          }
        }
        else {
          temp_v2 = FUN_002aa024(0x12,0x59);
          *(unsigned short *)(temp_v1 + temp_v3 * 2 + 0x4ac) = temp_v2;
        }
      }
      else {
        temp_v2 = FUN_002aa024(0x12,0x73);
        *(unsigned short *)(temp_v1 + temp_v3 * 2 + 0x4ac) = temp_v2;
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 6);
  *(unsigned int *)(temp_v1 + 0x4b8) = 0;
  *(unsigned short *)(temp_v1 + 0x4bc) = 0;
  FUN_002ae028(temp_v1 + 0x4be);
  *(unsigned char *)(temp_v1 + 0x4c6) = 0;
  temp_v1 = DAT_0043da2c;
  *(unsigned int *)(DAT_0043da2c + 0xc) = 0;
  *(unsigned int *)(temp_v1 + 0x10) = 1;
  return;
}

} /* extern "C" */
