/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a1db4` (_code @ 0x4a1db4, 0x2ac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167f08(void);
int FUN_001681cc(void);
int FUN_00183f58(int, int, int, int);
int FUN_00184528(int, int);
int FUN_0037c8b4(unsigned int, int);
int FUN_0037c8e4(int, int);
int FUN_003baa3c(int);
int FUN_004935b0(int, unsigned int, unsigned int);
int FUN_004a3b48(int);
int FUN_004a8750(unsigned int, int, int);
int FUN_004cf8dc(int, int);
int FUN_004d0100(int);
int FUN_004d01f8(int);
int FUN_004d0440(void);
int FUN_004d044c(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_0057f0b8; /* 0x57f0b8 */

extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: FUN_00167f08. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00183f58. */
/* Supplied declaration required: FUN_00184528. */
extern int FUN_0023b258(void);
extern int FUN_002a482c(int);
extern int FUN_002a4b28(unsigned short);
extern int FUN_002c7ca0(void);
extern int FUN_002f036c(void);
extern int FUN_0031d174(int);
extern int FUN_0035db94(void);
/* Supplied declaration required: FUN_0037c8b4. */
/* Supplied declaration required: FUN_0037c8e4. */
extern int FUN_0037df48(void);
/* Supplied declaration required: FUN_003baa3c. */
/* Supplied declaration required: FUN_004935b0. */
/* Supplied declaration required: FUN_004a3b48. */
/* Supplied declaration required: FUN_004a8750. */
/* Supplied declaration required: FUN_004cf8dc. */
extern int FUN_004cfe4c(int);
/* Supplied declaration required: FUN_004d0100. */
/* Supplied declaration required: FUN_004d01f8. */
/* Supplied declaration required: FUN_004d0440. */
/* Supplied declaration required: FUN_004d044c. */
extern int FUN_004d0524(void);


void FUN_004a1db4(int param_1)

{
/* irregular: 15 native warning(s); review required */
  unsigned short temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  
  temp_v3 = FUN_0023b258();
  if (temp_v3 == 0) {
    return;
  }
  FUN_004cf8dc(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa874));
  temp_v3 = param_1 + *(short *)(param_1 + 0xa874) * 0x8c + 0xfc;
  temp_v4 = FUN_001654e4(temp_v3);
  temp_v5 = FUN_001654d8(temp_v3);
  FUN_004935b0(param_1 + 200,temp_v5,temp_v4);
  temp_v3 = FUN_002f036c();
  if ((temp_v3 != 0) && (temp_v3 = FUN_002c7ca0(), temp_v3 == 0)) {
    *(unsigned int *)(param_1 + 0x14) = 0xc;
    *(unsigned int *)(param_1 + 0x18) = 0;
    temp_v3 = FUN_0035db94();
    if (temp_v3 == 1) {
      temp_v2 = 8;
    }
    else {
      temp_v2 = 10;
    }
    *(unsigned short *)(param_1 + 0xa874) = temp_v2;
    FUN_00184528(param_1 + 0xdc,temp_v2);
    if (*(char *)(param_1 + 0x860) != '\0') {
      return;
    }
    temp_v3 = FUN_004cfe4c(param_1 + 0x20);
    temp_v0 = *(unsigned short *)(param_1 + temp_v3 * 0x20 + 0x868);
    temp_v8 = (unsigned int)temp_v0;
    FUN_004a8750(temp_v8,*(unsigned char *)(param_1 + 0x861),0);
    FUN_0037c8e4(1,0);
    temp_v3 = FUN_002a4b28(temp_v0);
    if (temp_v3 != 0) {
      FUN_0037c8b4(-temp_v8,0);
      return;
    }
    FUN_003baa3c(1);
    return;
  }
  temp_v3 = FUN_002f036c();
  if (temp_v3 != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) < 1) {
    return;
  }
  temp_v3 = FUN_002a482c(param_1 + 0x20);
  temp_v6 = FUN_0031d174(param_1 + 0x20);
  temp_v7 = FUN_0037df48();
  if (temp_v7 != 1) {
    temp_v7 = FUN_0037df48();
    if (temp_v7 != -1) {
      if (*(char *)(param_1 + 0x860) != '\x01') {
        temp_v7 = FUN_002a482c(param_1 + 0x20);
        if ((temp_v7 == temp_v3) && (temp_v3 = FUN_0031d174(param_1 + 0x20), temp_v3 == temp_v6)) {
          return;
        }
        FUN_004d0440();
        return;
      }
      temp_v7 = FUN_004d0524();
      if (temp_v7 != 0) {
        temp_v1 = *(char *)(param_1 + 0x861) + '\x01';
        *(char *)(param_1 + 0x861) = temp_v1;
        if ('\x01' < temp_v1) {
          *(unsigned char *)(param_1 + 0x861) = 0;
        }
        FUN_004d044c();
        *(unsigned char *)(param_1 + 0x863) = 1;
        DAT_0057f0b8 = 0xffffffff;
        FUN_004a3b48(param_1);
        FUN_00167f08();
        FUN_001681cc();
      }
    }
    else {
      FUN_004d01f8(param_1 + 0x20);
    }
  }
  else {
    FUN_004d0100(param_1 + 0x20);
  }
  if (*(char *)(param_1 + 0x860) == '\x01') {
    if (*(char *)(param_1 + 0x861) != '\x01') {
      FUN_00183f58(2,4,0x41,1);
    }
    else {
      FUN_00183f58(2,4,0x40,1);
    }
  }
  temp_v7 = FUN_002a482c(param_1 + 0x20);
  if ((temp_v7 == temp_v3) && (temp_v3 = FUN_0031d174(param_1 + 0x20), temp_v3 == temp_v6)) {
    return;
  }
  FUN_004d0440();
  return;
}

} /* extern "C" */
