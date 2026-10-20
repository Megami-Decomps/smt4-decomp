/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003db3a4` (_code @ 0x3db3a4, 0x1c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00249e54(...);
int FUN_002aa568(...);
int FUN_002be624(...);
int FUN_002bf694(...);
int FUN_002c30c4(...);
int FUN_002c4938(...);

extern unsigned char DAT_00400914; /* 0x400914 */
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

/* Supplied declaration required: FUN_00249e54. */
extern unsigned int FUN_0024a6b0(int);
/* Supplied declaration required: FUN_002aa568. */
extern int FUN_002b4414(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: FUN_002c30c4. */
/* Supplied declaration required: FUN_002c4938. */


void FUN_003db3a4(int param_1)

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
  
  if (*(int *)(param_1 + 0x1cfc) != 0) {
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(param_1 + 0x1cfc) + temp_v3 * 0x16 + 0x58;
      temp_v1 = FUN_002c30c4(temp_v4);
      if ((temp_v1 != 0) && (temp_v1 = temp_v4, FUN_002aa568(temp_v4,&DAT_00400914), temp_v1 != 0)) {
        pcVar3 = "NOT_EFT";
        FUN_002aa568("NOT_EFT",temp_v4);
        if (pcVar3 != (char *)0x0) {
          if (temp_v4 != 0) {
            temp_v2 = FUN_002c30c4((*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[0]));
            temp_v1 = FUN_002b4414(temp_v4,(*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[0]),temp_v2);
            if (temp_v1 == 0) goto LAB_003db558;
          }
          if ((temp_v4 == 0) ||
             (temp_v1 = temp_v4, FUN_002aa568(temp_v4,(*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[16])), temp_v1 != 0)) {
            if (temp_v4 != 0) {
              temp_v2 = FUN_002c30c4((*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[12]));
              temp_v1 = FUN_002b4414(temp_v4,(*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[12]),temp_v2);
              if (temp_v1 == 0) goto LAB_003db558;
            }
            if ((temp_v4 == 0) ||
               (temp_v1 = temp_v4, FUN_002aa568(temp_v4,(*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[20])), temp_v1 != 0)) {
              FUN_002c4938(temp_v6,0x80);
              FUN_002c4938(temp_v7,0x80);
              FUN_002be624(temp_v7,"battle/effect/%s.eft",temp_v4);
              FUN_002bf694(temp_v6,temp_v7);
              temp_v1 = FUN_002c30c4(temp_v6);
              if (temp_v1 != 0) {
                temp_v1 = param_1 + temp_v3 * 0x8c;
                pcVar3 = *(char **)(temp_v1 + 0x1f34);
                if (*pcVar3 == 'V') {
                  temp_v0 = pcVar3[1];
                  temp_v5 = temp_v0 == 'E';
                  if (temp_v5) {
                    temp_v0 = pcVar3[2];
                  }
                  if (temp_v5 && temp_v0 == 'R') {
                    temp_v2 = FUN_0024a6b0(temp_v1 + 0x1f38);
                    *(char *)(temp_v1 + 0x1f30) = (char)temp_v2;
                    FUN_00249e54(temp_v2,pcVar3);
                    *(char *)(temp_v1 + 0x1f30) = (char)temp_v2;
                  }
                }
              }
            }
          }
        }
      }
LAB_003db558:
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
  }
  return;
}

} /* extern "C" */
