/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2be4` (_code @ 0x1e2be4, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025bfa4(void);
int FUN_00290794(int);
int FUN_002bfc24(int, unsigned int, unsigned int, unsigned int);

extern int *DAT_00447a98; /* 0x447a98 */
extern char s______________________00447ab4[85]; /* 0x447ab4 */
extern signed char DAT_0049f934; /* 0x49f934 */

/* Supplied declaration required: FUN_0025bfa4. */
extern int FUN_0028d310(void);
/* Supplied declaration required: FUN_00290794. */
extern int FUN_002a8778(void);
/* Supplied declaration required: FUN_002bfc24. */
extern unsigned int FUN_002bfdc4(void);
extern unsigned int FUN_002bfdd4(void);
extern int FUN_002c09d0(unsigned int);
extern int FUN_002c2950(void);
extern int FUN_00334038(void);


void FUN_001e2be4(void)

{
/* irregular: 2 goto(s); 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar8;
  unsigned int temp_v6;
  
  temp_v0 = FUN_002c2950();
  temp_v1 = FUN_002bfdd4();
  if (DAT_0049f934 != '\0') {
    return;
  }
  if (*DAT_00447a98 != 0) {
    return;
  }
  temp_v2 = FUN_002c09d0(0x16);
  if (temp_v2 == 0) {
    return;
  }
  temp_v2 = (int)*(char *)(temp_v0 + 0xd5b);
  if (temp_v2 != 1) {
    if (temp_v2 != 5) {
      if (temp_v2 == 6) goto LAB_001e2ca0;
      if (temp_v2 == 7) goto LAB_001e2cc8;
      if (temp_v2 == 8) {
        temp_v4 = FUN_00334038();
        temp_v5 = FUN_0028d310();
        if (temp_v4 / 2 <= temp_v5) {
          temp_v2 = 0;
        }
      }
    }
    else {
      temp_v4 = FUN_00290794(0x20);
      if ((temp_v4 == 0) || (FUN_0025bfa4(), temp_v4 - 0x708U >= 0x709)) {
        temp_v2 = 6;
LAB_001e2ca0:
        temp_v4 = FUN_00290794(0x20);
        if ((temp_v4 == 0) || (FUN_0025bfa4(), temp_v4 - 0xe10U >= 0xe11)) {
          temp_v2 = 7;
LAB_001e2cc8:
          temp_v3 = FUN_00290794(0x20);
          if ((temp_v3 == 0) || (FUN_0025bfa4(), 0x1c1f >= temp_v3)) {
            temp_v2 = 8;
            temp_v4 = FUN_00334038();
            temp_v5 = FUN_0028d310();
            if (temp_v4 / 2 <= temp_v5) {
              temp_v2 = 0;
            }
          }
        }
      }
    }
  }
  else {
    temp_v4 = FUN_002a8778();
    if (temp_v4 < 1) {
      temp_v2 = 2;
    }
  }
  piVar1 = DAT_00447a98;
  piVar8 = DAT_00447a98 + 1;
  *DAT_00447a98 = 2;
  *piVar8 = 0;
  piVar1[5] = (int)(s______________________00447ab4 + temp_v2 * 0x60);
  temp_v6 = FUN_002bfdc4();
  FUN_002bfc24(1,*(unsigned int *)(temp_v2 * 0x60 + 0x447ab0),temp_v6,temp_v1 | 4);
  temp_v2 = temp_v2 + 1;
  if (temp_v2 >= 9) {
    temp_v2 = 0;
  }
  *(char *)(temp_v0 + 0xd5b) = (char)temp_v2;
  return;
}

} /* extern "C" */
