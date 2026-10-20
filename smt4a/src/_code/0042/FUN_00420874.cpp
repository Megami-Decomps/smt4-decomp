/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00420874` (_code @ 0x420874, 0x1b8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163aa4(...);
int FUN_00224880(unsigned int);
int sysMemClear(unsigned int, int);
int FUN_003c12d8(int, int);
int FUN_0041e3a0(int, int);
int FUN_00420a2c(int);
int rt_memcpy_w(unsigned int, unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00163aa4. */
extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: FUN_00224880. */
extern unsigned int FUN_00261458(void);
/* Supplied declaration required: sysMemClear. */
extern int FUN_0038b320(void);
extern int FUN_003b70c0(void);
/* Supplied declaration required: FUN_003c12d8. */
/* Supplied declaration required: FUN_0041e3a0. */
/* Supplied declaration required: FUN_00420a2c. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00420874(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v1 = *(int *)(param_1 + 8);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        if (temp_v1 != 3) {
          return;
        }
        if (*(char *)(param_1 + 0x44) != '\0') {
          temp_v1 = FUN_00224880(*(unsigned int *)(param_1 + 0x40));
          if (temp_v1 != 2) {
            return;
          }
          *(unsigned char *)(param_1 + 0x44) = 0;
        }
        temp_v0 = *(unsigned char *)(param_1 + 7);
        *(unsigned char *)(param_1 + 7) = 0x13;
        *(unsigned char *)(param_1 + 0xd) = temp_v0;
        *(unsigned int *)(param_1 + 8) = 0;
        *(unsigned char *)(param_1 + 0xc) = 0;
        return;
      }
      if (*(char *)(param_1 + 0x44) != '\0') {
        FUN_00224880(*(unsigned int *)(param_1 + 0x40));
      }
      if (*(char *)(param_1 + *(int *)(param_1 + 0x18) * 0x8c + 0x4fe) == '\0') {
        FUN_00163aa4();
        temp_v1 = 0;
        if (temp_v1 < *(int *)(param_1 + 0x18)) {
          do {
            if (*(int *)(param_1 + 0x620) < temp_v1) {
              *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + 1;
              break;
            }
            FUN_00163aa4(param_1 + temp_v1 * 0x8c + 0x500);
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < *(int *)(param_1 + 0x18));
        }
        temp_v2 = FUN_001654d8(param_1 + 0x474);
        temp_v3 = FUN_001654e4(param_1 + 0x474);
        *(unsigned int *)(param_1 + 0x624) = temp_v2;
        *(unsigned int *)(param_1 + 0x628) = temp_v3;
        *(unsigned int *)(param_1 + 0x62c) = *(unsigned int *)(param_1 + 0x494);
        temp_v1 = 0;
        if (0 < *(int *)(param_1 + 0x18)) {
          do {
            temp_v5 = param_1 + temp_v1 * 0x8c;
            temp_v2 = FUN_001654d8(temp_v5 + 0x500);
            temp_v3 = FUN_001654e4(temp_v5 + 0x500);
            temp_v6 = *(unsigned int *)(temp_v5 + 0x520);
            temp_v5 = temp_v1 + 1;
            temp_v1 = param_1 + temp_v1 * 0x44;
            *(unsigned int *)(temp_v1 + 0x664) = temp_v2;
            *(unsigned int *)(temp_v1 + 0x668) = temp_v3;
            *(unsigned int *)(temp_v1 + 0x66c) = temp_v6;
            temp_v1 = temp_v5;
          } while (temp_v5 < *(int *)(param_1 + 0x18));
        }
        temp_v2 = FUN_001654d8(param_1 + 0x500);
        temp_v3 = FUN_001654e4(param_1 + 0x500);
        *(unsigned int *)(param_1 + 0x710) = temp_v2;
        *(unsigned int *)(param_1 + 0x714) = temp_v3;
        *(unsigned int *)(param_1 + 0x718) = *(unsigned int *)(param_1 + 0x520);
        return;
      }
      temp_v1 = *(int *)(param_1 + 8);
      *(int *)(param_1 + 8) = temp_v1 + 1;
      return;
    }
  }
  else {
    FUN_003c12d8(*(int *)(param_1 + 0x2f4) + 1,1);
    FUN_0041e3a0(param_1,0);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  if (*(char *)(param_1 + 0x44) != '\0') {
    FUN_00224880(*(unsigned int *)(param_1 + 0x40));
  }
  FUN_00420a2c(param_1);
  temp_v1 = FUN_0038b320();
  if (temp_v1 == 0) {
    return;
  }
  temp_v4 = *(unsigned int *)(param_1 + 0x2f4);
  if (temp_v4 < 5) {
    temp_v1 = FUN_0038b320();
    if (temp_v1 == 0) {
      return;
    }
    temp_v1 = FUN_003b70c0();
    if (temp_v1 != 0) {
      temp_v2 = FUN_00261458();
      rt_memcpy_w(param_1 + temp_v4 * 0x80 + 0x6c,temp_v2,0x80);
      *(unsigned char *)(param_1 + temp_v4 + 0x2ec) = 1;
    }
    else {
      sysMemClear(param_1 + temp_v4 * 0x80 + 0x6c,0x80);
      *(unsigned char *)(param_1 + temp_v4 + 0x2ec) = 0;
    }
  }
  temp_v1 = *(int *)(param_1 + 0x2f4);
  temp_v5 = temp_v1 + 1;
  *(int *)(param_1 + 0x2f4) = temp_v5;
  if (temp_v5 < 5) {
    FUN_003c12d8(temp_v1 + 2,1);
    return;
  }
  temp_v1 = *(int *)(param_1 + 8);
  *(unsigned char *)(param_1 + 0x15) = 1;
  *(int *)(param_1 + 8) = temp_v1 + 1;
  return;
}

} /* extern "C" */
