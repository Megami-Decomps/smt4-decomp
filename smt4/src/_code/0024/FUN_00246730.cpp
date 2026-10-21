/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246730` (_code @ 0x246730, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00249e54(unsigned int, char *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_0047e500; /* 0x47e500 */
extern unsigned int DAT_0047e504; /* 0x47e504 */

/* Supplied declaration required: FUN_00249e54. */
extern unsigned int keyedRecordRegisterName(int);


unsigned int FUN_00246730(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  char *pcVar6;
  unsigned char temp_v5;
  unsigned char temp_v6;
  
  temp_v4 = 0;
  do {
    temp_v1 = param_1 + temp_v4 * 0x8c;
    pcVar6 = *(char **)(temp_v1 + 0x2bc8);
    temp_v0 = *pcVar6;
    temp_v5 = temp_v0 == 'V';
    if (temp_v5) {
      temp_v0 = pcVar6[1];
    }
    temp_v6 = temp_v5 && temp_v0 == 'E';
    if (temp_v5 && temp_v0 == 'E') {
      temp_v6 = pcVar6[2] == 'R';
    }
    if (temp_v6) {
      temp_v2 = keyedRecordRegisterName(temp_v1 + 0x2bcc);
      *(char *)(temp_v1 + 0x2bc4) = (char)temp_v2;
      FUN_00249e54(temp_v2,pcVar6);
      *(char *)(temp_v1 + 0x2bc4) = (char)temp_v2;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 2);
  temp_v3 = 0;
  DAT_0047e504 = 0;
  if (0 < (int)DAT_0047e500) {
    temp_v3 = DAT_0047e500 & 1;
    temp_v4 = 0;
    if (temp_v3 != 0) {
      do {
        if (*(int *)(*(int *)(temp_v4 * 0x4c + 0x47d200) + 0x30) == 0) {
          DAT_0047e504 = 0;
          return 1;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < (int)temp_v3);
    }
  }
  while( 1 ) {
    if ((int)DAT_0047e500 <= (int)temp_v3) {
      DAT_0047e504 = 4;
      return 0;
    }
    if ((*(int *)(*(int *)(temp_v3 * 0x4c + 0x47d200) + 0x30) == 0) ||
       (*(int *)(*(int *)(temp_v3 * 0x4c + 0x47d24c) + 0x30) == 0)) break;
    temp_v3 = temp_v3 + 2;
  }
  return 1;
}

} /* extern "C" */
