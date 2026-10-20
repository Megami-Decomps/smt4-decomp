#include "romwright_types.h"

extern "C" {

int FUN_00152f44(void);
int FUN_00353b00(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int *DAT_0058104c; /* 0x58104c */
extern unsigned char DAT_005f15fc; /* 0x5f15fc */

/* Supplied declaration required: FUN_00152f44. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_00353b00. */


void FUN_00274d14(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  FUN_00152f44();
  piVar1 = DAT_0058104c;
  DAT_0058104c[2] = param_1;
  piVar1[3] = param_2;
  if (((((*(signed char *)((unsigned char *)&DAT_005f15fc + 0x18)) == '\0') && (temp_v0 = FUN_0018719c(0x49a), temp_v0 != 0)) &&
      ((temp_v0 = FUN_0018719c(0xc), temp_v0 == 0 || (temp_v0 = FUN_0018719c(0x10), temp_v0 != 0)))) &&
     (*DAT_0058104c == 0)) {
    FUN_00353b00(0);
    return;
  }
  return;
}

} /* extern "C" */
