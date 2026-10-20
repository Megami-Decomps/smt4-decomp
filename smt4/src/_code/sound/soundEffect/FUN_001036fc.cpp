/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001036fc` (_code @ 0x1036fc, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00109580(void);
int FUN_00110d54(unsigned char *);
int FUN_00120dc4(int, unsigned char *);
int FUN_002c5300(int, int, int, unsigned int);
int nw_snd_FxDelay_AssignWorkBuffer(unsigned char *, unsigned int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_0044e0e0; /* 0x44e0e0 */
extern unsigned char DAT_004c5484; /* 0x4c5484 */
extern unsigned int DAT_004c54e4; /* 0x4c54e4 */
extern unsigned int DAT_004c54e8; /* 0x4c54e8 */
extern unsigned int DAT_004c54ec; /* 0x4c54ec */
extern unsigned char DAT_004c54f0; /* 0x4c54f0 */

/* Supplied declaration required: FUN_00109580. */
/* Supplied declaration required: FUN_00110d54. */
/* Supplied declaration required: FUN_00120dc4. */
/* Supplied declaration required: FUN_002c5300. */
extern int FUN_002c564c(unsigned int);
/* Supplied declaration required: nw_snd_FxDelay_AssignWorkBuffer. */
extern unsigned int nw_snd_FxDelay_GetRequiredMemSize(unsigned char *);


void FUN_001036fc(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 == 0) {
    DAT_004c54e4 = 0x96;
    DAT_004c54e8 = 0x3dcccccd;
    DAT_004c54ec = 0x3f333333;
    DAT_004c54f0 = 1;
    FUN_00110d54(&DAT_004c5484);
    temp_v1 = nw_snd_FxDelay_GetRequiredMemSize(&DAT_004c5484);
    temp_v2 = 0x10000;
    FUN_002c5300(0x10000,0x100,0,temp_v1);
    DAT_0044e0e0 = temp_v2;
    nw_snd_FxDelay_AssignWorkBuffer(&DAT_004c5484,temp_v2,temp_v1);
    FUN_00120dc4(0,&DAT_004c5484);
  }
  FUN_00109580();
  return;
}

} /* extern "C" */
