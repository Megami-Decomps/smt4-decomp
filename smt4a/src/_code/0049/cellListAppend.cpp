#include "romwright_types.h"
#include "shard/cellListAppend.h"

extern "C" {

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_5_stack;


void cellListAppend(int param_1,unsigned short param_2,unsigned short param_3,short param_4,short param_5)

{
  unsigned short temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  
  puVar3 = (unsigned short *)(param_1 + 0x1000);
  *(unsigned short *)(param_1 + (unsigned int)*puVar3 * 4) = param_2;
  temp_v1 = param_1 + (unsigned int)*puVar3 * 4;
  param_3 = param_3 | (*(unsigned short *)(temp_v1 + 2) & 0xfffe);
  *(unsigned short *)(temp_v1 + 2) = param_3;
  temp_v0 = (param_3 & 0xfffd) | (param_4 << 1);
  *(unsigned short *)(param_1 + (unsigned int)*puVar3 * 4 + 2) = temp_v0;
  *(unsigned short *)(param_1 + (unsigned int)*puVar3 * 4 + 2) = (temp_v0 & 0xfc03) | (param_5 << 2);
  *puVar3 = *puVar3 + 1;
  return;
}

} /* extern "C" */
