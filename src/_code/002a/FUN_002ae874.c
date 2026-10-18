/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae874` (_code @ 0x2ae874, 0x1b0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: FUN_002aa268. */
/* Supplied declaration required: FUN_002aa2b0. */
/* Supplied declaration required: FUN_002ae2b4. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002bf030. */


void FUN_002ae874(void)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v1 = DAT_0043da2c;
  temp_v4 = 0;
  do {
    FUN_002bf030(temp_v1 + temp_v4 * 0x8c + 0x34,0);
    temp_v0 = *(char *)(temp_v1 + temp_v4 * 4 + 0x494);
    if (temp_v0 != '\0') {
      if (temp_v0 != '\a') {
        if (temp_v0 != '\b') {
          if (temp_v0 != '\t') {
            if (((!(temp_v0 == '\n' || temp_v0 == '\v')) && (!(temp_v0 == '\f' || temp_v0 == '\r'))) &&
               (!((temp_v0 == '\x0e' || temp_v0 == '\x0f') || temp_v0 == '\x10'))) {
              temp_v2 = FUN_002aa2b0(0x12,temp_v4 + 0x1f);
              *(unsigned short *)(temp_v1 + temp_v4 * 2 + 0x4ac) = temp_v2;
            }
            else {
              switch(temp_v4) {
              case 0:
              case 1:
                temp_v2 = FUN_002aa2b0(0x12,0x73);
                *(unsigned short *)(temp_v1 + temp_v4 * 2 + 0x4ac) = temp_v2;
                break;
              case 2:
              case 3:
                temp_v2 = FUN_002aa2b0(0x12,0x85);
                *(unsigned short *)(temp_v1 + temp_v4 * 2 + 0x4ac) = temp_v2;
                break;
              case 4:
              case 5:
                temp_v2 = FUN_002aa2b0(0x12,0x8c);
                *(unsigned short *)(temp_v1 + temp_v4 * 2 + 0x4ac) = temp_v2;
              }
            }
          }
          else {
            temp_v2 = FUN_002aa2b0(0x12,0x85);
            *(unsigned short *)(temp_v1 + temp_v4 * 2 + 0x4ac) = temp_v2;
          }
        }
        else {
          temp_v2 = FUN_002aa2b0(0x12,0x59);
          *(unsigned short *)(temp_v1 + temp_v4 * 2 + 0x4ac) = temp_v2;
        }
      }
      else {
        temp_v2 = FUN_002aa2b0(0x12,0x73);
        *(unsigned short *)(temp_v1 + temp_v4 * 2 + 0x4ac) = temp_v2;
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 6) {
      temp_v4 = 0;
      do {
        temp_v3 = temp_v1 + temp_v4 * 0x8c + 0x37c;
        if (*(char *)(temp_v1 + 0x4c8) != '\x01') {
          FUN_002aa268(temp_v3,0);
        }
        else {
          FUN_002bdac0(temp_v3,2,0);
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 2);
      *(unsigned int *)(temp_v1 + 0x4b8) = 0;
      *(unsigned short *)(temp_v1 + 0x4bc) = 0;
      FUN_002ae2b4(temp_v1 + 0x4be);
      *(unsigned char *)(temp_v1 + 0x4c6) = 1;
      temp_v1 = DAT_0043da2c;
      *(unsigned int *)(DAT_0043da2c + 0xc) = 0;
      *(unsigned int *)(temp_v1 + 0x10) = 1;
      return;
    }
  } while( 1 );
}
