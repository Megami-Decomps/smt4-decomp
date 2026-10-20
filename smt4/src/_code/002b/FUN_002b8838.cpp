/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8838` (_code @ 0x2b8838, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001385f8(void);
int FUN_002ae5e0(void);
int FUN_002ae794(...);
int FUN_002b827c(unsigned int);
int FUN_002b8454(unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char DAT_0043da28; /* 0x43da28 */
extern unsigned int DAT_0043da38; /* 0x43da38 */

/* Supplied declaration required: FUN_001385f8. */
/* Supplied declaration required: FUN_002ae5e0. */
/* Supplied declaration required: FUN_002ae794. */
/* Supplied declaration required: FUN_002b827c. */
/* Supplied declaration required: FUN_002b8454. */


void FUN_002b8838(unsigned int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char *puVar6;
  unsigned char temp_v6;
  unsigned char temp_v7 [12];
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043da28 + 0x4));
  puVar6 = (unsigned char *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x4c9);
  if (*(unsigned char *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x4c9) != param_1) {
    if ((int)DAT_0043da38 < 0) {
      temp_v1 = 0;
      do {
        if (*(char *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + temp_v1 + 0x4b8) != '\0') {
          DAT_0043da38 = param_1;
          return;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
    }
    DAT_0043da38 = -1;
    FUN_002b827c(param_1);
    temp_v1 = FUN_002ae794(*(unsigned char *)(temp_v0 + 0x4c9));
    temp_v2 = FUN_002ae794(param_1);
    if (temp_v1 != 0 && temp_v2 != 0) {
      *(unsigned char *)(temp_v0 + 0x4ca) = *(unsigned char *)(temp_v0 + 0x4c9);
      *puVar6 = (char)param_1;
      temp_v3 = 0x102;
      temp_v5 = 0;
      temp_v7[0] = 5;
      temp_v7[1] = 6;
      temp_v7[2] = 4;
      temp_v7[3] = 3;
      temp_v7[4] = 2;
      temp_v7[5] = 1;
      temp_v7[6] = 0;
      temp_v7[7] = 0;
      do {
        temp_v6 = *(short *)(temp_v2 + temp_v5 * 2) != 0;
        if (temp_v6) {
          temp_v3 = (unsigned int)temp_v7[temp_v5];
        }
        if (!temp_v6) {
          temp_v3 = 0x12;
        }
        FUN_002b8454(temp_v5 & 0xff,temp_v3);
        temp_v5 = temp_v5 + 1;
        temp_v3 = temp_v4;
      } while ((int)temp_v5 < 6);
      if (*(char *)(temp_v1 + 0xc) != '\0') {
        if (*(char *)(temp_v2 + 0xc) != '\0') {
          *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x4c5) = 0;
          FUN_001385f8();
          return;
        }
        *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x4c5) = 1;
        FUN_002ae5e0();
        return;
      }
      *(unsigned char *)((*(int *)((unsigned char *)&DAT_0043da28 + 0x4)) + 0x4c5) = 1;
      FUN_001385f8();
      return;
    }
  }
  return;
}

} /* extern "C" */
