/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015f1ac` (_code @ 0x15f1ac, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int coproc_moveto_Data_Memory_Barrier(int);
int nn_snd_CTR_Dspsnd_AppendChannelNextBuffer(unsigned char *, unsigned int, unsigned int, int, unsigned int);
int nn_snd_CTR_Dspsnd_AssignPCM(unsigned char *, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Memory_Barrier (CALLOTHER). */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);
/* Supplied declaration required: nn_snd_CTR_Dspsnd_AppendChannelNextBuffer. */
/* Supplied declaration required: nn_snd_CTR_Dspsnd_AssignPCM. */
extern unsigned char nn_snd_CTR_Dspsnd_ResetChannelNextBuffer(unsigned int, unsigned char);
extern unsigned char nn_snd_CTR_Dspsnd_UpdateChannelNextBuffer(unsigned int, unsigned char, unsigned int);


void FUN_0015f1ac(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 unstructured edge(s); 1 goto(s); 3 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  nn_os_CriticalSection_Enter((unsigned int)(param_1 + 0x1c));
  if (*(char *)((int)param_1 + 0x6f) != '\0') {
    nn_snd_CTR_Dspsnd_ResetChannelNextBuffer((unsigned int)&DAT_004e6f64,(unsigned char)*param_1);
    temp_v4 = param_1[0xc];
    if ((temp_v4 != 0) && (*(char *)(temp_v4 + 0x11) == '\x04')) {
      *(unsigned short *)(param_1 + 0xd) = 0;
    }
    else if (0 < (short)param_1[0xd]) {
      nn_snd_CTR_Dspsnd_UpdateChannelNextBuffer((unsigned int)&DAT_004e6f64,(unsigned char)*param_1,temp_v4);
      *(unsigned short *)(param_1 + 0xd) = 1;
    }
    *(unsigned short *)((int)param_1 + 0x36) = 0;
    temp_v4 = param_1[0xc];
    while( 1 ) {
      if (temp_v4 == 0) {
        param_1[0xc] = 0;
        goto LAB_0015f28c;
      }
      if (*(char *)(temp_v4 + 0x11) != '\x04') break;
      coproc_moveto_Data_Memory_Barrier(0);
      *(unsigned char *)(temp_v4 + 0x11) = 3;
      temp_v4 = *(unsigned int *)(temp_v4 + 0x14);
    }
    param_1[0xc] = temp_v4;
    do {
      temp_v3 = *(unsigned int *)(temp_v4 + 0x14);
      if ((temp_v3 != 0) && (*(char *)(temp_v3 + 0x11) == '\x04')) {
        *(unsigned int *)(temp_v4 + 0x14) = *(unsigned int *)(temp_v3 + 0x14);
        coproc_moveto_Data_Memory_Barrier(0);
        *(unsigned char *)(temp_v3 + 0x11) = 3;
        temp_v3 = temp_v4;
      }
      temp_v4 = temp_v3;
    } while (temp_v3 != 0);
LAB_0015f28c:
    *(unsigned char *)((int)param_1 + 0x6f) = 0;
  }
  temp_v4 = param_1[0xc];
  temp_v1 = (int)(short)param_1[0xd];
  for (temp_v2 = temp_v1; temp_v2 != 0 && temp_v4 != 0; temp_v2 = temp_v2 - 1) {
    temp_v4 = *(unsigned int *)(temp_v4 + 0x14);
  }
  for (; temp_v1 < 5; temp_v1 = temp_v1 + 1) {
    temp_v3 = 0;
    if (temp_v4 != 0) {
      if ((short)param_1[0xd] != 0) {
        nn_snd_CTR_Dspsnd_AppendChannelNextBuffer
                  (&DAT_004e6f64,*param_1 & 0xff,temp_v4,(int)*(short *)((int)param_1 + 0x36),param_4)
        ;
        temp_v0 = *(short *)((int)param_1 + 0x36) + 1;
        *(short *)((int)param_1 + 0x36) = temp_v0;
        if (temp_v0 >= 4) {
          *(unsigned short *)((int)param_1 + 0x36) = 0;
        }
      }
      else {
        *(unsigned short *)((int)param_1 + 0x36) = 0;
        nn_snd_CTR_Dspsnd_ResetChannelNextBuffer((unsigned int)&DAT_004e6f64,(unsigned char)*param_1);
        *(unsigned char *)(temp_v4 + 0x11) = 2;
        if ((*(unsigned short *)((int)param_1 + 0x1e) & 0xf) >> 2 == 2) {
          temp_v3 = (unsigned int)*(unsigned char *)((int)param_1 + 0x6e);
          temp_v5 = temp_v3 == 0;
          if (temp_v5) {
            temp_v3 = *(unsigned int *)(temp_v4 + 8);
          }
          if (!temp_v5 || temp_v3 != 0) {
            *(unsigned char *)((int)param_1 + 0x6e) = 1;
          }
        }
        param_4 = (unsigned int)*(unsigned short *)((int)param_1 + 0x1e);
        nn_snd_CTR_Dspsnd_AssignPCM(&DAT_004e6f64,*param_1 & 0xff,temp_v4,param_4);
      }
      temp_v3 = *(unsigned int *)(temp_v4 + 0x14);
      *(short *)(param_1 + 0xd) = (short)param_1[0xd] + 1;
    }
    temp_v4 = temp_v3;
  }
  nn_os_CriticalSection_Leave((unsigned int)(param_1 + 0x1c));
  return;
}

} /* extern "C" */
