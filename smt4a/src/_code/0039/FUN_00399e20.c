/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399e20` (_code @ 0x399e20, 0x214 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spB0; /* 0xb0: local_b0 */
} param_2_stack;

extern unsigned char LAB_0039a038; /* 0x39a038 */
extern unsigned char LAB_0039a040; /* 0x39a040 */
extern unsigned char LAB_0039a04c; /* 0x39a04c */
extern unsigned char LAB_0039a068; /* 0x39a068 */
extern unsigned char LAB_0039a078; /* 0x39a078 */
extern unsigned char LAB_0039a084; /* 0x39a084 */
extern unsigned char LAB_0039a090; /* 0x39a090 */
extern unsigned char LAB_0039a09c; /* 0x39a09c */
extern unsigned char LAB_0039a0a8; /* 0x39a0a8 */
extern unsigned char LAB_0039a0b4; /* 0x39a0b4 */
extern unsigned char LAB_0039a0c0; /* 0x39a0c0 */
extern int DAT_0057f0c8; /* 0x57f0c8 */
extern int DAT_0057f0cc; /* 0x57f0cc */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_0020d164. */
/* Supplied declaration required: FUN_00230c1c. */
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: FUN_002c0940. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_00359974. */


void FUN_00399e20(int param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int iStack_ac;
  unsigned int temp_v6 [2];
  unsigned char temp_v7 [132];
  
  temp_v1 = DAT_0057f0c8;
  temp_v2 = FUN_001801a4();
  temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 2);
  FUN_00192608();
  temp_v2 = FUN_001801a4();
  temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + 4);
  FUN_00192608();
  if (temp_v3 == 0 || temp_v4 == 0) {
    *(unsigned char *)(temp_v1 + 0x5ea) = 0;
  }
  else {
    *(unsigned char *)(temp_v1 + 0x67c) = 1;
    *(unsigned char *)(temp_v1 + 0x5ea) = 1;
    temp_v0 = *(unsigned char *)(temp_v3 + 0x28);
    if ((temp_v0 & 0xf) == temp_v0 >> 4) {
      FUN_00359974(0x25,temp_v0 & 0xf,0xffffffff,0);
    }
    else {
      FUN_002c0940(&temp_v5,temp_v0 & 0xf);
      FUN_002c0940(temp_v6,*(unsigned char *)(temp_v3 + 0x28) >> 4);
      FUN_00100388(temp_v7,&LAB_0039a038,&temp_v5,temp_v6);
      FUN_003180c4(0x25,temp_v7);
    }
    FUN_0020d164(temp_v7,*(unsigned int *)(temp_v4 + 0x24) >> 0x14);
    FUN_003180c4(0x26,temp_v7);
    FUN_00230c1c(temp_v7,*(unsigned char *)(temp_v3 + 0x29));
    FUN_003180c4(0x27,temp_v7);
    if (*(char *)(temp_v4 + 0x2b) == '\0') {
      FUN_00100388(temp_v7,&LAB_0039a040);
    }
    if (*(char *)(temp_v4 + 0x2b) == '\x01') {
      FUN_00100388(temp_v7,&LAB_0039a04c);
    }
    if (*(char *)(temp_v4 + 0x2b) == '\x05') {
      FUN_00100388(temp_v7,&LAB_0039a068);
    }
    if (*(char *)(temp_v4 + 0x2b) == '\x06') {
      FUN_00100388(temp_v7,&LAB_0039a078);
    }
    if (*(char *)(temp_v4 + 0x2b) == '\a') {
      FUN_00100388(temp_v7,&LAB_0039a084);
    }
    if (*(char *)(temp_v4 + 0x2b) == '\b') {
      FUN_00100388(temp_v7,&LAB_0039a090);
    }
    if (*(char *)(temp_v4 + 0x2b) == '\t') {
      FUN_00100388(temp_v7,&LAB_0039a09c);
    }
    if (*(char *)(temp_v4 + 0x2b) == '\v') {
      FUN_00100388(temp_v7,&LAB_0039a0a8);
    }
    if (*(char *)(temp_v4 + 0x2b) == '\f') {
      FUN_00100388(temp_v7,&LAB_0039a0b4);
    }
    if (*(char *)(temp_v4 + 0x2b) == '\r') {
      FUN_00100388(temp_v7,&LAB_0039a0c0);
    }
    FUN_003180c4(0x28,temp_v7);
    if (param_1 == 0) {
      param_1 = DAT_0057f0cc;
    }
    temp_v5 = 3;
    iStack_ac = param_1;
    temp_v6[0] = param_2;
    FUN_002a1f60(*(unsigned int *)(temp_v1 + 0x678),2,0xffffffff,0);
  }
  return;
}
