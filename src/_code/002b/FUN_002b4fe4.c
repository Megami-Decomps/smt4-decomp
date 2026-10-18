/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4fe4` (_code @ 0x2b4fe4, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned int uRameb004bd7; /* 0xeb004bd7 */
extern unsigned int uRameb004bdb; /* 0xeb004bdb */

extern int FUN_002bb804(int, unsigned int **, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bbd10. */


/* WARNING: Control flow encountered bad instruction data */

int FUN_002b4fe4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *temp_v3;
  
  if (*(unsigned char *)(param_1 + 0x1c) == 0) {
    temp_v3 = param_4;
    temp_v1 = FUN_002bb804(param_1 + 4,&temp_v3,param_2,param_3);
    if (temp_v1 < 0) {
      FUN_002bbd10(temp_v1,0x2b5034);
    }
    *param_4 = (unsigned int)temp_v3;
    return 1;
  }
  if ((int)uRameb004bd7 < 1) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = uRameb004bd7 & 1;
    temp_v2 = (unsigned int)*(unsigned char *)(param_1 + 0x1c);
    if (temp_v0 != 0) {
      temp_v2 = uRameb004bdb;
    }
    temp_v1 = 0;
    if (temp_v0 != 0) {
      do {
        if (*(unsigned short *)(temp_v2 + temp_v1 * 0x2c + 0x20) == 0xb0047ff0) {
          return temp_v2 + temp_v1 * 0x2c;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)temp_v0);
    }
  }
  if ((int)uRameb004bd7 <= (int)temp_v0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(unsigned int *)(temp_v0 * 0x2c + 0x28) = temp_v0 * 0x2c + 0x20;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
