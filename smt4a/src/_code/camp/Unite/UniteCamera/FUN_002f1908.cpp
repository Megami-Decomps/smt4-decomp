#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int);
int FUN_001ad6d8(void);
int FUN_00292b84(void);
int FUN_00303710(void);
int FUN_00358f38(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_0057f294; /* 0x57f294 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_001ad6d8. */
/* Supplied declaration required: FUN_00292b84. */
/* Supplied declaration required: FUN_00303710. */
/* Supplied declaration required: FUN_00358f38. */
extern int FUN_003792d4(void);


void FUN_002f1908(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f294;
  FUN_00358f38(temp_v0);
  FUN_001ad6d8();
  FUN_0019a5a0(temp_v0);
  DAT_0057f294 = 0;
  temp_v1 = FUN_003792d4();
  if (temp_v1 != 0) {
    FUN_00303710();
    FUN_00292b84();
    return;
  }
  return;
}

} /* extern "C" */
