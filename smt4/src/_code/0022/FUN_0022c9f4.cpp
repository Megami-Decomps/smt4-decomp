/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022c9f4` (_code @ 0x22c9f4, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022e0fc(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0022e0fc. */
extern int FUN_002a0d0c(void);


void FUN_0022c9f4(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  
  if (*(short *)(param_1 + 0x5a8) != 0) {
    temp_v1 = FUN_002a0d0c();
    pbVar3 = (unsigned char *)(temp_v1 + 0xc);
    switch(*pbVar3 & 0x7f) {
    default:
      temp_v0 = '\x06';
      *pbVar3 = (*pbVar3 & 0x80) | 1;
      break;
    case 1:
      temp_v0 = '\x06';
      break;
    case 2:
      temp_v0 = '\x02';
      break;
    case 3:
      temp_v0 = '\x16';
      break;
    case 4:
      temp_v0 = '\x0e';
      break;
    case 5:
      temp_v0 = '\x14';
    }
    if ((param_2 != 0) && ((*pbVar3 & 0x80) != 0)) {
      temp_v0 = temp_v0 + '\x01';
    }
    FUN_0022e0fc(param_1 + 0x5a8,temp_v0);
    return;
  }
  return;
}

} /* extern "C" */
