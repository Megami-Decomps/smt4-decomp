/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dad58` (_code @ 0x3dad58, 0x294 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} param_1_stack;

extern unsigned char LAB_003daff4; /* 0x3daff4 */
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

/* Supplied declaration required: FUN_0022788c. */
extern unsigned int FUN_002467b0(unsigned int, unsigned int, unsigned int);
extern int FUN_0024a964(int);
extern int FUN_00252520(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002aa7f4. */
/* Supplied declaration required: FUN_002b45f8. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c3290. */
/* Supplied declaration required: FUN_002c4b30. */


unsigned int FUN_003dad58(int param_1)

{
/* irregular: 3 goto(s); 8 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  int *piVar4;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [128];
  int temp_v6 [33];
  
  temp_v1 = 0;
  if (*(int *)(param_1 + 0x1cfc) != 0) {
    temp_v4 = 0;
    do {
      temp_v3 = *(int *)(param_1 + 0x1cfc) + temp_v4 * 0x16;
      temp_v0 = FUN_002c3290(temp_v3);
      if ((temp_v0 != 0) && (temp_v0 = temp_v3, FUN_002aa7f4(temp_v3,&LAB_003daff4), temp_v0 != 0)) {
        pcVar2 = "NOT_EFT";
        FUN_002aa7f4("NOT_EFT",temp_v3);
        if ((pcVar2 != (char *)0x0) &&
           ((temp_v3 == 0 || (temp_v0 = temp_v3, FUN_002aa7f4(temp_v3,DAT_00435d10), temp_v0 != 0)))) {
          if (temp_v3 != 0) {
            temp_v1 = FUN_002c3290(DAT_00435d0c);
            temp_v0 = FUN_002b45f8(temp_v3,DAT_00435d0c,temp_v1);
            if (temp_v0 == 0) goto LAB_003dafd4;
          }
          if (temp_v3 != 0) {
            temp_v1 = FUN_002c3290((*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[0]));
            temp_v0 = FUN_002b45f8(temp_v3,(*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[0]),temp_v1);
            if (temp_v0 == 0) {
              temp_v2 = 0;
              do {
                FUN_002be7fc(temp_v6,"%s%02d",(*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[0]),temp_v2);
                piVar4 = temp_v6;
                FUN_002aa7f4(piVar4,temp_v3);
                if (piVar4 == (int *)0x0) {
                  FUN_0022788c(param_1);
                  temp_v1 = FUN_002467b0(temp_v2 & 0xff,7,0);
                  *(unsigned int *)(param_1 + 0x3034) = temp_v1;
                  *(char *)(param_1 + 0x3038) = (char)temp_v2;
                  goto LAB_003dafd4;
                }
                temp_v2 = temp_v2 + 1;
              } while ((int)temp_v2 < 0xb);
            }
          }
          if ((temp_v3 == 0) ||
             (temp_v0 = temp_v3, FUN_002aa7f4(temp_v3,(*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[20])), temp_v0 != 0)) {
            FUN_002c4b30(temp_v5,0x80);
            FUN_002c4b30(temp_v6,0x80);
            FUN_002be7fc(temp_v6,"battle/effect/%s.eft",temp_v3);
            FUN_002bf86c(temp_v5,temp_v6);
            temp_v0 = FUN_002c3290(temp_v5);
            if (temp_v0 != 0) {
              temp_v6[0] = temp_v3;
              if (temp_v3 != 0) {
                temp_v0 = 0;
                do {
                  temp_v1 = FUN_002c3290("ef_e_ref" + temp_v0 * 0x20);
                  temp_v3 = FUN_002b45f8(temp_v6[0],"ef_e_ref" + temp_v0 * 0x20,temp_v1);
                  if (temp_v3 == 0) {
                    if (-1 < temp_v0) goto LAB_003dafd4;
                    break;
                  }
                  temp_v0 = temp_v0 + 1;
                } while (temp_v0 < 0xb);
              }
              temp_v0 = param_1 + temp_v4 * 0x8c;
              temp_v3 = FUN_00252520(temp_v5,0x2f);
              FUN_002bf86c(temp_v0 + 0x1d08,temp_v3 + 1);
              temp_v3 = FUN_0024a964(temp_v0 + 0x1d08);
              if (temp_v3 == 0xff) {
                FUN_00297704(temp_v5,temp_v0 + 0x1d04,0);
                *(unsigned char *)(temp_v0 + 0x1d88) = *(unsigned char *)(temp_v0 + 0x1d88) | 1;
              }
            }
          }
        }
      }
LAB_003dafd4:
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    temp_v1 = 1;
  }
  return temp_v1;
}
