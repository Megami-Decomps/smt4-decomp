/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037be24` (_code @ 0x37be24, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"

extern "C" {

int soundArchiveReadWaveArchiveInfo(unsigned int, unsigned int, unsigned int [2]);
int FUN_00235c70(unsigned int, unsigned int);
int FUN_002a7ac4(unsigned char [12], unsigned int, int);
int FUN_002ac5f4(unsigned char [12], unsigned int);

/* stack frame of param_5: 3 slot(s), 6 byte(s) */
typedef struct {
    unsigned char sp34; /* 0x34: local_34 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} param_5_stack;

/* Supplied declaration required: soundArchiveReadWaveArchiveInfo. */
/* Supplied declaration required: FUN_00235c70. */
/* Supplied declaration required: FUN_002a7ac4. */
extern unsigned int *FUN_002ac5d8(unsigned char *);
/* Supplied declaration required: FUN_002ac5f4. */


unsigned int
FUN_0037be24(unsigned int *param_1,char *param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  unsigned int temp_v3 [2];
  char temp_v4;
  unsigned char temp_v5 [12];
  char temp_v6;
  unsigned char temp_v7 [12];
  
  param_1[1] = 0;
  *param_1 = 0xffffffff;
  *param_2 = '\0';
  FUN_002ac5f4(temp_v7,param_3);
  puVar1 = (unsigned int *)FUN_002ac5d8(temp_v7);
  if (puVar1 == (unsigned int *)0x0) {
    return 0xfffffffe;
  }
  if (*puVar1 == 0) {
    temp_v0 = 1;
  }
  else {
    puVar4 = puVar1 + 1;
    if (puVar4 == (unsigned int *)0x0) {
      return 0xfffffffe;
    }
    FUN_00235c70(param_5,*puVar4);
    if (param_5 == 0) {
      temp_v0 = 0xffffffff;
    }
    else {
      temp_v3[0] = 0xffffffff;
      temp_v4 = '\0';
      soundArchiveReadWaveArchiveInfo(param_4,*puVar4,temp_v3);
      *param_1 = *puVar4;
      param_1[1] = param_5;
      *param_2 = temp_v4;
      if (temp_v4 != '\0') {
        FUN_002a7ac4(temp_v5,param_5,1);
        temp_v2 = 0;
        if (temp_v2 < *puVar1) {
          do {
            if ((temp_v6 == '\0') || (temp_v1 = (unsigned int)FUN_002a7a3c((const WaveArchiveReader*)temp_v5,puVar1[2]), temp_v1 == 0)) {
              return 2;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < *puVar1);
        }
      }
      temp_v0 = 0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
