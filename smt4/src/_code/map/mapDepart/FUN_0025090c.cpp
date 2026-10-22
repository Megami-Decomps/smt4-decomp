/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025090c` (_code @ 0x25090c, 0x40c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b43f0(...);
int dataTableFindRecordById(...);
int textFormatBuffer(...);
int libc_strcpy(...);

extern unsigned char LAB_00250c4c; /* 0x250c4c */
extern unsigned char LAB_00250c54; /* 0x250c54 */
extern unsigned char LAB_00250c58; /* 0x250c58 */
extern unsigned char LAB_00250c64; /* 0x250c64 */
extern char s__B_B_B_B_B_B_B_B_B_B_00447550[105]; /* 0x447550 */
extern unsigned int DAT_00447554; /* 0x447554 */
extern unsigned int DAT_00447558; /* 0x447558 */
extern unsigned int DAT_0044755c; /* 0x44755c */
extern unsigned int DAT_00447560; /* 0x447560 */
extern unsigned int DAT_00447564; /* 0x447564 */
extern unsigned int DAT_00447568; /* 0x447568 */
extern unsigned int DAT_0044756c; /* 0x44756c */
extern unsigned char *DAT_00447570; /* 0x447570 */
extern unsigned char *DAT_00447574; /* 0x447574 */
extern unsigned char *DAT_00447578; /* 0x447578 */

/* Supplied declaration required: FUN_001b43f0. */
/* Supplied declaration required: dataTableFindRecordById. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: libc_strcpy. */
extern int gameFlagIsSet(unsigned int);
extern int gameGetMapBlock(void);


void FUN_0025090c(char *param_1,unsigned char *param_2,int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char *puVar6;
  int temp_v4;
  unsigned char temp_v5 [64];
  unsigned char temp_v6 [68];
  
  if (param_3 != 2) {
    temp_v1 = gameGetMapBlock();
    if ((((param_1 + -0x19 < (char *)0x6) || (param_1 == (char *)0x66)) &&
        (temp_v2 = gameFlagIsSet(0x144), temp_v2 == 0)) ||
       (((param_1 + -0x1f < (char *)0x5 || (param_1 == (char *)0x67)) &&
        (temp_v2 = gameFlagIsSet(0x15a), temp_v2 == 0)))) {
      textFormatBuffer(param_4,&LAB_00250c4c);
      return;
    }
    temp_v2 = gameGetMapBlock();
    temp_v4 = 0;
    if (*(char *)(temp_v2 + 3) != '\x01') {
      if (param_1 == (char *)0x18) {
        temp_v4 = 2;
      }
      else if ((int)param_1 < 0x40) {
        temp_v0 = param_1[temp_v1 + 0xe14];
        if (temp_v0 != '\x03') {
          temp_v4 = 1;
        }
      }
    }
    else {
      temp_v0 = *(char *)(temp_v1 + 0xe3d);
      if (temp_v0 != '\x03') {
        temp_v4 = 1;
      }
    }
    if (param_3 == 0) {
      temp_v1 = gameGetMapBlock();
      if (*(unsigned char *)(temp_v1 + 3) != 0) {
        textFormatBuffer(param_4,*(unsigned int *)
                              (s__B_B_B_B_B_B_B_B_B_B_00447550 + (unsigned int)*(unsigned char *)(temp_v1 + 3) * 4));
        return;
      }
    }
    if (temp_v4 == 2) {
      temp_v1 = gameGetMapBlock();
      if (*(char *)(temp_v1 + 0x792) == 0) {
        textFormatBuffer(param_4,&LAB_00250c64);
        return;
      }
      textFormatBuffer(param_4,*(unsigned int *)
                            (s__B_B_B_B_B_B_B_B_B_B_00447550 + *(char *)(temp_v1 + 0x792) * 4 + 0x30))
      ;
      return;
    }
  }
  else {
    puVar6 = param_2;
    pcVar3 = param_1;
    if ((int)param_1 >= 1001) {
      pcVar3 = s__B_B_B_B_B_B_B_B_B_B_00447550 + (int)param_1 * 4 + 0x30;
      puVar6 = *(unsigned char **)((int)param_1 * 4 + 0x4465e0);
    }
    if (param_1 == (char *)0x3e8) {
      puVar6 = &LAB_00250c4c;
      textFormatBuffer(param_4,puVar6);
      return;
    }
    if ((int)param_1 >= 1001) {
      textFormatBuffer(param_4,puVar6);
      return;
    }
    if (param_1 == (char *)0x18) {
      puVar6 = *(unsigned char **)(s__B_B_B_B_B_B_B_B_B_B_00447550 + (int)puVar6 * 4);
      textFormatBuffer(param_4,puVar6);
      return;
    }
    if (param_1 == (char *)0x65) {
      temp_v3 = dataTableFindRecordById(pcVar3,puVar6);
      libc_strcpy(temp_v5,temp_v3);
      textFormatBuffer(param_4,&LAB_00250c54,temp_v5);
      FUN_001b43f0(0x65,param_2);
      libc_strcpy(temp_v6,param_1);
      textFormatBuffer(param_4,&LAB_00250c58,temp_v5,temp_v6);
      return;
    }
  }
  if (param_1 != (char *)0xa) {
    if (param_1 != (char *)0x4) {
      if (param_1 == (char *)0x1) {
        if (param_2 == (unsigned char *)0xf) {
          textFormatBuffer(param_4,DAT_0044755c);
          return;
        }
        temp_v3 = dataTableFindRecordById(param_1);
        libc_strcpy(temp_v5,temp_v3);
        FUN_001b43f0(param_1,param_2);
        libc_strcpy(temp_v6,param_1);
        textFormatBuffer(param_4,&LAB_00250c58,temp_v5,temp_v6);
        return;
      }
      if (param_1 != (char *)0x4) {
        if (param_1 != (char *)0x13) {
          if (param_1 != (char *)0x1b) {
            if (param_1 != (char *)0x1c) {
              puVar6 = DAT_00447570;
              if ((param_1 != (char *)0x20) && (puVar6 = DAT_00447574, param_1 != (char *)0x21)) {
                if (param_1 != (char *)0x22) {
                  if ((param_1 == (char *)0xcb) ||
                     ((param_1 != (char *)0x65 && ((int)param_1 >= 0x66)))) {
                    temp_v3 = dataTableFindRecordById(param_1);
                    libc_strcpy(temp_v5,temp_v3);
                    textFormatBuffer(param_4,&LAB_00250c54,temp_v5);
                    return;
                  }
                }
                else {
                  puVar6 = DAT_00447578;
                  if (param_2 == (unsigned char *)0x3) {
                    textFormatBuffer(param_4,puVar6);
                    return;
                  }
                }
              }
              else if (param_2 == (unsigned char *)0x4) {
                textFormatBuffer(param_4,puVar6);
                return;
              }
            }
            else if (param_2 == (unsigned char *)0x3) {
              textFormatBuffer(param_4,DAT_0044756c);
              return;
            }
          }
          else if (param_2 == (unsigned char *)0x3) {
            textFormatBuffer(param_4,DAT_00447568);
            return;
          }
        }
        else if (param_2 == (unsigned char *)0xe) {
          textFormatBuffer(param_4,DAT_00447564);
          return;
        }
        temp_v3 = dataTableFindRecordById(param_1);
        libc_strcpy(temp_v5,temp_v3);
        FUN_001b43f0(param_1,param_2);
        libc_strcpy(temp_v6,param_1);
        textFormatBuffer(param_4,&LAB_00250c58,temp_v5,temp_v6);
        return;
      }
    }
    else if (param_2 == (unsigned char *)0x6) {
      textFormatBuffer(param_4,DAT_00447558);
      return;
    }
    if (param_2 == (unsigned char *)0x7) {
      textFormatBuffer(param_4,DAT_00447560);
      return;
    }
  }
  else if (param_2 == (unsigned char *)0xb) {
    textFormatBuffer(param_4,DAT_00447554);
    return;
  }
  temp_v3 = dataTableFindRecordById(param_1);
  libc_strcpy(temp_v5,temp_v3);
  FUN_001b43f0(param_1,param_2);
  libc_strcpy(temp_v6,param_1);
  textFormatBuffer(param_4,&LAB_00250c58,temp_v5,temp_v6);
  return;
}

} /* extern "C" */
