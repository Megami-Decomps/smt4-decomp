#include "common.h"

extern "C" {
extern u8 DAT_0057f598;
extern u8 DAT_0057f5d8;

void FUN_0013f0f4(s32 count);
s32 FUN_0014190c(const char *path);
void FUN_00140e6c(s32 slot, s32 font);
void FUN_0013f188(s32 slot, f32 offset);
void workRangeSetLowerBound(s32 value);
void FUN_00140708(s32 value);
void FUN_001409d4(u8 *table);
void FUN_00144554(u8 *table);
void asdTextSetDefaultColor(u32 color);
s32 resourceIsSpecialId(u32 id);
void FUN_00141f8c(void);
void FUN_00142d70(s32 (*predicate)(u32), void (*callback)(void));
void FUN_0013f444(u32 id, s32 slot, s32 arg);
void FUN_00140280(void (*callback)(void));
void FUN_001418ec(void (*callback)(void));
void FUN_0013f52c(void (*callback)(void));
void asdTextRegisterSlot(u32 id, s32 slot, void (*callback)(void));
void asdTextSetDefaultMode(u32 mode);
void FUN_0013cae4(void);
void FUN_0013edc8(void);
void FUN_0013e38c(void);
void FUN_0013c614(void);
void FUN_0013dadc(void);

/* Sets up the text system: loads the five UI fonts, their line offsets, the default colour and
 * mode, and registers the two text slots (0xF87A, 0xF87B) with their callbacks. */
void asdTextSystemInit(void)
{
    FUN_0013f0f4(6);
    FUN_00140e6c(1, FUN_0014190c("font/TsukuMin_9_9.bcfnt"));
    FUN_00140e6c(2, FUN_0014190c("font/TsukuMin_12_12.bcfnt"));
    FUN_00140e6c(3, FUN_0014190c("font/TsukuMin_14_14.bcfnt"));
    FUN_00140e6c(4, FUN_0014190c("font/TsukuMin_16_16.bcfnt"));
    FUN_00140e6c(5, FUN_0014190c("font/demo_font.bcfnt"));
    FUN_0013f188(0, -10.0f);
    FUN_0013f188(1, -2.0f);
    FUN_0013f188(2, -3.0f);
    FUN_0013f188(3, -3.0f);
    FUN_0013f188(4, -3.0f);
    workRangeSetLowerBound(3);
    FUN_00140708(5);
    FUN_001409d4(&DAT_0057f598);
    FUN_00144554(&DAT_0057f5d8);
    asdTextSetDefaultColor(0xFFFFFF00);
    FUN_00142d70(resourceIsSpecialId, FUN_00141f8c);
    FUN_0013f444(0xF87A, 1, 0);
    FUN_0013f444(0xF87B, 4, 0);
    FUN_00140280(FUN_0013cae4);
    FUN_001418ec(FUN_0013edc8);
    FUN_0013f52c(FUN_0013e38c);
    asdTextRegisterSlot(0xF87A, 1, FUN_0013c614);
    asdTextRegisterSlot(0xF87B, 4, FUN_0013dadc);
    asdTextSetDefaultMode(0x8190);
}

} /* extern "C" */
