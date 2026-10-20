/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016f25c` (_code @ 0x16f25c, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00188b60(char *);
int FUN_0018a0a8(unsigned char *);
int FUN_001a0eb0(void);
int nn_snd_CTR_MasterManagerImpl_SetSoundOutputMode(unsigned char *);

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_00647708; /* 0x647708 */

/* Supplied declaration required: FUN_00188b60. */
extern int FUN_00189738(unsigned int *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018a0a8. */
/* Supplied declaration required: FUN_001a0eb0. */
extern void nn_cfg_CTR_Initialize(void);
extern void nn_snd_CTR_MasterManagerImpl_Initialize(unsigned int);
/* Supplied declaration required: nn_snd_CTR_MasterManagerImpl_SetSoundOutputMode. */


void FUN_0016f25c(char *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  char temp_v2;
  unsigned int temp_v3;
  
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    temp_v3 = param_4;
    nn_snd_CTR_MasterManagerImpl_Initialize((unsigned int)&DAT_00647708);
    param_1[2] = '\x01';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = -0x80;
    param_1[7] = '?';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = -0x80;
    param_1[0xb] = '?';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = -0x80;
    param_1[0xf] = '?';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = -0x80;
    param_1[0x13] = '?';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = -0x80;
    param_1[0x2f] = '?';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = -0x80;
    param_1[0x2b] = '?';
    FUN_0018a0a8(&DAT_00647708);
    nn_cfg_CTR_Initialize();
    temp_v0 = FUN_00189738(&temp_v3,1,0x70001);
    FUN_001a0eb0();
    temp_v2 = '\x01';
    if (-1 < temp_v0) {
      temp_v1 = temp_v3;
      temp_v2 = temp_v1 != 0;
      if ((temp_v1 >= 2) && (temp_v1 == 2)) {
        temp_v2 = '\x02';
      }
    }
    param_1[3] = temp_v2;
    nn_snd_CTR_MasterManagerImpl_SetSoundOutputMode(&DAT_00647708);
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
    param_1[0x38] = '\0';
    param_1[0x39] = '\0';
    param_1[0x3a] = '\0';
    param_1[0x3b] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    FUN_00188b60(param_1 + 0x44);
  }
  return;
}

} /* extern "C" */
