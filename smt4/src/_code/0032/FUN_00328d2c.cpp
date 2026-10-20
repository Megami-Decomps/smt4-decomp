/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328d2c` (_code @ 0x328d2c, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002522f8(unsigned char [128], int, unsigned char *, unsigned char *, char *);
int asdTexTgaLoadNw4c(int, unsigned int, int, int);
int asdTextureCreate(void);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} void_stack;

extern unsigned char LAB_00328dcc; /* 0x328dcc */
extern unsigned char LAB_00328de0; /* 0x328de0 */
extern char s_flar02_02_004332a4[10]; /* 0x4332a4 */

/* Supplied declaration required: FUN_002522f8. */
/* Supplied declaration required: asdTexTgaLoadNw4c. */
/* Supplied declaration required: asdTextureCreate. */
extern unsigned int FUN_002c3124(unsigned char *, unsigned int *, unsigned int);


void FUN_00328d2c(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned char temp_v5 [128];
  
  temp_v3 = 0;
  do {
    temp_v0 = temp_v3 * 0x4c;
    piVar5 = (int *)(temp_v0 + 0x4332a0);
    if ((*(char *)(temp_v0 + 0x4332ea) != '\x01') && (*piVar5 == 0)) {
      temp_v1 = 0;
      asdTextureCreate();
      *piVar5 = temp_v1;
      FUN_002522f8(temp_v5,0x80,&LAB_00328de0,&LAB_00328dcc,s_flar02_02_004332a4 + temp_v0);
      temp_v2 = FUN_002c3124(temp_v5,(unsigned int *)&temp_v4,0);
      *(unsigned int *)(temp_v0 + 0x4332e4) = temp_v2;
      asdTexTgaLoadNw4c(*piVar5,temp_v2,temp_v4,0x10000);
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x1a);
  return;
}

} /* extern "C" */
