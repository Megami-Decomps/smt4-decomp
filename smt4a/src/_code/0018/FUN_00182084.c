/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00182084` (_code @ 0x182084, 0x264 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f0c8; /* 0x57f0c8 */

/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_0019d890. */
/* Supplied declaration required: FUN_0019e330. */
/* Supplied declaration required: FUN_001a90e0. */


void FUN_00182084(void)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  
  temp_v1 = DAT_0057f0c8;
  temp_v3 = 0;
  piVar5 = (int *)(DAT_0057f0c8 + 0x5d0);
  do {
    FUN_001846d0(temp_v1 + temp_v3 * 0x8c + 0x34,0);
    temp_v0 = *(char *)(temp_v1 + temp_v3 * 4 + 0x5ac);
    if (temp_v0 != '\0') {
      if (!(temp_v0 == '\a' || temp_v0 == '\x13')) {
        if (temp_v0 != '\b') {
          if (temp_v0 != '\t') {
            if (!(temp_v0 == '\x15' || temp_v0 == '\x14')) {
              if (((!(temp_v0 == '\n' || temp_v0 == '\v')) && (!(temp_v0 == '\f' || temp_v0 == '\r'))) &&
                 (!((temp_v0 == '\x0e' || temp_v0 == '\x0f') || temp_v0 == '\x10'))) {
                temp_v2 = FUN_0019d890(10,temp_v3 + 0x1f);
                *(unsigned short *)(temp_v1 + temp_v3 * 2 + 0x5c4) = temp_v2;
                *piVar5 = *(int *)(temp_v1 + 0x5d0) + 1;
              }
              else {
                switch(temp_v3) {
                case 0:
                case 1:
                  temp_v2 = FUN_0019d890(10,0x73);
                  *(unsigned short *)(temp_v1 + temp_v3 * 2 + 0x5c4) = temp_v2;
                  *piVar5 = *(int *)(temp_v1 + 0x5d0) + 1;
                  break;
                case 2:
                case 3:
                  temp_v2 = FUN_0019d890(10,0x85);
                  *(unsigned short *)(temp_v1 + temp_v3 * 2 + 0x5c4) = temp_v2;
                  *piVar5 = *(int *)(temp_v1 + 0x5d0) + 1;
                  break;
                case 4:
                case 5:
                  temp_v2 = FUN_0019d890(10,0x8c);
                  *(unsigned short *)(temp_v1 + temp_v3 * 2 + 0x5c4) = temp_v2;
                  *piVar5 = *(int *)(temp_v1 + 0x5d0) + 1;
                }
              }
            }
            else {
              temp_v2 = FUN_0019d890(10,temp_v3 + 0x1f);
              temp_v4 = temp_v1 + temp_v3 * 2;
              *(unsigned short *)(temp_v4 + 0x5c4) = temp_v2;
              *piVar5 = *(int *)(temp_v1 + 0x5d0) + 1;
              temp_v2 = FUN_0019d890(10,temp_v3 + 0x20);
              *(unsigned short *)(temp_v4 + 0x5c6) = temp_v2;
              *piVar5 = *piVar5 + 1;
            }
          }
          else {
            temp_v2 = FUN_0019d890(10,0x85);
            *(unsigned short *)(temp_v1 + temp_v3 * 2 + 0x5c4) = temp_v2;
            *piVar5 = *(int *)(temp_v1 + 0x5d0) + 1;
          }
        }
        else {
          temp_v2 = FUN_0019d890(10,0x59);
          *(unsigned short *)(temp_v1 + temp_v3 * 2 + 0x5c4) = temp_v2;
          *piVar5 = *(int *)(temp_v1 + 0x5d0) + 1;
        }
      }
      else {
        temp_v2 = FUN_0019d890(10,0x73);
        *(unsigned short *)(temp_v1 + temp_v3 * 2 + 0x5c4) = temp_v2;
        *piVar5 = *(int *)(temp_v1 + 0x5d0) + 1;
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 6) {
      temp_v3 = 0;
      do {
        temp_v4 = temp_v1 + temp_v3 * 0x8c;
        if (*(char *)(temp_v1 + 0x5e4) != '\x01') {
          FUN_00184c00(temp_v4 + 0x37c,0);
          FUN_0019e330(temp_v4 + 0x37c,0);
        }
        else {
          FUN_00184c00(temp_v4 + 0x37c,0);
          FUN_00184758(temp_v4 + 0x37c,2,0);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 4);
      *(unsigned int *)(temp_v1 + 0x5d4) = 0;
      *(unsigned short *)(temp_v1 + 0x5d8) = 0;
      FUN_001a90e0(temp_v1 + 0x5da);
      *(unsigned char *)(temp_v1 + 0x5e2) = 1;
      temp_v1 = DAT_0057f0c8;
      *(unsigned int *)(DAT_0057f0c8 + 0xc) = 0;
      *(unsigned int *)(temp_v1 + 0x10) = 1;
      return;
    }
  } while( 1 );
}
