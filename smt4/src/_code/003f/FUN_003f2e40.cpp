/* NON_MATCHING: Retail mov r1, r0 differs from recovered mov r4, #0. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct InitializationRecordView {
    u8 unk00[0x20]; // 0x00
    u32 unk20; // 0x20
    u32 unk24; // 0x24
};

struct CriticalSectionView {
    u32 unk00; // 0x00
    u8 unk04[8]; // 0x04
};

struct CriticalSectionPairView {
    CriticalSectionView unk00; // 0x00
    CriticalSectionView unk0C; // 0x0c
};

struct WordPairView {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
};

struct WordTripleView {
    u32 unk00; // 0x00
    u32 unk04; // 0x04
    u32 unk08; // 0x08
};

extern "C" {
void nn_os_CriticalSection_Initialize(CriticalSectionView* section);
extern CriticalSectionPairView g_nngxCriticalSection;
extern WordPairView DAT_00471a98;
extern WordPairView g_nngxDefaultCommandState;
extern WordTripleView g_nngxCommandState1;
extern u8 _ZN2nn2os15CriticalSectionD1Ev;
extern u8 entry;
}

// Initialize the record, reset both critical sections, and refresh three shared words.
extern "C" void FUN_003f2e40(u32 initialValue, u32,
                            InitializationRecordView* record)
{
    record->unk20 = initialValue;
    record->unk24 = initialValue;
    DAT_00471a98.unk00 = 0;
    DAT_00471a98.unk04 = 0;

    g_nngxCriticalSection.unk00.unk00 = 0;
    nn_os_CriticalSection_Initialize(&g_nngxCriticalSection.unk00);
    asdDebugTrace(reinterpret_cast<const char*>(&_ZN2nn2os15CriticalSectionD1Ev),
                  reinterpret_cast<s32>(&entry));

    g_nngxCriticalSection.unk0C.unk00 = 0;
    nn_os_CriticalSection_Initialize(&g_nngxCriticalSection.unk0C);
    asdDebugTrace(reinterpret_cast<const char*>(&_ZN2nn2os15CriticalSectionD1Ev),
                  reinterpret_cast<s32>(&entry));

    g_nngxCommandState1.unk00 = g_nngxDefaultCommandState.unk04;
    g_nngxCommandState1.unk04 = g_nngxDefaultCommandState.unk04;
    g_nngxCommandState1.unk08 = g_nngxDefaultCommandState.unk04;
}
