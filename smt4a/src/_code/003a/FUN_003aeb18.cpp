/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aeb18` (_code @ 0x3aeb18, 0x218 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00192608(void);
int FUN_0020d164(unsigned char [128], unsigned int);
int FUN_00230c1c(unsigned char [128], int);
int FUN_002a1f60(unsigned int, int, unsigned int, int);
int FUN_002ad414(int, int, int, unsigned char [128]);
int FUN_002c0940(...);
int FUN_003180c4(int, unsigned char [128]);
int FUN_00359974(int, int, unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} param_2_stack;

extern unsigned char LAB_003aed34; /* 0x3aed34 */
extern unsigned char LAB_003aed3c; /* 0x3aed3c */
extern unsigned char LAB_003aed48; /* 0x3aed48 */
extern unsigned char LAB_003aed64; /* 0x3aed64 */
extern unsigned char LAB_003aed74; /* 0x3aed74 */
extern unsigned char LAB_003aed80; /* 0x3aed80 */
extern unsigned char LAB_003aed8c; /* 0x3aed8c */
extern unsigned char LAB_003aed98; /* 0x3aed98 */
extern unsigned char LAB_003aeda4; /* 0x3aeda4 */
extern unsigned char LAB_003aedb0; /* 0x3aedb0 */
extern unsigned char LAB_003aedbc; /* 0x3aedbc */
extern int DAT_0057f0c8; /* 0x57f0c8 */
extern int DAT_0057f0cc; /* 0x57f0cc */

/* Supplied declaration required: FUN_00100388. */
extern unsigned short *FUN_001801a4(void);
/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: FUN_0020d164. */
/* Supplied declaration required: FUN_00230c1c. */
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: FUN_002ad414. */
/* Supplied declaration required: FUN_002c0940. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_00359974. */


void FUN_003aeb18(int param_1,unsigned int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  int iStack_a4;
  unsigned int temp_v4 [2];
  unsigned char temp_v5 [128];
  
  temp_v1 = DAT_0057f0c8;
  puVar3 = (unsigned short *)FUN_001801a4();
  temp_v2 = (unsigned int)*puVar3;
  FUN_00192608();
  if (temp_v2 == 0) {
    *(unsigned char *)(temp_v1 + 0x5ea) = 0;
  }
  else {
    *(unsigned char *)(temp_v1 + 0x67c) = 1;
    *(unsigned char *)(temp_v1 + 0x5ea) = 1;
    temp_v0 = *(unsigned char *)(temp_v2 + 0x28);
    if ((temp_v0 & 0xf) == temp_v0 >> 4) {
      FUN_00359974(0x25,temp_v0 & 0xf,0xffffffff,0);
    }
    else {
      FUN_002c0940(&temp_v3,temp_v0 & 0xf);
      FUN_002c0940(temp_v4,*(unsigned char *)(temp_v2 + 0x28) >> 4);
      FUN_00100388(temp_v5,&LAB_003aed34,&temp_v3,temp_v4);
      FUN_003180c4(0x25,temp_v5);
    }
    FUN_0020d164(temp_v5,*(unsigned int *)(temp_v2 + 0x24) >> 0x14);
    FUN_003180c4(0x26,temp_v5);
    FUN_00230c1c(temp_v5,*(unsigned char *)(temp_v2 + 0x29));
    FUN_003180c4(0x27,temp_v5);
    if (*(char *)(temp_v2 + 0x2b) == '\0') {
      FUN_00100388(temp_v5,&LAB_003aed3c);
    }
    if (*(char *)(temp_v2 + 0x2b) == '\x01') {
      FUN_00100388(temp_v5,&LAB_003aed48);
    }
    if (*(char *)(temp_v2 + 0x2b) == '\x05') {
      FUN_00100388(temp_v5,&LAB_003aed64);
    }
    if (*(char *)(temp_v2 + 0x2b) == '\x06') {
      FUN_00100388(temp_v5,&LAB_003aed74);
    }
    if (*(char *)(temp_v2 + 0x2b) == '\a') {
      FUN_00100388(temp_v5,&LAB_003aed80);
    }
    if (*(char *)(temp_v2 + 0x2b) == '\b') {
      FUN_00100388(temp_v5,&LAB_003aed8c);
    }
    if (*(char *)(temp_v2 + 0x2b) == '\t') {
      FUN_00100388(temp_v5,&LAB_003aed98);
    }
    if (*(char *)(temp_v2 + 0x2b) == '\v') {
      FUN_00100388(temp_v5,&LAB_003aeda4);
    }
    if (*(char *)(temp_v2 + 0x2b) == '\f') {
      FUN_00100388(temp_v5,&LAB_003aedb0);
    }
    if (*(char *)(temp_v2 + 0x2b) == '\r') {
      FUN_00100388(temp_v5,&LAB_003aedbc);
    }
    FUN_003180c4(0x28,temp_v5);
    FUN_002ad414(1,0,0,temp_v5);
    FUN_003180c4(0x29,temp_v5);
    if (param_1 == 0) {
      param_1 = DAT_0057f0cc;
    }
    temp_v3 = 3;
    iStack_a4 = param_1;
    temp_v4[0] = param_2;
    FUN_002a1f60(*(unsigned int *)(temp_v1 + 0x678),2,0xffffffff,0);
  }
  return;
}

} /* extern "C" */
