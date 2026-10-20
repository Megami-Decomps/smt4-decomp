/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039a41c` (_code @ 0x39a41c, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192608(void);
int FUN_00281720(unsigned int, int);
int FUN_002e207c(void);
int FUN_002e2114(void);
int FUN_002e2184(unsigned int, unsigned short *);
int FUN_003e5c68(void);
int rt_memcpy_w(unsigned short *, unsigned int, int);

/* stack frame of param_1: 7 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp64; /* 0x64: local_64 */
    unsigned short sp66; /* 0x66: local_66 */
    unsigned short sp68; /* 0x68: local_68 */
    unsigned short sp6A; /* 0x6a: local_6a */
    unsigned short sp6C; /* 0x6c: local_6c */
    unsigned short sp6E; /* 0x6e: local_6e */
    unsigned short sp70; /* 0x70: local_70 */
} param_1_stack;

extern int DAT_0057f118; /* 0x57f118 */

extern unsigned int FUN_001801a4(void);
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_00281720. */
/* Supplied declaration required: FUN_002e207c. */
/* Supplied declaration required: FUN_002e2114. */
/* Supplied declaration required: FUN_002e2184. */
/* Supplied declaration required: FUN_003e5c68. */
extern int FUN_0047fb50(int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0039a41c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  
  temp_v1 = DAT_0057f118;
  if (DAT_0057f118 != 0) {
    temp_v2 = FUN_001801a4();
    rt_memcpy_w(&temp_v5,temp_v2,100);
    temp_v3 = FUN_0047fb50(param_1);
    if (temp_v3 != 0) {
      temp_v3 = param_1;
      FUN_00192608();
      temp_v0 = (unsigned short)param_1;
      switch(*(unsigned char *)(temp_v3 + 0x22)) {
      case 2:
        temp_v5 = temp_v0;
        break;
      case 3:
        temp_v6 = temp_v0;
        break;
      case 4:
        temp_v8 = temp_v0;
        break;
      case 5:
        temp_v9 = temp_v0;
        break;
      case 6:
        temp_v10 = temp_v0;
        break;
      case 7:
        temp_v11 = temp_v0;
        break;
      case 8:
        temp_v7 = temp_v0;
      }
    }
    temp_v3 = *(int *)(temp_v1 + 4);
    FUN_002e2114();
    if (temp_v3 != 0) {
      FUN_002e2184(*(unsigned int *)(temp_v1 + 4),&temp_v5);
      temp_v3 = *(int *)(temp_v1 + 4);
      FUN_002e207c();
      temp_v4 = *(int *)(temp_v1 + 4);
      if (temp_v4 != 0) {
        temp_v3 = *(int *)(temp_v4 + 0x1c);
      }
      if (temp_v4 != 0 && temp_v3 != 0) {
        FUN_003e5c68();
      }
      FUN_00281720(*(unsigned int *)(temp_v1 + 4),0);
      *(unsigned char *)(temp_v1 + 0x188) = 0;
    }
  }
  return;
}

} /* extern "C" */
