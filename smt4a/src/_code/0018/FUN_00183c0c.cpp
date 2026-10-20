/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00183c0c` (_code @ 0x183c0c, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);
int FUN_0019d890(int, int);
int FUN_001a90e0(int);

extern int DAT_0057f0c8; /* 0x57f0c8 */

/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_0019d890. */
/* Supplied declaration required: FUN_001a90e0. */


void FUN_00183c0c(void)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  
  temp_v1 = DAT_0057f0c8;
  temp_v4 = 0;
  piVar6 = (int *)(DAT_0057f0c8 + 0x5d0);
  do {
    FUN_001846d0(temp_v1 + temp_v4 * 0x8c + 0x34,0);
    temp_v0 = *(char *)(temp_v1 + temp_v4 * 4 + 0x5ac);
    if (temp_v0 != '\0') {
      if (!(temp_v0 == '\a' || temp_v0 == '\x13')) {
        if (temp_v0 != '\b') {
          if (temp_v0 != '\t') {
            if (!(temp_v0 == '\x15' || temp_v0 == '\x14')) {
              temp_v2 = FUN_0019d890(10,temp_v4 + 0x1f);
              *(unsigned short *)(temp_v1 + temp_v4 * 2 + 0x5c4) = temp_v2;
              *piVar6 = *(int *)(temp_v1 + 0x5d0) + 1;
            }
            else {
              temp_v2 = FUN_0019d890(10,temp_v4 + 0x1f);
              temp_v3 = temp_v1 + temp_v4 * 2;
              *(unsigned short *)(temp_v3 + 0x5c4) = temp_v2;
              *piVar6 = *(int *)(temp_v1 + 0x5d0) + 1;
              temp_v2 = FUN_0019d890(10,temp_v4 + 0x20);
              *(unsigned short *)(temp_v3 + 0x5c6) = temp_v2;
              *piVar6 = *piVar6 + 1;
            }
          }
          else {
            temp_v2 = FUN_0019d890(10,0x85);
            *(unsigned short *)(temp_v1 + temp_v4 * 2 + 0x5c4) = temp_v2;
            *piVar6 = *(int *)(temp_v1 + 0x5d0) + 1;
          }
        }
        else {
          temp_v2 = FUN_0019d890(10,0x59);
          *(unsigned short *)(temp_v1 + temp_v4 * 2 + 0x5c4) = temp_v2;
          *piVar6 = *(int *)(temp_v1 + 0x5d0) + 1;
        }
      }
      else {
        temp_v2 = FUN_0019d890(10,0x73);
        *(unsigned short *)(temp_v1 + temp_v4 * 2 + 0x5c4) = temp_v2;
        *piVar6 = *(int *)(temp_v1 + 0x5d0) + 1;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 6);
  *(unsigned int *)(temp_v1 + 0x5d4) = 0;
  *(unsigned short *)(temp_v1 + 0x5d8) = 0;
  FUN_001a90e0(temp_v1 + 0x5da);
  *(unsigned char *)(temp_v1 + 0x5e2) = 0;
  temp_v1 = DAT_0057f0c8;
  *(unsigned int *)(DAT_0057f0c8 + 0xc) = 0;
  *(unsigned int *)(temp_v1 + 0x10) = 1;
  return;
}

} /* extern "C" */
