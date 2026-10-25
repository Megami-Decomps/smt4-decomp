/* NON_MATCHING: record pointer and active/kind scratch use r0/r1 opposite to retail; VFP parameters and all operations agree. */
/* Applies the two effect parameter sets to active engine records of the supported kinds. */
#include "gfx/EngineRecordList.h"

extern "C" {
extern EngineRecordList *g_engineRecordList;
void FUN_00281b94(u32 mode, f32 first, f32 second, f32 third, f32 fourth,
    f32 width, f32 height, f32 duration);

void FUN_00385a10(void)
{
    for (s32 i = 0; i < 32; ++i) {
        EngineEffectRecord *record = &g_engineRecordList->records[i];
        if (record->active) {
            s16 kind = record->duration;
            if (kind == 3 || kind == 4 ||
                kind == 5 || kind == 8 ||
                kind == 9 || kind == 10) {
                FUN_00281b94(0, record->position[0], record->position[1],
                    record->position[2], record->position[3], 80.0f, 70.0f, 36.0f);
            } else if (kind == 7 || kind == 13 ||
                kind == 15 || kind == 16) {
                FUN_00281b94(0, record->position[0], record->position[1],
                    record->position[2], record->position[3], 60.0f, 70.0f, 36.0f);
            }
        }
    }
}
}
