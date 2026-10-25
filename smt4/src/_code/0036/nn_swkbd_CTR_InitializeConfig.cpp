#include "romwright_types.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

int rt_memclr(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: rt_memclr. */
/* Supplied declaration required: memClear. */


void nn_swkbd_CTR_InitializeConfig(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(unsigned short *)(param_1 + 8) = 65000;
  *(unsigned short *)((int)param_1 + 0x22) = 0;
  *(unsigned short *)(param_1 + 9) = 0;
  rt_memclr((int)param_1 + 0x26,0x66);
  param_1[0x23] = 0;
  reinterpret_cast<int>(memClear(reinterpret_cast<void*>(param_1 + 0x24), 0x82));
  *(unsigned char *)((int)param_1 + 0x112) = 0;
  *(unsigned char *)((int)param_1 + 0x113) = 1;
  *(unsigned char *)(param_1 + 0x45) = 0;
  *(unsigned char *)((int)param_1 + 0x115) = 1;
  *(unsigned char *)((int)param_1 + 0x116) = 0;
  *(unsigned char *)((int)param_1 + 0x117) = 1;
  *(unsigned char *)(param_1 + 0x46) = 0;
  *(unsigned char *)((int)param_1 + 0x119) = 0;
  *(unsigned char *)((int)param_1 + 0x11a) = 0;
  *(unsigned char *)((int)param_1 + 0x11b) = 0;
  *(unsigned char *)(param_1 + 0x47) = 1;
  *(unsigned char *)((int)param_1 + 0x11d) = 0;
  *(unsigned char *)(param_1 + 0xd5) = 0;
  param_1[0x48] = 0xffffffff;
  param_1[0x49] = 0xffffffff;
  param_1[0x4a] = 0xffffffff;
  param_1[0x4b] = 0xffffffff;
  param_1[0x4c] = 0;
  *(unsigned short *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0xffffffff;
  param_1[0x4f] = 0xffffffff;
  param_1[0x50] = 0xffffffff;
  param_1[0x51] = 0xffffffff;
  *(unsigned short *)(param_1 + 0x52) = 0;
  param_1[0x53] = 0;
  reinterpret_cast<int>(memClear(reinterpret_cast<void*>(param_1 + 0x54), 0x202));
  return;
}

} /* extern "C" */
