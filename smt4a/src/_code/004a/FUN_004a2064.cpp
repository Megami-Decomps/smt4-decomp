/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a2064` (_code @ 0x4a2064, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0032d0c8(...);
int FUN_0035ad50(int, unsigned char [304]);
int FUN_004a16bc(void);
int FUN_004a1db4(int);
int FUN_004a3b48(int);
int FUN_004a41d8(int);
int FUN_004a6c50(int, int);
int words4At20Clear(int);
int FUN_004cf880(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int slotRecordFindById(short);
extern int FUN_002a482c(int);
extern int FUN_002a4b28(short);
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: FUN_0035ad50. */
/* Supplied declaration required: FUN_004a16bc. */
/* Supplied declaration required: FUN_004a1db4. */
/* Supplied declaration required: FUN_004a3b48. */
/* Supplied declaration required: FUN_004a41d8. */
/* Supplied declaration required: FUN_004a6c50. */
/* Supplied declaration required: words4At20Clear. */
/* Supplied declaration required: FUN_004cf880. */
extern int FUN_004cfe4c(int);
extern int FUN_004d0040(int);


void FUN_004a2064(int param_1)

{
/* irregular: 9 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar6;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [304];
  
  temp_v7 = param_1 + 0x864;
  if (*(int *)(param_1 + 0x14) != 0xb) {
    if (*(int *)(param_1 + 0x14) == 2) {
      temp_v3 = FUN_004cfe4c(param_1 + 0x20);
      temp_v1 = *(short *)(temp_v7 + temp_v3 * 0x20 + 4);
      FUN_004cf880(param_1);
      temp_v3 = FUN_004cfe4c(param_1 + 0x20);
      temp_v0 = *(short *)(temp_v7 + temp_v3 * 0x20 + 4);
      temp_v5 = (unsigned int)temp_v0;
      if (temp_v5 != (int)temp_v1) {
        if (*(char *)(param_1 + 0x860) != '\0') {
          temp_v3 = FUN_004cfe4c(param_1 + 0x20);
          temp_v1 = *(short *)(temp_v7 + temp_v3 * 0x20 + 4);
          temp_v5 = (unsigned int)temp_v1;
          if (*(char *)(param_1 + 0x861) != '\x01') {
            FUN_0035ad50(temp_v1,temp_v8);
            FUN_0032d0c8(0,1,temp_v5 & 0xffff,temp_v8);
          }
          else {
            temp_v2 = slotRecordFindById(temp_v1);
            FUN_0032d0c8(0,1,temp_v1,temp_v2);
          }
        }
        else {
          FUN_0035ad50(temp_v0,temp_v8);
          temp_v3 = FUN_002a4b28(temp_v0);
          if (temp_v3 != 0) {
            FUN_0032d0c8(0,1,temp_v5 & 0xffff,temp_v8);
          }
          else {
            FUN_0032d0c8(0,2,temp_v0,temp_v8);
          }
        }
      }
      if (*(char *)(param_1 + 0x860) != '\0') {
        FUN_004a16bc();
      }
      else {
        FUN_004a41d8(param_1);
      }
    }
  }
  else {
    FUN_004a1db4(param_1);
  }
  FUN_004a3b48(param_1);
  words4At20Clear(param_1 + 0x96);
  temp_v3 = FUN_004d0040(param_1 + 0x20);
  temp_v6 = 0;
  if (temp_v6 < temp_v3) {
    do {
      temp_v4 = FUN_002a482c(param_1 + 0x20);
      FUN_004a6c50(param_1 + 0x96,*(unsigned short *)(temp_v7 + (temp_v4 + temp_v6) * 0x20 + 4));
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v3);
  }
  temp_v7 = 0;
  temp_v3 = 0x10;
  do {
    psVar6 = (short *)(param_1 + 0x96 + temp_v7 * 2);
    temp_v1 = *psVar6;
    if ((temp_v1 != -1 && temp_v1 != 0) && (*(char *)(param_1 + 0x96 + temp_v7 + 0x20) == '\0')) {
      *psVar6 = -1;
    }
    temp_v3 = temp_v3 - 1;
    temp_v7 = temp_v7 + 1;
  } while (temp_v3 != 0);
  return;
}

} /* extern "C" */
