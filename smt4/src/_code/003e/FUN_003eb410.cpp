/* NON_MATCHING: global initializer storage is restored; recovered source omits destructor registration and callbacks. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned int DAT_00464fb0; /* 0x464fb0 */
extern unsigned int DAT_00464fbc; /* 0x464fbc */
extern unsigned char DAT_00464fc0; /* 0x464fc0 */
extern unsigned int DAT_00464fd0; /* 0x464fd0 */
extern unsigned int DAT_00464fd4; /* 0x464fd4 */



struct CecInitializerState { unsigned char unk00[0x20]; int request; int response; };
extern CecInitializerState g_asdCec;
void FUN_003eb410(void)

{
  g_asdCec.request = -1;
  g_asdCec.response = -1;
  DAT_00464fd0 = 0;
  DAT_00464fd4 = 0;
  DAT_00464fb0 = 0;
  DAT_00464fbc = 0;
  DAT_00464fc0 = 1;
  return;
}

} /* extern "C" */
