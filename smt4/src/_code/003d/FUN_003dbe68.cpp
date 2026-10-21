/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dbe68` (_code @ 0x3dbe68, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024679c(void);
int FUN_00249e54(unsigned int, char *);

/* Supplied declaration required: FUN_0024679c. */
/* Supplied declaration required: FUN_00249e54. */
extern unsigned int keyedRecordRegisterName(int);


unsigned int FUN_003dbe68(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  char *pcVar5;
  unsigned char temp_v4;
  unsigned char temp_v5;
  
  temp_v3 = 0;
  do {
    temp_v1 = param_1 + temp_v3 * 0x8c;
    pcVar5 = *(char **)(temp_v1 + 0x2ce0);
    temp_v0 = *pcVar5;
    temp_v4 = temp_v0 == 'V';
    if (temp_v4) {
      temp_v0 = pcVar5[1];
    }
    temp_v5 = temp_v4 && temp_v0 == 'E';
    if (temp_v4 && temp_v0 == 'E') {
      temp_v5 = pcVar5[2] == 'R';
    }
    if (temp_v5) {
      temp_v2 = keyedRecordRegisterName(temp_v1 + 0x2ce4);
      *(char *)(temp_v1 + 0x2cdc) = (char)temp_v2;
      FUN_00249e54(temp_v2,pcVar5);
      *(char *)(temp_v1 + 0x2cdc) = (char)temp_v2;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 5);
  FUN_0024679c();
  return 1;
}

} /* extern "C" */
