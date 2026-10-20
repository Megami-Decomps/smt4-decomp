/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00208a34` (_code @ 0x208a34, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100854(unsigned short *, unsigned int, unsigned int, int, unsigned char *);
int FUN_001517b4(int, int);
int FUN_001a6568(unsigned int, int, int, int);
int FUN_001acf98(int, int);

/* stack frame of param_2: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_002321f8; /* 0x2321f8 */
extern unsigned int DAT_00570280; /* 0x570280 */
extern int DAT_0057f57c; /* 0x57f57c */

/* Supplied declaration required: FUN_00100854. */
/* Supplied declaration required: FUN_001517b4. */
extern int FUN_00163fd4(unsigned int);
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern unsigned int FUN_00192798(void);
extern int FUN_001a6508(unsigned int, unsigned int, int, unsigned int);
/* Supplied declaration required: FUN_001a6568. */
/* Supplied declaration required: FUN_001acf98. */


void FUN_00208a34(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  unsigned short temp_v5 [2];
  
  temp_v0 = DAT_0057f57c;
  if (*(int *)(DAT_0057f57c + 0x14) != param_1) {
    temp_v1 = 9;
    FUN_001517b4(9,2);
    if ((temp_v1 != 0) || (temp_v1 = FUN_00163fd4(6), temp_v1 != 0)) {
      param_2 = 0;
    }
    *(unsigned int *)(temp_v0 + 0x18) = *(unsigned int *)(temp_v0 + 0x14);
    *(int *)(DAT_0057f57c + 0x14) = param_1;
    temp_v2 = FUN_00187180(0x47,0);
    temp_v3 = FUN_00192798();
    temp_v2 = FUN_00192748(temp_v2);
    puVar5 = temp_v5;
    temp_v5[0] = (unsigned short)param_1;
    FUN_00100854(puVar5,temp_v3,temp_v2,4,&LAB_002321f8);
    if ((puVar5 != (unsigned short *)0x0) && (temp_v1 = (int)(short)puVar5[1], -1 < temp_v1)) {
      temp_v4 = FUN_001a6508(DAT_00570280,0x34,temp_v1,1);
      if (temp_v4 != 0) {
        FUN_001a6568(DAT_00570280,0x34,temp_v1,0x10000);
      }
      else {
        FUN_001acf98(0x34,temp_v1);
      }
    }
    *(unsigned int *)(temp_v0 + 8) = 4;
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 0x1c) = 0;
    *(unsigned int *)(temp_v0 + 0x20) = param_2;
  }
  return;
}

} /* extern "C" */
