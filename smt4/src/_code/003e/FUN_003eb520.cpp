/* NON_MATCHING: static initializer needs real constructor/atexit declarations; retail also retains an unreferenced 0x00464fd8 pool word before relocations. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern int _ZN19ThreadedTextScannerD1Ev(...); /* 0x33b618 */
extern unsigned int DAT_00464fe8; /* 0x464fe8 */
extern unsigned int DAT_00464fec; /* 0x464fec */
extern unsigned char DAT_004e0e90; /* 0x4e0e90 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int _ZN9Obj420fa4C1Ev(unsigned char *);


unsigned long long FUN_003eb520(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *(unsigned int *)(param_3 + 8) = param_1;
  *(unsigned int *)(param_3 + 0xc) = param_2;
  DAT_00464fe8 = 0;
  DAT_00464fec = 0;
  temp_v0 = _ZN9Obj420fa4C1Ev(&DAT_004e0e90);
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned char *)(temp_v0 + 0x38) = 1;
  return romwright_piece_4_4(_ZN19ThreadedTextScannerD1Ev,temp_v0 - 8);
}

} /* extern "C" */
