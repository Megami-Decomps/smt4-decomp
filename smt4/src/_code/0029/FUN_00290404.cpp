/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290404` (_code @ 0x290404, 0x1c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002903f0(void);
int FUN_0029ee6c(int, int);
int FUN_0029efc0(...);
int FUN_002b63c0(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0043dd50; /* 0x43dd50 */

extern int FUN_0028f304(void);
/* Supplied declaration required: FUN_002903f0. */
extern int FUN_00298dc8(void);
extern int FUN_00298e00(unsigned int);
extern int FUN_00298e20(unsigned int);
/* Supplied declaration required: FUN_0029ee6c. */
extern int FUN_0029efa8(int);
/* Supplied declaration required: FUN_0029efc0. */
/* Supplied declaration required: FUN_002b63c0. */
extern unsigned int FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


void FUN_00290404(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v3 = DAT_0043dd50;
  if (*(char *)(DAT_0043dd50 + 0x5c4) != '\0') {
    temp_v1 = DAT_0043dd50 + 0x5fc;
    temp_v2 = FUN_0029efc0();
    temp_v1 = FUN_0029efa8(temp_v1);
    temp_v0 = *(unsigned short *)(temp_v3 + (temp_v1 + temp_v2) * 2 + 0x6c4);
  }
  else {
    temp_v1 = FUN_0029efc0(DAT_0043dd50 + 0x660);
    temp_v2 = FUN_0029efa8(temp_v3 + 0x660);
    temp_v0 = *(unsigned short *)(temp_v3 + (temp_v2 + temp_v1) * 2 + 0x78a);
  }
  temp_v6 = (unsigned int)temp_v0;
  if (temp_v6 == 0) {
    return;
  }
  if (*(char *)(temp_v3 + 0x5c4) != '\0') {
    temp_v3 = FUN_00298dc8();
    if (temp_v3 != 0) {
      temp_v3 = FUN_002903f0();
      if (temp_v3 != 0) {
        temp_v6 = 6;
      }
      else {
        temp_v6 = 0;
      }
    }
    else {
      temp_v3 = FUN_00298e20(temp_v6);
      if (temp_v3 == 0) {
        return;
      }
      temp_v6 = 3;
    }
  }
  else {
    temp_v5 = temp_v6;
    FUN_002b63c0();
    if (*(char *)(temp_v5 + 6) != '\0') {
      temp_v3 = FUN_0028f304();
      if (temp_v3 != 0) {
        temp_v5 = FUN_002903f0();
        if (temp_v5 == temp_v6) {
          temp_v6 = 0;
        }
        else {
          temp_v3 = FUN_00298e20(temp_v6);
          if (temp_v3 == 0) {
            temp_v6 = 1;
          }
          else {
            temp_v6 = 2;
          }
        }
      }
      else {
        temp_v3 = FUN_00298e20(temp_v6);
        if (temp_v3 == 0) {
          temp_v6 = 5;
        }
        else {
          temp_v6 = 3;
        }
      }
    }
    else {
      temp_v3 = FUN_00298e20(temp_v6);
      if (temp_v3 != 0) {
        temp_v3 = FUN_00298e00(temp_v6);
        if (temp_v3 != 0) {
          temp_v6 = 4;
        }
        else {
          temp_v6 = 3;
        }
      }
      else {
        temp_v6 = 0;
      }
    }
  }
  temp_v4 = FUN_002c0cec(0x34,0);
  temp_v3 = FUN_002c0cc4();
  temp_v5 = FUN_002c0c74(temp_v4);
  if (temp_v6 < temp_v5) {
    temp_v3 = temp_v3 + temp_v6 * 0x4a + 1;
  }
  else {
    temp_v3 = 0;
  }
  FUN_0029ee6c(temp_v3,0x323232ff);
  return;
}

} /* extern "C" */
