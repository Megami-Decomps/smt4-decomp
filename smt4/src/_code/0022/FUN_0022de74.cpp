/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022de74` (_code @ 0x22de74, 0x238 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022d1a8(int);
int bitsetSetBit(unsigned char [14], int);
int FUN_00258a24(unsigned int);
int FUN_0029c4c8(int);
int FUN_0029c4e4(unsigned char [14], int);
int FUN_0029c6b0(unsigned char [14]);
int FUN_0029d684(int);
int FUN_0029d8a0(unsigned int);
int FUN_0029dfc0(int);
int FUN_002b9024(void);
int memClear(unsigned char [1412], int);
int rt_memcpy_w(unsigned char [14], int, int);

/* stack frame of param_1: 22 slot(s), 78 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp5A8; /* 0x5a8: local_5a8 */
    unsigned int sp5AC; /* 0x5ac: local_5ac */
    unsigned int sp5B0; /* 0x5b0: local_5b0 */
    unsigned int sp5B4; /* 0x5b4: local_5b4 */
    unsigned int sp5B8; /* 0x5b8: local_5b8 */
    unsigned int sp5BC; /* 0x5bc: local_5bc */
    unsigned int sp5C0; /* 0x5c0: local_5c0 */
    unsigned int sp5C4; /* 0x5c4: local_5c4 */
    unsigned int sp5C8; /* 0x5c8: local_5c8 */
    unsigned int sp5CC; /* 0x5cc: local_5cc */
    unsigned int sp5D0; /* 0x5d0: local_5d0 */
    unsigned int sp5D4; /* 0x5d4: local_5d4 */
    unsigned int sp5D8; /* 0x5d8: local_5d8 */
    unsigned int sp5DC; /* 0x5dc: local_5dc */
    unsigned int sp5E0; /* 0x5e0: local_5e0 */
    unsigned int sp5E4; /* 0x5e4: local_5e4 */
    unsigned short sp5EC; /* 0x5ec: local_5ec */
    unsigned short sp604; /* 0x604: local_604 */
    unsigned short sp606; /* 0x606: local_606 */
    unsigned short sp620; /* 0x620: local_620 */
    unsigned short sp622; /* 0x622: local_622 */
} param_1_stack;

/* Supplied declaration required: FUN_0022d1a8. */
extern int FUN_0023360c(int);
/* Supplied declaration required: bitsetSetBit. */
/* Supplied declaration required: FUN_00258a24. */
/* Supplied declaration required: FUN_0029c4c8. */
/* Supplied declaration required: FUN_0029c4e4. */
/* Supplied declaration required: FUN_0029c6b0. */
/* Supplied declaration required: FUN_0029d684. */
/* Supplied declaration required: FUN_0029d8a0. */
/* Supplied declaration required: FUN_0029dfc0. */
extern int FUN_0029e0f8(void);
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0022de74(int param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8 [14];
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  unsigned int temp_v26;
  unsigned int temp_v27;
  unsigned int temp_v28;
  unsigned int temp_v29;
  unsigned char temp_v30 [1412];
  
  if (*(short *)(param_1 + 0x5a8) == 0) {
    FUN_0029dfc0(0);
    return;
  }
  temp_v1 = FUN_0023360c(param_1 + 0x20);
  temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x5ac);
  temp_v6 = (unsigned int)temp_v0;
  temp_v1 = FUN_0029e0f8();
  if (temp_v1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x5a4) != '\x01') {
    if (*(unsigned short *)(param_1 + 0xa5b2) == temp_v6) {
      return;
    }
    FUN_0029d8a0(temp_v6);
    FUN_0029d684(1);
    FUN_0022d1a8(param_1);
  }
  else {
    temp_v2 = (unsigned int)*(unsigned char *)(param_1 + 0x5a7);
    temp_v7 = temp_v2 == 0;
    if (temp_v7) {
      temp_v2 = (unsigned int)*(unsigned short *)(param_1 + 0xa5b2);
    }
    if (temp_v7 && temp_v2 == temp_v6) {
      return;
    }
    if (*(char *)(param_1 + 0x5a5) != '\x01') {
      FUN_0029d8a0(temp_v6);
      FUN_0029c4c8(0);
      if (*(char *)(param_1 + 0x5a7) != '\0') {
        temp_v3 = 0;
        FUN_00258a24(temp_v3);
        *(unsigned char *)(param_1 + 0x5a7) = 0;
        FUN_0022d1a8(param_1);
        *(unsigned short *)(param_1 + 0xa5b2) = temp_v0;
        return;
      }
      FUN_0029d684(1);
    }
    else {
      temp_v1 = FUN_002a8764();
      temp_v5 = 0;
      temp_v2 = 0;
      if (temp_v2 < *(unsigned char *)(temp_v1 + 0x910b)) {
        do {
          temp_v4 = (int)*(char *)(temp_v1 + temp_v2 + 0x90f0);
          if ((-1 < temp_v4) &&
             (temp_v4 = temp_v1 + temp_v4 * 0x604, temp_v5 = temp_v4 + 0x90,
             *(unsigned short *)(temp_v4 + 0xd6) == temp_v6)) break;
          temp_v2 = (temp_v2 + 1) & 0xffff;
        } while (temp_v2 < *(unsigned char *)(temp_v1 + 0x910b));
      }
      FUN_0029d8a0(temp_v6);
      FUN_002b9024();
      rt_memcpy_w(temp_v8,temp_v5,0x604);
      temp_v14 = 0;
      temp_v15 = 0;
      temp_v16 = 0;
      temp_v17 = 0;
      temp_v18 = 0;
      temp_v19 = 0;
      temp_v20 = 0;
      temp_v21 = 0;
      temp_v22 = 0;
      temp_v23 = 0;
      temp_v24 = 0;
      temp_v25 = 0;
      temp_v26 = 0;
      temp_v27 = 0;
      temp_v28 = 0;
      temp_v29 = 0;
      memClear(temp_v30,0x500);
      bitsetSetBit(temp_v8,*(unsigned short *)(temp_v6 + 0x38));
      FUN_0029c6b0(temp_v8);
      temp_v13 = 0;
      temp_v11 = temp_v9;
      temp_v12 = temp_v10;
      FUN_0029c4e4(temp_v8,0);
      FUN_0029c4c8(1);
      if (*(char *)(param_1 + 0x5a7) == '\0') {
        FUN_0029d684(1);
        *(unsigned char *)(param_1 + 0x5a7) = 0;
        FUN_0022d1a8(param_1);
        *(unsigned short *)(param_1 + 0xa5b2) = temp_v0;
        return;
      }
      temp_v3 = 1;
      FUN_00258a24(temp_v3);
    }
    *(unsigned char *)(param_1 + 0x5a7) = 0;
    FUN_0022d1a8(param_1);
  }
  *(unsigned short *)(param_1 + 0xa5b2) = temp_v0;
  return;
}

} /* extern "C" */
