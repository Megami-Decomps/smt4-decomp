/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00220888` (_code @ 0x220888, 0x36c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0043da2c; /* 0x43da2c */

/* Unsupported intrinsic, declaration required: while (STORE). */
extern int FUN_002b9094(void);
extern int FUN_002b90a8(void);


void FUN_00220888(void)

{
/* irregular: 12 goto(s); 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v1 = DAT_0043da2c;
  temp_v2 = FUN_002b9094();
  if (*(char *)(temp_v1 + 0x4c7) == '\0') {
    if ((temp_v2 == 1) || (temp_v2 == 2)) {
      temp_v2 = 0;
LAB_00220a20:
      temp_v0 = *(char *)(temp_v1 + temp_v2 * 4 + 0x494);
      if ((!((temp_v0 == '\0' || temp_v0 == '\x12') || temp_v0 == '\x11')) &&
         (temp_v4 = FUN_002b90a8(), temp_v4 == *(short *)(temp_v1 + temp_v2 * 2 + 0x4ac))) {
        *(unsigned char *)(temp_v1 + temp_v2 + 0x4b8) = 1;
      }
      else {
        *(unsigned char *)(temp_v1 + temp_v2 + 0x4b8) = 0;
      }
      do {
        while( 1 ) {
          temp_v4 = temp_v1 + temp_v2;
          temp_v2 = temp_v2 + 1;
          *(unsigned char *)(temp_v4 + 0x4be) = 0;
          if (temp_v2 >= 6) {
            return;
          }
          if (temp_v2 != 1) break;
          if ((*(char *)(temp_v1 + 0x494) != '\b') ||
             (temp_v4 = FUN_002b90a8(), temp_v4 != *(short *)(temp_v1 + 0x4ae))) {
LAB_00220994:
            if ((*(char *)(temp_v1 + 0x494) != '\a') ||
               (temp_v4 = FUN_002b90a8(), temp_v4 != *(short *)(temp_v1 + 0x4ae))) goto LAB_00220944;
          }
          *(unsigned char *)(temp_v1 + 0x4b8) = 1;
        }
        if (temp_v2 == 2) {
          if ((*(char *)(temp_v1 + 0x494) != '\b') ||
             (temp_v4 = FUN_002b90a8(), temp_v4 != *(short *)(temp_v1 + 0x4b0))) goto LAB_00220944;
          *(unsigned char *)(temp_v1 + 0x4b8) = 1;
          continue;
        }
        if (temp_v2 == 1) goto LAB_00220994;
        if (temp_v2 != 3) {
          if (0 < temp_v2) {
LAB_00220944:
            temp_v0 = *(char *)(temp_v1 + temp_v2 * 4 + 0x490);
            if ((((temp_v0 != '\n' && temp_v0 != '\v') && (temp_v0 != '\f' && temp_v0 != '\r')) &&
                ((temp_v0 != '\x0e' && temp_v0 != '\x0f') && temp_v0 != '\x10')) ||
               (temp_v4 = FUN_002b90a8(), temp_v4 != *(short *)(temp_v1 + temp_v2 * 2 + 0x4ac)))
            goto LAB_00220a20;
            *(unsigned char *)(temp_v1 + temp_v2 + 0x4b7) = 1;
            continue;
          }
          goto LAB_00220a20;
        }
        if ((*(char *)(temp_v1 + 0x49c) != '\t') ||
           (temp_v4 = FUN_002b90a8(), temp_v4 != *(short *)(temp_v1 + 0x4b2))) goto LAB_00220944;
        *(unsigned char *)(temp_v1 + 0x4ba) = 1;
      } while( 1 );
    }
    if (temp_v2 == 6) {
      temp_v2 = 0;
LAB_00220b9c:
      temp_v0 = *(char *)(temp_v1 + temp_v2 * 4 + 0x494);
      if ((!((temp_v0 == '\0' || temp_v0 == '\x12') || temp_v0 == '\x11')) &&
         (temp_v4 = FUN_002b90a8(), temp_v4 == *(short *)(temp_v1 + temp_v2 * 2 + 0x4ac))) {
        *(unsigned char *)(temp_v1 + temp_v2 + 0x4be) = 1;
      }
      else {
        *(unsigned char *)(temp_v1 + temp_v2 + 0x4be) = 0;
      }
      do {
        while( 1 ) {
          temp_v4 = temp_v1 + temp_v2;
          temp_v2 = temp_v2 + 1;
          *(unsigned char *)(temp_v4 + 0x4b8) = 0;
          if (temp_v2 >= 6) {
            return;
          }
          if (temp_v2 != 1) break;
          if ((*(char *)(temp_v1 + 0x494) != '\b') ||
             (temp_v4 = FUN_002b90a8(), temp_v4 != *(short *)(temp_v1 + 0x4ae))) {
LAB_00220b10:
            if ((*(char *)(temp_v1 + 0x494) != '\a') ||
               (temp_v4 = FUN_002b90a8(), temp_v4 != *(short *)(temp_v1 + 0x4ae))) goto LAB_00220ac0;
          }
          *(unsigned char *)(temp_v1 + 0x4be) = 1;
        }
        if (temp_v2 == 2) {
          if ((*(char *)(temp_v1 + 0x494) != '\b') ||
             (temp_v4 = FUN_002b90a8(), temp_v4 != *(short *)(temp_v1 + 0x4b0))) goto LAB_00220ac0;
          *(unsigned char *)(temp_v1 + 0x4be) = 1;
          continue;
        }
        if (temp_v2 == 1) goto LAB_00220b10;
        if (temp_v2 != 3) {
          if (0 < temp_v2) {
LAB_00220ac0:
            temp_v0 = *(char *)(temp_v1 + temp_v2 * 4 + 0x490);
            if ((((temp_v0 != '\n' && temp_v0 != '\v') && (temp_v0 != '\f' && temp_v0 != '\r')) &&
                ((temp_v0 != '\x0e' && temp_v0 != '\x0f') && temp_v0 != '\x10')) ||
               (temp_v4 = FUN_002b90a8(), temp_v4 != *(short *)(temp_v1 + temp_v2 * 2 + 0x4ac)))
            goto LAB_00220b9c;
            *(unsigned char *)(temp_v1 + temp_v2 + 0x4bd) = 1;
            continue;
          }
          goto LAB_00220b9c;
        }
        if ((*(char *)(temp_v1 + 0x49c) != '\t') ||
           (temp_v4 = FUN_002b90a8(), temp_v4 != *(short *)(temp_v1 + 0x4b2))) goto LAB_00220ac0;
        *(unsigned char *)(temp_v1 + 0x4c0) = 1;
      } while( 1 );
    }
    temp_v2 = 0;
    temp_v4 = 6;
    do {
      temp_v3 = temp_v1 + temp_v2;
      temp_v2 = temp_v2 + 1;
      if (*(char *)(temp_v3 + 0x4b8) != '\0') {
        *(char *)(temp_v3 + 0x4b8) = *(char *)(temp_v3 + 0x4b8) - '\x01';
      }
      temp_v4 = temp_v4 - 1;
      *(unsigned char *)(temp_v3 + 0x4be) = 0;
    } while (temp_v4 != 0);
  }
  return;
}
