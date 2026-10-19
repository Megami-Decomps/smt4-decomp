/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_hid_CTR_TouchPanelReader_ReadLatest` (_code @ 0x1595a8, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int FUN_00170404(void);
extern int FUN_0017169c(void);
extern void nn_hidlow_CTR_TouchPanelLifoRing_ReadData(unsigned int, unsigned int, int, int *, long long *, int *);


unsigned char nn_hid_CTR_TouchPanelReader_ReadLatest(int *param_1,unsigned short *param_2)

{
  int temp_v0;
  int temp_v1 [2];
  unsigned long long temp_v2;
  
  (*(unsigned int *)((unsigned char *)&temp_v2 + 0)) = 0xffffffff;
  (*(unsigned int *)((unsigned char *)&temp_v2 + 4)) = 0xffffffff;
  temp_v1[1] = 0xffffffff;
  nn_hidlow_CTR_TouchPanelLifoRing_ReadData
            (*(unsigned int *)(*param_1 + 4),(unsigned int)param_2,1,temp_v1,(long long *)&temp_v2,temp_v1 + 1);
  temp_v0 = FUN_00170404();
  if ((temp_v0 != 0) && (temp_v0 = FUN_0017169c(), temp_v0 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    *(unsigned char *)(param_2 + 2) = 0;
  }
  return 0 < temp_v1[0];
}
