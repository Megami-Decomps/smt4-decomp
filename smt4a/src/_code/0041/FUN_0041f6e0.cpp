/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041f6e0` (_code @ 0x41f6e0, 0x300 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001801a4(void);
int FUN_001a9110(unsigned int, unsigned int);
int FUN_0023b45c(int);
int FUN_00275bc8(void);
int FUN_002a7324(int);
int FUN_002c8538(...);
int FUN_002e6354(unsigned int, int);
int FUN_002f0384(...);
int FUN_003c12d8(int, int);
int FUN_0041eb94(int);
int rt_memcpy_w(unsigned int, unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int FUN_0014af84(void);
/* Supplied declaration required: FUN_001801a4. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001a9110. */
extern unsigned int FUN_00228af0(void);
/* Supplied declaration required: FUN_0023b45c. */
extern unsigned int FUN_00261458(void);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_002a7324. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002f0384. */
extern int FUN_0038b320(void);
extern int FUN_003b70c0(void);
/* Supplied declaration required: FUN_003c12d8. */
extern int FUN_0040ab8c(unsigned int);
/* Supplied declaration required: FUN_0041eb94. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0041f6e0(int param_1)

{
/* irregular: 1 goto(s); 11 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  
  temp_v1 = *(int *)(param_1 + 8);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        return;
      }
      goto LAB_0041f880;
    }
  }
  else {
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
        temp_v3 = FUN_00261458();
        rt_memcpy_w(param_1 + temp_v4 * 0x80 + 0x6c,temp_v3,0x80);
        *(unsigned char *)(param_1 + temp_v4 + 0x2ec) = 1;
      }
      else {
        FUN_002e6354(param_1 + temp_v4 * 0x80 + 0x6c,0x80);
        *(unsigned char *)(param_1 + temp_v4 + 0x2ec) = 0;
      }
    }
    temp_v1 = *(int *)(param_1 + 0x2f4);
    temp_v2 = temp_v1 + 1;
    *(int *)(param_1 + 0x2f4) = temp_v2;
    if (temp_v2 < 1) {
      FUN_003c12d8(temp_v2 + 1,1);
      return;
    }
    if (*(char *)(param_1 + 0x13) == '\0') {
      *(unsigned int *)(param_1 + 8) = 2;
      return;
    }
    FUN_003c12d8(temp_v1 + 2,1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
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
      temp_v3 = FUN_00261458();
      rt_memcpy_w(param_1 + temp_v4 * 0x80 + 0x6c,temp_v3,0x80);
      *(unsigned char *)(param_1 + temp_v4 + 0x2ec) = 1;
    }
    else {
      FUN_002e6354(param_1 + temp_v4 * 0x80 + 0x6c,0x80);
      *(unsigned char *)(param_1 + temp_v4 + 0x2ec) = 0;
    }
  }
  temp_v2 = *(int *)(param_1 + 0x2f4) + 1;
  *(int *)(param_1 + 0x2f4) = temp_v2;
  if (temp_v2 < 5) {
    FUN_003c12d8(temp_v2 + 1,1);
    return;
  }
  *(unsigned char *)(param_1 + 0x15) = 1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
LAB_0041f880:
  temp_v1 = FUN_0040ab8c(*(unsigned int *)(param_1 + 0x58));
  if (temp_v1 != 0) {
    temp_v2 = FUN_0018206c(0x2b,0);
    temp_v1 = 0;
    if (temp_v2 != 0) {
      temp_v1 = *(int *)(param_1 + 0x38);
    }
    if ((temp_v2 != 0 && temp_v1 != 0) && (*(int *)(param_1 + 0x3c) != 0)) {
      if (*(int *)(param_1 + 0x40) == 0) {
        FUN_00275bc8();
        *(int *)(param_1 + 0x40) = temp_v1;
      }
      temp_v3 = FUN_00261458();
      rt_memcpy_w(temp_v3,*(unsigned int *)(param_1 + 0x1c),0x80);
      temp_v3 = FUN_00228af0();
      FUN_001a9110(temp_v3,*(unsigned int *)(param_1 + 0x20));
      temp_v3 = FUN_0014af84();
      rt_memcpy_w(temp_v3,*(unsigned int *)(param_1 + 0x24),0x2a71c);
      temp_v1 = 0;
      do {
        if (*(char *)(param_1 + temp_v1 + 0x2ec) == '\0') {
          puVar5 = (unsigned int *)FUN_001801a4();
          temp_v2 = param_1 + temp_v1 * 0x80;
          *(unsigned int *)(temp_v2 + 0x7e) = *puVar5;
          *(unsigned int *)(temp_v2 + 0x82) = puVar5[1];
          *(unsigned int *)(temp_v2 + 0x86) = puVar5[2];
          *(unsigned short *)(temp_v2 + 0x8a) = *(unsigned short *)(puVar5 + 3);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 5);
      FUN_0041eb94(param_1);
      temp_v3 = FUN_001801a4();
      rt_memcpy_w(temp_v3,*(unsigned int *)(param_1 + 0x54),0xe);
      FUN_002a7324(1);
      *(unsigned char *)(param_1 + 0x5c) = 1;
      if (*(char *)(*(int *)(param_1 + 0x2f8) + param_1 + 0x2ec) == '\0') {
        FUN_0023b45c(0);
        FUN_002c8538(1);
        FUN_002f0384(0);
        *(unsigned char *)(param_1 + 0x68) = 0;
      }
      temp_v0 = *(unsigned char *)(param_1 + 7);
      *(unsigned char *)(param_1 + 7) = 3;
      *(unsigned char *)(param_1 + 0xd) = temp_v0;
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned char *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

} /* extern "C" */
