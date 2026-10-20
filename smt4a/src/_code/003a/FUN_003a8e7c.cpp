/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8e7c` (_code @ 0x3a8e7c, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_002b54a0(...);
int FUN_00301a08(unsigned int, int *, int *);
int FUN_003283ac(...);
int FUN_003eaf20(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} void_stack;

extern unsigned int DAT_00570288; /* 0x570288 */
extern unsigned int DAT_0057028c; /* 0x57028c */
extern unsigned int DAT_005702a0; /* 0x5702a0 */
extern unsigned int DAT_005702a4; /* 0x5702a4 */
extern unsigned int DAT_005702b0; /* 0x5702b0 */
extern unsigned int DAT_005702b4; /* 0x5702b4 */

extern int FUN_0014aa78(void);
extern int FUN_0014bef4(unsigned int);
extern unsigned int FUN_00232388(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_002b54a0. */
/* Supplied declaration required: FUN_00301a08. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003eaf20. */


unsigned int FUN_003a8e7c(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar8;
  int temp_v6;
  unsigned int temp_v7 [109];
  int temp_v8;
  int temp_v9;
  
  temp_v0 = FUN_00236038(0);
  FUN_00236038(1);
  temp_v1 = FUN_00232388();
  temp_v6 = 0;
  FUN_00301a08(temp_v1,&temp_v8,&temp_v9);
  temp_v5 = temp_v8;
  if (temp_v8 < temp_v9 + temp_v8) {
    do {
      temp_v2 = FUN_0014aa78();
      puVar8 = (unsigned int *)(*(int *)(temp_v2 + 0x1ffc) + temp_v5 * 0x408);
      temp_v3 = *puVar8;
      temp_v4 = puVar8[1];
      if (((((DAT_005702a0 & temp_v3) == 0 && (DAT_005702a4 & temp_v4) == 0) &&
           ((DAT_00570288 & temp_v3) != 0 || (DAT_0057028c & temp_v4) != 0)) &&
          ((temp_v3 & DAT_005702b0) == 0 && (temp_v4 & DAT_005702b4) == 0)) &&
         (puVar5 = puVar8, FUN_002b54a0(puVar8,temp_v0), puVar5 != (unsigned int *)0x0)) {
        temp_v7[temp_v6] = (unsigned int)*(unsigned short *)((int)puVar8 + 0x166);
        temp_v6 = temp_v6 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v8 + temp_v9);
  }
  temp_v5 = FUN_0014aa78();
  if (*(char *)(temp_v5 + 0x4cd1) != '\0') {
    temp_v5 = FUN_0014aa78();
    FUN_003eaf20();
    if ((temp_v5 != 0) && (temp_v2 = temp_v5, FUN_002b54a0(), temp_v2 != 0)) {
      temp_v7[temp_v6] = (unsigned int)*(unsigned short *)(temp_v5 + 0x166);
      temp_v6 = temp_v6 + 1;
    }
  }
  if (temp_v6 != 0) {
    temp_v5 = FUN_0014bef4((temp_v6 - 1U) & 0xffff);
    FUN_003283ac(temp_v7[temp_v5]);
    return 1;
  }
  FUN_003283ac(0);
  return 1;
}

} /* extern "C" */
