#include "romwright_types.h"

extern "C" {

int FUN_00184528(int, int);
int FUN_004935b0(int, unsigned int, unsigned int);
int FUN_004cf8dc(int, int);
int FUN_004d0100(int);
int FUN_004d01f8(int);
int FUN_004d0440(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: FUN_00184528. */
extern int FUN_002a482c(int);
extern int FUN_002c7ca0(void);
extern int FUN_002f036c(void);
extern int FUN_0031d174(int);
extern int FUN_0035db94(void);
extern int FUN_0037df48(void);
/* Supplied declaration required: FUN_004935b0. */
/* Supplied declaration required: FUN_004cf8dc. */
/* Supplied declaration required: FUN_004d0100. */
/* Supplied declaration required: FUN_004d01f8. */
/* Supplied declaration required: FUN_004d0440. */


void FUN_004a4a8c(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  FUN_004cf8dc(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa872));
  temp_v5 = param_1 + *(short *)(param_1 + 0xa872) * 0x8c + 0xfc;
  temp_v1 = FUN_001654e4(temp_v5);
  temp_v2 = FUN_001654d8(temp_v5);
  FUN_004935b0(param_1 + 200,temp_v2,temp_v1);
  temp_v5 = FUN_002f036c();
  if ((temp_v5 != 0) && (temp_v5 = FUN_002c7ca0(), temp_v5 == 0)) {
    *(unsigned int *)(param_1 + 0x14) = 5;
    *(unsigned int *)(param_1 + 0x18) = 0;
    temp_v5 = FUN_0035db94();
    if (temp_v5 == 1) {
      temp_v0 = 8;
    }
    else {
      temp_v0 = 10;
    }
    *(unsigned short *)(param_1 + 0xa872) = temp_v0;
    FUN_00184528(param_1 + 0xdc,(short)temp_v0);
    return;
  }
  temp_v5 = FUN_002f036c();
  if ((temp_v5 == 0) && (0 < *(int *)(param_1 + 0x28))) {
    int a = FUN_002a482c(param_1 + 0x20);
    int c = FUN_0031d174(param_1 + 0x20);
    temp_v4 = FUN_0037df48();
    if (temp_v4 != 1) {
      temp_v4 = FUN_0037df48();
      if (temp_v4 == -1) {
        FUN_004d01f8(param_1 + 0x20);
      }
    }
    else {
      FUN_004d0100(param_1 + 0x20);
    }
    temp_v4 = FUN_002a482c(param_1 + 0x20);
    if ((temp_v4 != a) || (temp_v5 = FUN_0031d174(param_1 + 0x20), temp_v5 != c)) {
      FUN_004d0440();
      return;
    }
  }
  return;
}

} /* extern "C" */
