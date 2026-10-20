/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010889c` (_code @ 0x10889c, 0x238 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011340c(...);
int FUN_002bf810(...);
int FUN_002bf818(...);
int builtin_strncpy(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

/* Unsupported intrinsic, declaration required: builtin_strncpy (CALLOTHER). */
/* Supplied declaration required: FUN_0011340c. */
/* Supplied declaration required: FUN_002bf810. */
/* Supplied declaration required: FUN_002bf818. */
extern int jobGetWork(void);


unsigned char FUN_0010889c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  char temp_v5 [24];
  
  temp_v0 = jobGetWork();
  if (*(char *)(temp_v0 + 0xf28) == '\0') {
    return 0;
  }
  if (*(char *)(temp_v0 + 0xf2b) == '\0') {
    return 0;
  }
  if (*(char *)(temp_v0 + 0x1c) == '\0') {
    return 0;
  }
  builtin_strncpy(temp_v5,
                  "\x01\x02\x02\x03\x03\x03\x04\x04\x04\x04\x05\x05\x05\x05\x06\x06\x06\x06\a\a\a\b\b\t"
                  ,0x18);
  if (*(char *)(temp_v0 + 0x24) != '\0') {
    temp_v2 = *(float *)(temp_v0 + 0x28);
    *(int *)(temp_v0 + 0x20) = *(int *)(temp_v0 + 0x20) + 1;
    if ((int)temp_v2 >= 0x3e800001) {
      temp_v2 = temp_v2 - 0.13f / *(float *)(temp_v0 + 0x30);
      *(float *)(temp_v0 + 0x28) = temp_v2;
    }
    if ((int)temp_v2 < 0x3e800001) {
      temp_v2 = 0.25f;
    }
    temp_v3 = *(float *)(temp_v0 + 0x2c);
    *(float *)(temp_v0 + 0x28) = temp_v2;
    if ((int)temp_v3 >= 0x3e800001) {
      temp_v3 = temp_v3 - 0.110000014f / *(float *)(temp_v0 + 0x30);
      *(float *)(temp_v0 + 0x2c) = temp_v3;
    }
    temp_v1 = 0;
    if ((int)temp_v3 < 0x3e800001) {
      temp_v3 = 0.25f;
    }
    *(float *)(temp_v0 + 0x2c) = temp_v3;
    do {
      if ((int)temp_v5[temp_v1] <= *(int *)(temp_v0 + 0x20)) {
        *(unsigned char *)(temp_v0 + temp_v1 * 0x8c + 0xd9) = 0;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
    if (*(char *)(temp_v0 + 0xd6d) != '\0') {
      FUN_0011340c(1);
      return 0;
    }
    temp_v0 = temp_v0 + 0xd74;
  }
  else {
    temp_v2 = *(float *)(temp_v0 + 0x28);
    if ((int)temp_v2 < 0x3ec28f5c) {
      temp_v2 = 0.13f / *(float *)(temp_v0 + 0x30) + temp_v2;
      *(float *)(temp_v0 + 0x28) = temp_v2;
    }
    temp_v3 = 0.13f;
    if ((int)temp_v2 < 0x3ec28f5d) {
      temp_v3 = temp_v2;
    }
    temp_v4 = *(float *)(temp_v0 + 0x2c);
    if ((int)temp_v2 >= 0x3ec28f5d) {
      temp_v3 = 0.38f;
    }
    *(float *)(temp_v0 + 0x28) = temp_v3;
    if ((int)temp_v4 < 0x3eb851ec) {
      temp_v4 = 0.110000014f / *(float *)(temp_v0 + 0x30) + temp_v4;
      *(float *)(temp_v0 + 0x2c) = temp_v4;
    }
    if ((int)temp_v4 >= 0x3eb851ed) {
      temp_v4 = 0.36f;
    }
    *(float *)(temp_v0 + 0x2c) = temp_v4;
    temp_v1 = FUN_002bf818(temp_v0 + 0xd74);
    if (temp_v1 == 0) {
      FUN_0011340c(1);
      return 0;
    }
    temp_v1 = *(int *)(temp_v0 + 0x20) + 1;
    *(int *)(temp_v0 + 0x20) = temp_v1;
    if (temp_v1 == 1) {
      FUN_002bf810(0x100025a);
    }
    temp_v1 = 0;
    do {
      if ((int)temp_v5[temp_v1] <= *(int *)(temp_v0 + 0x20)) {
        FUN_002bf818(temp_v0 + temp_v1 * 0x8c + 0x54);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x18);
    if (*(char *)(temp_v0 + 0xd72) == '\0') {
      FUN_0011340c(1);
      return 0;
    }
    temp_v0 = temp_v0 + 0xe00;
  }
  FUN_002bf818(temp_v0);
  FUN_0011340c(1);
  return 0;
}

} /* extern "C" */
