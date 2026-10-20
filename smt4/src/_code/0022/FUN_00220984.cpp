/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00220984` (_code @ 0x220984, 0x36c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0043da28; /* 0x43da28 */

extern int FUN_002b8d54(void);
extern int FUN_002b8d68(void);


void FUN_00220984(void)

{
/* irregular: 12 goto(s) */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v1 = (*(int *)((unsigned char *)&DAT_0043da28 + 0x4));
  temp_v2 = FUN_002b8d54();
  if (*(char *)(temp_v1 + 0x4c7) == '\0') {
    if ((temp_v2 == 1) || (temp_v2 == 2)) {
      temp_v2 = 0;
LAB_00220b1c:
      temp_v0 = *(char *)(temp_v1 + temp_v2 * 4 + 0x494);
      if ((!((temp_v0 == '\0' || temp_v0 == '\x12') || temp_v0 == '\x11')) &&
         (temp_v4 = FUN_002b8d68(), temp_v4 == *(short *)(temp_v1 + temp_v2 * 2 + 0x4ac))) {
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
             (temp_v4 = FUN_002b8d68(), temp_v4 != *(short *)(temp_v1 + 0x4ae))) {
LAB_00220a90:
            if ((*(char *)(temp_v1 + 0x494) != '\a') ||
               (temp_v4 = FUN_002b8d68(), temp_v4 != *(short *)(temp_v1 + 0x4ae))) goto LAB_00220a40;
          }
          *(unsigned char *)(temp_v1 + 0x4b8) = 1;
        }
        if (temp_v2 == 2) {
          if ((*(char *)(temp_v1 + 0x494) != '\b') ||
             (temp_v4 = FUN_002b8d68(), temp_v4 != *(short *)(temp_v1 + 0x4b0))) goto LAB_00220a40;
          *(unsigned char *)(temp_v1 + 0x4b8) = 1;
          continue;
        }
        if (temp_v2 == 1) goto LAB_00220a90;
        if (temp_v2 != 3) {
          if (0 < temp_v2) {
LAB_00220a40:
            temp_v0 = *(char *)(temp_v1 + temp_v2 * 4 + 0x490);
            if ((((temp_v0 != '\n' && temp_v0 != '\v') && (temp_v0 != '\f' && temp_v0 != '\r')) &&
                ((temp_v0 != '\x0e' && temp_v0 != '\x0f') && temp_v0 != '\x10')) ||
               (temp_v4 = FUN_002b8d68(), temp_v4 != *(short *)(temp_v1 + temp_v2 * 2 + 0x4ac)))
            goto LAB_00220b1c;
            *(unsigned char *)(temp_v1 + temp_v2 + 0x4b7) = 1;
            continue;
          }
          goto LAB_00220b1c;
        }
        if ((*(char *)(temp_v1 + 0x49c) != '\t') ||
           (temp_v4 = FUN_002b8d68(), temp_v4 != *(short *)(temp_v1 + 0x4b2))) goto LAB_00220a40;
        *(unsigned char *)(temp_v1 + 0x4ba) = 1;
      } while( 1 );
    }
    if (temp_v2 == 6) {
      temp_v2 = 0;
LAB_00220c98:
      temp_v0 = *(char *)(temp_v1 + temp_v2 * 4 + 0x494);
      if ((!((temp_v0 == '\0' || temp_v0 == '\x12') || temp_v0 == '\x11')) &&
         (temp_v4 = FUN_002b8d68(), temp_v4 == *(short *)(temp_v1 + temp_v2 * 2 + 0x4ac))) {
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
             (temp_v4 = FUN_002b8d68(), temp_v4 != *(short *)(temp_v1 + 0x4ae))) {
LAB_00220c0c:
            if ((*(char *)(temp_v1 + 0x494) != '\a') ||
               (temp_v4 = FUN_002b8d68(), temp_v4 != *(short *)(temp_v1 + 0x4ae))) goto LAB_00220bbc;
          }
          *(unsigned char *)(temp_v1 + 0x4be) = 1;
        }
        if (temp_v2 == 2) {
          if ((*(char *)(temp_v1 + 0x494) != '\b') ||
             (temp_v4 = FUN_002b8d68(), temp_v4 != *(short *)(temp_v1 + 0x4b0))) goto LAB_00220bbc;
          *(unsigned char *)(temp_v1 + 0x4be) = 1;
          continue;
        }
        if (temp_v2 == 1) goto LAB_00220c0c;
        if (temp_v2 != 3) {
          if (0 < temp_v2) {
LAB_00220bbc:
            temp_v0 = *(char *)(temp_v1 + temp_v2 * 4 + 0x490);
            if ((((temp_v0 != '\n' && temp_v0 != '\v') && (temp_v0 != '\f' && temp_v0 != '\r')) &&
                ((temp_v0 != '\x0e' && temp_v0 != '\x0f') && temp_v0 != '\x10')) ||
               (temp_v4 = FUN_002b8d68(), temp_v4 != *(short *)(temp_v1 + temp_v2 * 2 + 0x4ac)))
            goto LAB_00220c98;
            *(unsigned char *)(temp_v1 + temp_v2 + 0x4bd) = 1;
            continue;
          }
          goto LAB_00220c98;
        }
        if ((*(char *)(temp_v1 + 0x49c) != '\t') ||
           (temp_v4 = FUN_002b8d68(), temp_v4 != *(short *)(temp_v1 + 0x4b2))) goto LAB_00220bbc;
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

} /* extern "C" */
