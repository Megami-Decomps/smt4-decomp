/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1898` (_code @ 0x2e1898, 0x164 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002990a0(void);
int FUN_0029e648(int, int);
int buttonHelpSetPreset(...);
int FUN_0031e384(void);

extern int g_campCec; /* 0x43daa8 */

extern unsigned int FUN_002228d4(void);
extern int gameDataBlockTestFlag(unsigned int);
extern int FUN_00262f14(void);
extern int FUN_0026efec(int);
/* Supplied declaration required: FUN_002990a0. */
/* Supplied declaration required: FUN_0029e648. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: FUN_0031e384. */


unsigned int FUN_002e1898(int param_1)

{
/* irregular: 2 goto(s); 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = *(int *)(param_1 + 0xd34);
  temp_v6 = 0;
  if (temp_v0 != -1) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        temp_v5 = 0;
        temp_v0 = temp_v5;
        do {
          temp_v2 = FUN_0026efec(temp_v5);
          temp_v5 = temp_v5 + 1;
          if (*(short *)(temp_v2 + 0x48) != 0) {
            temp_v0 = temp_v0 + 1;
          }
        } while (temp_v5 < 0xc);
        if (temp_v0 != 0) {
          temp_v3 = 8;
        }
        else {
          buttonHelpSetPreset(0x3c);
          temp_v3 = 10;
        }
        *(unsigned int *)(param_1 + 0xd2c) = temp_v3;
      }
      else if (temp_v0 == 3) {
        *(unsigned int *)(param_1 + 0xd2c) = 9;
        goto LAB_002e191c;
      }
    }
    else {
      if ((*(char *)(param_1 + 0xd60) != '\0') && (temp_v0 = gameDataBlockTestFlag(0x20), temp_v0 != 0)) {
        temp_v3 = 7;
      }
      else {
        buttonHelpSetPreset(0x3c);
        temp_v3 = 0xb;
      }
      *(unsigned int *)(param_1 + 0xd2c) = temp_v3;
    }
    if (*(int *)(param_1 + 0xd34) == 0) goto LAB_002e1920;
  }
LAB_002e191c:
  temp_v6 = 2;
LAB_002e1920:
  if (*(char *)(param_1 + 0xd61) == '\0') {
    temp_v0 = FUN_00262f14();
    if (temp_v0 == 0) {
      temp_v3 = 3;
    }
    else {
      temp_v3 = 4;
    }
    buttonHelpSetPreset(temp_v3);
    *(unsigned char *)(param_1 + 0xd61) = 1;
  }
  if (*(char *)(param_1 + 0xd63) != '\0') {
    *(unsigned char *)(param_1 + 0xd63) = 0;
    FUN_0029e648(1,0);
    FUN_002990a0();
  }
  temp_v1 = param_1 + 0xd44;
  FUN_0031e384();
  if ((temp_v1 & 2) != 0) {
    temp_v1 = FUN_002228d4();
    if ((temp_v1 & 2) != 0) {
      temp_v4 = *(unsigned char *)(g_campCec + 0x68) | 2;
    }
    else {
      temp_v4 = *(unsigned char *)(g_campCec + 0x68) & 0xfd;
    }
    *(unsigned char *)(g_campCec + 0x68) = temp_v4;
  }
  return temp_v6;
}

} /* extern "C" */
