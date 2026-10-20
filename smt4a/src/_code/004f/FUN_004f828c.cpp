/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f828c` (_code @ 0x4f828c, 0x24c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_002804b0(unsigned char [128], int, int);
int wstrlen(...);
int libc_strcpy(...);
int sysMemClear(...);
int libc_strcmp(...);
int FUN_004f612c(int);

extern unsigned char LAB_004f84dc; /* 0x4f84dc */
extern unsigned int g_btlEffect; /* 0x5737f0 */
extern unsigned int DAT_00573800; /* 0x573800 */
extern unsigned int DAT_00573804; /* 0x573804 */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_00100d60(unsigned char *, unsigned int);
extern int libc_strncmp(int, unsigned int, unsigned int);
extern unsigned int FUN_002282c8(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: wstrlen. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: libc_strcmp. */
extern int findRecordByKey(int);
/* Supplied declaration required: FUN_004f612c. */


unsigned int FUN_004f828c(int param_1)

{
/* irregular: 2 goto(s); 7 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned char *puVar4;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [128];
  unsigned char temp_v6 [132];
  
  temp_v1 = 0;
  if (*(int *)(param_1 + 0x1f54) != 0) {
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(param_1 + 0x1f54) + temp_v3 * 0x16 + 0xb0;
      temp_v0 = wstrlen(temp_v4);
      if ((temp_v0 != 0) && (temp_v0 = temp_v4, libc_strcmp(temp_v4,&LAB_004f84dc), temp_v0 != 0)) {
        pcVar2 = "NOT_EFT";
        libc_strcmp("NOT_EFT",temp_v4);
        if ((pcVar2 != (char *)0x0) &&
           ((temp_v4 == 0 || (temp_v0 = temp_v4, libc_strcmp(temp_v4,DAT_00573800), temp_v0 != 0)))) {
          if (temp_v4 != 0) {
            temp_v1 = wstrlen((*(unsigned int *)((unsigned char *)&g_btlEffect + 0xc)));
            temp_v0 = libc_strncmp(temp_v4,(*(unsigned int *)((unsigned char *)&g_btlEffect + 0xc)),temp_v1);
            if (temp_v0 == 0) goto LAB_004f84c0;
          }
          if (temp_v4 != 0) {
            temp_v1 = wstrlen(g_btlEffect);
            temp_v0 = libc_strncmp(temp_v4,g_btlEffect,temp_v1);
            if (temp_v0 == 0) {
              temp_v2 = 0;
              do {
                FUN_00100388(temp_v6,"%s%02d",g_btlEffect,temp_v2);
                puVar4 = temp_v6;
                libc_strcmp(puVar4,temp_v4);
                if (puVar4 == (unsigned char *)0x0) {
                  FUN_004f612c(param_1);
                  temp_v1 = FUN_002282c8(temp_v2 & 0xff,7,0);
                  *(unsigned int *)(param_1 + 0x33a8) = temp_v1;
                  *(char *)(param_1 + 0x33ac) = (char)temp_v2;
                  goto LAB_004f84c0;
                }
                temp_v2 = temp_v2 + 1;
              } while ((int)temp_v2 < 0xb);
            }
          }
          if ((temp_v4 == 0) || (temp_v0 = temp_v4, libc_strcmp(temp_v4,DAT_00573804), temp_v0 != 0)) {
            sysMemClear(temp_v5,0x80);
            sysMemClear(temp_v6,0x80);
            FUN_00100388(temp_v6,"battle/effect/%s.eft",temp_v4);
            libc_strcpy(temp_v5,temp_v6);
            temp_v0 = wstrlen(temp_v5);
            if (temp_v0 != 0) {
              temp_v0 = param_1 + temp_v3 * 0x8c;
              temp_v4 = FUN_00100d60(temp_v5,0x2f);
              libc_strcpy(temp_v0 + 0x23c4,temp_v4 + 1);
              temp_v4 = findRecordByKey(temp_v0 + 0x23c4);
              if (temp_v4 == 0xff) {
                FUN_002804b0(temp_v5,temp_v0 + 0x23c0,1);
                *(unsigned char *)(temp_v0 + 0x2444) = *(unsigned char *)(temp_v0 + 0x2444) | 1;
              }
            }
          }
        }
      }
LAB_004f84c0:
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
