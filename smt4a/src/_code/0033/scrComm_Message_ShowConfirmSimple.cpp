#include "shard/Shard0033.h"

extern "C" {

extern u32 scrGetArg(s32 index);
extern u32 dataTableValueOrZero(u32 id);
extern u32 FUN_002deb84(void);
extern void FUN_001695a0(void);
extern void FUN_00237898(u32 a, u32 b, u32 c, s32 d, s32 e);

/* Script command: shows a simple confirm message. */
void scrComm_Message_ShowConfirmSimple(void)
{
    u32 message = scrGetArg(0);
    u32 window = dataTableValueOrZero(0x1E);
    u32 flag = FUN_002deb84();

    FUN_001695a0();
    FUN_00237898(window, message, flag, 6, 0);
}

} /* extern "C" */
