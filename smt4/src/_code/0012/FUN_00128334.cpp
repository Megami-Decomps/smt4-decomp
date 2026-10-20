/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128334` (_code @ 0x128334, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c52f8(void);

extern unsigned char DAT_00465710; /* 0x465710 */
extern int DAT_00472a50; /* 0x472a50 */

extern unsigned int asdModelForwardChecked(unsigned int *, char *, unsigned int, unsigned int);
extern int FUN_002c1398(void);
extern unsigned int FUN_002c30c4(char *);
/* Supplied declaration required: FUN_002c52f8. */


unsigned int FUN_00128334(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if ((*(int *)((unsigned char *)&DAT_00465710 + 0x4)) == 0) {
    temp_v0 = FUN_002c1398();
    if (temp_v0 < 0) {
      FUN_002c52f8();
    }
    if (DAT_00472a50 != 0) {
      temp_v2 = 0xd8a103f9;
    }
    else {
      temp_v1 = FUN_002c30c4("cfg:u");
      temp_v2 = asdModelForwardChecked((unsigned int *)&DAT_00472a50,"cfg:u",temp_v1,0);
      if ((temp_v2 & 0x80000000) != 0) {
        temp_v2 = 0xd92103fb;
      }
    }
    if ((temp_v2 & 0x80000000) == 0) {
      DAT_00465710 = 1;
    }
    else if (temp_v2 == 0xd92103fb) {
      return 0xd92103fb;
    }
  }
  (*(int *)((unsigned char *)&DAT_00465710 + 0x4)) = (*(int *)((unsigned char *)&DAT_00465710 + 0x4)) + 1;
  return 0;
}

} /* extern "C" */
