/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e38cc` (_code @ 0x2e38cc, 0x188 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00218aa0. */
/* Supplied declaration required: FUN_00250fc4. */
extern int FUN_002544fc(unsigned int);
/* Supplied declaration required: FUN_00254514. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_0028c2a8. */
/* Supplied declaration required: FUN_0028ccb0. */
/* Supplied declaration required: FUN_0028cd04. */
extern unsigned int FUN_0028cd5c(void);
extern int FUN_0028cd78(void);
/* Supplied declaration required: FUN_00292eb0. */
extern int FUN_002958bc(void);
/* Supplied declaration required: FUN_00295cbc. */
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_0029ccf8. */
/* Supplied declaration required: FUN_0029eb14. */
/* Supplied declaration required: FUN_002bdaac. */
/* Supplied declaration required: FUN_002f5e68. */
/* Supplied declaration required: FUN_00311494. */


unsigned int FUN_002e38cc(void)

{
/* irregular: 13 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00289640();
  if (temp_v1 == 0) {
    FUN_00254514(0);
    FUN_00254514(1,0);
  }
  temp_v1 = FUN_002544fc(0);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if ((temp_v1 == 3) && (temp_v1 = FUN_002958bc(), temp_v1 != 0)) {
          FUN_00292eb0();
          FUN_002bdaac(DAT_00439ca8 + 0x2460);
          FUN_00254514(0,4);
          return 1;
        }
      }
      else {
        temp_v1 = FUN_0028cd78();
        if (temp_v1 != 0) {
          temp_v2 = FUN_0028cd5c();
          if (temp_v2 != 0) {
            FUN_0028cd04(temp_v2 & 0xffff);
          }
          FUN_0028ccb0(temp_v0 & 0xffff);
          FUN_0029ccf8();
          FUN_00254514(0,3);
        }
      }
    }
    else {
      FUN_00254514(0,2);
      FUN_0028c2a8();
      FUN_0029eb14(0);
      FUN_00311494(temp_v0 & 0xffff,0);
      FUN_00218aa0(DAT_00439ca8 + 0x2460);
    }
  }
  else {
    FUN_002f5e68(temp_v0,1);
    FUN_00295cbc(temp_v0,1);
    FUN_00250fc4(temp_v0,1);
    FUN_00254514(0,1);
  }
  return 0;
}
