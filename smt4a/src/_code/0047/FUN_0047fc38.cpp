/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047fc38` (_code @ 0x47fc38, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192608(void);
int FUN_001a90f0(int *, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_00192608. */
extern int FUN_0019c06c(void);
/* Supplied declaration required: FUN_001a90f0. */
extern int FUN_00239200(void);


unsigned int FUN_0047fc38(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  char temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = FUN_0019c06c();
  if (temp_v0 != 0) {
    temp_v4 = *(char *)(temp_v0 + 8);
  }
  else {
    temp_v4 = '\0';
  }
  temp_v1 = FUN_00239200();
  temp_v0 = param_1;
  FUN_00192608();
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v3 = 0;
  if (temp_v0 != 0) {
    temp_v3 = (int)*(short *)(temp_v0 + 0x36);
    FUN_001a90f0(&temp_v5,temp_v0 + 0x31);
  }
  if (temp_v4 != '\x04') {
    if (temp_v4 != '\x05') {
      if (((temp_v4 == '\x06') && (temp_v2 = param_1 - 0x21d, -1 < (int)temp_v2)) &&
         ((temp_v2 < 0x78 &&
          ((temp_v1 = temp_v1 + temp_v2 * 0xc, (int)((unsigned int)*(unsigned short *)(temp_v1 + 0xb48) + temp_v3) < 999 ||
           ((int)((unsigned int)*(unsigned short *)(temp_v1 + 0xb4a) + (int)(*(signed char *)((unsigned char *)&temp_v5 + 3))) < 99)))))) {
        return 0;
      }
    }
    else {
      temp_v2 = param_1 - 0x1a5;
      if (((-1 < (int)temp_v2) && (temp_v2 < 0x78)) &&
         ((int)((unsigned int)*(unsigned short *)(temp_v1 + temp_v2 * 0xc + 0x5a8) + temp_v3) < 999)) {
        return 0;
      }
    }
  }
  else {
    temp_v2 = param_1 - 0x12d;
    if ((-1 < (int)temp_v2) && (temp_v2 < 0x78)) {
      temp_v1 = temp_v1 + temp_v2 * 0xc;
      if ((int)((unsigned int)*(unsigned short *)(temp_v1 + 8) + temp_v3) < 999) {
        return 0;
      }
      temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 10);
      if ((int)((int)(*(signed char *)((unsigned char *)&temp_v5 + 2)) + temp_v2) < 99) {
        return 0;
      }
      if ((int)(temp_v2 + (int)(char)temp_v6) < 99) {
        return 0;
      }
      return 1;
    }
  }
  return 1;
}

} /* extern "C" */
