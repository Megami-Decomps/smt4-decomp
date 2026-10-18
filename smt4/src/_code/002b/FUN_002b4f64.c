/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4f64` (_code @ 0x2b4f64, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char LAB_00138800; /* 0x138800 */

/* Supplied declaration required: FUN_0014c3b8. */
/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int FUN_002bad74(int, unsigned int);
extern unsigned int FUN_002c0c74(int);
/* Supplied declaration required: nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_Dequeue. */
extern int nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryDequeue(int, int **);


void FUN_002b4f64(int param_1,romwright_code *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar6;
  int temp_v4;
  int *temp_v5;
  unsigned char uStack_18;
  
  temp_v1 = param_1;
  temp_v5 = param_4;
  FUN_0014c3b8();
  if (temp_v1 == 0) {
    while (temp_v1 = nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryDequeue
                             (param_1 + 0xb4,&temp_v5), temp_v1 != 0) {
      *(int *)(param_1 + 0x178) = temp_v5[2];
      piVar6 = temp_v5;
      if (temp_v5 != (int *)0x0) {
        do {
          piVar3 = piVar6;
          piVar6 = (int *)*piVar3;
        } while (piVar6 != (int *)0x0);
        temp_v1 = piVar3[3];
        *(int *)(param_1 + 0x188) = temp_v1;
        *(unsigned char *)(param_1 + 0x18c) = 0;
        if (*(int *)(param_1 + 0x184) == temp_v1) {
          *(unsigned int *)(param_1 + 0x188) = 0;
          *(unsigned int *)(param_1 + 0x184) = 0;
        }
      }
    }
    temp_v1 = param_1;
    FUN_0014c3b8(param_1,param_2);
    if (temp_v1 == 0) {
      temp_v2 = FUN_002bad74(param_1,1);
      temp_v3 = param_1 + 0xb4;
      nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_Dequeue();
      (*param_2)(temp_v3 >> 8,temp_v4 + 0x78,temp_v3,*(unsigned int *)(temp_v3 + 8));
      temp_v0 = FUN_002c0c74(param_1);
      temp_v5 = (int *)&LAB_00138800;
      FUN_002b46f8(&uStack_18,temp_v2,temp_v0,0xa8);
      return;
    }
  }
  return;
}
