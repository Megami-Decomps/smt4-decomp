/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c202c` (_code @ 0x3c202c, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_00301a08(unsigned int, int [12], int [3]);
int FUN_003249c0(void);
int FUN_003283ac(int);
int FUN_003eaf20(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp60; /* 0x60: local_60 */
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
extern unsigned int FUN_00232388(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_00301a08. */
/* Supplied declaration required: FUN_003249c0. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_003c202c(void)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  unsigned int temp_v6;
  unsigned int temp_v7;
  short *psVar10;
  unsigned int *puVar11;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11 [3];
  int temp_v12 [12];
  
  temp_v2 = FUN_00236038(0);
  FUN_00236038(1);
  temp_v3 = FUN_00232388();
  temp_v9 = 0;
  FUN_00301a08(temp_v3,temp_v12,temp_v11);
  temp_v8 = temp_v12[0];
  if (temp_v12[0] < temp_v11[0] + temp_v12[0]) {
    do {
      temp_v4 = FUN_0014aa78();
      puVar11 = (unsigned int *)(*(int *)(temp_v4 + 0x1ffc) + temp_v8 * 0x408);
      temp_v5 = *puVar11;
      temp_v7 = puVar11[1];
      if ((((DAT_005702a0 & temp_v5) == 0 && (temp_v7 & DAT_005702a4) == 0) &&
          ((DAT_00570288 & temp_v5) != 0 || (DAT_0057028c & temp_v7) != 0)) &&
         ((DAT_005702b0 & temp_v5) == 0 && (DAT_005702b4 & temp_v7) == 0)) {
        temp_v6 = 0;
        if ((!((DAT_005702a0 & temp_v5) == 0 && (temp_v7 & DAT_005702a4) == 0)) ||
           (!((temp_v5 & DAT_005702a8) == 0 && (temp_v7 & DAT_005702ac) == 0))) {
          if (*(short *)((int)puVar11 + 0x32a) == 2 || *(short *)((int)puVar11 + 0x32a) == 3) {
            temp_v6 = (unsigned int)((short)puVar11[0xcb] == temp_v2);
          }
        }
        else {
          if (((*(short *)((int)puVar11 + 0x33a) == 2) || (*(short *)((int)puVar11 + 0x33a) == 3))
             && ((short)puVar11[0xcf] == temp_v2)) {
            temp_v6 = 1;
          }
          puVar7 = puVar11 + 0xcf;
          temp_v0 = *(short *)((int)puVar11 + 0x342);
          temp_v4 = 0;
          temp_v10 = 4;
          psVar10 = (short *)((int)puVar11 + 0x33a);
          do {
            temp_v1 = psVar10[8];
            if ((temp_v0 == 2 || temp_v0 == 3) && ((short)puVar7[2] == temp_v2)) {
              temp_v6 = temp_v6 + 1;
            }
            temp_v0 = psVar10[0xc];
            if ((temp_v1 == 2 || temp_v1 == 3) && ((short)puVar7[4] == temp_v2)) {
              temp_v4 = temp_v4 + 1;
            }
            temp_v10 = temp_v10 - 1;
            puVar7 = puVar7 + 4;
            psVar10 = psVar10 + 8;
          } while (temp_v10 != 0);
          temp_v6 = temp_v6 + temp_v4;
          if (((*(short *)((int)puVar11 + 0x382) == 2) || (*(short *)((int)puVar11 + 0x382) == 3))
             && ((short)puVar11[0xe1] == temp_v2)) {
            temp_v6 = temp_v6 + 1;
          }
        }
        temp_v9 = temp_v9 + temp_v6;
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < temp_v12[0] + temp_v11[0]);
  }
  temp_v8 = FUN_0014aa78();
  if (*(char *)(temp_v8 + 0x4cd1) != '\0') {
    temp_v8 = FUN_0014aa78();
    FUN_003eaf20();
    if (temp_v8 != 0) {
      FUN_003249c0();
      temp_v9 = temp_v9 + temp_v8;
    }
  }
  FUN_003283ac(temp_v9);
  return 1;
}

} /* extern "C" */
