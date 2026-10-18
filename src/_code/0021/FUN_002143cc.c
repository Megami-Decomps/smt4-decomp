/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002143cc` (_code @ 0x2143cc, 0xa0 bytes) from smt4.cxi.
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
extern unsigned short FUN_00296f60(unsigned int);
extern int FUN_002b49d8(unsigned int);
/* Supplied declaration required: FUN_002c0128. */
/* Supplied declaration required: FUN_00348c74. */


unsigned char FUN_002143cc(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00296f60(0);
  temp_v1 = FUN_00289640();
  if (temp_v1 == 0) {
    FUN_00254514(0);
    FUN_0028efe0(temp_v0,0,1);
    FUN_002c0128();
  }
  temp_v1 = FUN_002b49d8(0x1e);
  temp_v2 = FUN_002544fc(0);
  FUN_0025506c(temp_v1,0x10,temp_v2,6,0);
  temp_v3 = FUN_002544fc(0);
  FUN_00254514(0,temp_v3 + 1);
  if (temp_v1 == 1) {
    FUN_00348c74(temp_v0);
  }
  return temp_v1 == 1;
}
