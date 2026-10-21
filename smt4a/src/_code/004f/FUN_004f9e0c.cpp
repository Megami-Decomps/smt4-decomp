/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f9e0c` (_code @ 0x4f9e0c, 0x200 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int wstrlen(...);
int libc_strcpy(...);
int sysMemClear(...);
int libc_strcmp(...);
int FUN_003478dc(...);

extern unsigned char DAT_00528544; /* 0x528544 */
extern unsigned int g_btlEffect; /* 0x5737f0 */
extern unsigned int DAT_005737f4; /* 0x5737f4 */
extern unsigned int DAT_005737f8; /* 0x5737f8 */
extern unsigned int DAT_005737fc; /* 0x5737fc */
extern unsigned int DAT_00573800; /* 0x573800 */
extern unsigned int DAT_00573804; /* 0x573804 */

/* Supplied declaration required: textFormatBuffer. */
extern int libc_strncmp(int, unsigned int, unsigned int);
/* Supplied declaration required: wstrlen. */
/* Supplied declaration required: libc_strcpy. */
extern unsigned int FUN_002e4c2c(int);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: libc_strcmp. */
/* Supplied declaration required: FUN_003478dc. */


void FUN_004f9e0c(int param_1)

{
/* irregular: 2 goto(s); 6 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  char *pcVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6 [128];
  unsigned char temp_v7 [132];
  
  if (*(int *)(param_1 + 0x1f54) != 0) {
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(param_1 + 0x1f54) + temp_v3 * 0x16 + 0x108;
      temp_v1 = wstrlen(temp_v4);
      if ((temp_v1 != 0) && (temp_v1 = temp_v4, libc_strcmp(temp_v4,&DAT_00528544), temp_v1 != 0)) {
        pcVar3 = "NOT_EFT";
        libc_strcmp("NOT_EFT",temp_v4);
        if (pcVar3 != (char *)0x0) {
          if (temp_v4 != 0) {
            temp_v2 = wstrlen(g_btlEffect);
            temp_v1 = libc_strncmp(temp_v4,g_btlEffect,temp_v2);
            if (temp_v1 == 0) goto LAB_004f9ff8;
          }
          if (((temp_v4 == 0) ||
              ((temp_v1 = temp_v4, libc_strcmp(temp_v4,DAT_005737f4), temp_v1 != 0 &&
               (temp_v1 = temp_v4, libc_strcmp(temp_v4,DAT_005737f8), temp_v1 != 0)))) &&
             ((temp_v4 == 0 || (temp_v1 = temp_v4, libc_strcmp(temp_v4,DAT_00573800), temp_v1 != 0)))) {
            if (temp_v4 != 0) {
              temp_v2 = wstrlen(DAT_005737fc);
              temp_v1 = libc_strncmp(temp_v4,DAT_005737fc,temp_v2);
              if (temp_v1 == 0) goto LAB_004f9ff8;
            }
            if ((temp_v4 == 0) || (temp_v1 = temp_v4, libc_strcmp(temp_v4,DAT_00573804), temp_v1 != 0)) {
              sysMemClear(temp_v6,0x80);
              sysMemClear(temp_v7,0x80);
              textFormatBuffer(temp_v7,"battle/effect/%s.eft",temp_v4);
              libc_strcpy(temp_v6,temp_v7);
              temp_v1 = wstrlen(temp_v6);
              if (temp_v1 != 0) {
                temp_v1 = param_1 + temp_v3 * 0x8c;
                pcVar3 = *(char **)(temp_v1 + 0x25f0);
                if (*pcVar3 == 'V') {
                  temp_v0 = pcVar3[1];
                  temp_v5 = temp_v0 == 'E';
                  if (temp_v5) {
                    temp_v0 = pcVar3[2];
                  }
                  if (temp_v5 && temp_v0 == 'R') {
                    temp_v2 = FUN_002e4c2c(temp_v1 + 0x25f4);
                    *(char *)(temp_v1 + 0x25ec) = (char)temp_v2;
                    FUN_003478dc(temp_v2,pcVar3);
                    *(char *)(temp_v1 + 0x25ec) = (char)temp_v2;
                  }
                }
              }
            }
          }
        }
      }
LAB_004f9ff8:
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
  }
  return;
}

} /* extern "C" */
