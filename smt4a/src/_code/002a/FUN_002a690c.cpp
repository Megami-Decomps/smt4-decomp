/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a690c` (_code @ 0x2a690c, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);
int FUN_0028809c(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int FUN_001801a4(void);
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_0028809c. */
extern short FUN_003df57c(unsigned short, unsigned int);
extern short FUN_004bcbb4(int, unsigned short);


unsigned int FUN_002a690c(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  FUN_001aba54();
  if (param_2 != 0) {
    temp_v1 = param_1;
    FUN_0028809c(param_1,0xffffffff,param_2,param_3,0);
    temp_v5 = temp_v1 == 0;
    temp_v1 = FUN_001ab888();
    temp_v4 = 0;
    do {
      temp_v3 = (int)*(char *)(temp_v1 + temp_v4 + 0x1c88);
      if ((-1 < temp_v3) &&
         (temp_v2 = param_1, FUN_0028809c(param_1,temp_v3,param_2,param_3,0), temp_v2 == 0)) {
        temp_v5 = 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x18);
    if (temp_v5) {
      if (param_3 == 0) {
        if (param_1 < 0) {
          temp_v1 = FUN_001801a4();
          temp_v0 = FUN_003df57c(*(unsigned short *)(param_2 + 0x20),1);
          temp_v0 = *(short *)(temp_v1 + 0x2c) - temp_v0;
          *(short *)(temp_v1 + 0x2c) = temp_v0;
        }
        else {
          temp_v1 = FUN_001ab854();
          temp_v0 = FUN_004bcbb4(temp_v1,*(unsigned short *)(param_2 + 0x20));
          temp_v0 = *(short *)(temp_v1 + 0x2c) - temp_v0;
          *(short *)(temp_v1 + 0x2c) = temp_v0;
        }
        if (temp_v0 < 0) {
          *(unsigned short *)(temp_v1 + 0x2c) = 0;
        }
      }
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
