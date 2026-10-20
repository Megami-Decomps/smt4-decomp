/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387edc` (_code @ 0x387edc, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_002e59f8(int, int, int);
int FUN_0031f0a8(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_0014af84(void);
extern int FUN_0015688c(void);
/* Supplied declaration required: FUN_00184310. */
extern int FUN_0018719c(unsigned int);
extern int FUN_001ab888(void);
extern int FUN_00228ab0(int);
/* Supplied declaration required: FUN_002e59f8. */
extern unsigned char FUN_0031cf94(void);
/* Supplied declaration required: FUN_0031f0a8. */
extern unsigned int FUN_0037d478(void);


void FUN_00387edc(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = FUN_001ab888();
  FUN_002e59f8(temp_v1 + 4,param_1,0xe);
  FUN_002e59f8(temp_v1 + 0x50,param_1 + 0xe,0x12);
  *(unsigned short *)(param_1 + 0x36) = *(unsigned short *)(temp_v1 + 0x66);
  temp_v2 = FUN_0014af84();
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(temp_v2 + 0x21d90);
  *(unsigned int *)(param_1 + 0x24) = 0;
  temp_v0 = FUN_0031cf94();
  *(unsigned char *)(param_1 + 0x20) = temp_v0;
  FUN_0031f0a8(0x10,1);
  temp_v2 = FUN_0018719c(0x581);
  if (temp_v2 != 0) {
    FUN_0031f0a8(4,1);
  }
  *(unsigned char *)(param_1 + 0x21) = 0;
  temp_v3 = FUN_0037d478();
  *(unsigned int *)(param_1 + 0x30) = temp_v3;
  *(unsigned char *)(param_1 + 0x22) = 0;
  *(unsigned char *)(param_1 + 0x23) = 0;
  *(unsigned short *)(param_1 + 0x38) = *(unsigned short *)(temp_v1 + 0x2c4c);
  temp_v1 = FUN_0015688c();
  if (temp_v1 == 0) {
    *(unsigned short *)(param_1 + 0x44) = 0;
    *(unsigned short *)(param_1 + 0x3a) = 0;
  }
  else {
    *(unsigned short *)(param_1 + 0x44) = *(unsigned short *)(temp_v1 + 0x62);
    *(unsigned short *)(param_1 + 0x3a) = *(unsigned short *)(temp_v1 + 100);
  }
  temp_v1 = 0;
  *(unsigned char *)(param_1 + 0x42) = 0;
  do {
    temp_v2 = FUN_00228ab0(temp_v1);
    if (temp_v2 != 0) {
      *(unsigned short *)(param_1 + temp_v1 * 2 + 0x3c) = *(unsigned short *)(temp_v2 + 0x62);
    }
    else {
      *(unsigned short *)(param_1 + temp_v1 * 2 + 0x3c) = 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  temp_v1 = 0x218;
  *(unsigned short *)(param_1 + 0x34) = 0;
  *(unsigned short *)(param_1 + 0x60) = 0x218;
  FUN_00184310();
  *(unsigned short *)(param_1 + 0x62) = *(unsigned short *)(temp_v1 + 6);
  FUN_002e59f8(temp_v1 + 0x40,param_1 + 0x50,0x10);
  return;
}

} /* extern "C" */
