#include "romwright_types.h"

extern "C" {

int FUN_002e59f8(int, short *, int);
int FUN_0031f0a8(int, int);

extern int FUN_0014af84(void);
extern int FUN_0015688c(void);
extern int FUN_0018719c(unsigned int);
extern int FUN_001ab888(void);
extern int FUN_00228ab0(int);
extern int wstrlen(short *);
/* Supplied declaration required: FUN_002e59f8. */
extern unsigned char FUN_0031cf94(void);
/* Supplied declaration required: FUN_0031f0a8. */
extern unsigned int FUN_0037d478(void);


void FUN_0032e30c(short *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v4;
  
  temp_v1 = FUN_001ab888();
  param_1[0x1b] = *(short *)(temp_v1 + 0x66);
  temp_v2 = FUN_0014af84();
  *(unsigned int *)(param_1 + 0x14) = *(unsigned int *)(temp_v2 + 0x21d90);
  temp_v0 = FUN_0031cf94();
  *(unsigned char *)(param_1 + 0x10) = temp_v0;
  FUN_0031f0a8(0x10,1);
  temp_v2 = FUN_0018719c(0x581);
  if (temp_v2 != 0) {
    FUN_0031f0a8(4,1);
  }
  *(unsigned int *)(param_1 + 0x18) = FUN_0037d478();
  param_1[0x1c] = *(short *)(temp_v1 + 0x2c4c);
  temp_v2 = FUN_0015688c();
  if (temp_v2 == 0) {
    param_1[0x22] = 0;
    param_1[0x1d] = 0;
  }
  else {
    param_1[0x22] = *(short *)(temp_v2 + 0x62);
    param_1[0x1d] = *(short *)(temp_v2 + 100);
  }
  temp_v2 = 0;
  do {
    temp_v4 = FUN_00228ab0(temp_v2);
    if (temp_v4 != 0) {
      param_1[temp_v2 + 0x1e] = *(short *)(temp_v4 + 0x62);
    }
    else {
      param_1[temp_v2 + 0x1e] = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  temp_v2 = wstrlen(param_1 + 7);
  if (temp_v2 == 0) {
    FUN_002e59f8(temp_v1 + 0x50,param_1 + 7,0x12);
  }
  if (*param_1 == 0) {
    *param_1 = *(short *)(temp_v1 + 4);
  }
  if (param_1[1] == 0) {
    param_1[1] = *(short *)(temp_v1 + 6);
  }
  if (param_1[2] == 0) {
    param_1[2] = *(short *)(temp_v1 + 8);
  }
  if (param_1[3] == 0) {
    param_1[3] = *(short *)(temp_v1 + 10);
  }
  if (param_1[4] == 0) {
    param_1[4] = *(short *)(temp_v1 + 0xc);
  }
  if (param_1[5] == 0) {
    param_1[5] = *(short *)(temp_v1 + 0xe);
  }
  if (param_1[6] == 0) {
    param_1[6] = *(short *)(temp_v1 + 0x10);
  }
  return;
}

} /* extern "C" */
