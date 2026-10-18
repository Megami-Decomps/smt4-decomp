/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ce0fc` (_code @ 0x1ce0fc, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_0044e144; /* 0x44e144 */

/* Supplied declaration required: FUN_00215b5c. */
/* Supplied declaration required: FUN_0026a978. */
extern char FUN_0026a9cc(short, unsigned short, int, unsigned int *, unsigned char);
extern unsigned int FUN_0029aafc(void);
extern unsigned int FUN_0029c8f4(void);
/* Supplied declaration required: FUN_002b066c. */
/* Supplied declaration required: rt_memcpy. */


void FUN_001ce0fc(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  short *psVar6;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v3 = DAT_0044e144;
  temp_v4 = 8;
  psVar6 = (short *)(DAT_0044e144 + 0x1300);
  if (*psVar6 < 0) {
    temp_v4 = FUN_0029aafc();
  }
  else if ((0 < *psVar6) && (*(char *)(DAT_0044e144 + 0x1e66) != '\x06')) {
    FUN_002b066c(*psVar6);
    temp_v4 = FUN_0029c8f4();
  }
  temp_v1 = temp_v3 + 0x1348;
  rt_memcpy(temp_v1,param_1,temp_v4 << 1);
  FUN_00215b5c(temp_v1,temp_v4 & 0xff);
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  if ((*psVar6 >= 1) && (*(char *)(temp_v3 + 0x1e66) != '\x06')) {
    temp_v2 = FUN_002b066c(*psVar6);
    temp_v0 = *(char *)(temp_v3 + 0x1e66);
    if (temp_v0 == '\x02' || temp_v0 == '\x03') {
      temp_v2 = FUN_002b066c();
    }
    temp_v0 = '\0';
    if (temp_v2 != 0) {
      temp_v0 = *(char *)(temp_v2 + 0x4b);
    }
    temp_v0 = FUN_0026a9cc(*psVar6,*(unsigned short *)(temp_v3 + 0x1302),temp_v1,(unsigned int *)&temp_v5,
                         temp_v2 != 0 && temp_v0 != '\0');
    temp_v3 = (int)temp_v0;
    puVar4 = (unsigned int *)&temp_v5;
  }
  else {
    temp_v3 = -1;
    puVar4 = (unsigned int *)0x0;
  }
  FUN_0026a978(puVar4,temp_v3);
  return;
}
