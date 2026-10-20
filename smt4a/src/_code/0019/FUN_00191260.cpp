/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00191260` (_code @ 0x191260, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryDequeue(int, int **);


void FUN_00191260(int param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int *temp_v1;
  
  temp_v1 = param_4;
  while (temp_v0 = nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryDequeue
                           (param_1 + 0xb4,&temp_v1), temp_v0 != 0) {
    *(int *)(param_1 + 0x178) = temp_v1[2];
    piVar3 = temp_v1;
    if (temp_v1 != (int *)0x0) {
      do {
        piVar2 = piVar3;
        piVar3 = (int *)*piVar2;
      } while (piVar3 != (int *)0x0);
      temp_v0 = piVar2[3];
      *(int *)(param_1 + 0x188) = temp_v0;
      *(unsigned char *)(param_1 + 0x18c) = 0;
      if (*(int *)(param_1 + 0x184) == temp_v0) {
        *(unsigned int *)(param_1 + 0x188) = 0;
        *(unsigned int *)(param_1 + 0x184) = 0;
      }
    }
  }
  return;
}

} /* extern "C" */
