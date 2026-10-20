/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012105c` (_code @ 0x12105c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineSockAddrConstruct(unsigned char [6]);
int FUN_002fd394(int, int, unsigned char [6]);

/* stack frame of param_3: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned short sp2A; /* 0x2a: local_2a */
} param_3_stack;

/* Supplied declaration required: onlineSockAddrConstruct. */
extern int onlineSockAddrNotEquals(int, unsigned char *);
/* Supplied declaration required: FUN_002fd394. */


unsigned int FUN_0012105c(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [6];
  unsigned short temp_v3;
  unsigned int temp_v4;
  
  onlineSockAddrConstruct(temp_v2);
  temp_v0 = *(int *)(param_1 + 4) + 0x10;
  FUN_002fd394(temp_v0,param_2,temp_v2);
  if (((temp_v0 != 0) &&
      ((temp_v1 = *(unsigned int *)(param_2 + 8),
       ((temp_v1 << 0x18) | (((temp_v1 >> 8) & 0xff) << 0x10) | (((temp_v1 >> 0x10) & 0xff) << 8) |
       (temp_v1 >> 0x18)) !=
       ((temp_v4 << 0x18) | (((temp_v4 >> 8) & 0xff) << 0x10) | (((temp_v4 >> 0x10) & 0xff) << 8)
       | (temp_v4 >> 0x18)) ||
       ((unsigned short)((*(unsigned short *)(param_2 + 6) << 8) | (*(unsigned short *)(param_2 + 6) >> 8)) !=
        (unsigned short)((temp_v3 << 8) | (temp_v3 >> 8)))))) &&
     ((param_3 == 0 || (temp_v0 = onlineSockAddrNotEquals(param_3,temp_v2), temp_v0 == 0)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
