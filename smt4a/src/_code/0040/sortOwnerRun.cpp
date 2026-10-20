#include "romwright_types.h"

extern "C" {

int FUN_00312830(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_004039b4(...); /* 0x4039b4 */
extern int FUN_0040456c(...); /* 0x40456c */
extern int FUN_00404d50(...); /* 0x404d50 */
extern int FUN_00404f00(...); /* 0x404f00 */

extern int FUN_0026140c(void);
extern unsigned int FUN_002c2c68(int);
/* Supplied declaration required: FUN_00312830. */


void sortOwnerRun(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_0026140c();
  temp_v0 = *(unsigned char *)(temp_v1 + 0x1e);
  temp_v1 = param_1 + 0x90;
  param_1 = param_1 + 0x408;
  if ((temp_v0 & 0x7f) == 0x34) {
    if ((temp_v0 & 0x80) != 0) {
      temp_v2 = FUN_002c2c68(temp_v1);
      FUN_00312830(param_1,temp_v2,2,FUN_00404f00);
      return;
    }
    temp_v2 = FUN_002c2c68(temp_v1);
    FUN_00312830(param_1,temp_v2,2,FUN_0040456c);
    return;
  }
  if ((temp_v0 & 0x7f) == 0x1b) {
    if ((temp_v0 & 0x80) != 0) {
      temp_v2 = FUN_002c2c68(temp_v1);
      FUN_00312830(param_1,temp_v2,2,FUN_00404d50);
      return;
    }
    temp_v2 = FUN_002c2c68(temp_v1);
    FUN_00312830(param_1,temp_v2,2,FUN_004039b4);
    return;
  }
  return;
}

} /* extern "C" */
