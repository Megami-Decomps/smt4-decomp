#include "romwright_types.h"

extern "C" {

int FUN_002bfdd4(void);
int FUN_002dfefc(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int *DAT_00447a98; /* 0x447a98 */
extern unsigned char DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_002bfdd4. */
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_002dfefc. */


void FUN_001d34a8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  FUN_002bfdd4();
  piVar1 = DAT_00447a98;
  DAT_00447a98[2] = param_1;
  piVar1[3] = param_2;
  if ((((*(signed char *)((unsigned char *)&DAT_0049f91c + 0x18)) == '\0') && (temp_v0 = FUN_002c09d0(0x16), temp_v0 != 0)) && (*DAT_00447a98 == 0))
  {
    FUN_002dfefc(0);
    return;
  }
  return;
}

} /* extern "C" */
