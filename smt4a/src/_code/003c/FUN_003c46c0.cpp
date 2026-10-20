/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c46c0` (_code @ 0x3c46c0, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_00301a08(unsigned int, int [6], int *);
int FUN_003283ac(int);
int FUN_003eaf20(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned int DAT_00570288; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int FUN_0014aa78(void);
extern unsigned int FUN_00232388(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_00301a08. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_003c46c0(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  int temp_v6;
  int temp_v7 [6];
  
  temp_v0 = FUN_00236038(0);
  FUN_00236038(1);
  temp_v1 = FUN_00232388();
  FUN_00301a08(temp_v1,temp_v7,&temp_v6);
  temp_v5 = temp_v7[0];
  if (temp_v7[0] < temp_v6 + temp_v7[0]) {
    do {
      temp_v2 = FUN_0014aa78();
      puVar6 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v5 * 0x408);
      temp_v3 = *puVar6;
      temp_v4 = puVar6[1];
      if (((((temp_v4 & DAT_005702a4) == 0 && (temp_v3 & DAT_005702a0) == 0) &&
           ((DAT_0057028c & temp_v4) != 0 || (DAT_00570288 & temp_v3) != 0)) &&
          ((temp_v4 & DAT_005702b4) == 0 && (DAT_005702b0 & temp_v3) == 0)) &&
         (*(unsigned short *)((int)puVar6 + 0x166) == temp_v0)) {
        temp_v3 = puVar6[0x2b];
        if ((int)temp_v3 < 1) {
          temp_v3 = puVar6[0x2d];
        }
        if (0 < (int)temp_v3) {
          FUN_003283ac(1);
          return 1;
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v7[0] + temp_v6);
  }
  temp_v5 = FUN_0014aa78();
  if (*(char *)(temp_v5 + 0x4cd1) != '\0') {
    temp_v5 = FUN_0014aa78();
    FUN_003eaf20();
    if ((temp_v5 != 0) && (*(unsigned short *)(temp_v5 + 0x166) == temp_v0)) {
      temp_v2 = *(int *)(temp_v5 + 0xac);
      if (temp_v2 < 1) {
        temp_v2 = *(int *)(temp_v5 + 0xb4);
      }
      if (0 < temp_v2) {
        FUN_003283ac(1);
        return 1;
      }
    }
  }
  FUN_003283ac(0);
  return 1;
}

} /* extern "C" */
