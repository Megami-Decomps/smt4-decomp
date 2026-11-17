#include "gamedata/GameSaveDataA.h"

extern "C" {

void halves34Copy(const SlotRecordA *src, u16 *out)
{
    if (src != NULL) {
        out[0] = src->skills[0];
        out[1] = src->skills[1];
        out[2] = src->skills[2];
        out[3] = src->skills[3];
        out[4] = src->skills[4];
        out[5] = src->skills[5];
        out[6] = src->skills[6];
        out[7] = src->skills[7];
    }
}

} /* extern "C" */
