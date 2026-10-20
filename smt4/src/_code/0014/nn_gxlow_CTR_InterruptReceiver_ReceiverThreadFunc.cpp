/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_gxlow_CTR_InterruptReceiver_ReceiverThreadFunc` (_code @ 0x147ab8, 0x16c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c4040(unsigned int);
int FUN_002c40f8(unsigned char *, int *, int, int, unsigned int, unsigned int);
int FUN_002c526c(void);
int hasExclusiveAccess(unsigned int *);
int software_interrupt(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_002c4040. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void nn_gxlow_CTR_InterruptReceiver_ReceiverThreadFunc(unsigned int param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned char *puVar3;
  unsigned char *pbVar4;
  int temp_v2;
  romwright_code *pcVar6;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int uStack_28;
  unsigned char temp_v5 [8];
  
  while( 1 ) {
    uStack_28 = *(unsigned int *)(param_1 + 0x2c);
    temp_v4 = 0;
    puVar3 = temp_v5;
    FUN_002c40f8(puVar3,&uStack_28,1,0,0xffffffff,0xffffffff);
    if ((int)puVar3 < 0) {
      FUN_002c526c();
    }
    software_interrupt(0x19);
    if (*(int *)(param_1 + 0x2c) < 0) {
      FUN_002c526c();
    }
    if (*(char *)(param_1 + 0x77) != '\0') break;
    while( 1 ) {
      pbVar4 = *(unsigned char **)(param_1 + 0x34);
      temp_v2 = -0x275fd408;
      if ((pbVar4 != (unsigned char *)0x0) && (temp_v2 = 0x2bef, pbVar4[1] != 0)) {
        temp_v4 = (unsigned int)pbVar4[*pbVar4 + 0xc];
        do {
          temp_v3 = **(unsigned int **)(param_1 + 0x34);
          temp_v1 = (unsigned char)hasExclusiveAccess(*(unsigned int **)(param_1 + 0x34));
        } while (!temp_v1);
        **(unsigned int **)(param_1 + 0x34) =
             (((temp_v3 & 0xff) + 1) % 0x34) | (temp_v3 & 0xffff0000) |
             (((((temp_v3 & 0xff00) >> 8) - 1) * 0x100) & 0xff00);
        temp_v2 = 0;
        if (*(char *)(*(int *)(param_1 + 0x34) + 2) == '\x01') {
          temp_v2 = -0x275fd5fe;
        }
      }
      if (temp_v2 == 0x2bef) break;
      temp_v3 = temp_v4 & 0xff;
      nn_os_CriticalSection_Enter(param_1);
      pcVar6 = *(romwright_code **)(param_1 + temp_v3 * 4 + 0x10);
      if (pcVar6 != (romwright_code *)0x0) {
        (*pcVar6)();
      }
      temp_v0 = *(char *)(param_1 + 0x76);
      *(unsigned char *)(param_1 + 0x76) = 2;
      if (temp_v0 == '\x01') {
        FUN_002c4040(param_1 + 100);
      }
      nn_os_CriticalSection_Leave(param_1);
    }
  }
  return;
}

} /* extern "C" */
