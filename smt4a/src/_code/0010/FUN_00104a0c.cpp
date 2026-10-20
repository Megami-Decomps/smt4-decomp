/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104a0c` (_code @ 0x104a0c, 0xb6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int byteRefMin(...);
int FUN_002eac34(int);

/* stack frame of param_3: 5 slot(s), 11 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned char sp20; /* 0x20: local_20 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_3_stack;

extern unsigned int DAT_00594ab8; /* 0x594ab8 */
extern unsigned char DAT_00630334; /* 0x630334 */

extern unsigned int FUN_002eabfc(void);
extern unsigned int inlineBufferAddress(unsigned char *, unsigned int);
/* Supplied declaration required: byteRefMin. */
/* Supplied declaration required: FUN_002eac34. */
extern unsigned int FUN_002eac54(unsigned int, unsigned int);


void FUN_00104a0c(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  unsigned char *pbVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char *puVar8;
  unsigned char temp_v6 [4];
  unsigned char temp_v7 [4];
  unsigned char temp_v8 [4];
  int temp_v9;
  
  temp_v0 = *(unsigned char *)(param_2 + 0x24);
  temp_v2 = *(unsigned char *)(param_1 + 0xf4);
  if ((temp_v2 < temp_v0) || (temp_v0 < temp_v2)) {
    *(unsigned char *)(param_3 + 0x24) = temp_v0;
  }
  else {
    *(unsigned char *)(param_3 + 0x24) = temp_v2;
  }
  temp_v4 = 0;
  if (*(char *)(param_3 + 0x24) != '\0') {
    temp_v3 = FUN_002eabfc();
    temp_v3 = inlineBufferAddress(&DAT_00630334,temp_v3);
    temp_v9 = param_2 + 0x80;
    temp_v6[0] = (unsigned char)*(unsigned int *)(param_2 + 0x8c);
    pbVar5 = (unsigned char *)byteRefMin(temp_v6,temp_v3);
    temp_v4 = (unsigned int)*pbVar5 | (((*(unsigned int *)(temp_v9 + 0xc) >> 8) & DAT_00594ab8) << 8);
    temp_v1 = *(char *)(param_1 + 4);
    if (((temp_v1 != '\n') && (temp_v1 != '\x02')) ||
       (temp_v5 = FUN_002eac34(temp_v1), *(char *)(temp_v5 + 0xa1) != '\x01')) {
      temp_v4 = FUN_002eac54(temp_v4,1);
    }
  }
  *(unsigned int *)(param_3 + 0x8c) = temp_v4;
  temp_v5 = FUN_002eac34(*(unsigned char *)(param_1 + 4));
  temp_v8[0] = *(unsigned char *)(temp_v5 + 0xa0);
  temp_v7[0] = *(unsigned char *)(param_2 + 0x67);
  puVar8 = (unsigned char *)byteRefMin(temp_v7,temp_v8);
  *(unsigned char *)(param_3 + 0x67) = *puVar8;
  return;
}

} /* extern "C" */
