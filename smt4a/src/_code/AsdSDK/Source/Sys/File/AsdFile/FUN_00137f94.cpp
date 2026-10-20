/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137f94` (_code @ 0x137f94, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int syncWaitHandleForever(unsigned int *);
int asdFileHashPackClose(void);
int FUN_001469a8(unsigned int);
int FUN_001a0380(int);
int nn_os_LightEvent_Signal(unsigned int *);
int FUN_001a0d08(unsigned int *);
int FUN_002e3140(void);
int nn_os_detail_ConvertLibraryToSvcPriority(int);
int software_interrupt(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char g_asdFile; /* 0x5b3fb4 */
extern unsigned int DAT_005b3fc8; /* 0x5b3fc8 */
extern unsigned int DAT_005b3fcc; /* 0x5b3fcc */
extern unsigned char DAT_005b3fd0; /* 0x5b3fd0 */
extern unsigned int g_asdFileEvent; /* 0x5b3fd4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: syncWaitHandleForever. */
/* Supplied declaration required: asdFileHashPackClose. */
/* Supplied declaration required: FUN_001469a8. */
/* Supplied declaration required: FUN_001a0380. */
/* Supplied declaration required: nn_os_LightEvent_Signal. */
/* Supplied declaration required: FUN_001a0d08. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: nn_os_detail_ConvertLibraryToSvcPriority. */


void FUN_00137f94(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = DAT_005b3fcc;
  if (DAT_005b3fcc != 0) {
    software_interrupt(0x24);
    if ((int)DAT_005b3fcc < 0) {
      FUN_002e3140();
    }
    if ((temp_v0 & 0x3ff) == 0x3fe) {
      nn_os_detail_ConvertLibraryToSvcPriority(0x10);
      software_interrupt(0xc);
      if ((int)DAT_005b3fcc < 0) {
        FUN_002e3140();
      }
      g_asdFile = 1;
      nn_os_LightEvent_Signal(&g_asdFileEvent);
      syncWaitHandleForever(&DAT_005b3fcc);
      DAT_005b3fd0 = 1;
      FUN_001a0d08(&DAT_005b3fcc);
      if (DAT_005b3fcc != 0) {
        software_interrupt(0x23);
        DAT_005b3fcc = 0;
      }
      FUN_001469a8(DAT_005b3fc8);
    }
  }
  asdFileHashPackClose();
  FUN_001a0380(0x138060);
  return;
}

} /* extern "C" */
