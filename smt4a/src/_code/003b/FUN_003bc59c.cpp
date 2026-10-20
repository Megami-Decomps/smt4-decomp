/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bc59c` (_code @ 0x3bc59c, 0x29c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int FUN_00192608(void);
int FUN_001aba54(void);
int FUN_00236038(int);
int FUN_00301a08(unsigned int, int [8], int [3]);
int FUN_003283ac(int);
int FUN_003eaf20(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern unsigned int DAT_00570288; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702a8; /* 0x5702a8 */
extern unsigned int DAT_005702ac; /* 0x5702ac */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_001aba54. */
extern unsigned int FUN_00232388(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_00301a08. */
/* Supplied declaration required: FUN_003283ac. */
extern int FUN_00352144(void);
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_003bc59c(void)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int *puVar9;
  int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  int temp_v11 [3];
  int temp_v12 [8];
  
  temp_v1 = FUN_00236038(0);
  FUN_00236038(1);
  temp_v2 = FUN_00232388();
  temp_v9 = 0;
  FUN_00301a08(temp_v2,temp_v12,temp_v11);
  temp_v8 = temp_v12[0];
  if (temp_v12[0] < temp_v11[0] + temp_v12[0]) {
    do {
      temp_v3 = FUN_0014aa78();
      puVar9 = (unsigned int *)(*(int *)(temp_v3 + 0x1ffc) + temp_v8 * 0x408);
      temp_v4 = *puVar9;
      temp_v6 = puVar9[1];
      if ((((DAT_005702a0 & temp_v4) == 0 && (DAT_005702a4 & temp_v6) == 0) &&
          ((DAT_00570288 & temp_v4) != 0 || (DAT_0057028c & temp_v6) != 0)) &&
         ((temp_v6 & DAT_005702b4) == 0 && (temp_v4 & DAT_005702b0) == 0)) {
        temp_v3 = 0;
        if (((DAT_005702a0 & temp_v4) == 0 && (DAT_005702a4 & temp_v6) == 0) &&
           ((temp_v4 & DAT_005702a8) == 0 && (temp_v6 & DAT_005702ac) == 0)) {
          temp_v7 = 0;
          do {
            temp_v0 = *(short *)((int)puVar9 + temp_v7 * 8 + 0x33a);
            if (temp_v0 == 2 || temp_v0 == 3) {
              temp_v5 = (int)(short)puVar9[temp_v7 * 2 + 0xcf];
              FUN_001aba54();
              if ((temp_v5 != 0) && (temp_v1 == (*(unsigned int *)(temp_v5 + 0x28) & 0xffff) >> 0xb)) {
                temp_v3 = temp_v3 + 1;
              }
            }
            if (*(short *)((int)puVar9 + temp_v7 * 8 + 0x33a) == 8) {
              temp_v5 = (int)(short)puVar9[temp_v7 * 2 + 0xcf];
              FUN_00192550();
              if (((temp_v5 != 0) && (temp_v4 = (unsigned int)*(unsigned short *)(temp_v5 + 0x32), temp_v4 != 0)) &&
                 ((FUN_001aba54(), temp_v4 != 0 &&
                  (temp_v1 == (*(unsigned int *)(temp_v4 + 0x28) & 0xffff) >> 0xb)))) {
                temp_v3 = temp_v3 + 1;
              }
            }
            temp_v0 = *(short *)((int)puVar9 + temp_v7 * 8 + 0x33a);
            temp_v10 = temp_v0 == 1;
            if (temp_v10) {
              temp_v0 = (short)puVar9[temp_v7 * 2 + 0xcf];
            }
            if ((temp_v10 && temp_v0 == 2) && (puVar9[0xfe] != 0)) {
              temp_v4 = (unsigned int)*(unsigned short *)(puVar9[0xfe] + 4);
              FUN_00192608();
              if ((temp_v4 != 0) && (temp_v1 == *(unsigned int *)(temp_v4 + 0x24) >> 0x14)) {
                temp_v3 = temp_v3 + 1;
              }
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 10);
        }
        else {
          if (*(short *)((int)puVar9 + 0x32a) == 2 || *(short *)((int)puVar9 + 0x32a) == 3) {
            temp_v7 = (int)(short)puVar9[0xcb];
            FUN_001aba54();
            if ((temp_v7 != 0) && (temp_v1 == (*(unsigned int *)(temp_v7 + 0x28) & 0xffff) >> 0xb)) {
              temp_v3 = 1;
            }
          }
          if (*(short *)((int)puVar9 + 0x32a) == 8) {
            temp_v7 = (int)(short)puVar9[0xcb];
            FUN_00192550();
            if ((((temp_v7 != 0) && (temp_v4 = (unsigned int)*(unsigned short *)(temp_v7 + 0x32), temp_v4 != 0)) &&
                (FUN_001aba54(), temp_v4 != 0)) &&
               (temp_v1 == (*(unsigned int *)(temp_v4 + 0x28) & 0xffff) >> 0xb)) {
              temp_v3 = temp_v3 + 1;
            }
          }
        }
        temp_v9 = temp_v9 + temp_v3;
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < temp_v12[0] + temp_v11[0]);
  }
  temp_v8 = FUN_0014aa78();
  if (*(char *)(temp_v8 + 0x4cd1) != '\0') {
    temp_v8 = FUN_0014aa78();
    FUN_003eaf20();
    if (temp_v8 != 0) {
      temp_v8 = FUN_00352144();
      temp_v9 = temp_v9 + temp_v8;
    }
  }
  FUN_003283ac(temp_v9);
  return 1;
}

} /* extern "C" */
