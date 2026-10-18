/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00222f4c` (_code @ 0x222f4c, 0x144 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_002544fc. */
/* Supplied declaration required: FUN_00254514. */
/* Supplied declaration required: FUN_0025506c. */
extern int FUN_00289640(void);
/* Supplied declaration required: FUN_0028efe0. */
/* Supplied declaration required: FUN_0028f134. */
/* Supplied declaration required: FUN_0028f15c. */
extern int FUN_002904d0(void);
extern int FUN_00290694(void);
extern unsigned int FUN_00296f60(unsigned int);
extern int FUN_002b49d8(unsigned int);
/* Supplied declaration required: FUN_002b6700. */
/* Supplied declaration required: FUN_002c0128. */


unsigned int FUN_00222f4c(void)

{
/* irregular: 8 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = FUN_00296f60(0);
  temp_v2 = FUN_00289640();
  if (temp_v2 == 0) {
    FUN_0028f15c(temp_v1);
    FUN_00254514(0);
    FUN_00254514(1,0);
  }
  temp_v3 = FUN_002b49d8(0x1e);
  temp_v2 = FUN_002544fc(0);
  if (temp_v2 == 0) {
    FUN_0028efe0(temp_v1,0,1);
    FUN_002c0128();
    temp_v4 = FUN_002544fc(1);
    FUN_0025506c(temp_v3,0,temp_v4,6,0);
    temp_v2 = FUN_002544fc(1);
    FUN_00254514(1,temp_v2 + 1);
    if (temp_v3 == 1) {
      FUN_00254514(1,0);
      temp_v2 = FUN_002904d0();
      if (temp_v2 != 0) {
        temp_v2 = FUN_00290694();
        FUN_002b6700();
        FUN_002b6700();
        if ((temp_v2 != 0 && temp_v1 != 0) &&
           ((temp_v0 = *(char *)(temp_v2 + 6), (temp_v0 != '\x05' && temp_v0 != '\x04') && temp_v0 != '\x01'
            || (*(char *)(temp_v1 + 6) != '\0')))) {
          FUN_0028f134();
        }
      }
      return 1;
    }
  }
  return 0;
}
