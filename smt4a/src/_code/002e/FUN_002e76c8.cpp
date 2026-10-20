/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e76c8` (_code @ 0x2e76c8, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b4a90(int, int, unsigned int);
int FUN_00203b40(int, int, int, int, int, int);
int FUN_002a4964(int);
int rt_memcpy_w(unsigned char [300], unsigned char *, int);

/* stack frame of param_1: 4 slot(s), 14 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned int spE9C; /* 0xe9c: local_e9c */
    unsigned int spEA0; /* 0xea0: local_ea0 */
} param_1_stack;

/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002a4964. */
extern int FUN_003e4d68(unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002e76c8(int param_1)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char uStack00000000;
  unsigned char temp_v5 [300];
  short asStack_d6c [1698];
  short temp_v6;
  
  temp_v3 = *(int *)(param_1 + 4);
  if (temp_v3 != 0) {
    rt_memcpy_w(temp_v5,&uStack00000000,0xe74);
    *(unsigned int *)(temp_v3 + 0x328) = 0xffffffff;
    FUN_001b4a90(temp_v3 + 0x2c4,0x30,0xffffffff);
    temp_v4 = 0;
    temp_v2 = 0;
    do {
      if (asStack_d6c[temp_v2 * 0x9a] != 0) {
        if ((asStack_d6c[temp_v2 * 0x9a] == temp_v6) && (temp_v6 != 0)) {
          *(int *)(temp_v3 + 0x328) = temp_v4;
        }
        temp_v1 = 0;
        do {
          temp_v0 = FUN_003e4d68(temp_v1 & 0xffff);
          if (*(short *)(temp_v0 + 300) == asStack_d6c[temp_v2 * 0x9a]) goto LAB_002e777c;
          temp_v1 = temp_v1 + 1;
        } while ((int)temp_v1 < 0xc);
        temp_v1 = 0;
LAB_002e777c:
        temp_v0 = temp_v4 * 4;
        temp_v4 = temp_v4 + 1;
        *(unsigned int *)(temp_v3 + temp_v0 + 0x2c4) = temp_v1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0xc);
    *(int *)(temp_v3 + 0x324) = temp_v4;
    FUN_00203b40(temp_v3 + 0x260,temp_v4,temp_v4,1,1,1);
    if (-1 < *(int *)(temp_v3 + 0x328)) {
      FUN_002a4964(temp_v3 + 0x260);
      *(unsigned int *)(temp_v3 + 0x32c) = *(unsigned int *)(temp_v3 + 0x328);
      *(unsigned int *)(temp_v3 + 0x2f4) = *(unsigned int *)(temp_v3 + 0x328);
    }
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
