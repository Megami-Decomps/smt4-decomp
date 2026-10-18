/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fef38` (_code @ 0x2fef38, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(unsigned int);
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_002b9024. */


unsigned int FUN_002fef38(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v4 = 0;
  do {
    temp_v1 = FUN_002939f4();
    puVar5 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v4 * 0x288);
    temp_v2 = *puVar5;
    if ((temp_v2 & 0x10) != 0 && (temp_v2 & 1) != 0) {
      temp_v5 = (temp_v2 & 0x40) == 0;
      if (temp_v5) {
        temp_v2 = (unsigned int)*(unsigned short *)((int)puVar5 + 0xce);
      }
      if (temp_v5 && temp_v2 == temp_v0) {
        if (puVar5[0x9e] != 0) {
          temp_v1 = 0;
          do {
            temp_v2 = (unsigned int)*(unsigned short *)(puVar5[0x9e] + temp_v1 * 2 + 0x34);
            FUN_002ae164();
            if ((temp_v2 != 0) && (*(char *)(temp_v2 + 0x23) == '\x03')) {
              FUN_0028dcb0(1);
              return 1;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 8);
        }
        if (puVar5[0x9f] != 0) {
          temp_v1 = 0;
          do {
            temp_v2 = (unsigned int)*(unsigned short *)(puVar5[0x9f] + temp_v1 * 2 + 0x34);
            FUN_002ae164();
            if ((temp_v2 != 0) && (*(char *)(temp_v2 + 0x23) == '\x03')) {
              FUN_0028dcb0(1);
              return 1;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 8);
        }
        if (puVar5[0xa1] != 0) {
          temp_v2 = (unsigned int)*(unsigned short *)((int)puVar5 + 0xce);
          FUN_002b9024();
          temp_v1 = 0;
          do {
            temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v1 * 2 + 0x3c);
            FUN_002ae164();
            if ((temp_v3 != 0) && (*(char *)(temp_v3 + 0x23) == '\x03')) {
              FUN_0028dcb0(1);
              return 1;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 8);
        }
      }
    }
    temp_v4 = temp_v4 + 1;
    if (temp_v4 >= 0x6d) {
      FUN_0028dcb0(0);
      return 1;
    }
  } while( 1 );
}
