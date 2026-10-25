/* NON_MATCHING: Retail retains effect-free result-classification branches and release NOPs absent from the readable implementation. */
#include "sys/ProcessResult.h"
#include "common.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"

extern "C" {
unsigned long long FUN_00142b04(void);
s32 FUN_00429fcc(unsigned long long context, unsigned long long titleId);
s32 FUN_0042a068(u32 titleIdLow, u32 titleIdHigh, const void *data,
                 u32 dataInfo, u32 option4, u32 option3);
void asdMemFree(void *memory);
extern u8 DAT_005b40c9;

s32 FUN_00280ad4(s32 titleIdLow, u32 titleIdHigh, u32 option3,
                 u32 option4, const char *input)
{
    u32 info[2];
    void *preparedData = asdLoadFileWithSize(input, info, 0);
    u32 result = FUN_0042a068(titleIdLow, titleIdHigh, preparedData,
                             info[0], option4, option3);
    FUN_0013ebd8(result);

    if (result >= 0) {
        const unsigned long long titleId =
            (static_cast<unsigned long long>(titleIdHigh) << 32) |
            titleIdLow;
        result = FUN_00429fcc(FUN_00142b04(), titleId);
        FUN_0013ebd8(result);
        if (result >= 0) {
            DAT_005b40c9 = 1;
        }
        FUN_0013ebd8(result);
    }

    if (preparedData != 0) {
        asdMemFree(preparedData);
    }
    return result;
}
}
