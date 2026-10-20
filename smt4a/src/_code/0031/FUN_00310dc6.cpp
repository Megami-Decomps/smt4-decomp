/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310dc6` (_code @ 0x310dc6, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001225f0(int, char [4]);
int FUN_0012263e(int, unsigned int);
int FUN_002e7340(unsigned int, int, unsigned int, unsigned int);

/* stack frame of param_3: 3 slot(s), 9 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

/* Supplied declaration required: FUN_001225f0. */
/* Supplied declaration required: FUN_0012263e. */
/* Supplied declaration required: FUN_002e7340. */
extern int FUN_0030fba6(int, unsigned int);


void FUN_00310dc6(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  char temp_v4 [4];
  int iStack_20;
  int temp_v5;
  unsigned int uStack_18;
  
  iStack_20 = param_1;
  temp_v5 = param_2;
  uStack_18 = param_3;
  temp_v0 = FUN_0030fba6(param_1,param_3);
  if (temp_v0 != 0) {
    temp_v1 = 0;
    if (*(int *)(param_1 + 0x10) != 7) {
      temp_v2 = 0;
      while (temp_v2 = temp_v2 + 8, temp_v2 <= param_3) {
        FUN_0012263e(param_1,temp_v5 + temp_v1);
        temp_v1 = temp_v1 + 1;
      }
    }
    else {
      temp_v1 = param_3 >> 3;
      FUN_002e7340(*(unsigned int *)(param_1 + 8),temp_v5,temp_v1,*(unsigned int *)(param_1 + 0xc));
      *(unsigned int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + temp_v1;
    }
    param_3 = param_3 & 7;
    if (param_3 != 0) {
      temp_v2 = 0x80;
      temp_v3 = 0;
      do {
        temp_v4[0] = '\0';
        FUN_001225f0(param_1,temp_v4);
        if (temp_v4[0] != '\0') {
          temp_v3 = temp_v3 | temp_v2;
        }
        temp_v2 = temp_v2 >> 1;
        param_3 = (param_3 - 1) & 0xff;
      } while (param_3 != 0);
      *(char *)(temp_v5 + temp_v1) = (char)temp_v3;
    }
  }
  else {
    *(unsigned char *)(param_1 + 4) = 1;
  }
  return;
}

} /* extern "C" */
