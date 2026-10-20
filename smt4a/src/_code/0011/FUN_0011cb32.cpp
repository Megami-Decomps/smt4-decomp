/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011cb32` (_code @ 0x11cb32, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineBufferReset(unsigned int);
int onlineSockAddrConstruct(unsigned char [32]);
int FUN_002f2e3c(int, unsigned int, unsigned int, unsigned char [32], unsigned int, int);
int FUN_003111ae(int, unsigned int, unsigned char [32]);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

/* Supplied declaration required: onlineBufferReset. */
extern unsigned int onlineBufferGetData(unsigned int);
/* Supplied declaration required: onlineSockAddrConstruct. */
/* Supplied declaration required: FUN_002f2e3c. */
/* Supplied declaration required: FUN_003111ae. */
extern int stateObjIsFinished(unsigned int);
extern unsigned int rangeObjRemaining(unsigned int);


unsigned int FUN_0011cb32(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4 [32];
  unsigned int temp_v5;
  int iStack_1c;
  int temp_v6;
  
  if ((*(char *)(param_1 + 0x149) != '\x01') && (*(char *)(param_1 + 0x41) != '\0')) {
    iStack_1c = param_1;
    temp_v6 = param_2;
    onlineSockAddrConstruct(temp_v4);
    onlineBufferReset(*(unsigned int *)(param_1 + 0x1d4));
    *(unsigned int *)(*(int *)(param_1 + 0x18c) + 8) = 0;
    *(unsigned int *)(*(int *)(param_1 + 0x18c) + 0x38) = *(unsigned int *)(param_1 + 0x1d4);
    temp_v3 = temp_v6 != 0;
    temp_v0 = *(unsigned int *)(param_1 + 0x18c);
    temp_v5 = rangeObjRemaining(*(unsigned int *)(param_1 + 0x1d4));
    temp_v1 = onlineBufferGetData(*(unsigned int *)(param_1 + 0x1d4));
    temp_v2 = param_1;
    FUN_002f2e3c(param_1,temp_v1,temp_v5,temp_v4,temp_v0,temp_v3);
    if ((temp_v2 == 0) && (temp_v2 = stateObjIsFinished(*(unsigned int *)(param_1 + 0x18c)), temp_v2 != 0)) {
      *(unsigned int *)(*(int *)(param_1 + 0x1d4) + 0x10) =
           *(unsigned int *)(*(int *)(param_1 + 0x18c) + 8);
      FUN_003111ae(param_1,*(unsigned int *)(param_1 + 0x1d4),temp_v4);
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
