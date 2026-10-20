/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031879c` (_code @ 0x31879c, 0x49c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char g_buttonHelp; /* 0x57f0c4 */

extern int FUN_001643a0(void);
extern int FUN_00165070(void);


void FUN_0031879c(void)

{
/* irregular: 14 goto(s) */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v1 = (*(int *)((unsigned char *)&g_buttonHelp + 0x4));
  temp_v2 = FUN_001643a0();
  if (*(char *)(temp_v1 + 0x5e3) == '\0') {
    if ((temp_v2 == 1) || (temp_v2 == 2)) {
      temp_v2 = 0;
LAB_003189d0:
      temp_v0 = *(char *)(temp_v1 + temp_v2 * 4 + 0x5ac);
      if (((temp_v0 != '\0' && temp_v0 != '\x12') && temp_v0 != '\x11') &&
         (temp_v4 = FUN_00165070(), temp_v4 == *(short *)(temp_v1 + temp_v2 * 2 + 0x5c4))) {
        temp_v4 = temp_v1 + temp_v2;
        goto LAB_003189a4;
      }
      *(unsigned char *)(temp_v1 + temp_v2 + 0x5d4) = 0;
      do {
        temp_v4 = temp_v1 + temp_v2;
        temp_v2 = temp_v2 + 1;
        *(unsigned char *)(temp_v4 + 0x5da) = 0;
        if (temp_v2 >= 6) {
          return;
        }
        if (temp_v2 == 1) {
          if ((*(char *)(temp_v1 + 0x5ac) != '\b') ||
             (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + 0x5c6))) {
LAB_003188d0:
            if (((*(char *)(temp_v1 + 0x5ac) != '\a') ||
                (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + 0x5c6))) &&
               ((*(char *)(temp_v1 + 0x5ac) != '\x13' ||
                (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + 0x5c6))))) {
              if ((*(char *)(temp_v1 + 0x5ac) != '\x15') ||
                 (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + 0x5c6))) goto LAB_00318880;
              *(unsigned char *)(temp_v1 + 0x5d5) = 1;
              continue;
            }
          }
          *(unsigned char *)(temp_v1 + 0x5d4) = 1;
          continue;
        }
        if (temp_v2 == 2) {
          if ((*(char *)(temp_v1 + 0x5ac) != '\b') ||
             (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + 0x5c8))) goto LAB_00318880;
          *(unsigned char *)(temp_v1 + 0x5d4) = 1;
          continue;
        }
        if (temp_v2 == 1) goto LAB_003188d0;
        if (temp_v2 != 3) {
          if (temp_v2 != 5) {
            if (temp_v2 < 1) goto LAB_003189d0;
          }
          else if ((*(char *)(temp_v1 + 0x5bc) == '\x14') &&
                  (temp_v3 = FUN_00165070(), temp_v4 = temp_v1 + 5, temp_v3 == *(short *)(temp_v1 + 0x5ce))) {
LAB_003189a4:
            *(unsigned char *)(temp_v4 + 0x5d4) = 1;
            continue;
          }
LAB_00318880:
          temp_v0 = *(char *)(temp_v1 + temp_v2 * 4 + 0x5a8);
          if ((((temp_v0 != '\n' && temp_v0 != '\v') && (temp_v0 != '\f' && temp_v0 != '\r')) &&
              ((temp_v0 != '\x0e' && temp_v0 != '\x0f') && temp_v0 != '\x10')) ||
             (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + temp_v2 * 2 + 0x5c4)))
          goto LAB_003189d0;
          *(unsigned char *)(temp_v1 + temp_v2 + 0x5d3) = 1;
          continue;
        }
        if ((*(char *)(temp_v1 + 0x5b4) != '\t') ||
           (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + 0x5ca))) goto LAB_00318880;
        *(unsigned char *)(temp_v1 + 0x5d6) = 1;
      } while( 1 );
    }
    if (temp_v2 == 6) {
      temp_v2 = 0;
LAB_00318be0:
      temp_v0 = *(char *)(temp_v1 + temp_v2 * 4 + 0x5ac);
      if (((temp_v0 != '\0' && temp_v0 != '\x12') && temp_v0 != '\x11') &&
         (temp_v4 = FUN_00165070(), temp_v4 == *(short *)(temp_v1 + temp_v2 * 2 + 0x5c4))) {
        temp_v4 = temp_v1 + temp_v2;
        goto LAB_00318bb4;
      }
      *(unsigned char *)(temp_v1 + temp_v2 + 0x5da) = 0;
      do {
        temp_v4 = temp_v1 + temp_v2;
        temp_v2 = temp_v2 + 1;
        *(unsigned char *)(temp_v4 + 0x5d4) = 0;
        if (temp_v2 >= 6) {
          return;
        }
        if (temp_v2 == 1) {
          if ((*(char *)(temp_v1 + 0x5ac) != '\b') ||
             (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + 0x5c6))) {
LAB_00318ae0:
            if (((*(char *)(temp_v1 + 0x5ac) != '\a') ||
                (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + 0x5c6))) &&
               ((*(char *)(temp_v1 + 0x5ac) != '\x13' ||
                (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + 0x5c6))))) {
              if ((*(char *)(temp_v1 + 0x5ac) != '\x15') ||
                 (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + 0x5c6))) goto LAB_00318a90;
              *(unsigned char *)(temp_v1 + 0x5db) = 1;
              continue;
            }
          }
          *(unsigned char *)(temp_v1 + 0x5da) = 1;
          continue;
        }
        if (temp_v2 == 2) {
          if ((*(char *)(temp_v1 + 0x5ac) != '\b') ||
             (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + 0x5c8))) goto LAB_00318a90;
          *(unsigned char *)(temp_v1 + 0x5da) = 1;
          continue;
        }
        if (temp_v2 == 1) goto LAB_00318ae0;
        if (temp_v2 != 3) {
          if (temp_v2 != 5) {
            if (temp_v2 < 1) goto LAB_00318be0;
          }
          else if ((*(char *)(temp_v1 + 0x5bc) == '\x14') &&
                  (temp_v3 = FUN_00165070(), temp_v4 = temp_v1 + 5, temp_v3 == *(short *)(temp_v1 + 0x5ce))) {
LAB_00318bb4:
            *(unsigned char *)(temp_v4 + 0x5da) = 1;
            continue;
          }
LAB_00318a90:
          temp_v0 = *(char *)(temp_v1 + temp_v2 * 4 + 0x5a8);
          if ((((temp_v0 != '\n' && temp_v0 != '\v') && (temp_v0 != '\f' && temp_v0 != '\r')) &&
              ((temp_v0 != '\x0e' && temp_v0 != '\x0f') && temp_v0 != '\x10')) ||
             (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + temp_v2 * 2 + 0x5c4)))
          goto LAB_00318be0;
          *(unsigned char *)(temp_v1 + temp_v2 + 0x5d9) = 1;
          continue;
        }
        if ((*(char *)(temp_v1 + 0x5b4) != '\t') ||
           (temp_v4 = FUN_00165070(), temp_v4 != *(short *)(temp_v1 + 0x5ca))) goto LAB_00318a90;
        *(unsigned char *)(temp_v1 + 0x5dc) = 1;
      } while( 1 );
    }
    temp_v4 = 0;
    temp_v2 = 6;
    do {
      temp_v3 = temp_v1 + temp_v4;
      temp_v4 = temp_v4 + 1;
      if (*(char *)(temp_v3 + 0x5d4) != '\0') {
        *(char *)(temp_v3 + 0x5d4) = *(char *)(temp_v3 + 0x5d4) - '\x01';
      }
      temp_v2 = temp_v2 - 1;
      *(unsigned char *)(temp_v3 + 0x5da) = 0;
    } while (temp_v2 != 0);
  }
  return;
}

} /* extern "C" */
