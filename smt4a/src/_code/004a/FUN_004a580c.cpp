/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a580c` (_code @ 0x4a580c, 0x310 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184528(...);
int FUN_0019de98(int, unsigned int);
int FUN_00212724(void);
int FUN_0022e774(void);
int FUN_0023b27c(void);
int FUN_0031f208(int);
int FUN_0031f27c(int, int);
int FUN_0032d0c8(int, int, int);
int FUN_003343f0(...);
int FUN_004a4848(int);
int FUN_004cf880(int);
int FUN_004d03d8(int, int, int, int);
int FUN_004d0420(int, int, int, int);
int FUN_004d0434(void);
int FUN_004d044c(void);
int FUN_004d06e4(int);
int FUN_004d097c(unsigned int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_0018349c(int, int);
/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_00212724. */
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_0023b27c. */
extern int FUN_002f036c(void);
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: FUN_0031f27c. */
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: FUN_003343f0. */
extern int FUN_0035db94(void);
/* Supplied declaration required: FUN_004a4848. */
/* Supplied declaration required: FUN_004cf880. */
extern int FUN_004cfe4c(int);
/* Supplied declaration required: FUN_004d03d8. */
/* Supplied declaration required: FUN_004d0420. */
/* Supplied declaration required: FUN_004d0434. */
/* Supplied declaration required: FUN_004d044c. */
extern int FUN_004d04f4(void);
extern int FUN_004d0554(void);
/* Supplied declaration required: FUN_004d06e4. */
/* Supplied declaration required: FUN_004d097c. */


void FUN_004a580c(int param_1)

{
/* irregular: 17 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  
  temp_v2 = FUN_004cfe4c(param_1 + 0x20);
  temp_v1 = *(short *)(param_1 + 0x864 + temp_v2 * 0x20 + 4);
  FUN_004cf880(param_1);
  temp_v2 = FUN_004cfe4c(param_1 + 0x20);
  temp_v0 = *(short *)(param_1 + 0x864 + temp_v2 * 0x20 + 4);
  if (temp_v0 != temp_v1) {
    FUN_0032d0c8(0,1,temp_v0);
  }
  temp_v2 = FUN_004d0554();
  temp_v9 = 0;
  if (0 < *(short *)(param_1 + 0x864)) {
    temp_v9 = FUN_004d04f4();
  }
  if ((0 < *(short *)(param_1 + 0xa97a)) && (*(char *)(param_1 + 0x860) == '\x01')) {
    temp_v5 = 0;
    do {
      temp_v3 = FUN_0018349c(param_1 + 200,temp_v5 + 0x1023);
      temp_v6 = (int)*(short *)(temp_v3 + 8);
      temp_v1 = *(short *)(temp_v3 + 10);
      temp_v7 = (int)**(short **)(temp_v3 + 0xc);
      temp_v8 = (int)(*(short **)(temp_v3 + 0xc))[1];
      temp_v3 = temp_v6;
      FUN_004d03d8(temp_v6,(int)temp_v1,temp_v7,temp_v8);
      if (temp_v3 != 0) {
        *(char *)(param_1 + 0xa97e) = (char)temp_v5;
      }
      FUN_004d0420(temp_v6,(int)temp_v1,temp_v7,temp_v8);
      if (temp_v6 != 0) {
        *(char *)(param_1 + 0xa97e) = (char)temp_v5;
        if (temp_v5 != 0) {
          temp_v1 = *(short *)(param_1 + 0xa97c) + 1;
          *(short *)(param_1 + 0xa97c) = temp_v1;
          if (*(short *)(param_1 + 0xa97a) <= temp_v1) {
            temp_v1 = 0;
            *(short *)(param_1 + 0xa97c) = temp_v1;
          }
        }
        else {
          temp_v1 = *(short *)(param_1 + 0xa97c) - 1;
          *(short *)(param_1 + 0xa97c) = temp_v1;
          if (temp_v1 < 0) {
            temp_v1 = *(short *)(param_1 + 0xa97a) - 1;
            *(short *)(param_1 + 0xa97c) = temp_v1;
          }
        }
        temp_v5 = (int)*(short *)(param_1 + *(short *)(param_1 + 0xa97c) * 2 + 0xa87a);
        if (*(int *)(param_1 + 0xa874) != temp_v5) {
          *(int *)(param_1 + 0xa874) = temp_v5;
          FUN_004a4848(param_1);
        }
        break;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 2);
  }
  temp_v5 = FUN_002f036c();
  if (temp_v5 != 0) {
    *(unsigned int *)(param_1 + 0x14) = 4;
    *(unsigned int *)(param_1 + 0x18) = 0;
    temp_v2 = FUN_0035db94();
    if (temp_v2 == 1) {
      temp_v4 = 9;
    }
    else {
      temp_v4 = 0xb;
    }
    *(unsigned short *)(param_1 + 0xa872) = temp_v4;
    FUN_00184528(param_1 + 0xdc,temp_v4);
    FUN_004d097c(*(unsigned int *)(param_1 + 0x84c));
    FUN_004d06e4(param_1 + 0x818);
    return;
  }
  if (temp_v2 == 0) {
    if (temp_v9 == 0) {
      return;
    }
    FUN_0031f27c(0xc,0);
    FUN_0031f208(1);
    FUN_0031f208(2);
    FUN_0031f208(4);
    FUN_0031f208(5);
    FUN_0031f208(3);
    FUN_0023b27c();
    FUN_003343f0(1);
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_0019de98(0,0xf4f4f4ff);
    FUN_004d044c();
    return;
  }
  FUN_0022e774();
  if (*(char *)(param_1 + 0x860) == '\0') {
    FUN_00212724();
  }
  FUN_0019de98(0,0xf4f4f4ff);
  FUN_00184528(param_1 + 0xdc,1);
  FUN_003343f0(1);
  *(unsigned int *)(param_1 + 0x14) = 6;
  *(unsigned int *)(param_1 + 0x18) = 0;
  FUN_004d0434();
  return;
}

} /* extern "C" */
