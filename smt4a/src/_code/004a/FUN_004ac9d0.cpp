/* NON_MATCHING: BLOCKED: MoLive ring buffer (RingBuffer<ObjectHandle>: data +0x30, capacity +0x34, count +0x38, head +0x3c) sums and inserts a range through FUN_00521898/FUN_00521984 and then resets a handle (ObjectHandle::detach); needs the RingBuffer member functions named and the Stream/Player class layout (include/mobiclip/MoLivePlayer.h has the first pieces). */
#include "romwright_types.h"

extern "C" {

int FUN_00521898(...);
int FUN_00521984(int, int, int, int, int);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_00521898. */
/* Supplied declaration required: FUN_00521984. */


void FUN_004ac9d0(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar9;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    temp_v6 = 0;
    temp_v1 = 0;
    temp_v4 = 0;
    temp_v5 = param_4;
    if (*(int *)(param_1 + 0x38) != 0) {
      do {
        temp_v3 = *(int *)(param_1 + 0x3c) + temp_v1;
        if (*(unsigned int *)(param_1 + 0x34) <= temp_v3) {
          temp_v3 = temp_v3 - *(unsigned int *)(param_1 + 0x34);
        }
        temp_v1 = temp_v1 + 1;
        temp_v5 = *(int *)(param_1 + 0x38);
        temp_v4 = *(int *)(*(int *)(*(int *)(param_1 + 0x30) + temp_v3 * 0x10 + 4) + 0xc);
        temp_v6 = temp_v6 + temp_v4;
      } while (temp_v1 != temp_v5);
    }
    temp_v1 = param_1 + 0x1c;
    FUN_00521984(temp_v1,param_1 + 0x44,temp_v4,temp_v5,param_4);
    if (temp_v1 != 0) {
      temp_v3 = *(int *)(*(int *)(param_1 + 0x48) + 0xc) + temp_v6;
      if (temp_v6 != temp_v3) {
        temp_v5 = temp_v3 - temp_v6;
        temp_v4 = *(int *)(param_1 + 0x14);
        temp_v3 = *(int *)(param_1 + 0x10) - temp_v3;
        temp_v0 = *(unsigned int *)(param_1 + 0xc);
        if (temp_v6 >= temp_v3) {
          temp_v2 = temp_v4 + temp_v6;
          temp_v6 = temp_v4 + temp_v6 + temp_v5;
          if (temp_v0 <= temp_v2) {
            temp_v2 = temp_v2 - temp_v0;
          }
          if (temp_v0 <= temp_v6) {
            temp_v6 = temp_v6 - temp_v0;
          }
          FUN_00521898(param_1 + 4,temp_v2,temp_v6,temp_v3,1);
        }
        else {
          temp_v3 = temp_v4 + temp_v5;
          if (temp_v0 <= temp_v3) {
            temp_v3 = temp_v3 - temp_v0;
          }
          FUN_00521898(param_1 + 4,temp_v3,temp_v4,temp_v6,0);
          *(unsigned int *)(param_1 + 0x14) = temp_v3;
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) - temp_v5;
      }
      puVar2 = *(unsigned int **)(param_1 + 0x4c);
      puVar9 = (unsigned int *)(param_1 + 0x44);
      if (puVar2 == (unsigned int *)0x0 || puVar2 == puVar9) {
        if (*(int *)(param_1 + 0x48) != 0) {
          (**(romwright_code **)(*(int *)*puVar9 + 4))();
        }
      }
      else {
        puVar2[3] = *(unsigned int *)(param_1 + 0x50);
        *(unsigned int *)(*(int *)(param_1 + 0x50) + 8) = *(unsigned int *)(param_1 + 0x4c);
        *(unsigned int *)(param_1 + 0x4c) = 0;
        *(unsigned int *)(param_1 + 0x50) = 0;
      }
      *(unsigned int *)(param_1 + 0x48) = 0;
      *(unsigned int **)(param_1 + 0x50) = puVar9;
      *(unsigned int **)(param_1 + 0x4c) = puVar9;
    }
  }
  return;
}

} /* extern "C" */
