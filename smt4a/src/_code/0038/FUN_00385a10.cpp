/* NON_MATCHING: effect-record parameter loads and VFP argument registers are scheduled differently. */
/* Applies the two effect parameter sets to active engine records of the supported kinds. */
#include "common.h"

extern "C" {
extern void *g_engineRecordList;
void FUN_00281b94(u32 mode, f32 first, f32 second, f32 third, f32 fourth,
    f32 width, f32 height, f32 duration);

void FUN_00385a10(void)
{
    struct EffectRecord {
        u8 active;
        u8 unk01[0xB];
        f32 values[4];
        u8 unk1C[8];
        s16 kind;
        u8 unk26[0x32];
    };
    struct EffectRecordList {
        u8 unk000[0xA4];
        EffectRecord entries[32];
    };
    for (s32 i = 0; i < 32; ++i) {
        EffectRecord *record = &((EffectRecordList *)g_engineRecordList)->entries[i];
        if (record->active) {
            if (record->kind == 3 || record->kind == 4 ||
                record->kind == 5 || record->kind == 8 ||
                record->kind == 9 || record->kind == 10) {
                FUN_00281b94(0, record->values[0], record->values[1],
                    record->values[2], record->values[3], 80.0f, 70.0f, 36.0f);
            } else if (record->kind == 7 || record->kind == 13 ||
                record->kind == 15 || record->kind == 16) {
                FUN_00281b94(0, record->values[0], record->values[1],
                    record->values[2], record->values[3], 60.0f, 70.0f, 36.0f);
            }
        }
    }
}
}
