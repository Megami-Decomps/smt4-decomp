/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b827c` (_code @ 0x2b827c, 0x1d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a87e8(void);
int FUN_002a9fdc(int, int, int);
int FUN_002ae794(...);
int FUN_002bd8e8(int, int, int);
int FUN_002bee58(int, int);

extern unsigned char DAT_0043da28; /* 0x43da28 */

/* Supplied declaration required: FUN_002a87e8. */
/* Supplied declaration required: FUN_002a9fdc. */
/* Supplied declaration required: FUN_002ae794. */
/* Supplied declaration required: FUN_002bd8e8. */
/* Supplied declaration required: FUN_002bee58. */


void FUN_002b827c(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v2 = FUN_002ae794(*(unsigned char *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x4c9));
  temp_v3 = FUN_002ae794(param_1);
  temp_v1 = (*(int *)((unsigned char *)&DAT_0043da28 + 0x4));
  if (temp_v2 != 0 && temp_v3 != 0) {
    if (*(char *)(temp_v2 + 0xc) != '\0') {
      temp_v2 = 0;
      do {
        FUN_002bee58(temp_v1 + temp_v2 * 0x8c + 0x34,1);
        temp_v3 = temp_v1 + temp_v2 * 4;
        temp_v0 = *(char *)(temp_v3 + 0x494);
        if (temp_v0 != '\0') {
          if (temp_v0 == '\a' || temp_v0 == '\t') {
            FUN_002a87e8();
          }
          if (*(char *)(temp_v3 + 0x494) == '\b') {
            FUN_002a87e8();
            FUN_002a87e8();
          }
          FUN_002a87e8();
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 6);
    }
    else {
      temp_v2 = 0;
      if (*(char *)(temp_v3 + 0xc) != '\0') {
        do {
          FUN_002bee58(temp_v1 + temp_v2 * 0x8c + 0x34,1);
          temp_v3 = temp_v1 + temp_v2 * 4;
          if (*(char *)(temp_v3 + 0x494) != '\0') {
            *(unsigned char *)(temp_v3 + 0x494) = 0;
            FUN_002a87e8();
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 6);
        temp_v2 = 0;
        do {
          temp_v3 = temp_v1 + temp_v2 * 0x8c + 0x37c;
          if (*(char *)(temp_v1 + 0x4c8) != '\x01') {
            FUN_002a9fdc(temp_v3,0,1);
          }
          else {
            FUN_002bd8e8(temp_v3,3,0);
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 2);
      }
      else {
        do {
          FUN_002bee58(temp_v1 + temp_v2 * 0x8c + 0x34,1);
          temp_v3 = temp_v1 + temp_v2 * 4;
          temp_v0 = *(char *)(temp_v3 + 0x494);
          if (temp_v0 != '\0') {
            if (temp_v0 == '\a' || temp_v0 == '\t') {
              FUN_002a87e8();
            }
            if (*(char *)(temp_v3 + 0x494) == '\b') {
              FUN_002a87e8();
              FUN_002a87e8();
            }
            FUN_002a87e8();
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 6);
      }
    }
    temp_v1 = (*(int *)((unsigned char *)&DAT_0043da28 + 0x4));
    *(unsigned int *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0xc) = 0;
    *(unsigned int *)(temp_v1 + 0x10) = 3;
  }
  return;
}

} /* extern "C" */
