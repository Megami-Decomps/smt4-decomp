/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00141428` (_code @ 0x141428, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015e978(unsigned char *, unsigned int, unsigned int);
int FUN_001630d4(int, int, int, unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0063e1e8; /* 0x63e1e8 */
extern unsigned char DAT_0063e324; /* 0x63e324 */
extern unsigned int DAT_0063e6c8; /* 0x63e6c8 */

/* Supplied declaration required: FUN_0015e978. */
extern int FUN_0015fe30(unsigned char *);
/* Supplied declaration required: FUN_001630d4. */
extern unsigned int nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(unsigned char *);


unsigned int FUN_00141428(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0015fe30(&DAT_0063e1e8);
  if (temp_v0 != 0) {
    temp_v1 = nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(&DAT_0063e324);
    temp_v2 = 0x10000;
    FUN_001630d4(0x10000,0x100,0,temp_v1,1);
    DAT_0063e6c8 = temp_v2;
    FUN_0015e978(&DAT_0063e1e8,temp_v2,temp_v1);
  }
  return DAT_0063e6c8;
}

} /* extern "C" */
