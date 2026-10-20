#include "romwright_types.h"

extern "C" {

/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_6_stack;


unsigned int FUN_003a48b4(int param_1,int param_2,int param_3,int param_4,unsigned int param_5,int param_6)

{
  return param_5 | (param_6 << 8) | (param_1 << 0x10) | (param_2 << 0x14) | (param_3 << 0x18) |
         (param_4 << 0x1c);
}

} /* extern "C" */
