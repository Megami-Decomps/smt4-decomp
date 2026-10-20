/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c0c38` (_code @ 0x1c0c38, 0x25c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00220984(void);
int FUN_002ae028(int);
int FUN_002b8454(unsigned int, unsigned int, unsigned int, int);
int buttonHelpSetPreset(unsigned int);
int FUN_002b8ee0(int, int);
int FUN_002bf818(int);

extern unsigned char g_buttonHelp; /* 0x43da28 */
extern unsigned char DAT_0043da50; /* 0x43da50 */

/* Supplied declaration required: FUN_00220984. */
/* Supplied declaration required: FUN_002ae028. */
/* Supplied declaration required: FUN_002b8454. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_002b8ee0. */
/* Supplied declaration required: FUN_002bf818. */


unsigned int FUN_001c0c38(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v0 = (*(int *)((unsigned char *)&g_buttonHelp + 0x4));
  temp_v5 = 0;
  temp_v1 = *(int *)((*(int *)((unsigned char *)&g_buttonHelp + 0x4)) + 0x10);
  if (temp_v1 != 0) {
    if (temp_v1 == 1) {
      temp_v1 = 0;
      do {
        if (*(char *)(temp_v0 + 0x4c8) != '\x01') {
          FUN_002bf818(temp_v0 + temp_v1 * 0x8c + 0x37c);
        }
        else if (*(char *)(temp_v0 + 0x4c6) != '\0') {
          FUN_002b8ee0(temp_v0 + temp_v1 * 0x8c + 0x37c,0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 2);
      temp_v1 = 0;
      do {
        if ((*(char *)(temp_v0 + temp_v1 * 4 + 0x494) != '\0') &&
           (temp_v5 = temp_v1, temp_v1 < *(int *)(temp_v0 + 0xc))) {
          FUN_002bf818(temp_v0 + temp_v1 * 0x8c + 0x34);
        }
        temp_v2 = (*(int *)((unsigned char *)&g_buttonHelp + 0x4));
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
      if ((*(int *)(temp_v0 + 0xc) > temp_v5) && (*(char *)(temp_v0 + temp_v5 * 0x8c + 0xbe) != '\0')) {
        *(unsigned int *)((*(int *)((unsigned char *)&g_buttonHelp + 0x4)) + 0x10) = 2;
        *(unsigned int *)(temp_v2 + 0xc) = 0;
      }
    }
    else if (temp_v1 != 2) {
      if (temp_v1 == 3) {
        temp_v1 = 0;
        do {
          FUN_002bf818(temp_v0 + temp_v1 * 0x8c + 0x37c);
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 2);
        temp_v1 = 0;
        do {
          if ((*(char *)(temp_v0 + temp_v1 * 4 + 0x494) != '\0') &&
             (temp_v5 = temp_v1, temp_v1 < *(int *)(temp_v0 + 0xc))) {
            FUN_002bf818(temp_v0 + temp_v1 * 0x8c + 0x34);
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 6);
        if ((*(int *)(temp_v0 + 0xc) > temp_v5) && (*(char *)(temp_v0 + temp_v5 * 0x8c + 0xbe) != '\0')) {
          *(unsigned int *)(temp_v0 + 0x4b8) = 0;
          *(unsigned short *)(temp_v0 + 0x4bc) = 0;
          FUN_002ae028(temp_v0 + 0x4be);
          temp_v2 = (*(int *)((unsigned char *)&g_buttonHelp + 0x4));
          *(unsigned int *)((*(int *)((unsigned char *)&g_buttonHelp + 0x4)) + 0x10) = 0;
          *(unsigned int *)(temp_v2 + 0xc) = 0;
        }
      }
    }
    else {
      FUN_00220984();
    }
  }
  if ((-1 < (int)(*(unsigned int *)((unsigned char *)&DAT_0043da50 - 0x18))) && (buttonHelpSetPreset((*(unsigned int *)((unsigned char *)&DAT_0043da50 - 0x18)) & 0xff), (int)(*(unsigned int *)((unsigned char *)&DAT_0043da50 - 0x18)) < 0)) {
    temp_v4 = 0;
    do {
      temp_v3 = *(unsigned int *)(temp_v4 * 4 + 0x43da50);
      if (-1 < (int)temp_v3) {
        FUN_002b8454(temp_v4 & 0xff,temp_v3 & 0xff,*(unsigned int *)(temp_v4 * 4 + 0x43da68) & 0xffff,1);
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < 6);
  }
  *(int *)(temp_v0 + 0xc) = *(int *)(temp_v0 + 0xc) + 1;
  return 0;
}

} /* extern "C" */
