/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cdb28` (_code @ 0x3cdb28, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001028b8(unsigned char [128], int, unsigned char *, unsigned char *, char *);
int FUN_0013c174(unsigned char *, int *, int);
int FUN_0019a730(void);
int FUN_002267b0(int, unsigned char *, int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} void_stack;

extern unsigned char LAB_003cdbc8; /* 0x3cdbc8 */
extern unsigned char LAB_003cdbdc; /* 0x3cdbdc */
extern char s_flar02_02_00570300[10]; /* 0x570300 */

/* Supplied declaration required: FUN_001028b8. */
/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: FUN_0019a730. */
/* Supplied declaration required: FUN_002267b0. */


void FUN_003cdb28(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  int *piVar5;
  int temp_v3;
  unsigned char temp_v4 [128];
  
  temp_v2 = 0;
  do {
    temp_v0 = temp_v2 * 0x4c;
    piVar5 = (int *)(temp_v0 + 0x5702fc);
    if ((*(char *)(temp_v0 + 0x570346) != '\x01') && (*piVar5 == 0)) {
      temp_v1 = 0;
      FUN_0019a730();
      *piVar5 = temp_v1;
      FUN_001028b8(temp_v4,0x80,&LAB_003cdbdc,&LAB_003cdbc8,s_flar02_02_00570300 + temp_v0);
      puVar3 = temp_v4;
      FUN_0013c174(puVar3,&temp_v3,0);
      *(unsigned char **)(temp_v0 + 0x570340) = puVar3;
      FUN_002267b0(*piVar5,puVar3,temp_v3,0x10000);
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x1a);
  return;
}

} /* extern "C" */
