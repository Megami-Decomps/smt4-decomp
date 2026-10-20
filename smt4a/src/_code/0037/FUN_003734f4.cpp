/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003734f4` (_code @ 0x3734f4, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00236038(int);
int FUN_00301a08(unsigned int, int [8], int *);
int FUN_003283ac(int);
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

extern int FUN_0014aa78(void);
extern unsigned int FUN_00232388(void);
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_00301a08. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003eaf20. */
extern int aeabi_idivmod(int, unsigned int);


unsigned int FUN_003734f4(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  int temp_v7;
  int temp_v8 [8];
  
  temp_v0 = FUN_00236038(0);
  temp_v1 = FUN_00236038(1);
  FUN_00236038(2);
  temp_v2 = FUN_00232388();
  FUN_00301a08(temp_v2,temp_v8,&temp_v7);
  temp_v6 = temp_v8[0];
  if (temp_v8[0] < temp_v7 + temp_v8[0]) {
    do {
      temp_v3 = FUN_0014aa78();
      puVar7 = (unsigned int *)(*(int *)(temp_v3 + 0x1ffc) + temp_v6 * 0x408);
      temp_v4 = *puVar7;
      temp_v5 = puVar7[1];
      if (((((DAT_005702a0 & temp_v4) == 0 && (DAT_005702a4 & temp_v5) == 0) &&
           ((DAT_0057028c & temp_v5) != 0 || (DAT_00570288 & temp_v4) != 0)) &&
          ((temp_v4 & DAT_005702b0) == 0 && (temp_v5 & DAT_005702b4) == 0)) &&
         ((*(unsigned short *)((int)puVar7 + 0x166) == temp_v0 &&
          (temp_v3 = aeabi_idivmod(puVar7[0x98] * 100,puVar7[0x99]), temp_v3 <= temp_v1)))) {
        FUN_003283ac(1);
        return 1;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v8[0] + temp_v7);
  }
  temp_v6 = FUN_0014aa78();
  if (*(char *)(temp_v6 + 0x4cd1) != '\0') {
    temp_v6 = FUN_0014aa78();
    FUN_003eaf20();
    if (((temp_v6 != 0) && (*(unsigned short *)(temp_v6 + 0x166) == temp_v0)) &&
       (temp_v6 = aeabi_idivmod(*(int *)(temp_v6 + 0x260) * 100,*(unsigned int *)(temp_v6 + 0x264)),
       temp_v6 <= temp_v1)) {
      FUN_003283ac(1);
      return 1;
    }
  }
  FUN_003283ac(0);
  return 1;
}

} /* extern "C" */
