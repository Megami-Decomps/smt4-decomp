#include "romwright_types.h"

extern "C" {

int FUN_00292268(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_005f0c7c; /* 0x5f0c7c */

extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_00292268. */


void FUN_00243ea0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0018719c(0x4d0);
  if (((temp_v0 != 0) && ((*(int *)((unsigned char *)&DAT_005f0c7c + 0x8)) != 0)) && ((*(int *)((unsigned char *)&DAT_005f0c7c + 0x8)) == 1)) {
    FUN_00292268();
    return;
  }
  return;
}

} /* extern "C" */
