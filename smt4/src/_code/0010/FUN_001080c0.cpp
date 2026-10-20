/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001080c0` (_code @ 0x1080c0, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00117a70(int);
int FUN_001192c8(void);

/* Supplied declaration required: FUN_00117a70. */
/* Supplied declaration required: FUN_001192c8. */
extern int jobGetWork(void);


unsigned int FUN_001080c0(void)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = jobGetWork();
  temp_v3 = *(char *)(temp_v1 + 0xe8c) != '\0';
  temp_v0 = '\0';
  if (temp_v3) {
    temp_v0 = *(char *)(temp_v1 + 0xe8d);
  }
  if (temp_v3 && temp_v0 != '\0') {
    temp_v3 = *(char *)(temp_v1 + 0xe95) != '\0';
    temp_v2 = 0;
    if (temp_v3) {
      temp_v2 = *(int *)(temp_v1 + 0xfdc);
    }
    if ((temp_v3 && temp_v2 != 0) && (*(char *)(temp_v1 + 0xfd8) == '\0')) {
      if (*(char *)(temp_v1 + 0xfe0) != '\0') {
        FUN_001192c8();
      }
      else {
        FUN_00117a70(1);
      }
    }
  }
  return 0;
}

} /* extern "C" */
