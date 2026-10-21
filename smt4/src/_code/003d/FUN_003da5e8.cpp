/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003da5e8` (_code @ 0x3da5e8, 0x24c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002276f8(int);
int FUN_00297468(unsigned char [128], int, int);
int libc_strcmp(...);
int textFormatBuffer(...);
int libc_strcpy(...);
int libc_strlen(...);
int memClear(...);

extern unsigned char LAB_003da838; /* 0x3da838 */
#ifndef ROMWRIGHT_STORAGE_s__B_B_B_B_B_B_00435d00_25_1_DEFINED
#define ROMWRIGHT_STORAGE_s__B_B_B_B_B_B_00435d00_25_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1 {
    char whole[25];
    unsigned char u1[25];
    signed char s1[25];
};
typedef char romwright_storage_s__B_B_B_B_B_B_00435d00_25_1_size_check[(sizeof(union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1) == 25) ? 1 : -1];
typedef char romwright_storage_s__B_B_B_B_B_B_00435d00_25_1_u1_width_check[(sizeof(((union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__B_B_B_B_B_B_00435d00_25_1_s1_width_check[(sizeof(((union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1 s__B_B_B_B_B_B_00435d00; /* 0x435d00 */
extern unsigned int DAT_00435d0c; /* 0x435d0c */
extern unsigned int DAT_00435d10; /* 0x435d10 */

/* Supplied declaration required: FUN_002276f8. */
extern unsigned int FUN_00246644(unsigned int, unsigned int, unsigned int);
extern int FUN_0024a808(int);
extern int FUN_002522e0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: libc_strcmp. */
extern int libc_strncmp(int, unsigned int, unsigned int);
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: libc_strlen. */
/* Supplied declaration required: memClear. */


unsigned int FUN_003da5e8(int param_1)

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
  if (*(int *)(param_1 + 0x1cfc) != 0) {
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(param_1 + 0x1cfc) + temp_v3 * 0x16 + 0x58;
      temp_v0 = libc_strlen(temp_v4);
      if ((temp_v0 != 0) && (temp_v0 = temp_v4, libc_strcmp(temp_v4,&LAB_003da838), temp_v0 != 0)) {
        pcVar2 = "NOT_EFT";
        libc_strcmp("NOT_EFT",temp_v4);
        if ((pcVar2 != (char *)0x0) &&
           ((temp_v4 == 0 || (temp_v0 = temp_v4, libc_strcmp(temp_v4,DAT_00435d10), temp_v0 != 0)))) {
          if (temp_v4 != 0) {
            temp_v1 = libc_strlen(DAT_00435d0c);
            temp_v0 = libc_strncmp(temp_v4,DAT_00435d0c,temp_v1);
            if (temp_v0 == 0) goto LAB_003da81c;
          }
          if (temp_v4 != 0) {
            temp_v1 = libc_strlen((*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[0]));
            temp_v0 = libc_strncmp(temp_v4,(*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[0]),temp_v1);
            if (temp_v0 == 0) {
              temp_v2 = 0;
              do {
                textFormatBuffer(temp_v6,"%s%02d",(*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[0]),temp_v2);
                puVar4 = temp_v6;
                libc_strcmp(puVar4,temp_v4);
                if (puVar4 == (unsigned char *)0x0) {
                  FUN_002276f8(param_1);
                  temp_v1 = FUN_00246644(temp_v2 & 0xff,7,0);
                  *(unsigned int *)(param_1 + 0x3034) = temp_v1;
                  *(char *)(param_1 + 0x3038) = (char)temp_v2;
                  goto LAB_003da81c;
                }
                temp_v2 = temp_v2 + 1;
              } while ((int)temp_v2 < 0xb);
            }
          }
          if ((temp_v4 == 0) ||
             (temp_v0 = temp_v4, libc_strcmp(temp_v4,(*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[20])), temp_v0 != 0)) {
            memClear(temp_v5,0x80);
            memClear(temp_v6,0x80);
            textFormatBuffer(temp_v6,"battle/effect/%s.eft",temp_v4);
            libc_strcpy(temp_v5,temp_v6);
            temp_v0 = libc_strlen(temp_v5);
            if (temp_v0 != 0) {
              temp_v0 = param_1 + temp_v3 * 0x8c;
              temp_v4 = FUN_002522e0(temp_v5,0x2f);
              libc_strcpy(temp_v0 + 0x1f38,temp_v4 + 1);
              temp_v4 = FUN_0024a808(temp_v0 + 0x1f38);
              if (temp_v4 == 0xff) {
                FUN_00297468(temp_v5,temp_v0 + 0x1f34,0);
                *(unsigned char *)(temp_v0 + 0x1fb8) = *(unsigned char *)(temp_v0 + 0x1fb8) | 1;
              }
            }
          }
        }
      }
LAB_003da81c:
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
