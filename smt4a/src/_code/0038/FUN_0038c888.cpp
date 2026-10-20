/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038c888` (_code @ 0x38c888, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);
int FUN_001aba54(void);
int scrGetArg(int);
int FUN_00301a08(unsigned int, int [6], int *);
int scrSetResult(int);
int FUN_003eaf20(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned int DAT_00570288; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_001aba54. */
extern unsigned int FUN_00232388(void);
/* Supplied declaration required: scrGetArg. */
extern int FUN_0027281c(void);
/* Supplied declaration required: FUN_00301a08. */
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_0038c888(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  int temp_v6;
  int temp_v7 [6];
  
  temp_v0 = scrGetArg(0);
  scrGetArg(1);
  temp_v1 = FUN_00232388();
  FUN_00301a08(temp_v1,temp_v7,&temp_v6);
  temp_v5 = temp_v7[0];
  if (temp_v7[0] < temp_v6 + temp_v7[0]) {
    do {
      temp_v2 = btlGetMainState();
      puVar6 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v5 * 0x408);
      temp_v4 = *puVar6;
      temp_v3 = puVar6[1];
      if (((((DAT_005702a0 & temp_v4) == 0 && (DAT_005702a4 & temp_v3) == 0) &&
           ((DAT_0057028c & temp_v3) != 0 || (DAT_00570288 & temp_v4) != 0)) &&
          ((temp_v3 & DAT_005702b4) == 0 && (temp_v4 & DAT_005702b0) == 0)) &&
         (*(unsigned short *)((int)puVar6 + 0x166) == temp_v0)) {
        if (puVar6[0xfe] != 0) {
          temp_v2 = 0;
          do {
            temp_v3 = (unsigned int)*(unsigned short *)(puVar6[0xfe] + temp_v2 * 2 + 0x34);
            FUN_001aba54();
            if ((temp_v3 != 0) && (*(char *)(temp_v3 + 0x23) == '\x03')) {
              scrSetResult(1);
              return 1;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 8);
        }
        if (puVar6[0xff] != 0) {
          temp_v2 = 0;
          do {
            temp_v3 = (unsigned int)*(unsigned short *)(puVar6[0xff] + temp_v2 * 2 + 0x34);
            FUN_001aba54();
            if ((temp_v3 != 0) && (*(char *)(temp_v3 + 0x23) == '\x03')) {
              scrSetResult(1);
              return 1;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 8);
        }
        if (puVar6[0x101] != 0) {
          temp_v3 = (unsigned int)*(unsigned short *)((int)puVar6 + 0x166);
          FUN_0019cac4();
          temp_v2 = 0;
          do {
            temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + temp_v2 * 2 + 0x50);
            FUN_001aba54();
            if ((temp_v4 != 0) && (*(char *)(temp_v4 + 0x23) == '\x03')) {
              scrSetResult(1);
              return 1;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 8);
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v7[0] + temp_v6);
  }
  temp_v5 = btlGetMainState();
  if (*(char *)(temp_v5 + 0x4cd1) != '\0') {
    temp_v5 = btlGetMainState();
    FUN_003eaf20();
    if (((temp_v5 != 0) && (*(unsigned short *)(temp_v5 + 0x166) == temp_v0)) &&
       (temp_v5 = FUN_0027281c(), temp_v5 != 0)) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
