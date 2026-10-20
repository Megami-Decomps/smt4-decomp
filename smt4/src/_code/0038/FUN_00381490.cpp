#include "romwright_types.h"

extern "C" {

int QcUtility_BuildTabList(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_6_stack;

/* Supplied declaration required: QcUtility_BuildTabList. */


int FUN_00381490(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5,
                 unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  temp_v0 = QcUtility_BuildTabList(param_1,param_2,param_3,0xffffffff,param_4,param_5,param_6);
  *(unsigned char *)(param_1 + 9) = (unsigned char)((1 << (param_2 & 0xff)) | *(unsigned char *)(param_1 + 9));
  return temp_v0;
}

} /* extern "C" */
